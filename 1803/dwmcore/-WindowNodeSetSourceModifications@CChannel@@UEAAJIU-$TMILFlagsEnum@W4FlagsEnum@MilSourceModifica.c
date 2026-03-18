/*
 * XREFs of ?WindowNodeSetSourceModifications@CChannel@@UEAAJIU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@KKH@Z @ 0x180085960
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

__int64 __fastcall CChannel::WindowNodeSetSourceModifications(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  struct _RTL_CRITICAL_SECTION *v6; // r14
  unsigned int v11; // ecx
  int v12; // ebx
  struct CCommandBatch **v13; // rbp
  int v14; // eax
  int v16; // eax
  unsigned int v17; // eax
  _DWORD v18[10]; // [rsp+30h] [rbp-28h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v18[2] = a3;
  v12 = 0;
  v13 = (struct CCommandBatch **)(a1 + 160);
  v18[4] = a5;
  v18[0] = 429;
  v18[1] = a2;
  v18[5] = a6;
  v18[3] = a4;
  if ( !*v13 )
  {
    v16 = CCommandBatch::Create(v11, v13);
    v12 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x11Au);
  }
  if ( v12 < 0 )
  {
    v17 = 255;
  }
  else
  {
    v14 = CDataStreamWriter::EnsureSize(*v13, 0x1Cu);
    v12 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x159u);
    if ( v12 >= 0 )
    {
      CDataStreamWriter::BeginItem(*v13);
      CDataStreamWriter::AddItemData(*v13, v18, 0x18u);
      goto LABEL_7;
    }
    v17 = 260;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v17);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x9Au);
LABEL_7:
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x78u);
  else
    CDataStreamWriter::EndItem(*v13);
  if ( v6 )
    LeaveCriticalSection(v6);
  return (unsigned int)v12;
}
