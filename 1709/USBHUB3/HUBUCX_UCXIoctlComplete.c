/*
 * XREFs of HUBUCX_UCXIoctlComplete @ 0x1C001EE40
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq @ 0x1C000136C (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001EA8 (WPP_RECORDER_SF_dD.c)
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 *     McTemplateK0pqq @ 0x1C000A7EC (McTemplateK0pqq.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C00116A0 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C001ED68 (WPP_RECORDER_SF_Ld.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002A814 (HUBMISC_VerifierDbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0038E80 (memmove.c)
 */

void __fastcall HUBUCX_UCXIoctlComplete(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v6; // r8d
  int v7; // edx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 *v15; // r9
  __int64 k; // rcx
  unsigned int m; // edx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 n; // rcx
  unsigned int ii; // edx
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned int jj; // r8d
  __int64 v25; // rax
  unsigned int v26; // edx
  unsigned int v27; // eax
  int v28; // eax
  unsigned __int16 v29; // r9
  unsigned __int8 v30; // dl
  int v31; // edi
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rdx
  PWDF_DRIVER_GLOBALS v35; // rcx
  __int64 v36; // rax
  __int64 kk; // rcx
  unsigned int mm; // edx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // r15
  __int64 v42; // rax
  __int64 v43; // rcx
  _QWORD *i; // r8
  unsigned int j; // edx
  __int64 v46; // rax
  __int64 v47; // rdx
  PWDF_DRIVER_GLOBALS v48; // rcx
  int USBDErrorFromNTStatus; // eax
  __int64 v50; // [rsp+20h] [rbp-38h]
  __int64 v51; // [rsp+28h] [rbp-30h]
  int v52; // [rsp+30h] [rbp-28h]

  v4 = *(_DWORD *)(a3 + 8);
  if ( v4 < 0 )
  {
    WPP_RECORDER_SF_Ld(*(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL), a2, a3, 0xAu, v50);
    v7 = *(_DWORD *)(a4 + 440);
    v8 = (unsigned int)(v7 - 4788231);
    if ( (unsigned int)v8 > 0x38 || (v9 = 0x100000001000001LL, !_bittest64(&v9, v8)) )
    {
      WPP_RECORDER_SF_Ld(*(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL), v7, v6, 0xBu, v50);
      v10 = *(_QWORD *)(a4 + 8);
      v11 = *(unsigned int *)(*(_QWORD *)v10 + 2584LL);
      if ( (v11 & 0x80u) != 0LL )
        HUBMISC_VerifierDbgBreak("HubHwVerifierControllerOperationFailure", v10 + 272);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100000) != 0 )
      {
        LODWORD(v50) = *(_DWORD *)(a4 + 440);
        McTemplateK0pqq(
          v11,
          &USBHUB3_ETW_EVENT_UCX_IOCTL_FAILURE,
          (const GUID *)(a4 + 1516),
          *(_QWORD *)(a4 + 24),
          v50,
          v4);
      }
    }
  }
  switch ( *(_DWORD *)(a4 + 440) )
  {
    case 0x491017:
      if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                          WdfDriverGlobals,
                          *(_QWORD *)(a4 + 432),
                          0LL)
                      + 32) & 3) != 0 )
      {
        v46 = WdfFunctions_01015;
        v47 = *(_QWORD *)(a4 + 2416);
        v4 = -1073741823;
        v48 = WdfDriverGlobals;
        *(_DWORD *)(a4 + 1564) = -2147481856;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(v46 + 2552))(v48, v47, -10000000LL);
      }
      else if ( v4 < 0 )
      {
        if ( v4 == -1073741823 )
        {
          v4 = -1073741670;
          goto LABEL_88;
        }
      }
      else
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
          WdfDriverGlobals,
          *(_QWORD *)(a4 + 2416),
          0LL);
      }
LABEL_87:
      if ( v4 >= 0 )
      {
LABEL_93:
        v31 = ((v4 >> 31) & 0xFFFFFFF8) + 4028;
        goto LABEL_94;
      }
