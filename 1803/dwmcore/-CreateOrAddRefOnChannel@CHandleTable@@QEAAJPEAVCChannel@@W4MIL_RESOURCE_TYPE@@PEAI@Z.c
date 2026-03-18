/*
 * XREFs of ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x18008857C
 * Callers:
 *     ?CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z @ 0x180087270 (-CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z.c)
 *     ?AddRefResource@CChannel@@UEAAJI@Z @ 0x180087300 (-AddRefResource@CChannel@@UEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180087734 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180087F70 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z @ 0x180088558 (-GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180088964 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x180088984 (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall CHandleTable::CreateOrAddRefOnChannel(
        __int64 a1,
        struct CCommandBatch **a2,
        unsigned int a3,
        unsigned int *a4)
{
  int v8; // ebx
  int NewEntry; // eax
  unsigned int v10; // ebp
  int *v11; // rdi
  int v12; // eax
  int v13; // eax
  struct CHandleTable::HANDLE_ENTRY *Entry; // rax
  unsigned int v16; // [rsp+20h] [rbp-38h]
  _DWORD v17[10]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v18; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  EnterCriticalSection(&g_csCompositionEngine);
  if ( *a4 )
  {
    Entry = CHandleTable::GetEntry((CHandleTable *)a1, *a4);
    if ( Entry )
    {
      ++*((_DWORD *)Entry + 1);
      goto LABEL_10;
    }
    v16 = 140;
LABEL_17:
    v8 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024890, v16);
    goto LABEL_10;
  }
  v18 = 0;
  NewEntry = HANDLE_TABLE::GetNewEntry((HANDLE_TABLE *)a1, a3, &v18);
  v8 = NewEntry;
  if ( NewEntry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, NewEntry, 0x57u);
    goto LABEL_10;
  }
  v10 = v18;
  if ( (unsigned int)HANDLE_TABLE::ValidEntry((HANDLE_TABLE *)a1, v18) )
    v11 = (int *)(*(_QWORD *)(a1 + 24) + v10 * *(_DWORD *)(a1 + 8));
  else
    v11 = 0LL;
  if ( !v11 )
  {
    v16 = 99;
    goto LABEL_17;
  }
  v12 = *v11;
  v17[0] = 48;
  v17[1] = v10;
  v17[2] = v12;
  v13 = CChannel::BeginCommand(a2, v17, 0xCu, 0);
  v8 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x78u);
  else
    CDataStreamWriter::EndItem(a2[20]);
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x71u);
    memset_0((void *)(*(_QWORD *)(a1 + 24) + v10 * *(_DWORD *)(a1 + 8)), 0, *(unsigned int *)(a1 + 8));
  }
  else
  {
    v11[1] = 1;
    *a4 = v10;
  }
LABEL_10:
  LeaveCriticalSection(&g_csCompositionEngine);
  return (unsigned int)v8;
}
