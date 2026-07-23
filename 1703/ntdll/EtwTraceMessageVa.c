/*
 * XREFs of EtwTraceMessageVa @ 0x18005EA30
 * Callers:
 *     EtwTraceMessage @ 0x18005EA00 (EtwTraceMessage.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_18005EAF0 @ 0x18005EAF0 (sub_18005EAF0.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 */

__int64 __fastcall EtwTraceMessageVa(HANDLE TraceHandle, int a2, _DWORD *a3, __int16 a4, _QWORD *a5)
{
  unsigned int v6; // ebx
  _QWORD *v7; // rax
  int i; // ecx
  NTSTATUS v9; // eax
  _BYTE Fields[4]; // [rsp+30h] [rbp-38h] BYREF
  __int16 v12; // [rsp+34h] [rbp-34h]
  __int128 v13; // [rsp+38h] [rbp-30h]
  int v14; // [rsp+48h] [rbp-20h]
  int v15; // [rsp+4Ch] [rbp-1Ch]
  __int64 v16; // [rsp+50h] [rbp-18h]

  if ( (BYTE3(TraceHandle) & 1) != 0 )
    return sub_18005EAF0((_DWORD)TraceHandle, a2, (_DWORD)a3, a4, (__int64)a5);
  v6 = 0;
  v7 = a5;
  for ( i = 0; *v7; v7 += 2 )
    ++i;
  v12 = a4;
  v14 = a2;
  if ( (a2 & 4) != 0 )
  {
    LODWORD(v13) = *a3;
  }
  else if ( (a2 & 2) != 0 )
  {
    v13 = *(_OWORD *)a3;
  }
  v16 = (__int64)a5;
  v15 = 16 * i + 8;
  v9 = ZwTraceEvent(TraceHandle, 0x200u, 0x28u, Fields);
  if ( v9 )
    return RtlNtStatusToDosError(v9);
  return v6;
}
