/*
 * XREFs of ?HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180065930
 * Callers:
 *     ?RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z @ 0x180050EB4 (-RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z.c)
 * Callees:
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180007E80 (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x1800087C8 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x18000BAF4 (-HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F450 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F4B8 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000FD20 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180010FD0 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800165D0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A390 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x18002715C (-HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180040378 (-HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampHostAcquireLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180064AA8 (-HampHostAcquireLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampHostTrySetPpleCommitTarget(struct _RM_HAM_ACTIVITY_HOST *a1, __int64 a2)
{
  struct _RM_HAM_ACTIVITY_HOST *v2; // rbp
  int CanStaticallyDonateCommit; // edi
  int v6; // r14d
  struct _HAM_ACTIVITY *i; // rax
  struct _HAM_ACTIVITY *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  int Host; // eax
  __int64 v12; // rax
  struct _HAM_DEPENDENCY_GROUP *v13; // r15
  int v14; // ebx
  struct _RM_HAM_ACTIVITY_HOST *v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  v16 = 0LL;
  if ( (*((_QWORD *)a1 + 79) & 0x10000000000000LL) == 0 )
    return (unsigned int)-1073700845;
  if ( a2 == -1 )
    return (unsigned int)-1073741584;
  HampHostAcquireLockExclusive(a1);
  if ( a2 )
  {
    for ( i = HampHostGetFirstActivity(a1); ; i = HampHostGetNextActivity(v8) )
    {
      v8 = i;
      if ( !i )
        goto LABEL_30;
      v9 = *((_QWORD *)i + 9);
      if ( v9 )
      {
        if ( *(_BYTE *)(v9 + 40) == 2 )
          break;
      }
    }
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 24LL);
    if ( v10 == -1 )
    {
LABEL_30:
      CanStaticallyDonateCommit = -1058275323;
      goto LABEL_31;
    }
    HampHostReleaseLockExclusiveEx(a1);
    v6 = 0;
    Host = RmHamFindHost(
             (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)((*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 93)
                                                                                                + 88LL)
                                                                                    + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                                       - 8) & 0xFFFFFFFFFFFFFFFCuLL)
                                                          - 8) & 0xFFFFFFFFFFFFFFFCuLL)
                                             - 152),
             v10,
             &v16);
    v2 = v16;
    CanStaticallyDonateCommit = Host;
    if ( Host >= 0 )
    {
      v6 = 1;
      HampHostAcquireTwoLocksExclusive(v16, a1);
      v12 = *((_QWORD *)v2 + 84);
      if ( v12 )
      {
        if ( *(struct _RM_HAM_ACTIVITY_HOST **)(*(_QWORD *)v12 + 80LL) == a1 )
        {
          CanStaticallyDonateCommit = HampHostCanStaticallyDonateCommit(v2, a2);
          if ( CanStaticallyDonateCommit >= 0 )
          {
            *((_QWORD *)a1 + 112) = a2;
            HampHostCheckQueueStateWorker(a1, 0);
            CanStaticallyDonateCommit = 0;
          }
        }
        else
        {
          CanStaticallyDonateCommit = -1058275322;
        }
      }
      else
      {
        CanStaticallyDonateCommit = -1058275323;
      }
    }
    if ( v2 )
      HampHostReleaseLockExclusiveEx(v2);
    if ( CanStaticallyDonateCommit < 0 )
      goto LABEL_28;
    if ( !v6 )
      HampHostAcquireLockExclusive(a1);
  }
  else
  {
    *((_QWORD *)a1 + 112) = 0LL;
    v6 = 1;
    CanStaticallyDonateCommit = 0;
  }
  v13 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)a1 + 83);
  if ( !v13 )
  {
LABEL_28:
    if ( v6 )
LABEL_31:
      HampHostReleaseLockExclusiveEx(a1);
    goto LABEL_32;
  }
  HampDepGroupAcquireLockExclusive(*((struct _HAM_DEPENDENCY_GROUP **)a1 + 83));
  v14 = HampDepGroupTryEnterStateChange(v13, 0LL);
  HampDepGroupReleaseLockExclusive(v13);
  HampHostReleaseLockExclusiveEx(a1);
  v6 = 0;
  if ( v14 )
  {
    HampDepGroupRunStateChangeWorker(v13);
    goto LABEL_28;
  }
LABEL_32:
  if ( v2 )
    RmHamHostDereference(v2);
  return (unsigned int)CanStaticallyDonateCommit;
}
