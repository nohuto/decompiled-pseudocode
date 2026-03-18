/*
 * XREFs of CreateKernelSemaphore @ 0x1C0058750
 * Callers:
 *     InputInitialize @ 0x1C006DA98 (InputInitialize.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C006E1C4 (--0CTouchProcessor@@QEAA@XZ.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C008FB70 (RIMRegisterForInputWithCallbacks.c)
 *     DriverEntry @ 0x1C01D5780 (DriverEntry.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0054B50 (Win32AllocPoolNonPaged.c)
 */

struct _KSEMAPHORE *__fastcall CreateKernelSemaphore(LONG Count, LONG Limit)
{
  struct _KSEMAPHORE *v4; // rax
  struct _KSEMAPHORE *v5; // rbx

  v4 = (struct _KSEMAPHORE *)Win32AllocPoolNonPaged(32LL, 0x734B7355u);
  v5 = v4;
  if ( v4 )
    KeInitializeSemaphore(v4, Count, Limit);
  return v5;
}
