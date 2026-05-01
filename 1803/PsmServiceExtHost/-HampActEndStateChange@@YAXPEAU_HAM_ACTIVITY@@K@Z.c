/*
 * XREFs of ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180029E5C
 * Callers:
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@@Z @ 0x18001B320 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180029DF8 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x180005400 (-HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000FD20 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180010D50 (-HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800165D0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019090 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180023E40 (-RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180029F94 (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180033278 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

void __fastcall HampActEndStateChange(struct _RM_HAM_ACTIVITY_HOST **a1, int a2)
{
  struct _RM_HAM_ACTIVITY_HOST *v4; // rcx
  char v5; // al
  BOOL v6; // r15d
  struct _RM_HAM_ACTIVITY_HOST *v7; // rcx
  __int64 v8; // rsi
  int v9; // edi
  struct _HAM_DEPENDENCY_GROUP *v10; // r14
  struct _HAM_HOST_DEPENDENCY *v11; // rsi
  int v12; // edx
  const struct _TlgProvider_t *v13; // rcx
  char v14; // [rsp+30h] [rbp-39h] BYREF
  char v15; // [rsp+31h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  char *v17; // [rsp+60h] [rbp-9h]
  int v18; // [rsp+68h] [rbp-1h]
  int v19; // [rsp+6Ch] [rbp+3h]
  char *v20; // [rsp+70h] [rbp+7h]
  int v21; // [rsp+78h] [rbp+Fh]
  int v22; // [rsp+7Ch] [rbp+13h]
  char *v23; // [rsp+80h] [rbp+17h]
  int v24; // [rsp+88h] [rbp+1Fh]
  int v25; // [rsp+8Ch] [rbp+23h]

  HampHostAcquireLockExclusiveEx(a1[10], 0);
  if ( a2 )
  {
    if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
    {
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v17 = (char *)(a1 + 5);
      v20 = &v14;
      v15 = *((_BYTE *)a1 + 540);
      v23 = &v15;
      v18 = v12;
      v14 = 1;
      v21 = 1;
      v24 = 1;
      TlgWrite(v13, &unk_1800838AE, 0LL, 0LL, 5u, &pData);
    }
    *((_BYTE *)a1 + 540) = 1;
    HampActSetPendState((__int64)a1, 5u);
  }
  v4 = a1[10];
  *((_DWORD *)a1 + 134) &= ~1u;
  HampHostUpdateActivityState(v4);
  v5 = *((_BYTE *)a1 + 540);
  v6 = v5 == 1 || v5 == 4;
  v7 = a1[10];
  v8 = *((_QWORD *)v7 + 83);
  if ( v8 )
  {
    HampActCheckEnterDependencyWorker((struct _HAM_ACTIVITY *)a1);
    v9 = (*((_DWORD *)a1 + 134) >> 1) & 1;
    *((_DWORD *)a1 + 134) &= ~2u;
  }
  else
  {
    v9 = 0;
    HampHostCheckQueueStateWorker(v7, 0);
  }
  v10 = (struct _HAM_DEPENDENCY_GROUP *)(v8 & -(__int64)(v9 != 0));
  if ( !a2 && *((_BYTE *)a1 + 540) == 4 )
  {
    v11 = a1[9];
    a1[9] = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  HampHostReleaseLockExclusiveEx(a1[10]);
  if ( v11 )
    HampHostDepDestroy(v11);
  if ( v6 )
    HampPdcSignalWorker((struct _HAM_PDC_CONTEXT *)(((unsigned __int64)a1[4] & 0xFFFFFFFFFFFFFFFCuLL) + 136), 0);
  if ( v9 )
    HampDepGroupRunStateChangeWorker(v10);
  RmHamHostUpdateSettings(a1[10]);
}
