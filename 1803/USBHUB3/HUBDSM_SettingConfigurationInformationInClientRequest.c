/*
 * XREFs of HUBDSM_SettingConfigurationInformationInClientRequest @ 0x1C001A850
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0039F00 (memset.c)
 */

__int64 __fastcall HUBDSM_SettingConfigurationInformationInClientRequest(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // r13
  __int64 v3; // rdx
  unsigned __int16 *v4; // rbp
  _QWORD *v5; // rcx
  _QWORD *i; // rax
  __int64 v7; // r14
  __int64 v8; // r12
  int v9; // eax
  int v10; // edi
  _QWORD *v11; // rsi
  _QWORD *v13; // [rsp+30h] [rbp-68h]
  _QWORD *v14; // [rsp+38h] [rbp-60h]
  _QWORD v15[5]; // [rsp+40h] [rbp-58h] BYREF

  v1 = *(_QWORD **)(a1 + 960);
  v13 = v1;
  v2 = *v1;
  memset(v15, 0, sizeof(v15));
  v3 = v1[57];
  LOWORD(v15[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v3,
    v15);
  v4 = (unsigned __int16 *)(v15[1] + 40LL);
  v5 = (_QWORD *)(v1[6] + 16LL);
  v14 = v5;
  for ( i = (_QWORD *)*v5; ; i = (_QWORD *)v11[1] )
  {
    v11 = i - 1;
    if ( v5 == i )
      break;
    v7 = 0LL;
    if ( *((_DWORD *)v11 + 6) )
    {
      do
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD))(v2 + 464))(v11[9 * v7 + 5]);
        if ( !v8 )
          WPP_RECORDER_SF_(
            *(_QWORD *)(v1[1] + 1432LL),
            2u,
            5u,
            0x2Cu,
            (__int64)&WPP_6dc2a34f378238ba241799b961c3ba51_Traceguids);
        v9 = (*(__int64 (__fastcall **)(_QWORD))(v2 + 472))(v11[9 * v7 + 5]);
        v11[9 * v7 + 7] = v8;
        *(_QWORD *)&v4[12 * v7 + 16] = v8;
        v10 = v9;
        (*(void (__fastcall **)(_QWORD))(v2 + 456))(v11[9 * v7 + 5]);
        *(_DWORD *)&v4[12 * v7 + 20] = v10;
        v7 = (unsigned int)(v7 + 1);
        v1 = v13;
      }
      while ( (unsigned int)v7 < *((_DWORD *)v11 + 6) );
      v5 = v14;
    }
    v4 = (unsigned __int16 *)((char *)v4 + *v4);
  }
  return 4077LL;
}
