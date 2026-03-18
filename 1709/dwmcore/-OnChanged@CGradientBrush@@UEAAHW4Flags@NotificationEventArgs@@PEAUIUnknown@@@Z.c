/*
 * XREFs of ?OnChanged@CGradientBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800719B0
 * Callers:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?UpdateStop@CGradientBrush@@IEAA_NPEAVCColorGradientStop@@@Z @ 0x1800718C4 (-UpdateStop@CGradientBrush@@IEAA_NPEAVCColorGradientStop@@@Z.c)
 */

__int64 __fastcall CGradientBrush::OnChanged(CGradientBrush *a1, int a2, struct CColorGradientStop *a3)
{
  if ( a2 == 10 )
  {
    if ( !a3 )
      return 1LL;
    CGradientBrush::UpdateStop(a1, a3);
  }
  if ( a2 == 5 )
    *((_QWORD *)a1 + 9) = 0LL;
  return 1LL;
}
