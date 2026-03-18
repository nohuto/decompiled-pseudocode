/*
 * XREFs of ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x18007F2C4
 * Callers:
 *     ?CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z @ 0x180082610 (-CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z.c)
 *     ?AddRefResource@CChannel@@UEAAJI@Z @ 0x1800826A0 (-AddRefResource@CChannel@@UEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z @ 0x18007F2A0 (-GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x18007F63C (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x18007F86C (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?EnsureItem@CDataStreamWriter@@QEAAJI@Z @ 0x180083414 (-EnsureItem@CDataStreamWriter@@QEAAJI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x180083540 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180083650 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180083730 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall CHandleTable::CreateOrAddRefOnChannel(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  int v8; // ebx
  int NewEntry; // eax
  unsigned int v10; // ecx
  unsigned int v11; // esi
  int *v12; // r14
  int v13; // eax
  struct CCommandBatch **v14; // r15
  int v15; // eax
  int v17; // eax
  struct CHandleTable::HANDLE_ENTRY *Entry; // rax
  unsigned int v19; // [rsp+20h] [rbp-48h]
  _DWORD v20[14]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v21; // [rsp+88h] [rbp+20h] BYREF

  v8 = 0;
  EnterCriticalSection(&g_csCompositionEngine);
  if ( *a4 )
  {
    Entry = CHandleTable::GetEntry((CHandleTable *)a1, *a4);
    if ( Entry )
    {
      ++*((_DWORD *)Entry + 1);
      goto LABEL_15;
    }
    v19 = 140;
LABEL_24:
    v8 = -2147024890;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, v19);
    goto LABEL_15;
  }
  v21 = 0;
  NewEntry = HANDLE_TABLE::GetNewEntry((HANDLE_TABLE *)a1, a3, &v21);
  v8 = NewEntry;
  if ( NewEntry < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, NewEntry, 0x57u);
    goto LABEL_15;
  }
  v11 = v21;
  if ( !v21 || v21 >= *(_DWORD *)(a1 + 12) || (v12 = (int *)(*(_QWORD *)(a1 + 24) + v21 * *(_DWORD *)(a1 + 8)), !*v12) )
    v12 = 0LL;
  if ( !v12 )
  {
    v19 = 99;
    goto LABEL_24;
  }
  v13 = *v12;
  v8 = 0;
  v14 = (struct CCommandBatch **)(a2 + 160);
  v20[0] = 23;
  v20[1] = v21;
  v20[2] = v13;
  if ( !*v14 )
  {
    v17 = CCommandBatch::Create(v10, v14);
    v8 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x11Bu);
  }
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x100u);
    goto LABEL_28;
  }
  v15 = CDataStreamWriter::EnsureItem(*v14, 0xCu);
  v8 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x105u);
LABEL_28:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x9Au);
    goto LABEL_11;
  }
  CDataStreamWriter::BeginItem(*v14);
  CDataStreamWriter::AddItemData(*v14, v20, 0xCu);
LABEL_11:
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x78u);
  else
    CDataStreamWriter::EndItem(*v14);
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x71u);
    memset_0((void *)(*(_QWORD *)(a1 + 24) + v11 * *(_DWORD *)(a1 + 8)), 0, *(unsigned int *)(a1 + 8));
  }
  else
  {
    v12[1] = 1;
    *a4 = v11;
  }
LABEL_15:
  LeaveCriticalSection(&g_csCompositionEngine);
  return (unsigned int)v8;
}
