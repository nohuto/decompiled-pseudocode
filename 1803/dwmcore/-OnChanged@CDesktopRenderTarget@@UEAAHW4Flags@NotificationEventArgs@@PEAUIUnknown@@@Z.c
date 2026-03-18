/*
 * XREFs of ?OnChanged@CDesktopRenderTarget@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180044480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopRenderTarget::OnChanged(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a3 && a3 == *(_QWORD *)(a1 + 360) )
    *(_BYTE *)(a1 + 273) = 1;
  else
    *(_BYTE *)(a1 + 272) = 1;
  return 1LL;
}
