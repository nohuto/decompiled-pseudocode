/*
 * XREFs of ExpSetSwappingKernelApc @ 0x140476430
 * Callers:
 *     <none>
 * Callees:
 *     KeSetKernelStackSwapEnable @ 0x1400B71D0 (KeSetKernelStackSwapEnable.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 */

LONG __fastcall ExpSetSwappingKernelApc(__int64 a1, __int64 a2, BOOLEAN *a3, struct _KEVENT **a4)
{
  struct _KEVENT *v4; // rbx

  v4 = *a4;
  if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 1) != 0 )
    KeSetKernelStackSwapEnable(*a3);
  return KeSetEvent(v4, 0, 0);
}
