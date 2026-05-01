/*
 * XREFs of ?HampDepGroupAddHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800190A0
 * Callers:
 *     ?HampDepGroupSetOwner@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180018DE8 (-HampDepGroupSetOwner@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HOST_ACTIVI.c)
 *     ?RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_PARTITION@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003FEE4 (-RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPL.c)
 * Callees:
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019198 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180040228 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampDepGroupCompareHostForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1800446C8 (-HampDepGroupCompareHostForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180044E68 (-HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

void __fastcall HampDepGroupAddHost(struct _HAM_DEPENDENCY_GROUP *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  struct _RM_HAM_ACTIVITY_HOST *v4; // rcx
  DWORD v5; // esi
  _BYTE *Value; // rbx
  __int64 v7; // r8
  char v8; // bl
  struct _RTL_BALANCED_NODE *v9; // rsi
  int v10; // r14d
  struct _RTL_BALANCED_NODE *v11; // rax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 11) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)a2 + 80) = a1;
  v4 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 4);
  if ( a2 != v4 )
    RmHamHostReference(v4);
  v5 = HampLockTrackerId;
  v12 = *((_QWORD *)a2 - 5);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
      __int2c();
    *(_QWORD *)Value |= 4uLL;
    ++Value[10];
  }
  RtlAcquireSRWLockExclusive((char *)a1 + 8);
  *((_DWORD *)a1 + 4) = GetCurrentThreadId();
  v8 = 0;
  v9 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 6);
  v10 = *((_BYTE *)a1 + 56) & 1;
  if ( v9 )
  {
    while ( 1 )
    {
      if ( (int)HampDepGroupCompareHostForRbTree(&v12, v9) < 0 )
      {
        v11 = v9->Children[0];
        if ( v10 )
        {
          if ( !v11 )
            break;
          v11 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v9 ^ (unsigned __int64)v11);
        }
        if ( !v11 )
          break;
      }
      else
      {
        v11 = v9->Children[1];
        if ( v10 )
        {
          if ( !v11 )
            goto LABEL_18;
          v11 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v9 ^ (unsigned __int64)v11);
        }
        if ( !v11 )
        {
LABEL_18:
          v8 = 1;
          break;
        }
      }
      v9 = v11;
    }
  }
  LOBYTE(v7) = v8;
  RtlRbInsertNodeEx((char *)a1 + 48, v9, v7, (char *)a2 + 648);
  if ( (*((_BYTE *)a2 + 708) & 1) != 0 )
    HampDepGroupQueueWorker(a1);
  HampDepGroupReleaseLockExclusive(a1);
}
