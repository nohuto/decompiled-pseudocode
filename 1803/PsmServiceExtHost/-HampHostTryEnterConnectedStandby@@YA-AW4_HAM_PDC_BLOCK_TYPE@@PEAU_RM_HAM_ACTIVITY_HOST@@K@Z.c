/*
 * XREFs of ?HampHostTryEnterConnectedStandby@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800656FC
 * Callers:
 *     ?HampPdcUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180065E10 (-HampPdcUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 * Callees:
 *     ?HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@@Z @ 0x180006920 (-HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x1800087C8 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000FD20 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x180010C5C (-HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800165D0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A390 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@W4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180040EFC (-HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_ST.c)
 */

char __fastcall HampHostTryEnterConnectedStandby(__int64 a1, unsigned int a2)
{
  char v4; // si
  unsigned __int64 v5; // r14
  int v6; // r14d
  struct _HAM_ACTIVITY *i; // rax
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // r9
  int v12; // r10d
  unsigned int v13[4]; // [rsp+38h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-29h] BYREF
  __int64 v15; // [rsp+68h] [rbp-9h]
  int v16; // [rsp+70h] [rbp-1h]
  int v17; // [rsp+74h] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+88h] [rbp+17h] BYREF
  unsigned int *v20; // [rsp+98h] [rbp+27h]
  int v21; // [rsp+A0h] [rbp+2Fh]
  int v22; // [rsp+A4h] [rbp+33h]

  if ( (int)HampHostQueryIsDebugEnabled((struct _RM_HAM_ACTIVITY_HOST *)a1, v13) >= 0 && v13[0] )
    return 0;
  HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
  v5 = *(_QWORD *)((*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 744) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                              - 8) & 0xFFFFFFFFFFFFFFFCuLL)
                 - 8) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( !(unsigned int)HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)a1, 2) )
  {
    v4 = 0;
    for ( i = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)a1);
          ;
          i = HampHostGetNextActivity((struct _HAM_ACTIVITY *)v10) )
    {
      v10 = (__int64)i;
      if ( !i )
        goto LABEL_6;
      if ( (*((_BYTE *)i + 536) & 0x28) == 0 && (unsigned __int8)(*((_BYTE *)i + 540) - 2) <= 1u )
      {
        v9 = *((_DWORD *)i + 28);
        if ( (v9 & 0x20) != 0 )
        {
          v4 = 2;
          if ( a2 >= *(_DWORD *)(v5 + 224) )
          {
            v6 = HampHostQueueTerminate(a1, 3u, 0x800u, 0LL, 1);
            if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 0x400000000008uLL) )
            {
              v17 = 0;
              v15 = v10 + 40;
              v16 = 8;
              TlgCreateWsz(&pDesc, (LPCWSTR)(v10 + 124));
              TlgCreateWsz(&v19, (LPCWSTR)(a1 + 24));
              v11 = *(_QWORD *)(a1 - 32);
              v22 = 0;
              v20 = v13;
              *(_QWORD *)v13 = v11;
              v21 = v12;
              TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180082DEF, 0LL, 0LL, 6u, &pData);
            }
            goto LABEL_7;
          }
        }
        if ( (*(_BYTE *)(v10 + 120) & 4) != 0 )
        {
          v4 = 3;
LABEL_19:
          HampActRequestStop(v10, 2u, 3, 6400, (v9 & 4) != 0 ? 8 : 4, 0LL);
          continue;
        }
        if ( (*(_BYTE *)(v10 + 120) & 8) != 0 )
        {
          v4 = 4;
          if ( a2 >= *(_DWORD *)(v5 + 220) )
            goto LABEL_19;
        }
      }
    }
  }
  v4 = 1;
LABEL_6:
  v6 = 0;
LABEL_7:
  HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1);
  if ( v6 )
    HampDepGroupRunStateChangeWorker(*(struct _HAM_DEPENDENCY_GROUP **)(a1 + 664));
  return v4;
}
