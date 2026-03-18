/*
 * XREFs of HUBPDO_ValidateSelectInterfaceUrb @ 0x1C0012E78
 * Callers:
 *     HUBDSM_ValidatingSelectInterfaceUrbFromConfigured @ 0x1C001A230 (HUBDSM_ValidatingSelectInterfaceUrbFromConfigured.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001EA8 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00110D0 (WPP_RECORDER_SF_dq.c)
 *     HUBPDO_InitializeInterfaceInformation @ 0x1C0012C40 (HUBPDO_InitializeInterfaceInformation.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00391C0 (memset.c)
 */

__int64 __fastcall HUBPDO_ValidateSelectInterfaceUrb(__int64 a1)
{
  __int64 v1; // r13
  __int64 v3; // rdx
  unsigned __int16 *v4; // rbx
  int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r13
  unsigned __int16 *v9; // r13
  int v10; // r12d
  int v11; // ebx
  __int64 result; // rax
  unsigned __int16 v13; // r9
  __int64 v14; // r8
  unsigned int *v15; // rcx
  unsigned int v16; // edx
  unsigned __int16 v17; // r9
  __int64 v18; // [rsp+40h] [rbp-68h]
  __int64 v19; // [rsp+48h] [rbp-60h]
  _QWORD v20[5]; // [rsp+50h] [rbp-58h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v19 = v1;
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
  v18 = v6;
  if ( v6 || *(_DWORD *)(v1 + 388) != -1 )
  {
    if ( v6 != *(_QWORD *)(a1 + 48) )
    {
      v13 = 37;
      if ( *(_WORD *)(v20[1] + 2LL) != 1 )
        v13 = 38;
      goto LABEL_21;
    }
  }
  else
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      3u,
      5u,
      0x24u,
      (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids);
    v7 = *(_QWORD *)(a1 + 48);
    *((_QWORD *)v4 + 3) = v7;
    v18 = v7;
  }
  v8 = 16LL;
  if ( v4[1] != 1 )
    v8 = 24LL;
  v9 = &v4[v8];
  *((_QWORD *)v9 + 1) = -1LL;
  if ( v4[1] != 1 )
  {
    v14 = *((unsigned int *)v4 + 8);
    if ( (_DWORD)v14 )
    {
      v15 = (unsigned int *)*((_QWORD *)v4 + 5);
      v16 = 0;
      while ( (char *)v15 + *v15 <= (char *)v4 + *v4 )
      {
        if ( !*((_WORD *)v15 + 2) )
        {
          v17 = 42;
          goto LABEL_32;
        }
        ++v16;
        v15 = (unsigned int *)((char *)v15 + *v15);
        if ( v16 >= (unsigned int)v14 )
          goto LABEL_9;
      }
      v17 = 41;
LABEL_32:
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        v14,
        v17,
        (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
        v16,
        v4);
      goto LABEL_22;
    }
    v13 = 40;
LABEL_21:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v13,
      (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids);
LABEL_22:
    v11 = -2147482880;
LABEL_11:
    *(_DWORD *)(a1 + 1564) = v11;
    result = 4065LL;
    if ( v11 > -1073738240 )
    {
      switch ( v11 )
      {
        case -1073737728:
          v5 = -1073741670;
          goto LABEL_42;
        case -1073713152:
          v5 = -1073741810;
          goto LABEL_42;
        case -1073676288:
          v5 = -1073741536;
          goto LABEL_42;
      }
      if ( (unsigned int)v11 <= 1 )
      {
LABEL_42:
        *(_DWORD *)(a1 + 1560) = v5;
        return result;
      }
    }
    else
    {
      if ( v11 == -1073738240 )
      {
        v5 = -1073741637;
        goto LABEL_42;
      }
      if ( v11 == -2147483136 || v11 == -2147482880 || v11 == -2147482112 || v11 == -1073739264 )
      {
        v5 = -1073741811;
        goto LABEL_42;
      }
    }
    v5 = -1073741823;
    goto LABEL_42;
  }
  v10 = *v9 + 32;
  if ( v10 != *v4 )
  {
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      3u,
      5u,
      0x27u,
      (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
      *v4,
      *v9 + 32);
    *v4 = v10;
  }
LABEL_9:
  v11 = HUBPDO_InitializeInterfaceInformation(v19, v9, v18);
  if ( v11 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      3u,
      5u,
      0x2Bu,
      (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids);
    goto LABEL_11;
  }
  return 4077LL;
}
