/*
 * XREFs of ?WindowNodeSetSpriteClip@CChannel@@UEAAJIHI@Z @ 0x180085B40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x180087E60 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180087F70 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180088060 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x180088320 (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180088438 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 */

__int64 __fastcall CChannel::WindowNodeSetSpriteClip(CChannel *this, int a2, int a3, int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  unsigned int v9; // ecx
  struct CCommandBatch **v10; // rbp
  int v11; // ebx
  int v12; // eax
  int v14; // eax
  unsigned int v15; // eax
  _DWORD v16[6]; // [rsp+30h] [rbp-18h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v10 = (struct CCommandBatch **)((char *)this + 160);
  v16[0] = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v16[1] = a2;
  v11 = 0;
  v16[2] = a3;
  v16[3] = a4;
  if ( !*v10 )
  {
    v14 = CCommandBatch::Create(v9, v10);
    v11 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x11Au);
  }
  if ( v11 < 0 )
  {
    v15 = 255;
  }
  else
  {
    v12 = CDataStreamWriter::EnsureSize(*v10, 0x14u);
    v11 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x159u);
    if ( v11 >= 0 )
    {
      CDataStreamWriter::BeginItem(*v10);
      CDataStreamWriter::AddItemData(*v10, v16, 0x10u);
      goto LABEL_7;
    }
    v15 = 260;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, v15);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x9Au);
LABEL_7:
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x78u);
  else
    CDataStreamWriter::EndItem(*v10);
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)v11;
}
