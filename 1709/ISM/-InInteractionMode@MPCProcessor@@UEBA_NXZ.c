/*
 * XREFs of ?InInteractionMode@MPCProcessor@@UEBA_NXZ @ 0x180053A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCProcessor::InInteractionMode(MPCProcessor *this)
{
  return *((_QWORD *)this + 69) != 0LL;
}
