/*
 * XREFs of CrmStateMonitorRegistrationAdd @ 0x18003991C
 * Callers:
 *     CrmStateMonitorStart @ 0x180039514 (CrmStateMonitorStart.c)
 *     CrmRegisterToStateMonitor @ 0x180039818 (CrmRegisterToStateMonitor.c)
 * Callees:
 *     CrmRegistrationUpdate @ 0x180005820 (CrmRegistrationUpdate.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall CrmStateMonitorRegistrationAdd(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  TLG_STATUS result; // eax
  int v9; // [rsp+30h] [rbp-78h] BYREF
  int v10; // [rsp+34h] [rbp-74h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  int *v12; // [rsp+60h] [rbp-48h]
  __int64 v13; // [rsp+68h] [rbp-40h]
  int *v14; // [rsp+70h] [rbp-38h]
  __int64 v15; // [rsp+78h] [rbp-30h]

  RtlAcquireSRWLockExclusive(a1 + 8);
  *(_DWORD *)(a1 + 16) = GetCurrentThreadId();
  v6 = *(_QWORD **)(a1 + 32);
  v7 = (_QWORD *)(a3 + 32);
  if ( *v6 != a1 + 24 )
    __fastfail(3u);
  *v7 = a1 + 24;
  *(_QWORD *)(a3 + 40) = v6;
  *v6 = v7;
  *(_QWORD *)(a1 + 32) = v7;
  CrmRegistrationUpdate((_QWORD *)a2, a3, *(_DWORD *)a1, *(_QWORD *)(a1 + 40));
  *(_DWORD *)(a1 + 16) = 0;
  result = RtlReleaseSRWLockExclusive(a1 + 8);
  if ( (unsigned int)dword_180092130 > 5 )
  {
    v9 = *(_DWORD *)a1;
    v10 = *(_DWORD *)(a2 + 8);
    v12 = &v9;
    v14 = &v10;
    v13 = 4LL;
    v15 = 4LL;
    return TlgWrite((TraceLoggingHProvider)&dword_180092130, &unk_180083EA4, 0LL, 0LL, 4u, &pData);
  }
  return result;
}
