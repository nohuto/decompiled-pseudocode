/*
 * XREFs of PopCheckAndClearBootError @ 0x140823FE4
 * Callers:
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PopTraceBootError @ 0x1402326A8 (PopTraceBootError.c)
 *     RtlGetSetBootStatusData @ 0x1405820B0 (RtlGetSetBootStatusData.c)
 */

int __fastcall PopCheckAndClearBootError(HANDLE FileHandle)
{
  int result; // eax
  __int64 Buffer; // [rsp+30h] [rbp-28h] BYREF
  __int64 v4; // [rsp+38h] [rbp-20h]
  int v5; // [rsp+40h] [rbp-18h]

  result = RtlGetSetBootStatusData(FileHandle, 1u, RtlBsdItemErrorInfo, &Buffer, 0x14u, 0LL);
  if ( result >= 0 )
  {
    if ( HIDWORD(v4) )
    {
      PopTraceBootError();
      Buffer = 0LL;
      v4 = 0LL;
      v5 = 0;
      return RtlGetSetBootStatusData(FileHandle, 0, RtlBsdItemErrorInfo, &Buffer, 0x14u, 0LL);
    }
  }
  return result;
}