LABEL_88:
      *(_DWORD *)(a4 + 1560) = v4;
      if ( !*(_DWORD *)(a4 + 1564) )
      {
        if ( v4 == -1073741667 )
          USBDErrorFromNTStatus = -1073713152;
        else
          USBDErrorFromNTStatus = HUBPDO_GetUSBDErrorFromNTStatus(v4);
        *(_DWORD *)(a4 + 1564) = USBDErrorFromNTStatus;
      }
      goto LABEL_93;
    case 0x49101B:
      v42 = *(_QWORD *)(a4 + 48);
      if ( v42 )
      {
        v43 = *(_QWORD *)(v42 + 16) - 8LL;
        for ( i = *(_QWORD **)(v42 + 16); (_QWORD *)(v42 + 16) != i; i = (_QWORD *)*i )
        {
          for ( j = 0; j < *(_DWORD *)(v43 + 24); ++j )
          {
            if ( *(_DWORD *)(v43 + 72LL * j + 48) == 5 )
              *(_DWORD *)(v43 + 72LL * j + 48) = 6;
          }
          v43 = *i - 8LL;
        }
      }
      goto LABEL_87;
    case 0x49101F:
      v41 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              WdfDriverGlobals->Driver,
              off_1C005B110);
      if ( v4 < 0 )
      {
        *(_DWORD *)(a4 + 2432) = 1073807361;
        if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
        {
          LODWORD(v50) = v4;
          McTemplateK0pq(
            v40,
            &USBHUB3_ETW_EVENT_SET_ADDRESS_FAILURE,
            (const GUID *)(a4 + 1516),
            *(_QWORD *)(a4 + 24),
            v50);
        }
        if ( (*(_DWORD *)(a4 + 1456) & 0x20000) != 0 && (*(_DWORD *)(a4 + 1636) & 0x10000) == 0 )
        {
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
            2u,
            5u,
            0x11u,
            (__int64)&WPP_3d53ed487f413aabe4c3ad9959a4b253_Traceguids);
          _InterlockedOr((volatile signed __int32 *)(a4 + 1636), 0x10000u);
          _InterlockedIncrement((volatile signed __int32 *)(v41 + 88));
        }
      }
      else
      {
        *(_DWORD *)(a4 + 1648) = *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                                               WdfDriverGlobals,
                                               *(_QWORD *)(a4 + 432),
                                               0LL)
                                           + 28);
        if ( (*(_DWORD *)(a4 + 1636) & 0x10000) != 0 )
        {
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
            2u,
            5u,
            0x10u,
            (__int64)&WPP_3d53ed487f413aabe4c3ad9959a4b253_Traceguids);
          _InterlockedAnd((volatile signed __int32 *)(a4 + 1636), 0xFFFEFFFF);
          _InterlockedDecrement((volatile signed __int32 *)(v41 + 88));
        }
      }
      goto LABEL_87;
    case 0x491023:
      if ( v4 < 0 )
      {
        if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                            WdfDriverGlobals,
                            *(_QWORD *)(a4 + 432),
                            0LL)
                        + 56) & 1) != 0 )
        {
          v31 = 4024;
          goto LABEL_94;
        }
      }
      else
      {
        *(_WORD *)(a4 + 2208) = *(_WORD *)(a4 + 2210);
      }
      goto LABEL_87;
  }
  if ( *(_DWORD *)(a4 + 440) != 4788279 )
    goto LABEL_87;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
          WdfDriverGlobals,
          *(_QWORD *)(a4 + 432),
          0LL);
  v13 = *(_QWORD *)(a4 + 48);
  v14 = v12;
  if ( v13 )
  {
    v15 = (__int64 *)(v13 + 16);
    for ( k = *v15; ; k = *(_QWORD *)(v18 + 8) )
    {
      v18 = k - 8;
      if ( v15 == (__int64 *)(v18 + 8) )
        break;
      for ( m = 0; m < *(_DWORD *)(v18 + 24); ++m )
      {
        if ( *(_DWORD *)(v18 + 72LL * m + 48) == 5 )
          *(_DWORD *)(v18 + 72LL * m + 48) = 6;
      }
    }
  }
  v19 = *(_QWORD *)(a4 + 56);
  if ( v19 )
  {
    for ( n = *(_QWORD *)(v19 + 16); ; n = *(_QWORD *)(v22 + 8) )
    {
      v22 = n - 8;
      if ( v19 + 16 == v22 + 8 )
        break;
      for ( ii = 0; ii < *(_DWORD *)(v22 + 24); ++ii )
      {
        if ( *(_DWORD *)(v22 + 72LL * ii + 48) == 5 )
          *(_DWORD *)(v22 + 72LL * ii + 48) = 6;
      }
    }
  }
  v23 = *(_QWORD *)(a4 + 72);
  if ( v23 )
  {
    for ( jj = 0; jj < *(_DWORD *)(v23 + 24); *(_DWORD *)(v23 + 72 * v25 + 48) = 6 )
      v25 = jj++;
  }
  v26 = *(_DWORD *)(v14 + 76);
  if ( v26 )
  {
    if ( (*(_DWORD *)(v14 + 72) & 4) != 0 )
    {
      v27 = *(unsigned __int16 *)(a4 + 2208);
      if ( v27 <= v26 )
      {
        v52 = *(unsigned __int16 *)(a4 + 2208);
        v29 = 13;
        LODWORD(v51) = *(_DWORD *)(v14 + 76);
        v30 = 2;
      }
      else
      {
        v28 = v27 - v26;
        *(_DWORD *)(a4 + 2576) = v28;
        v52 = v28;
        v29 = 12;
        v30 = 4;
        LODWORD(v51) = *(_DWORD *)(v14 + 76);
      }
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
        v30,
        5u,
        v29,
        (__int64)&WPP_3d53ed487f413aabe4c3ad9959a4b253_Traceguids,
        v51,
        v52);
      goto LABEL_38;
    }
    if ( v4 < 0 )
    {
LABEL_38:
      *(_DWORD *)(a4 + 2576) = 0;
      goto LABEL_39;
    }
    v32 = v26 + *(unsigned __int16 *)(a4 + 2208);
    *(_DWORD *)(a4 + 2576) = v32;
    LODWORD(v51) = *(_DWORD *)(v14 + 76);
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
      4u,
      5u,
      0xEu,
      (__int64)&WPP_3d53ed487f413aabe4c3ad9959a4b253_Traceguids,
      v51,
      v32);
  }
