/*
 * XREFs of ?InInteractionMode@MPCProcessor@@UEBA_NXZ @ 0x180046870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCProcessor::InInteractionMode(MPCProcessor *this)
{
  return *((_QWORD *)this + 285) != 0LL;
}
