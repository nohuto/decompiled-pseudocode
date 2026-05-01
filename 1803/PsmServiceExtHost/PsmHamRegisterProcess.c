/*
 * XREFs of PsmHamRegisterProcess @ 0x180033240
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z @ 0x18000F184 (-HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z.c)
 */

__int64 __fastcall PsmHamRegisterProcess(
        void *a1,
        void *a2,
        struct _PSM_APP_IDENTITY *a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  return HamSrvRegisterProcess((struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 1312), a1, a2, a3, a4, a5);
}
