/*
 * XREFs of RtlGetSetBootStatusData @ 0x1405820B0
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PopWriteBsdPowerTransition @ 0x140576A8C (PopWriteBsdPowerTransition.c)
 *     PoClearTransitionMarker @ 0x1405B8BC8 (PoClearTransitionMarker.c)
 *     PopRecordPhysicalPowerButton @ 0x1406C547C (PopRecordPhysicalPowerButton.c)
 *     PopCheckAndClearBootError @ 0x140823FE4 (PopCheckAndClearBootError.c)
 *     PopCheckShutdownMarker @ 0x140824044 (PopCheckShutdownMarker.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     RtlpGetSetBootStatusData @ 0x140582208 (RtlpGetSetBootStatusData.c)
 */

NTSTATUS __stdcall RtlGetSetBootStatusData(
        HANDLE FileHandle,
        BOOLEAN WriteMode,
        RTL_BSD_ITEM_TYPE DataClass,
        PVOID Buffer,
        ULONG BufferSize,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax
  __int64 v9; // rcx
  char v10; // al
  char *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  char v14; // [rsp+30h] [rbp-C8h]
  __int64 v15; // [rsp+34h] [rbp-C4h] BYREF
  char v16; // [rsp+40h] [rbp-B8h] BYREF

  if ( WriteMode )
    return RtlpGetSetBootStatusData(FileHandle, BufferSize, (__int64)ReturnLength);
  if ( DataClass == RtlBsdItemChecksum )
    return -1073741811;
  result = RtlpGetSetBootStatusData(FileHandle, 1, 0LL);
  if ( result >= 0 )
  {
    result = RtlpGetSetBootStatusData(FileHandle, 136, 0LL);
    if ( result >= 0 )
    {
      result = RtlpGetSetBootStatusData(FileHandle, BufferSize, (__int64)&v15);
      if ( result >= 0 )
      {
        v9 = (unsigned int)v15;
        if ( ReturnLength )
          *ReturnLength = v15;
        v10 = v14;
        if ( (_DWORD)v9 )
        {
          v11 = &v16;
          v12 = v9;
          do
          {
            v10 += *v11++;
            --v12;
          }
          while ( v12 );
          v13 = v9;
          do
          {
            v10 -= *(_BYTE *)Buffer;
            Buffer = (char *)Buffer + 1;
            --v13;
          }
          while ( v13 );
        }
        return RtlpGetSetBootStatusData(FileHandle, 1, 0LL);
      }
    }
  }
  return result;
}
