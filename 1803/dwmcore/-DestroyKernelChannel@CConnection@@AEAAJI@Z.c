/*
 * XREFs of ?DestroyKernelChannel@CConnection@@AEAAJI@Z @ 0x1801437E8
 * Callers:
 *     ?CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x18005EADC (-CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z.c)
 *     ?DestroyChannel@CConnection@@QEAAJI@Z @ 0x180143724 (-DestroyChannel@CConnection@@QEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CConnection::DestroyKernelChannel(CConnection *this, unsigned int a2)
{
  unsigned int v2; // ebx
  int v3; // eax

  v2 = 0;
  v3 = NtDCompositionDestroyChannel(a2);
  if ( v3 < 0 )
  {
    v2 = v3 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3 | 0x10000000, 0x10Fu);
  }
  return v2;
}
