/*
 * XREFs of EngLockDriverObj @ 0x1C00FCFE0
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007B8E0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgLockEx @ 0x1C004D1C0 (HmgLockEx.c)
 */

DRIVEROBJ *__stdcall EngLockDriverObj(HDRVOBJ hdo)
{
  DRIVEROBJ *v1; // rbx
  __int64 v2; // rax

  v1 = 0LL;
  v2 = HmgLockEx((struct HOBJ__ *)hdo, 28, 0);
  if ( v2 )
    return (DRIVEROBJ *)(v2 + 24);
  return v1;
}
