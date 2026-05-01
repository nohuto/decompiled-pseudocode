/*
 * XREFs of ?HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002775C
 * Callers:
 *     ?HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800294B8 (-HampDepGroupTryAddToExisting@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180029578 (-HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPE.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180067264 (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F450 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupCompareHostForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180027868 (-HampDepGroupCompareHostForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

void __fastcall HampDepGroupAddHost(struct _HAM_DEPENDENCY_GROUP *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  __int64 v4; // r8
  char v5; // bl
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  int v8; // ebp
  unsigned __int64 v9; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 12) <= 1 )
    __fastfail(0xEu);
  v11 = *((_QWORD *)a2 - 4);
  *((_QWORD *)a2 + 83) = a1;
  HampDepGroupAcquireLockExclusive(a1);
  v5 = 0;
  v6 = *((_QWORD *)a1 + 8);
  v7 = *((_QWORD *)a1 + 7);
  if ( (v6 & 1) != 0 )
  {
    if ( v7 )
      v7 ^= (unsigned __int64)a1 + 56;
    else
      v7 = 0LL;
  }
  v8 = v6 & 1;
  if ( v7 )
  {
    while ( 1 )
    {
      if ( (int)HampDepGroupCompareHostForRbTree(&v11, (struct _RTL_BALANCED_NODE *)v7) < 0 )
      {
        v9 = *(_QWORD *)v7;
        if ( v8 )
        {
          if ( !v9 )
            break;
          v9 ^= v7;
        }
        if ( !v9 )
          break;
      }
      else
      {
        v9 = *(_QWORD *)(v7 + 8);
        if ( v8 )
        {
          if ( !v9 )
            goto LABEL_13;
          v9 ^= v7;
        }
        if ( !v9 )
        {
LABEL_13:
          v5 = 1;
          break;
        }
      }
      v7 = v9;
    }
  }
  LOBYTE(v4) = v5;
  RtlRbInsertNodeEx((char *)a1 + 56, v7, v4, (char *)a2 + 680);
  if ( (((unsigned __int64)*((unsigned int *)a2 + 158) >> 26) & 7) == 0 && (*((_DWORD *)a1 + 23))++ == -1 )
    __int2c();
  HampDepGroupReleaseLockExclusive(a1);
}
