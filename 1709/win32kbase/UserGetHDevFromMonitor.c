/*
 * XREFs of UserGetHDevFromMonitor @ 0x1C005B6C0
 * Callers:
 *     DrvGetCurrentDpiInfo @ 0x1C005B6E8 (DrvGetCurrentDpiInfo.c)
 *     NtHWCursorUpdatePointer @ 0x1C00F4B30 (NtHWCursorUpdatePointer.c)
 * Callees:
 *     HMValidateSharedHandle @ 0x1C005ABE4 (HMValidateSharedHandle.c)
 */

__int64 __fastcall UserGetHDevFromMonitor(int a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = HMValidateSharedHandle(a1);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)(v1 + 232);
  return result;
}
