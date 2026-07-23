/*
 * XREFs of RtlExecuteUmsThread @ 0x1800F34C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlGetCurrentUmsThread @ 0x180068DB0 (RtlGetCurrentUmsThread.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 *     RtlpExecuteUmsThread @ 0x1800A48C1 (RtlpExecuteUmsThread.c)
 *     RtlpLoadUmsDebugRegisterState @ 0x1801087E0 (RtlpLoadUmsDebugRegisterState.c)
 */

__int64 __fastcall RtlExecuteUmsThread(__int64 a1)
{
  __int64 result; // rax
  char v3; // si
  unsigned int v4; // ebp
  __int64 v5; // rdi
  __int64 v6; // rcx
  int v7; // ecx
  unsigned int v8; // ebx
  struct _TEB **v9; // [rsp+20h] [rbp-58h] BYREF
  _BYTE Fields[6]; // [rsp+28h] [rbp-50h] BYREF
  __int16 v11; // [rsp+2Eh] [rbp-4Ah]
  int v12; // [rsp+48h] [rbp-30h]
  int v13; // [rsp+4Ch] [rbp-2Ch]
  int v14; // [rsp+50h] [rbp-28h]
  int v15; // [rsp+54h] [rbp-24h]
  int v16; // [rsp+58h] [rbp-20h]

  if ( !a1 )
    return 3221225485LL;
  v3 = 0;
  result = RtlGetCurrentUmsThread(&v9);
  if ( (int)result >= 0 )
  {
    if ( ((_DWORD)v9[158] & 1) != 0 )
      return 3221225659LL;
    if ( (*(_DWORD *)(a1 + 1264) & 1) == 0 )
      return 3221225485LL;
    if ( (*(_DWORD *)(a1 + 1264) & 0x10) != 0 || ((_DWORD)v9[158] & 0x10) != 0 )
    {
      result = RtlpLoadUmsDebugRegisterState(a1);
      if ( (int)result < 0 )
        return result;
      v3 = 1;
    }
    v4 = ++*(_DWORD *)(a1 + 1288);
    v5 = 2147353484LL;
    if ( RtlGetCurrentServiceSessionId() )
      v6 = (__int64)NtCurrentPeb()->SharedData + 562;
    else
      v6 = 2147353484LL;
    if ( *(_BYTE *)v6 && v4 == 1000 * (v4 / 0x3E8) && (*(_DWORD *)(a1 + 1264) & 8) == 0 )
    {
      v11 = 6436;
      v7 = *(_DWORD *)(*(_QWORD *)(a1 + 1248) + 72LL);
      v13 = *(_DWORD *)(a1 + 1288);
      v15 = *(_DWORD *)(a1 + 1296);
      v14 = *(_DWORD *)(a1 + 1292);
      v16 = *(_DWORD *)(a1 + 1300);
      v12 = v7;
      if ( RtlGetCurrentServiceSessionId() )
        v5 = (__int64)NtCurrentPeb()->SharedData + 562;
      NtTraceEvent((HANDLE)*(unsigned __int8 *)v5, 0x20402u, 0x14u, Fields);
    }
    RtlpExecuteUmsThread(a1);
    if ( (*(_QWORD *)(a1 + 1272) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    {
      v8 = -1073741595;
    }
    else if ( (*(_DWORD *)(a1 + 1264) & 8) != 0 )
    {
      v8 = -1073740004;
    }
    else
    {
      v8 = (*(_DWORD *)(a1 + 1264) & 2) != 0 ? -1073740004 : -1073741267;
    }
    if ( v3 )
      RtlpLoadUmsDebugRegisterState(v9);
    return v8;
  }
  return result;
}
