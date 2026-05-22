/*
 * XREFs of ?OnTryDemote@MPCMouseProcessor@@MEAA_NXZ @ 0x180099230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCMouseProcessor::OnTryDemote(MPCMouseProcessor *this)
{
  bool result; // al

  *((_DWORD *)this + 855) = 0;
  result = 1;
  *((_DWORD *)this + 835) = 0;
  return result;
}
