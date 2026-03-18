/*
 * XREFs of xxxClientMonitorEnumProc @ 0x1C00F6FF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall xxxClientMonitorEnumProc(__int64 a1, __int64 a2, _OWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  __int64 *v13; // rcx
  __int64 result; // rax
  int v15; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v16[3]; // [rsp+38h] [rbp-60h] BYREF
  _OWORD v17[3]; // [rsp+50h] [rbp-48h] BYREF

  memset(v17, 0, sizeof(v17));
  *(_QWORD *)&v17[0] = a1;
  *((_QWORD *)&v17[0] + 1) = a2;
  v17[1] = *a3;
  *(_QWORD *)&v17[2] = a4;
  *((_QWORD *)&v17[2] + 1) = a5;
  if ( gdwInAtomicOperation )
  {
    v9 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v9, gdwInAtomicOperation, v10, v11);
  EtwTraceBeginCallback(87LL);
  v12 = KeUserModeCallback(87LL, v17, 48LL, v16, &v15);
  EtwTraceEndCallback(87LL);
  EnterCrit(0LL, 1LL);
  if ( v12 < 0 || v15 != 24 )
    return 0LL;
  v13 = (__int64 *)v16[0];
  if ( (unsigned __int64)(v16[0] + 8LL) < v16[0] || (unsigned __int64)(v16[0] + 8LL) > W32UserProbeAddress )
    v13 = (__int64 *)W32UserProbeAddress;
  result = *v13;
  v16[1] = *v13;
  return result;
}
