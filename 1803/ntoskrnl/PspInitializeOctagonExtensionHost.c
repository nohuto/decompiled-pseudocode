/*
 * XREFs of PspInitializeOctagonExtensionHost @ 0x14064212C
 * Callers:
 *     PspInitPhase1 @ 0x1408BC630 (PspInitPhase1.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExRegisterHost @ 0x1406423DC (ExRegisterHost.c)
 */

__int64 PspInitializeOctagonExtensionHost()
{
  __int64 v0; // rdx
  __int64 result; // rax
  _QWORD v2[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v2, 0, 0x28uLL);
  LODWORD(v2[0]) = 65549;
  v2[2] = &PspOctHostInterface;
  LODWORD(v2[1]) = 512;
  result = ExRegisterHost(&PspOctExtensionHost, v0, v2);
  if ( (int)result < 0 )
    PspOctExtensionHost = 0LL;
  return result;
}
