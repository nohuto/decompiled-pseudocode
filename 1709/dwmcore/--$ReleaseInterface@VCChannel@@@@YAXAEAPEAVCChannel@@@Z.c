/*
 * XREFs of ??$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z @ 0x1801205A8
 * Callers:
 *     ?CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x180120898 (-CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z.c)
 *     ?DestroyChannel@CConnection@@QEAAJI@Z @ 0x180120988 (-DestroyChannel@CConnection@@QEAAJI@Z.c)
 *     ?Create@CChannel@@SAJPEAVCConnection@@IPEAPEAV1@@Z @ 0x1801216F0 (-Create@CChannel@@SAJPEAVCConnection@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?Release@CChannel@@UEAAKXZ @ 0x180122DE0 (-Release@CChannel@@UEAAKXZ.c)
 */

unsigned int __fastcall ReleaseInterface<CChannel>(CChannel **a1)
{
  CChannel *v2; // rcx
  unsigned int result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = CChannel::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
