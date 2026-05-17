/*
 * XREFs of EtwTraceMessageVa @ 0x1800082B0
 * Callers:
 *     EtwTraceMessage @ 0x180008280 (EtwTraceMessage.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 *     sub_1801070E0 @ 0x1801070E0 (sub_1801070E0.c)
 */

__int64 __fastcall EtwTraceMessageVa(__int64 a1, int a2, _DWORD *a3, __int16 a4, _QWORD *a5)
{
  unsigned int v6; // ebx
  int v7; // ecx
  _QWORD *v8; // rax
  NTSTATUS v9; // eax
  _BYTE v11[4]; // [rsp+30h] [rbp-38h] BYREF
  __int16 v12; // [rsp+34h] [rbp-34h]
  __int128 v13; // [rsp+38h] [rbp-30h]
  int v14; // [rsp+48h] [rbp-20h]
  int v15; // [rsp+4Ch] [rbp-1Ch]
  _QWORD *v16; // [rsp+50h] [rbp-18h]

  if ( (a1 & 0x1000000) != 0 )
    return sub_1801070E0(a1, a2, (_DWORD)a3, a4, (__int64)a5);
  v6 = 0;
  v7 = 0;
  if ( *a5 )
  {
    v8 = a5;
    do
    {
      ++v7;
      v8 += 2;
    }
    while ( *v8 );
  }
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
  v16 = a5;
  v15 = 16 * v7 + 8;
  v9 = ZwTraceEvent(a1, 512LL, 40LL, v11);
  if ( v9 )
    return RtlNtStatusToDosError(v9);
  return v6;
}
