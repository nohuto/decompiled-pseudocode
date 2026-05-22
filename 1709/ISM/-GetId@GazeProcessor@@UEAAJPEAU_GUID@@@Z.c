/*
 * XREFs of ?GetId@GazeProcessor@@UEAAJPEAU_GUID@@@Z @ 0x1800434F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GazeProcessor::GetId(GazeProcessor *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = (struct _GUID)PROCESSORID_Gaze;
  return result;
}
