/*
 * XREFs of ?GetId@MPCGamepadProcessor@@UEAAJPEAU_GUID@@@Z @ 0x1800935C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCGamepadProcessor::GetId(MPCGamepadProcessor *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = (struct _GUID)PROCESSORID_MPCGamepad;
  return result;
}
