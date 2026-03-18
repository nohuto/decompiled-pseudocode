/*
 * XREFs of WheapAttemptErrorRecovery @ 0x14025FA10
 * Callers:
 *     WheaReportHwError @ 0x14025F520 (WheaReportHwError.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     WheaGetErrPacketFromErrRecord @ 0x14025F438 (WheaGetErrPacketFromErrRecord.c)
 */

__int64 __fastcall WheapAttemptErrorRecovery(__int64 a1)
{
  int v2; // ebx
  PWHEA_ERROR_PACKET ErrPacketFromErrRecord; // rax
  __int64 v4; // rdx
  PWHEA_ERROR_PACKET v5; // r8
  __int64 ErrorSourceType; // rax
  __int64 (__fastcall *v7)(unsigned __int64, int *); // rax
  int v8; // eax
  int v9; // eax
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = -1073741811;
  ErrPacketFromErrRecord = WheaGetErrPacketFromErrRecord((PWHEA_ERROR_RECORD)a1);
  v5 = ErrPacketFromErrRecord;
  if ( ErrPacketFromErrRecord )
  {
    ErrorSourceType = ErrPacketFromErrRecord->ErrorSourceType;
    if ( (unsigned int)ErrorSourceType <= 0xD )
    {
      if ( v5->Context )
      {
        v7 = (__int64 (__fastcall *)(unsigned __int64, int *))qword_140387808[6 * ErrorSourceType];
        if ( v7 )
        {
          v11 = *(_DWORD *)(a1 + 12);
          v2 = v7(v5->Context, &v11);
          v8 = v11;
          *(_DWORD *)(a1 + 12) = v11;
          if ( v2 >= 0 && !v8 )
            *(_DWORD *)(a1 + 12) = 2;
        }
        else
        {
          v2 = -1073741637;
        }
      }
    }
  }
  v9 = PshedAttemptErrorRecovery(a1, v4, v5);
  if ( !*(_DWORD *)(a1 + 12) )
    *(_DWORD *)(a1 + 12) = (v9 >= 0) + 1;
  if ( *(_DWORD *)(a1 + 12) == 2 )
    *(_DWORD *)(a1 + 104) |= 1u;
  if ( v2 < 0 && v9 >= 0 )
    return (unsigned int)v9;
  return (unsigned int)v2;
}
