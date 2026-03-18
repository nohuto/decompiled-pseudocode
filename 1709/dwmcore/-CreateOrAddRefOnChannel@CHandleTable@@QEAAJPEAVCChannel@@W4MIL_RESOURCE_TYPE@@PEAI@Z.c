/*
 * XREFs of ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x18000FD9C
 * Callers:
 *     ?CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z @ 0x18000EB80 (-CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z.c)
 *     ?AddRefResource@CChannel@@UEAAJI@Z @ 0x18000EC10 (-AddRefResource@CChannel@@UEAAJI@Z.c)
 * Callees:
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x18000BD4C (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?EnsureItem@CDataStreamWriter@@QEAAJI@Z @ 0x18000F490 (-EnsureItem@CDataStreamWriter@@QEAAJI@Z.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18000F5C0 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x18000F6E0 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18000F7F0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z @ 0x18000FD78 (-GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180010228 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x180010248 (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

__int64 __fastcall CHandleTable::CreateOrAddRefOnChannel(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  int v8; // ebx
  int NewEntry; // eax
  unsigned int v10; // r15d
  __int64 v11; // rcx
  int *v12; // rsi
  int v13; // eax
  struct CCommandBatch **v14; // r14
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
      goto LABEL_14;
    }
    v19 = 140;
LABEL_23:
    v8 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024890, v19);
    goto LABEL_14;
  }
  v21 = 0;
  NewEntry = HANDLE_TABLE::GetNewEntry((HANDLE_TABLE *)a1, a3, &v21);
  v8 = NewEntry;
  if ( NewEntry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, NewEntry, 0x57u);
    goto LABEL_14;
  }
  v10 = v21;
  if ( (unsigned int)HANDLE_TABLE::ValidEntry((HANDLE_TABLE *)a1, v21) )
    v12 = (int *)(*(_QWORD *)(a1 + 24) + v10 * *(_DWORD *)(a1 + 8));
  else
    v12 = 0LL;
  if ( !v12 )
  {
    v19 = 99;
    goto LABEL_23;
  }
  v13 = *v12;
  v8 = 0;
  v14 = (struct CCommandBatch **)(a2 + 160);
  v20[0] = 36;
  v20[1] = v10;
  v20[2] = v13;
  if ( !*v14 )
  {
    v17 = CCommandBatch::Create(v11, v14);
    v8 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x11Bu);
  }
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x100u);
    goto LABEL_27;
  }
  v15 = CDataStreamWriter::EnsureItem(*v14, 0xCu);
  v8 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x105u);
LABEL_27:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x9Au);
    goto LABEL_10;
  }
  CDataStreamWriter::BeginItem(*v14);
  CDataStreamWriter::AddItemData(*v14, v20, 0xCu);
LABEL_10:
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x78u);
  else
    CDataStreamWriter::EndItem(*v14);
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x71u);
    memset_0((void *)(*(_QWORD *)(a1 + 24) + v10 * *(_DWORD *)(a1 + 8)), 0, *(unsigned int *)(a1 + 8));
  }
  else
  {
    v12[1] = 1;
    *a4 = v10;
  }
LABEL_14:
  LeaveCriticalSection(&g_csCompositionEngine);
  return (unsigned int)v8;
}
