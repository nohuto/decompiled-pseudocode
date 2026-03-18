/*
 * XREFs of KeCopyExceptionRecord @ 0x14017B3BC
 * Callers:
 *     KiDispatchException @ 0x1400DA080 (KiDispatchException.c)
 *     KiCopyInformation @ 0x140203A98 (KiCopyInformation.c)
 *     DbgkForwardException @ 0x1404504F4 (DbgkForwardException.c)
 *     DbgkpSendErrorMessage @ 0x1406AC4FC (DbgkpSendErrorMessage.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 */

void *__fastcall KeCopyExceptionRecord(_OWORD *a1, __int64 a2)
{
  memset(a1, 0, 0x98uLL);
  *a1 = *(_OWORD *)a2;
  *((_QWORD *)a1 + 2) = *(_QWORD *)(a2 + 16);
  *((_DWORD *)a1 + 6) = *(_DWORD *)(a2 + 24);
  return memmove(a1 + 2, (const void *)(a2 + 32), 8LL * *(unsigned int *)(a2 + 24));
}
