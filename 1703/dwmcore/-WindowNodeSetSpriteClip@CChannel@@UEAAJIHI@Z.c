/*
 * XREFs of ?WindowNodeSetSpriteClip@CChannel@@UEAAJIHI@Z @ 0x180080F10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x18007F86C (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x1800831E0 (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x180083540 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180083650 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180083730 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 */

__int64 __fastcall CChannel::WindowNodeSetSpriteClip(CChannel *this, int a2, int a3, int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  __int64 v9; // rcx
  struct CCommandBatch **v10; // rbp
  int v11; // ebx
  int v12; // eax
  int v14; // eax
  _DWORD v15[6]; // [rsp+30h] [rbp-18h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v10 = (struct CCommandBatch **)((char *)this + 160);
  v15[0] = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v15[1] = a2;
  v11 = 0;
  v15[2] = a3;
  v15[3] = a4;
  if ( !*v10 )
  {
    v14 = CCommandBatch::Create(v9, v10);
    v11 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x11Bu);
  }
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x100u);
  }
  else
  {
    v12 = CDataStreamWriter::EnsureSize(*v10, 0x14u);
    v11 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x159u);
    if ( v11 >= 0 )
    {
      CDataStreamWriter::BeginItem(*v10);
      CDataStreamWriter::AddItemData(*v10, v15, 0x10u);
      goto LABEL_7;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x105u);
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x9Au);
LABEL_7:
  if ( v11 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x78u);
  else
    CDataStreamWriter::EndItem(*v10);
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)v11;
}
