/*
 * XREFs of HUBDSM_SettingConfigurationInformationInClientRequest @ 0x1C0019D20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00391C0 (memset.c)
 */

__int64 __fastcall HUBDSM_SettingConfigurationInformationInClientRequest(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // rdx
  unsigned __int16 *v3; // rbp
  __int64 v4; // rsi
  _QWORD *v5; // r14
  bool i; // zf
  __int64 j; // r15
  __int64 v8; // r13
  int v9; // eax
  int v10; // edi
  _QWORD *v12; // [rsp+30h] [rbp-78h]
  __int64 v13; // [rsp+40h] [rbp-68h]
  _QWORD *v14; // [rsp+48h] [rbp-60h]
  _QWORD v15[5]; // [rsp+50h] [rbp-58h] BYREF

  v1 = *(_QWORD **)(a1 + 960);
  v12 = v1;
  v13 = *v1 + 336LL;
  memset(v15, 0, sizeof(v15));
  v2 = v1[57];
  LOWORD(v15[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v15);
  v3 = (unsigned __int16 *)(v15[1] + 40LL);
  v14 = (_QWORD *)(v1[6] + 16LL);
  v4 = *v14 - 8LL;
  v5 = (_QWORD *)*v14;
  for ( i = v14 == (_QWORD *)*v14; !i; i = v14 == v5 )
  {
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v4 + 24); v1 = v12 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD))(v13 + 128))(*(_QWORD *)(v4 + 72 * j + 40));
      if ( !v8 )
        WPP_RECORDER_SF_(
          *(_QWORD *)(v1[1] + 1432LL),
          2u,
          5u,
          0x2Cu,
          (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids);
      v9 = (*(__int64 (__fastcall **)(_QWORD))(v13 + 136))(*(_QWORD *)(v4 + 72 * j + 40));
      *(_QWORD *)(v4 + 72 * j + 56) = v8;
      *(_QWORD *)&v3[12 * j + 16] = v8;
      v10 = v9;
      (*(void (__fastcall **)(_QWORD))(v13 + 120))(*(_QWORD *)(v4 + 72 * j + 40));
      *(_DWORD *)&v3[12 * j + 20] = v10;
      j = (unsigned int)(j + 1);
    }
    v4 = *v5 - 8LL;
    v3 = (unsigned __int16 *)((char *)v3 + *v3);
    v5 = (_QWORD *)*v5;
  }
  return 4077LL;
}
