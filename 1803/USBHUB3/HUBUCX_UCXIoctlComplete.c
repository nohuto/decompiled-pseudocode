/*
 * XREFs of HUBUCX_UCXIoctlComplete @ 0x1C001F780
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq @ 0x1C000135C (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E98 (WPP_RECORDER_SF_dD.c)
 *     HUBSM_AddEvent @ 0x1C0009C18 (HUBSM_AddEvent.c)
 *     McTemplateK0pqq @ 0x1C000A7AC (McTemplateK0pqq.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C0011F38 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C001F6A8 (WPP_RECORDER_SF_Ld.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002B5EC (HUBMISC_VerifierDbgBreak.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0039BC0 (memmove.c)
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
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  _QWORD *v16; // r8
  __int64 v17; // rdx
  unsigned int j; // ecx
  _QWORD *v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // r8
  _QWORD *k; // rax
  unsigned int m; // edx
  _QWORD *v24; // rcx
  __int64 v25; // rdx
  unsigned int n; // r8d
  __int64 v27; // rax
  unsigned int v28; // edx
  unsigned int v29; // ecx
  unsigned __int16 v30; // r8
  __int64 v31; // r10
  unsigned __int8 v32; // al
  int v33; // edi
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rdx
  PWDF_DRIVER_GLOBALS v37; // rcx
  __int64 v38; // r8
  _QWORD **v39; // r8
  _QWORD *ii; // rax
  unsigned int jj; // edx
  _QWORD *v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // r14
  __int64 v45; // r8
  _QWORD *v46; // r8
  __int64 v47; // rcx
  unsigned int i; // edx
  _QWORD *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  PWDF_DRIVER_GLOBALS v52; // rcx
  int USBDErrorFromNTStatus; // eax
  __int64 v54; // [rsp+20h] [rbp-38h]
  __int64 v55; // [rsp+28h] [rbp-30h]

  v4 = *(_DWORD *)(a3 + 8);
  if ( v4 < 0 )
  {
    WPP_RECORDER_SF_Ld(*(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL), a2, a3, 0xAu, v54);
    v7 = *(_DWORD *)(a4 + 440);
    v8 = (unsigned int)(v7 - 4788231);
    if ( (unsigned int)v8 > 0x38 || (v9 = 0x100000001000001LL, !_bittest64(&v9, v8)) )
    {
      WPP_RECORDER_SF_Ld(*(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL), v7, v6, 0xBu, v54);
      v10 = *(_QWORD *)(a4 + 8);
      v11 = *(unsigned int *)(*(_QWORD *)v10 + 2584LL);
      if ( (v11 & 0x80u) != 0LL )
        HUBMISC_VerifierDbgBreak("HubHwVerifierControllerOperationFailure", v10 + 272);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100000) != 0 )
      {
        LODWORD(v54) = *(_DWORD *)(a4 + 440);
        McTemplateK0pqq(
          v11,
          &USBHUB3_ETW_EVENT_UCX_IOCTL_FAILURE,
          (const GUID *)(a4 + 1516),
          *(_QWORD *)(a4 + 24),
          v54,
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
        v50 = WdfFunctions_01015;
        v51 = *(_QWORD *)(a4 + 2416);
        v4 = -1073741823;
        v52 = WdfDriverGlobals;
        *(_DWORD *)(a4 + 1564) = -2147481856;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(v50 + 2552))(v52, v51, -10000000LL);
      }
      else if ( v4 < 0 )
      {
        if ( v4 == -1073741823 )
        {
          v4 = -1073741670;
          goto LABEL_87;
        }
      }
      else
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
          WdfDriverGlobals,
          *(_QWORD *)(a4 + 2416),
          0LL);
      }
LABEL_86:
      if ( v4 >= 0 )
      {
LABEL_92:
        v33 = ((v4 >> 31) & 0xFFFFFFF8) + 4028;
        goto LABEL_93;
      }
LABEL_87:
      *(_DWORD *)(a4 + 1560) = v4;
      if ( !*(_DWORD *)(a4 + 1564) )
      {
        if ( v4 == -1073741667 )
          USBDErrorFromNTStatus = -1073713152;
        else
          USBDErrorFromNTStatus = HUBPDO_GetUSBDErrorFromNTStatus(v4);
        *(_DWORD *)(a4 + 1564) = USBDErrorFromNTStatus;
      }
      goto LABEL_92;
    case 0x49101B:
      v45 = *(_QWORD *)(a4 + 48);
      if ( v45 )
      {
        v46 = (_QWORD *)(v45 + 16);
        v47 = *v46 - 8LL;
        if ( v46 != (_QWORD *)*v46 )
        {
          do
          {
            for ( i = 0; i < *(_DWORD *)(v47 + 24); ++i )
            {
              if ( *(_DWORD *)(v47 + 72LL * i + 48) == 5 )
                *(_DWORD *)(v47 + 72LL * i + 48) = 6;
            }
            v49 = *(_QWORD **)(v47 + 8);
            v47 = (__int64)(v49 - 1);
          }
          while ( v46 != v49 );
        }
      }
      goto LABEL_86;
    case 0x49101F:
      v44 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              WdfDriverGlobals->Driver,
              off_1C005B110);
      if ( v4 < 0 )
      {
        *(_DWORD *)(a4 + 2432) = 1073807361;
        if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
        {
          LODWORD(v54) = v4;
          McTemplateK0pq(
            v43,
            &USBHUB3_ETW_EVENT_SET_ADDRESS_FAILURE,
            (const GUID *)(a4 + 1516),
            *(_QWORD *)(a4 + 24),
            v54);
        }
        if ( (*(_DWORD *)(a4 + 1456) & 0x20000) != 0 && (*(_DWORD *)(a4 + 1636) & 0x10000) == 0 )
        {
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
            2u,
            5u,
            0x11u,
            (__int64)&WPP_ac19941ca8303ac9317dca70d7291dce_Traceguids);
          _InterlockedOr((volatile signed __int32 *)(a4 + 1636), 0x10000u);
          _InterlockedIncrement((volatile signed __int32 *)(v44 + 88));
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
            (__int64)&WPP_ac19941ca8303ac9317dca70d7291dce_Traceguids);
          _InterlockedAnd((volatile signed __int32 *)(a4 + 1636), 0xFFFEFFFF);
          _InterlockedDecrement((volatile signed __int32 *)(v44 + 88));
        }
      }
      goto LABEL_86;
    case 0x491023:
      if ( v4 < 0 )
      {
        if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                            WdfDriverGlobals,
                            *(_QWORD *)(a4 + 432),
                            0LL)
                        + 56) & 1) != 0 )
        {
          v33 = 4024;
          goto LABEL_93;
        }
      }
      else
      {
        *(_WORD *)(a4 + 2208) = *(_WORD *)(a4 + 2210);
      }
      goto LABEL_86;
  }
  if ( *(_DWORD *)(a4 + 440) != 4788279 )
    goto LABEL_86;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
          WdfDriverGlobals,
          *(_QWORD *)(a4 + 432),
          0LL);
  v13 = *(_QWORD *)(a4 + 48);
  v14 = 6LL;
  v15 = v12;
  if ( v13 )
  {
    v16 = (_QWORD *)(v13 + 16);
    v17 = *v16 - 8LL;
    if ( v16 != (_QWORD *)*v16 )
    {
      do
      {
        for ( j = 0; j < *(_DWORD *)(v17 + 24); ++j )
        {
          if ( *(_DWORD *)(v17 + 72LL * j + 48) == 5 )
            *(_DWORD *)(v17 + 72LL * j + 48) = 6;
        }
        v19 = *(_QWORD **)(v17 + 8);
        v17 = (__int64)(v19 - 1);
      }
      while ( v16 != v19 );
    }
  }
  v20 = *(_QWORD *)(a4 + 56);
  if ( v20 )
  {
    v21 = (_QWORD *)(v20 + 16);
    for ( k = *(_QWORD **)(v20 + 16); ; k = (_QWORD *)*k )
    {
      v24 = k - 1;
      if ( v21 == k )
        break;
      for ( m = 0; m < *((_DWORD *)v24 + 6); ++m )
      {
        if ( LODWORD(v24[9 * m + 6]) == 5 )
          LODWORD(v24[9 * m + 6]) = 6;
      }
    }
  }
  v25 = *(_QWORD *)(a4 + 72);
  if ( v25 )
  {
    for ( n = 0; n < *(_DWORD *)(v25 + 24); *(_DWORD *)(v25 + 72 * v27 + 48) = 6 )
      v27 = n++;
  }
  v28 = *(_DWORD *)(v15 + 76);
  if ( v28 )
  {
    if ( (*(_DWORD *)(v15 + 72) & 4) != 0 )
    {
      v29 = *(unsigned __int16 *)(a4 + 2208);
      if ( v29 <= v28 )
      {
        v30 = 13;
        v31 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL);
        v32 = 2;
      }
      else
      {
        v29 -= v28;
        *(_DWORD *)(a4 + 2584) = v29;
        v30 = 12;
        v28 = *(_DWORD *)(v15 + 76);
        v31 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL);
        v32 = 4;
      }
      LODWORD(v55) = v28;
      WPP_RECORDER_SF_dD(v31, v32, 5u, v30, (__int64)&WPP_ac19941ca8303ac9317dca70d7291dce_Traceguids, v55, v29);
      goto LABEL_37;
    }
    if ( v4 < 0 )
    {
LABEL_37:
      *(_DWORD *)(a4 + 2584) = 0;
      goto LABEL_38;
    }
    v34 = v28 + *(unsigned __int16 *)(a4 + 2208);
    *(_DWORD *)(a4 + 2584) = v34;
    LODWORD(v55) = *(_DWORD *)(v15 + 76);
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
      4u,
      5u,
      0xEu,
      (__int64)&WPP_ac19941ca8303ac9317dca70d7291dce_Traceguids,
      v55,
      v34);
  }
LABEL_38:
  if ( (*(_DWORD *)(v15 + 72) & 7) == 0 )
  {
LABEL_44:
    if ( (*(_DWORD *)(a4 + 1636) & 0x8000) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(a4 + 1636), 0xFFFF7FFF);
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
        4u,
        5u,
        0xFu,
        (__int64)&WPP_ac19941ca8303ac9317dca70d7291dce_Traceguids);
      v35 = WdfFunctions_01015;
      v36 = *(_QWORD *)(a4 + 2416);
      v4 = -1073741823;
      v37 = WdfDriverGlobals;
      *(_DWORD *)(a4 + 1564) = -2147481856;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(v35 + 2552))(v37, v36, -10000000LL);
    }
    else if ( *(_DWORD *)(a4 + 112) && v4 >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(a4 + 2416),
        0LL,
        v14);
    }
    else if ( v4 == -1073741823 )
    {
      v4 = -1073741670;
    }
    v38 = *(_QWORD *)(a4 + 48);
    if ( v38 )
    {
      v39 = (_QWORD **)(v38 + 16);
      for ( ii = *v39; ; ii = (_QWORD *)*ii )
      {
        v42 = ii - 1;
        if ( v39 == ii )
          break;
        for ( jj = 0; jj < *((_DWORD *)v42 + 6); ++jj )
        {
          if ( LODWORD(v42[9 * jj + 6]) == 3 )
            LODWORD(v42[9 * jj + 6]) = ((v4 >> 31) & 2) + 4;
        }
      }
    }
    *(_DWORD *)(a4 + 128) = 0;
    *(_DWORD *)(a4 + 112) = 0;
    *(_DWORD *)(a4 + 144) = 0;
    goto LABEL_86;
  }
  v4 = -1073741823;
  *(_DWORD *)(a4 + 1564) = -2147481856;
  if ( !*(_WORD *)(a4 + 2208) )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 2552))(
      WdfDriverGlobals,
      *(_QWORD *)(a4 + 2416),
      -10000000LL,
      v14);
    goto LABEL_44;
  }
  memmove(
    (void *)(*(_QWORD *)(a4 + 136) + 8LL * *(unsigned int *)(a4 + 144)),
    *(const void **)(a4 + 120),
    8LL * *(unsigned int *)(a4 + 128));
  *(_DWORD *)(a4 + 144) += *(_DWORD *)(a4 + 128);
  v33 = 4024;
  *(_DWORD *)(a4 + 128) = 0;
  *(_DWORD *)(a4 + 1560) = HUBPDO_GetUSBDErrorFromNTStatus(-1073741823);
LABEL_93:
  HUBSM_AddEvent(a4 + 504, v33);
}
