/*
 * XREFs of ?GetGroupingParam@CAudioSession@@UEAAJPEAU_GUID@@@Z @ 0x18002F900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::GetGroupingParam(CAudioSession *this, struct _GUID *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(struct _GUID *)((char *)this + 356);
  return result;
}