LABEL_39:
  if ( (*(_DWORD *)(v14 + 72) & 7) == 0 )
  {
LABEL_45:
    if ( (*(_DWORD *)(a4 + 1636) & 0x8000) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(a4 + 1636), 0xFFFF7FFF);
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
        4u,
        5u,
        0xFu,
        (__int64)&WPP_3d53ed487f413aabe4c3ad9959a4b253_Traceguids);
      v33 = WdfFunctions_01015;
      v34 = *(_QWORD *)(a4 + 2416);
      v4 = -1073741823;
      v35 = WdfDriverGlobals;
      *(_DWORD *)(a4 + 1564) = -2147481856;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(v33 + 2552))(v35, v34, -10000000LL);
    }
    else if ( *(_DWORD *)(a4 + 112) && v4 >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(a4 + 2416),
        0LL);
    }
    else if ( v4 == -1073741823 )
    {
      v4 = -1073741670;
    }
    v36 = *(_QWORD *)(a4 + 48);
    if ( v36 )
    {
      for ( kk = *(_QWORD *)(v36 + 16); ; kk = *(_QWORD *)(v39 + 8) )
      {
        v39 = kk - 8;
        if ( v36 + 16 == v39 + 8 )
          break;
        for ( mm = 0; mm < *(_DWORD *)(v39 + 24); ++mm )
        {
          if ( *(_DWORD *)(v39 + 72LL * mm + 48) == 3 )
            *(_DWORD *)(v39 + 72LL * mm + 48) = ((v4 >> 31) & 2) + 4;
        }
      }
    }
    *(_DWORD *)(a4 + 128) = 0;
    *(_DWORD *)(a4 + 112) = 0;
    *(_DWORD *)(a4 + 144) = 0;
    goto LABEL_87;
  }
  v4 = -1073741823;
  *(_DWORD *)(a4 + 1564) = -2147481856;
  if ( !*(_WORD *)(a4 + 2208) )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2552))(
      WdfDriverGlobals,
      *(_QWORD *)(a4 + 2416),
      -10000000LL);
    goto LABEL_45;
  }
  memmove(
    (void *)(*(_QWORD *)(a4 + 136) + 8LL * *(unsigned int *)(a4 + 144)),
    *(const void **)(a4 + 120),
    8LL * *(unsigned int *)(a4 + 128));
  *(_DWORD *)(a4 + 144) += *(_DWORD *)(a4 + 128);
  v31 = 4024;
  *(_DWORD *)(a4 + 128) = 0;
  *(_DWORD *)(a4 + 1560) = HUBPDO_GetUSBDErrorFromNTStatus(-1073741823);
LABEL_94:
  HUBSM_AddEvent(a4 + 504, v31);
}
