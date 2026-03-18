/*
 * XREFs of ?GdiSpriteBitmapUpdateMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x180085200
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureItem@CDataStreamWriter@@QEAAJI@Z @ 0x180087D6C (-EnsureItem@CDataStreamWriter@@QEAAJI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x180087E60 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180087F70 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180088060 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180088438 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 */

__int64 __fastcall CChannel::GdiSpriteBitmapUpdateMargins(CChannel *this, int a2, const struct _MARGINS *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  unsigned int v7; // ecx
  __int128 v8; // xmm0
  struct CCommandBatch **v9; // rsi
  int v10; // ebx
  int v12; // eax
  unsigned int v13; // eax
  _DWORD v14[2]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v15; // [rsp+38h] [rbp-20h]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v8 = (__int128)*a3;
  v14[0] = 165;
  v9 = (struct CCommandBatch **)((char *)this + 160);
  v14[1] = a2;
  v10 = 0;
  v15 = v8;
  if ( !*v9 )
  {
    v12 = CCommandBatch::Create(v7, v9);
    v10 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x11Au);
  }
  if ( v10 < 0 )
  {
    v13 = 255;
  }
  else
  {
    v10 = CDataStreamWriter::EnsureItem(*v9, 0x18u);
    if ( v10 >= 0 )
    {
      CDataStreamWriter::BeginItem(*v9);
      CDataStreamWriter::AddItemData(*v9, v14, 0x18u);
      goto LABEL_5;
    }
    v13 = 260;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v13);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x9Au);
LABEL_5:
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x78u);
  else
    CDataStreamWriter::EndItem(*v9);
  if ( v3 )
    LeaveCriticalSection(v3);
  return (unsigned int)v10;
}
