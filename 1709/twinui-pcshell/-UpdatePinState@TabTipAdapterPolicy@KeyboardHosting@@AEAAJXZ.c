/*
 * XREFs of ?UpdatePinState@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x1801ABF20
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ @ 0x1801AA5B4 (-RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::UpdatePinState(KeyboardHosting::TabTipAdapterPolicy *this)
{
  int pvData; // [rsp+58h] [rbp+10h] BYREF
  DWORD pcbData; // [rsp+60h] [rbp+18h] BYREF

  pvData = 0;
  pcbData = 4;
  *((_BYTE *)this + 400) = (!RegGetValueW(
                               HKEY_CURRENT_USER,
                               L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
                               L"TipPinnedToMonitor",
                               0x10u,
                               0LL,
                               &pvData,
                               &pcbData)
                         || !RegGetValueW(
                               HKEY_LOCAL_MACHINE,
                               L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
                               L"TipPinnedToMonitor",
                               0x10u,
                               0LL,
                               &pvData,
                               &pcbData))
                        && pvData != 0;
  return 0LL;
}
