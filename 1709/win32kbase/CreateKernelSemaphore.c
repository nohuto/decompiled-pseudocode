/*
 * XREFs of CreateKernelSemaphore @ 0x1C00085A0
 * Callers:
 *     InputInitialize @ 0x1C000650C (InputInitialize.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C000753C (--0CTouchProcessor@@QEAA@XZ.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0098970 (RIMRegisterForInputWithCallbacks.c)
 *     DriverEntry @ 0x1C01DE690 (DriverEntry.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0024C70 (Win32AllocPoolNonPaged.c)
 */

struct _KSEMAPHORE *__fastcall CreateKernelSemaphore(LONG Count, LONG Limit)
{
  struct _KSEMAPHORE *v4; // rax
  struct _KSEMAPHORE *v5; // rbx

  v4 = (struct _KSEMAPHORE *)Win32AllocPoolNonPaged(32LL, 1934324565LL);
  v5 = v4;
  if ( v4 )
    KeInitializeSemaphore(v4, Count, Limit);
  return v5;
}
