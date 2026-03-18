/*
 * XREFs of UserGetHDevFromMonitor @ 0x1C0026E6C
 * Callers:
 *     DrvGetCurrentDpiInfo @ 0x1C0026D34 (DrvGetCurrentDpiInfo.c)
 *     NtHWCursorUpdatePointer @ 0x1C00F1DF0 (NtHWCursorUpdatePointer.c)
 * Callees:
 *     HMValidateSharedHandle @ 0x1C002810C (HMValidateSharedHandle.c)
 */

__int64 UserGetHDevFromMonitor()
{
  __int64 v0; // rcx
  __int64 result; // rax

  v0 = HMValidateSharedHandle();
  result = 0LL;
  if ( v0 )
    return *(_QWORD *)(v0 + 120);
  return result;
}
