/*
 * XREFs of KeCopyExceptionRecord @ 0x1401A5B60
 * Callers:
 *     KiDispatchException @ 0x140130BA0 (KiDispatchException.c)
 *     KiCopyInformation @ 0x140240F28 (KiCopyInformation.c)
 *     DbgkForwardException @ 0x1405C0D3C (DbgkForwardException.c)
 *     DbgkpSendErrorMessage @ 0x140710E28 (DbgkpSendErrorMessage.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

void *__fastcall KeCopyExceptionRecord(_OWORD *a1, __int64 a2)
{
  memset(a1, 0, 0x98uLL);
  *a1 = *(_OWORD *)a2;
  *((_QWORD *)a1 + 2) = *(_QWORD *)(a2 + 16);
  *((_DWORD *)a1 + 6) = *(_DWORD *)(a2 + 24);
  return memmove(a1 + 2, (const void *)(a2 + 32), 8LL * *(unsigned int *)(a2 + 24));
}
