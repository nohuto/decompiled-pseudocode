/*
 * XREFs of HUBPDO_ValidateSelectInterfaceUrb @ 0x1C00136F8
 * Callers:
 *     HUBDSM_ValidatingSelectInterfaceUrbFromConfigured @ 0x1C001AD40 (HUBDSM_ValidatingSelectInterfaceUrbFromConfigured.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E98 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0011398 (WPP_RECORDER_SF_dq.c)
 *     HUBPDO_InitializeInterfaceInformation @ 0x1C00134C8 (HUBPDO_InitializeInterfaceInformation.c)
 *     __security_check_cookie @ 0x1C00396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0039F00 (memset.c)
 */

__int64 __fastcall HUBPDO_ValidateSelectInterfaceUrb(__int64 a1)
{
  __int64 v1; // r15
  __int64 v3; // rdx
  unsigned __int16 *v4; // rbx
  int v5; // edi
  __int64 v6; // rdx
  unsigned __int16 v7; // cx
  __int64 v8; // rax
  __int64 v9; // r13
  unsigned __int16 *v10; // r13
  int v11; // r14d
  int v12; // ebx
  __int64 result; // rax
  unsigned __int16 v14; // r9
  __int64 v15; // r8
  unsigned int *v16; // rcx
  unsigned int v17; // edx
  unsigned __int16 v18; // r9
  __int64 v19; // [rsp+40h] [rbp-68h]
  _QWORD v20[5]; // [rsp+50h] [rbp-58h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  memset(v20, 0, sizeof(v20));
  v3 = *(_QWORD *)(a1 + 456);
  LOWORD(v20[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v3,
    v20);
  v4 = (unsigned __int16 *)v20[1];
  v5 = 0;
  v6 = *(_QWORD *)(v20[1] + 24LL);
  v7 = *(_WORD *)(v20[1] + 2LL);
  v19 = v6;
  if ( v6 || *(_DWORD *)(v1 + 388) != -1 )
  {
    if ( v6 != *(_QWORD *)(a1 + 48) )
    {
      v14 = (v7 != 1) + 37;
      goto LABEL_20;
    }
  }
  else
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      3u,
      5u,
      0x24u,
      (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids);
    v8 = *(_QWORD *)(a1 + 48);
    *((_QWORD *)v4 + 3) = v8;
    v7 = v4[1];
    v19 = v8;
  }
  v9 = 16LL;
  if ( v7 != 1 )
    v9 = 24LL;
  v10 = &v4[v9];
  *((_QWORD *)v10 + 1) = -1LL;
  if ( v4[1] != 1 )
  {
    v15 = *((unsigned int *)v4 + 8);
    if ( (_DWORD)v15 )
    {
      v16 = (unsigned int *)*((_QWORD *)v4 + 5);
      v17 = 0;
      while ( (char *)v16 + *v16 <= (char *)v4 + *v4 )
      {
        if ( !*((_WORD *)v16 + 2) )
        {
          v18 = 42;
          goto LABEL_31;
        }
        ++v17;
        v16 = (unsigned int *)((char *)v16 + *v16);
        if ( v17 >= (unsigned int)v15 )
          goto LABEL_9;
      }
      v18 = 41;
LABEL_31:
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        v15,
        v18,
        (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
        v17,
        v4);
      goto LABEL_21;
    }
    v14 = 40;
LABEL_20:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v14,
      (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids);
LABEL_21:
    v12 = -2147482880;
LABEL_11:
    *(_DWORD *)(a1 + 1564) = v12;
    result = 4065LL;
    if ( v12 > -1073738240 )
    {
      switch ( v12 )
      {
        case -1073737728:
          v5 = -1073741670;
          goto LABEL_41;
        case -1073713152:
          v5 = -1073741810;
          goto LABEL_41;
        case -1073676288:
          v5 = -1073741536;
          goto LABEL_41;
      }
      if ( (unsigned int)v12 <= 1 )
      {
LABEL_41:
        *(_DWORD *)(a1 + 1560) = v5;
        return result;
      }
    }
    else
    {
      if ( v12 == -1073738240 )
      {
        v5 = -1073741637;
        goto LABEL_41;
      }
      if ( v12 == -2147483136 || v12 == -2147482880 || v12 == -2147482112 || v12 == -1073739264 )
      {
        v5 = -1073741811;
        goto LABEL_41;
      }
    }
    v5 = -1073741823;
    goto LABEL_41;
  }
  v11 = *v10 + 32;
  if ( v11 != *v4 )
  {
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      3u,
      5u,
      0x27u,
      (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
      *v4,
      *v10 + 32);
    *v4 = v11;
  }
LABEL_9:
  v12 = HUBPDO_InitializeInterfaceInformation(v1, v10, v19);
  if ( v12 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      3u,
      5u,
      0x2Bu,
      (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids);
    goto LABEL_11;
  }
  return 4077LL;
}
