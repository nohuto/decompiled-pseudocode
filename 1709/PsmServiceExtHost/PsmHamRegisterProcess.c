/*
 * XREFs of PsmHamRegisterProcess @ 0x18002FD80
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z @ 0x1800423B4 (-HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z.c)
 */

int __fastcall PsmHamRegisterProcess(
        struct _HOST_ACTIVITY_MANAGER *a1,
        void *a2,
        struct _PSM_APP_IDENTITY *a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  return HamSrvRegisterProcess(a1, a1, a2, a3, a4, a5);
}
