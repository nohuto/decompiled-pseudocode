/*
 * XREFs of ?GdiSpriteBitmapUpdateMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x180080550
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

__int64 __fastcall CChannel::GdiSpriteBitmapUpdateMargins(CChannel *this, int a2, const struct _MARGINS *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  __int64 v7; // rcx
  __int128 v8; // xmm0
  struct CCommandBatch **v9; // rsi
  int v10; // ebx
  int v11; // eax
  int v13; // eax
  _DWORD v14[2]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v15; // [rsp+38h] [rbp-20h]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v8 = (__int128)*a3;
  v14[0] = 183;
  v9 = (struct CCommandBatch **)((char *)this + 160);
  v14[1] = a2;
  v10 = 0;
  v15 = v8;
  if ( !*v9 )
  {
    v13 = CCommandBatch::Create(v7, v9);
    v10 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x11Bu);
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x100u);
  }
  else
  {
    v11 = CDataStreamWriter::EnsureSize(*v9, 0x1Cu);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x159u);
    if ( v10 >= 0 )
    {
      CDataStreamWriter::BeginItem(*v9);
      CDataStreamWriter::AddItemData(*v9, v14, 0x18u);
      goto LABEL_7;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x105u);
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x9Au);
LABEL_7:
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x78u);
  else
    CDataStreamWriter::EndItem(*v9);
  if ( v3 )
    LeaveCriticalSection(v3);
  return (unsigned int)v10;
}
