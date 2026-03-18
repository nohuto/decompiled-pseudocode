/*
 * XREFs of HUBDSM_SettingInterfaceInformationInClientRequest @ 0x1C0019F60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00391C0 (memset.c)
 */

__int64 __fastcall HUBDSM_SettingInterfaceInformationInClientRequest(__int64 a1)
{
  __int64 *v1; // r12
  __int64 v2; // r15
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 v6; // r13
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  __int64 i; // rdi
  __int64 v10; // r14
  _QWORD v12[5]; // [rsp+30h] [rbp-58h] BYREF

  v1 = *(__int64 **)(a1 + 960);
  v2 = *v1;
  memset(v12, 0, sizeof(v12));
  v3 = v1[57];
  LOWORD(v12[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v3,
    v12);
  v4 = v1[6];
  v5 = 32LL;
  if ( *(_WORD *)(v12[1] + 2LL) != 1 )
    v5 = 48LL;
  v6 = v12[1] + v5;
  v7 = *(_QWORD *)(v4 + 16) - 8LL;
  v8 = *(_QWORD **)(v4 + 16);
  if ( (_QWORD *)(v4 + 16) != v8 )
  {
    while ( *(_BYTE *)(*(_QWORD *)(v7 + 32) + 2LL) != *(_BYTE *)(v6 + 2) )
    {
      v7 = *v8 - 8LL;
      v8 = (_QWORD *)*v8;
      if ( (_QWORD *)(v4 + 16) == v8 )
        return 4077LL;
    }
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v7 + 24); i = (unsigned int)(i + 1) )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD))(v2 + 464))(*(_QWORD *)(v7 + 72 * i + 40));
      if ( !v10 )
        WPP_RECORDER_SF_(
          *(_QWORD *)(v1[1] + 1432),
          2u,
          5u,
          0x2Du,
          (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids);
      *(_QWORD *)(v7 + 72 * i + 56) = v10;
      *(_QWORD *)(v6 + 24 * i + 32) = v10;
      (*(void (__fastcall **)(_QWORD))(v2 + 456))(*(_QWORD *)(v7 + 72 * i + 40));
    }
  }
  return 4077LL;
}
