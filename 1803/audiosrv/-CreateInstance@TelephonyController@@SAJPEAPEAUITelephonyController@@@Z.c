/*
 * XREFs of ?CreateInstance@TelephonyController@@SAJPEAPEAUITelephonyController@@@Z @ 0x18011A534
 * Callers:
 *     ?Initialize@PhoneTopology@@MEAAJPEAUIMMDevice@@@Z @ 0x180057240 (-Initialize@PhoneTopology@@MEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000B390 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??0TelephonyController@@IEAA@XZ @ 0x18011A12C (--0TelephonyController@@IEAA@XZ.c)
 *     ?GetSupportedCellularRoutingPairs@TelephonyController@@AEAAJXZ @ 0x18011A974 (-GetSupportedCellularRoutingPairs@TelephonyController@@AEAAJXZ.c)
 *     ?GetSupportedVolumeStepping@TelephonyController@@AEAAJXZ @ 0x18011AB98 (-GetSupportedVolumeStepping@TelephonyController@@AEAAJXZ.c)
 *     ?Initialize@TelephonyController@@IEAAJXZ @ 0x18011AE04 (-Initialize@TelephonyController@@IEAAJXZ.c)
 *     ?ResetCallState@TelephonyController@@AEAAJXZ @ 0x18011BE84 (-ResetCallState@TelephonyController@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TelephonyController::CreateInstance(struct ITelephonyController **a1)
{
  unsigned int v2; // edi
  TelephonyController *v3; // rbx
  TelephonyController *v4; // rax
  __int64 v5; // rdx
  TelephonyController *v6; // rax
  struct ITelephonyController *v7; // rsi
  int SupportedCellularRoutingPairs; // eax

  v2 = 0;
  v3 = 0LL;
  if ( a1 )
  {
    *a1 = 0LL;
    v4 = (TelephonyController *)operator new(0xE8uLL);
    if ( v4 )
    {
      v6 = TelephonyController::TelephonyController(v4, v5);
      v7 = v6;
      v3 = v6;
      if ( v6 )
      {
        SupportedCellularRoutingPairs = TelephonyController::Initialize(v6);
        if ( SupportedCellularRoutingPairs < 0
          || (SupportedCellularRoutingPairs = TelephonyController::GetSupportedCellularRoutingPairs(v7),
              SupportedCellularRoutingPairs < 0)
          || (SupportedCellularRoutingPairs = TelephonyController::GetSupportedVolumeStepping(v7),
              SupportedCellularRoutingPairs < 0)
          || (SupportedCellularRoutingPairs = TelephonyController::ResetCallState(v7), SupportedCellularRoutingPairs < 0) )
        {
          v2 = SupportedCellularRoutingPairs;
        }
        else
        {
          v3 = 0LL;
          *a1 = v7;
        }
        goto LABEL_13;
      }
    }
    else
    {
      v3 = 0LL;
    }
    v2 = -2147024882;
  }
  else
  {
    v2 = -2147467261;
  }
LABEL_13:
  if ( v3 )
    (*(void (__fastcall **)(TelephonyController *))(*(_QWORD *)v3 + 16LL))(v3);
  return v2;
}
