/*
 * XREFs of ?OnTryDemote@MPCProcessor@@MEAA_NXZ @ 0x180046860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCProcessor::OnTryDemote(MPCProcessor *this)
{
  return *((_QWORD *)this + 288) == 0LL;
}
