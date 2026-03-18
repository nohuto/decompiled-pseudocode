/*
 * XREFs of ?WindowNodeSetSourceModifications@CChannel@@UEAAJIU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@KKH@Z @ 0x18000D2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x18000BD4C (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18000F5C0 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x18000F6E0 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18000F7F0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x18000FB60 (-EnsureSize@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::WindowNodeSetSourceModifications(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  struct _RTL_CRITICAL_SECTION *v6; // r14
  __int64 v11; // rcx
  int v12; // ebx
  struct CCommandBatch **v13; // rbp
  int v14; // eax
  int v16; // eax
  _DWORD v17[10]; // [rsp+30h] [rbp-28h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v17[2] = a3;
  v12 = 0;
  v13 = (struct CCommandBatch **)(a1 + 160);
  v17[4] = a5;
  v17[0] = 368;
  v17[1] = a2;
  v17[5] = a6;
  v17[3] = a4;
  if ( !*v13 )
  {
    v16 = CCommandBatch::Create(v11, v13);
    v12 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x11Bu);
  }
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x100u);
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
      CDataStreamWriter::AddItemData(*v13, v17, 0x18u);
      goto LABEL_7;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x105u);
  }
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
