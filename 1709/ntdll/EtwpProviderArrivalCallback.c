/*
 * XREFs of EtwpProviderArrivalCallback @ 0x180067534
 * Callers:
 *     EtwpGetUmProcessImageInfo @ 0x180067498 (EtwpGetUmProcessImageInfo.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     RtlpxLookupFunctionTable @ 0x180028A70 (RtlpxLookupFunctionTable.c)
 *     EtwpTrackDebugIdForSession @ 0x18006761C (EtwpTrackDebugIdForSession.c)
 *     EtwpFindDebugId @ 0x1800676FC (EtwpFindDebugId.c)
 *     LdrGetDllFullName @ 0x180079D70 (LdrGetDllFullName.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     EtwpTrackBinaryForSession @ 0x18010A50C (EtwpTrackBinaryForSession.c)
 */

__int64 __fastcall EtwpProviderArrivalCallback(__int64 a1, __int64 a2)
{
  void *v3; // rcx
  unsigned int DebugId; // ebx
  wchar_t *Buffer; // rcx
  int DllFullName; // eax
  unsigned int v10; // [rsp+20h] [rbp-E0h] BYREF
  _UNICODE_STRING FullDllName; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C8h]
  char v13; // [rsp+40h] [rbp-C0h] BYREF

  v3 = *(void **)(a2 + 48);
  DebugId = 0;
  if ( (unsigned __int64)v3 < *((_QWORD *)&xmmword_18016F4D0 + 1)
    || (unsigned __int64)v3 >= *((_QWORD *)&xmmword_18016F4D0 + 1) + (unsigned __int64)(unsigned int)qword_18016F4E0 )
  {
    RtlpxLookupFunctionTable(v3, (__int64)&FullDllName);
  }
  else
  {
    FullDllName = (_UNICODE_STRING)xmmword_18016F4D0;
    v12 = qword_18016F4E0;
  }
  Buffer = FullDllName.Buffer;
  if ( !FullDllName.Buffer )
    return 87;
  if ( (*(_WORD *)(a2 + 98) & 0x3FFF) != 2 )
  {
    if ( *(__int16 *)(a2 + 98) >= 0 )
      return DebugId;
    FullDllName.Buffer = (wchar_t *)&v13;
    FullDllName.MaximumLength = 260;
    DllFullName = LdrGetDllFullName(Buffer, &FullDllName);
    if ( DllFullName < 0 )
      return RtlNtStatusToDosError(DllFullName);
    else
      return (unsigned int)EtwpTrackBinaryForSession(a1, &FullDllName, a2 + 32);
  }
  DebugId = EtwpFindDebugId(FullDllName.Buffer, 0x3FFFLL, &FullDllName, &v10);
  if ( !DebugId )
    return (unsigned int)EtwpTrackDebugIdForSession(a1, *(_QWORD *)&FullDllName.Length, v10);
  return DebugId;
}
