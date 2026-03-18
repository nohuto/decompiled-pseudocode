/*
 * XREFs of Controller_WdfEvtWatchdogTimerFunc @ 0x1C0001640
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_q @ 0x1C0004F28 (WPP_RECORDER_SF_q.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0008150 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00095DC (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x1C0009748 (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     XilCoreCommonBuffer_FreeUnusedResources @ 0x1C003F15C (XilCoreCommonBuffer_FreeUnusedResources.c)
 *     Register_ReadSecureMmio @ 0x1C005AEA0 (Register_ReadSecureMmio.c)
 */

__int64 __fastcall Controller_WdfEvtWatchdogTimerFunc(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r15
  __int64 v3; // rcx
  int *v4; // rdx
  int v5; // eax
  __int64 v6; // rdx
  int v7; // edx
  int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned int v12; // r13d
  __int64 v13; // rdi
  __int64 *v14; // rbx
  unsigned int v15; // r12d
  unsigned int v16; // eax
  unsigned int i; // r8d
  __int64 *v18; // rax
  __int64 *v19; // rdx
  __int64 **v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  __int64 *v24; // rcx
  __int64 **v25; // rax
  unsigned int v26; // r8d
  __int64 v27; // rbx
  __int64 result; // rax
  __int64 v29; // [rsp+78h] [rbp+10h] BYREF

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2568))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v1,
         off_1C004B430);
  if ( *(_BYTE *)(v2 + 441) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      "Code Path Requires Passive Level",
      0LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      9858LL);
  v3 = *(_QWORD *)(v2 + 88);
  v4 = (int *)(*(_QWORD *)(v3 + 32) + 4LL);
  if ( *(_BYTE *)(*(_QWORD *)(v3 + 8) + 441LL) )
  {
    Register_ReadSecureMmio(v3, (int)v4, 2, 1, &v29);
    v5 = v29;
  }
  else
  {
    v5 = *v4;
  }
  if ( v5 == -1 )
  {
    LOBYTE(v4) = 3;
    WPP_RECORDER_SF_(
      *(_QWORD *)(v2 + 72),
      (_DWORD)v4,
      4,
      260,
      (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
    LOBYTE(v6) = 1;
    Controller_SetControllerGone(v2, v6);
LABEL_14:
    LOBYTE(v7) = 1;
    WPP_RECORDER_SF_(*(_QWORD *)(v2 + 72), v7, 4, 164, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
    goto LABEL_61;
  }
  if ( (v5 & 4) != 0 )
  {
    LOBYTE(v4) = 1;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v2 + 72),
      (_DWORD)v4,
      4,
      261,
      (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
      v5);
    Controller_HwVerifierBreakIfEnabled(v2, 0, 0, 2, (__int64)"Controller reported Host System Error", 0LL, 0LL);
    v8 = 4097;
LABEL_13:
    Controller_ReportFatalError(v2, 2, v8, 0, 0LL, 0LL);
    goto LABEL_14;
  }
  if ( (v5 & 0x1000) != 0 )
  {
    LOBYTE(v4) = 1;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v2 + 72),
      (_DWORD)v4,
      4,
      262,
      (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
      v5);
    Controller_HwVerifierBreakIfEnabled(v2, 0, 0, 4, (__int64)"Controller reported Host Controller Error", 0LL, 0LL);
    v8 = 4098;
    goto LABEL_13;
  }
  if ( ++*(_DWORD *)(v2 + 340) == 60 )
  {
    *(_QWORD *)(v2 + 336) = 0LL;
    WPP_RECORDER_SF_(*(_QWORD *)(v2 + 72), 4, 4, 167, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
  }
  v9 = *(_QWORD *)(v2 + 120);
  v29 = v9;
  if ( v9 )
  {
    if ( *(_BYTE *)(*(_QWORD *)v9 + 441LL) && KeGetCurrentIrql() )
    {
      Debug_FreAssertMsg(
        "Code Path Requires Passive Level",
        0LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\commonbuffer.c",
        657LL);
      v9 = v29;
    }
    if ( !KeGetCurrentIrql() || *(_QWORD *)(v9 + 72) )
    {
      v10 = v9 + 88;
      *(_BYTE *)(v9 + 113) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 104));
      v12 = 0;
      v13 = v10 + 36;
      do
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v11) = 5;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(v10 + 8) + 72LL),
            v11,
            8,
            25,
            (__int64)&WPP_5fc7d39ce5cf31fa9112447a0ca2d111_Traceguids,
            v12,
            *(_DWORD *)(v13 + 24));
        }
        v14 = *(__int64 **)(v13 + 44);
        v15 = *(_DWORD *)(v13 + 16);
        while ( v14 != (__int64 *)(v13 + 44) )
        {
          if ( *(_DWORD *)(v13 + 24) <= v15 )
            break;
          if ( *((_BYTE *)v14 + 16) )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v11) = 5;
              WPP_RECORDER_SF_q(
                *(_QWORD *)(*(_QWORD *)(v10 + 8) + 72LL),
                v11,
                8,
                22,
                (__int64)&WPP_5fc7d39ce5cf31fa9112447a0ca2d111_Traceguids,
                (char)v14);
            }
            v16 = *(_DWORD *)v13;
            for ( i = 0; i < *(_DWORD *)v13; v16 = *(_DWORD *)v13 )
            {
              v18 = &v14[11 * i + 4];
              v19 = (__int64 *)*v18;
              if ( *(__int64 **)(*v18 + 8) != v18 || (v20 = (__int64 **)v18[1], *v20 != v18) )
                __fastfail(3u);
              *v20 = v19;
              v19[1] = (__int64)v20;
              v18[1] = (__int64)v18;
              *v18 = (__int64)v18;
              v21 = v18 + 6;
              v22 = *v21;
              if ( *(_QWORD **)(*v21 + 8LL) != v21 || (v23 = (_QWORD *)v21[1], (_QWORD *)*v23 != v21) )
                __fastfail(3u);
              *v23 = v22;
              ++i;
              *(_QWORD *)(v22 + 8) = v23;
              v21[1] = v21;
              *v21 = v21;
            }
            *(_DWORD *)(v13 + 24) -= v16;
            *(_DWORD *)(v13 + 20) -= v16;
            v24 = (__int64 *)*v14;
            if ( *(__int64 **)(*v14 + 8) != v14 || (v25 = (__int64 **)v14[1], *v25 != v14) )
              __fastfail(3u);
            *v25 = v24;
            v24[1] = (__int64)v25;
            v11 = *(_QWORD *)(v10 + 192);
            if ( *(_QWORD *)v11 != v10 + 184 )
              __fastfail(3u);
            *v14 = v10 + 184;
            v14[1] = v11;
            *(_QWORD *)v11 = v14;
            *(_QWORD *)(v10 + 192) = v14;
            v14 = v24;
            ++*(_DWORD *)(v10 + 176);
          }
          else
          {
            v26 = *(_DWORD *)v13;
            LODWORD(v11) = 0;
            if ( *(_DWORD *)v13 )
            {
              do
              {
                if ( v14[11 * (unsigned int)v11 + 13] )
                  break;
                LODWORD(v11) = v11 + 1;
              }
              while ( (unsigned int)v11 < v26 );
            }
            if ( (_DWORD)v11 == v26 )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LOBYTE(v11) = 5;
                WPP_RECORDER_SF_q(
                  *(_QWORD *)(*(_QWORD *)(v10 + 8) + 72LL),
                  v11,
                  8,
                  23,
                  (__int64)&WPP_5fc7d39ce5cf31fa9112447a0ca2d111_Traceguids,
                  (char)v14);
              }
              *((_BYTE *)v14 + 16) = 1;
              --*(_DWORD *)(v10 + 204);
            }
            v14 = (__int64 *)*v14;
          }
        }
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v11) = 5;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(v10 + 8) + 72LL),
            v11,
            8,
            26,
            (__int64)&WPP_5fc7d39ce5cf31fa9112447a0ca2d111_Traceguids,
            v12,
            *(_DWORD *)(v13 + 24));
        }
        ++v12;
        v13 += 64LL;
      }
      while ( v12 < 2 );
      v27 = *(_QWORD *)(v10 + 184);
      KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 16), *(_BYTE *)(v10 + 25));
      if ( v27 != v10 + 184 )
      {
        if ( KeGetCurrentIrql() )
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3040))(
            WdfDriverGlobals,
            *(_QWORD *)(v29 + 72));
        else
          XilCoreCommonBuffer_FreeUnusedResources(v10);
      }
    }
  }
LABEL_61:
  result = KeGetCurrentIrql();
  if ( !(_BYTE)result )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
             WdfDriverGlobals,
             *(_QWORD *)(v2 + 296),
             -50000000LL);
  return result;
}
