/*
 * XREFs of HamIpcChannelInitialize @ 0x180004E94
 * Callers:
 *     HampConnectionInitialize @ 0x180004E1C (HampConnectionInitialize.c)
 *     RmpClientConnectionInitialize @ 0x18000C23C (RmpClientConnectionInitialize.c)
 * Callees:
 *     memset_0 @ 0x180007B70 (memset_0.c)
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
