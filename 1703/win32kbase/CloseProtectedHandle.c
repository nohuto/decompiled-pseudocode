/*
 * XREFs of CloseProtectedHandle @ 0x1C0051C20
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004AFA0 (xxxCreateThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C00509D8 (DestroyProcessInfo.c)
 * Callees:
 *     SetHandleFlag @ 0x1C0051C60 (SetHandleFlag.c)
 */

NTSTATUS __fastcall CloseProtectedHandle(void *a1)
{
  if ( !a1 )
    return 0;
  SetHandleFlag(a1, 1LL);
  return ObCloseHandle(a1, 1);
}
