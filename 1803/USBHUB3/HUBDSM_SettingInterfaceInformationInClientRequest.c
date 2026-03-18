/*
 * XREFs of HUBDSM_SettingInterfaceInformationInClientRequest @ 0x1C001AA70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0039F00 (memset.c)
 */

__int64 __fastcall HUBDSM_SettingInterfaceInformationInClientRequest(__int64 a1)
{
  __int64 *v1; // r12
  __int64 v2; // r13
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  __int64 v6; // r15
  __int64 v7; // rbx
  _QWORD *v8; // rax
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
  v4 = 32LL;
  if ( *(_WORD *)(v12[1] + 2LL) != 1 )
    v4 = 48LL;
  v5 = (_QWORD *)(v1[6] + 16);
  v6 = v4 + v12[1];
  v7 = *v5 - 8LL;
  if ( v5 != (_QWORD *)*v5 )
  {
    while ( *(_BYTE *)(*(_QWORD *)(v7 + 32) + 2LL) != *(_BYTE *)(v6 + 2) )
    {
      v8 = *(_QWORD **)(v7 + 8);
      v7 = (__int64)(v8 - 1);
      if ( v5 == v8 )
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
          (__int64)&WPP_6dc2a34f378238ba241799b961c3ba51_Traceguids);
      *(_QWORD *)(v7 + 72 * i + 56) = v10;
      *(_QWORD *)(v6 + 24 * i + 32) = v10;
      (*(void (__fastcall **)(_QWORD))(v2 + 456))(*(_QWORD *)(v7 + 72 * i + 40));
    }
  }
  return 4077LL;
}
