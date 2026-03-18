/*
 * XREFs of PpmEventVirtualHeterogeneitySupport @ 0x140581A64
 * Callers:
 *     PpmPerfRecomputeBackgroundPolicy @ 0x1405819C0 (PpmPerfRecomputeBackgroundPolicy.c)
 *     PpmEventTraceControlCallback @ 0x1405D6570 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PpmEventVirtualHeterogeneitySupport(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rax
  const EVENT_DESCRIPTOR *v2; // rbx
  REGHANDLE v3; // rdi
  BOOL v5; // [rsp+30h] [rbp-50h] BYREF
  BOOL v6; // [rsp+34h] [rbp-4Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-48h] BYREF
  BOOL *v8; // [rsp+48h] [rbp-38h]
  int v9; // [rsp+50h] [rbp-30h]
  int v10; // [rsp+54h] [rbp-2Ch]
  int *v11; // [rsp+58h] [rbp-28h]
  int v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+64h] [rbp-1Ch]

  v1 = &PPM_ETW_VIRTUAL_HETEROGENEITY_SUPPORT_CHANGED;
  v2 = (const EVENT_DESCRIPTOR *)&PPM_ETW_VIRTUAL_HETEROGENEITY_RUNDOWN;
  if ( !a1 )
    v2 = &PPM_ETW_VIRTUAL_HETEROGENEITY_SUPPORT_CHANGED;
  if ( PpmEtwRegistered )
  {
    v3 = PpmEtwHandle;
    LOBYTE(v1) = EtwEventEnabled(PpmEtwHandle, v2);
    if ( (_BYTE)v1 )
    {
      UserData.Size = 4;
      v9 = 4;
      v5 = (unsigned __int8)(KeHeteroSystem - 1) <= 1u;
      v12 = 4;
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      v6 = KeHeteroSystem == 2;
      UserData.Ptr = (ULONGLONG)&v5;
      v8 = &v6;
      v11 = &PpmPerfVirtualHeterogeneityDisableReasons;
      LOBYTE(v1) = EtwWrite(v3, v2, 0LL, 3u, &UserData);
    }
  }
  return (char)v1;
}
