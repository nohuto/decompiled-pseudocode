/*
 * XREFs of TpReleaseWork @ 0x18000C930
 * Callers:
 *     LdrpDetectDetour @ 0x180006720 (LdrpDetectDetour.c)
 * Callees:
 *     TppWorkpValidateWork @ 0x18000C9A8 (TppWorkpValidateWork.c)
 *     TppCleanupGroupMemberRelease @ 0x1800107A8 (TppCleanupGroupMemberRelease.c)
 */

__int64 __fastcall TpReleaseWork(__int64 a1)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  result = TppWorkpValidateWork(a1, 1LL, 0LL);
  if ( (_DWORD)result )
  {
    result = TppCleanupGroupMemberRelease(a1, 1LL);
    if ( (_DWORD)result )
    {
      *(_QWORD *)(a1 + 184) = retaddr;
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
    }
  }
  return result;
}
