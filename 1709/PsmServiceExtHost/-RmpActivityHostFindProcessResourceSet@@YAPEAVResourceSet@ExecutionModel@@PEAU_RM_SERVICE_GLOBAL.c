/*
 * XREFs of ?RmpActivityHostFindProcessResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x1800033F0
 * Callers:
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180002EB8 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@QEAAJK@Z @ 0x180031D04 (-ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@QEAAJK@Z.c)
 *     ?GetProcessMemoryCaps@ResourceManager@ExecutionModel@@QEAAJKPEA_K0@Z @ 0x180031ED4 (-GetProcessMemoryCaps@ResourceManager@ExecutionModel@@QEAAJKPEA_K0@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017BA0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

struct ExecutionModel::ResourceSet *__fastcall RmpActivityHostFindProcessResourceSet(
        struct _RM_SERVICE_GLOBALS *a1,
        int a2)
{
  char *v4; // rsi
  char *v6; // r8
  PVOID P[2]; // [rsp+20h] [rbp-258h] BYREF
  _DWORD v8[140]; // [rsp+30h] [rbp-248h] BYREF

  v4 = 0LL;
  memset_0(v8, 0, 0x228uLL);
  v8[0] = a2;
  if ( (int)RmpActivityHostFindByTypeAndIdentifier(a1, 1LL, v8, P) >= 0 )
  {
    if ( *((int *)P[0] + 5) >= 0 )
    {
      v6 = (char *)*((_QWORD *)P[0] + 105);
      if ( v6 != (char *)P[0] + 840 )
        v4 = v6 - 1416;
    }
    RmpObjectRelease(P[0]);
  }
  return (struct ExecutionModel::ResourceSet *)v4;
}
