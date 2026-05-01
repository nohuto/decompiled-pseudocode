/*
 * XREFs of ?HampClientAllocateState@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAX@Z @ 0x18002A0B0
 * Callers:
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@PEAU_HAM_LOCAL_CALLBACKS@@2PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180029B68 (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@PEAU_HA.c)
 * Callees:
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x180011CC8 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     ?HampClientTypeReceivesCallbacks@@YAKW4_HAM_CLIENT_TYPE@@@Z @ 0x18002A170 (-HampClientTypeReceivesCallbacks@@YAKW4_HAM_CLIENT_TYPE@@@Z.c)
 *     ?RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z @ 0x18002A31C (-RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z.c)
 *     RmpWnfAllocateAndInitializePendingCallbackList @ 0x18002A394 (RmpWnfAllocateAndInitializePendingCallbackList.c)
 *     RmpWnfCreateStateNameForClient @ 0x18002A450 (RmpWnfCreateStateNameForClient.c)
 */

NTSTATUS __fastcall HampClientAllocateState(struct _WNF_STATE_NAME *a1, union _RM_SID *a2, void *a3)
{
  int v5; // ecx
  void *v6; // r10
  int v7; // ecx
  int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // r8d
  NTSTATUS result; // eax
  unsigned int v12; // r8d

  if ( (unsigned int)HampClientTypeReceivesCallbacks(a1[16].Data[1]) && (a1[16].Data[0] & 2) == 0 )
  {
    if ( !v5 || (v7 = v5 - 1) == 0 )
    {
      v9 = 64;
LABEL_16:
      v10 = 0;
      goto LABEL_7;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v9 = 64;
      v10 = 1;
LABEL_7:
      result = RmpWnfCreateStateNameForClient(v6, v9, v10, a1 + 13);
      if ( result < 0 )
        return result;
      result = RmpWnfAllocateAndInitializePendingCallbackList(&a1[14]);
      if ( result < 0 )
        return result;
      goto LABEL_9;
    }
    if ( v8 == 3 )
    {
      v9 = 544;
      goto LABEL_16;
    }
  }
LABEL_9:
  if ( !a3 || (result = RmpSystemDuplicateHandle(a3, 8u, (PHANDLE)&a1[18]), result >= 0) )
  {
    v12 = a1[17].Data[0];
    if ( !v12 )
      return 0;
    result = RmpSystemOpenProcess((void **)&a1[19], 0x101000u, v12);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
