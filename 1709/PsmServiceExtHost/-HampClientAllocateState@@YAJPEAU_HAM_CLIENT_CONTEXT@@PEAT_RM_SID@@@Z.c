/*
 * XREFs of ?HampClientAllocateState@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@@Z @ 0x18001C1E8
 * Callers:
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@KW4_HAM_CLIENT_TYPE@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001C138 (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@KW4_HAM_CLIENT_TYPE@@PEAPEAU_HAM.c)
 * Callees:
 *     RmpWnfAllocateAndInitializePendingCallbackList @ 0x18001C248 (RmpWnfAllocateAndInitializePendingCallbackList.c)
 *     RmpWnfCreateStateNameForClient @ 0x18001C304 (RmpWnfCreateStateNameForClient.c)
 */

__int64 __fastcall HampClientAllocateState(struct _WNF_STATE_NAME *a1, union _RM_SID *a2)
{
  ULONG v2; // r8d
  ULONG v5; // r8d
  unsigned int v6; // edx
  unsigned int v7; // r8d
  __int64 result; // rax

  v2 = a1[15].Data[0];
  if ( !v2 )
  {
    v6 = 24;
LABEL_9:
    v7 = 0;
    goto LABEL_4;
  }
  v5 = v2 - 1;
  if ( v5 )
  {
    if ( v5 != 1 )
      return 0LL;
    v6 = 340;
    goto LABEL_9;
  }
  v6 = 24;
  v7 = 1;
LABEL_4:
  result = RmpWnfCreateStateNameForClient(a2, v6, v7, a1 + 13);
  if ( (int)result >= 0 )
  {
    result = RmpWnfAllocateAndInitializePendingCallbackList(&a1[14]);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
