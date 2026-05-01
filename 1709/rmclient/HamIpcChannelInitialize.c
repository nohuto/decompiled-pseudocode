/*
 * XREFs of HamIpcChannelInitialize @ 0x180004590
 * Callers:
 *     HampConnectionInitialize @ 0x1800042F0 (HampConnectionInitialize.c)
 *     RmpClientConnectionInitialize @ 0x1800065AC (RmpClientConnectionInitialize.c)
 * Callees:
 *     memset_0 @ 0x180008068 (memset_0.c)
 */

_QWORD *__fastcall HamIpcChannelInitialize(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *result; // rax

  memset_0(a4, 0, 0x50uLL);
  a4[3] = 0LL;
  a4[4] = 0LL;
  RtlInitializeSRWLock(a4 + 1);
  result = a4 + 5;
  a4[6] = a4 + 5;
  a4[5] = a4 + 5;
  a4[7] = a1;
  a4[9] = a3;
  a4[8] = a2;
  return result;
}
