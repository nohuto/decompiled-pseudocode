/*
 * XREFs of ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180010FD0
 * Callers:
 *     ?RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180010F30 (-RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM.c)
 *     ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180011974 (-HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18001CBEC (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x180029018 (-HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z.c)
 *     ?HamSrvTerminateHostForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HAM_TERMINATE_REASON@@@Z @ 0x180063E54 (-HamSrvTerminateHostForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180065930 (-HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180066634 (-HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?HampDepGroupRemoveDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1@Z @ 0x1800670EC (-HampDepGroupRemoveDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 */

__int64 __fastcall RmHamFindHost(struct _HOST_ACTIVITY_MANAGER *a1, __int64 a2, struct _RM_HAM_ACTIVITY_HOST **a3)
{
  unsigned int v6; // esi
  __int64 v7; // rbx
  __int64 v8; // r11
  __int64 v9; // r10
  int v10; // esi
  int v11; // edi
  DWORD v12; // esi
  _QWORD *Value; // rdi
  _QWORD *v14; // rax

  RtlAcquireSRWLockShared((char *)a1 - 1280);
  v6 = *((_DWORD *)a1 - 323);
  v7 = 0LL;
  v8 = -1LL << (*((_BYTE *)a1 - 1292) & 0x1F);
  v9 = v8 & (HIBYTE(a2)
           + 37
           * (BYTE6(a2)
            + 37
            * (BYTE5(a2)
             + 37
             * (BYTE4(a2)
              + 37 * (BYTE3(a2) + 37 * (BYTE2(a2) + 37 * (BYTE1(a2) + 37 * ((unsigned __int8)a2 + 11623883LL))))))));
LABEL_2:
  if ( v7 )
    goto LABEL_5;
  if ( v6 >> 5 )
  {
    v7 = *((_QWORD *)a1 - 161)
       + 8LL
       * ((37
         * (BYTE6(v9)
          + 37
          * (BYTE5(v9)
           + 37
           * (BYTE4(v9) + 37 * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))))))
         + HIBYTE(v9)) & ((v6 >> 5) - 1));
LABEL_5:
    while ( 1 )
    {
      v7 = *(_QWORD *)v7;
      if ( (v7 & 1) != 0 )
        break;
      if ( v9 == (v8 & *(_QWORD *)(v7 + 8)) )
      {
        if ( a2 != *(_QWORD *)(v7 + 32) )
          goto LABEL_2;
        v10 = 0;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v7 + 16)) <= 1 )
          __fastfail(0xEu);
        goto LABEL_9;
      }
    }
  }
  v7 = v9;
  v10 = -1073741275;
LABEL_9:
  RtlReleaseSRWLockShared((char *)a1 - 1280);
  v11 = 0;
  if ( v10 < 0 )
  {
    v11 = v10;
    v7 = 0LL;
  }
  if ( v11 >= 0 )
  {
    if ( (*(_BYTE *)(v7 + 804) & 1) != 0 )
    {
      v12 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v12) )
          __int2c();
        *Value |= 1uLL;
        ++Value[1];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      dword_1800937F8 = GetCurrentThreadId();
      if ( *(int *)(v7 + 24) < 0 )
      {
        v11 = -1073741275;
      }
      else
      {
        ++*(_QWORD *)(v7 + 640);
        v11 = 0;
        *a3 = (struct _RM_HAM_ACTIVITY_HOST *)(v7 + 64);
      }
      dword_1800937F8 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v14 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v14 & 1) == 0 )
          __int2c();
        if ( v14[1]-- == 1LL )
          *v14 &= ~1uLL;
      }
    }
    else
    {
      v11 = -1073741776;
    }
  }
  if ( v7 )
    RmpObjectRelease((PVOID)v7);
  return (unsigned int)v11;
}
