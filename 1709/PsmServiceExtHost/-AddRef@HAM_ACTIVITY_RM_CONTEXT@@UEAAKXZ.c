/*
 * XREFs of ?AddRef@HAM_ACTIVITY_RM_CONTEXT@@UEAAKXZ @ 0x180045820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HAM_ACTIVITY_RM_CONTEXT::AddRef(HAM_ACTIVITY_RM_CONTEXT *this)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 8);
  if ( (int)result <= 1 )
    __int2c();
  return result;
}
