/*
 * XREFs of ?HampDepGroupSetOwner@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180018DE8
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@6PEAPEAV82@@Z @ 0x18000F210 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?RmpActivityHostCreateHostProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PROCESS_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180035B0C (-RmpActivityHostCreateHostProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PROCES.c)
 *     ?RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_PARTITION@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003FEE4 (-RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPL.c)
 * Callees:
 *     ?RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018F44 (-RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180018FF8 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180019038 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019198 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

void __fastcall HampDepGroupSetOwner(
        struct _HAM_DEPENDENCY_GROUP *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HOST_ACTIVITY_MANAGER *a3)
{
  DWORD v3; // ebp
  _BYTE *Value; // rbx

  v3 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
      __int2c();
    *(_QWORD *)Value |= 4uLL;
    ++Value[10];
  }
  RtlAcquireSRWLockExclusive((char *)a1 + 8);
  *((_DWORD *)a1 + 4) = GetCurrentThreadId();
  if ( RmpActivityHostIsPple((struct _RM_HAM_ACTIVITY_HOST *)((char *)a2 - 64)) )
    *((_DWORD *)a1 + 31) |= 2u;
  *((_QWORD *)a1 + 4) = a2;
  *((_QWORD *)a1 + 5) = a3;
  HampManagerAcquireLockExclusive(a3);
  ++*((_QWORD *)a3 + 28);
  HampManagerReleaseLockExclusive(a3);
  HampDepGroupReleaseLockExclusive(a1);
  HampDepGroupAddHost(a1, a2);
}
