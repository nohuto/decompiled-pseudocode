/*
 * XREFs of XilDeviceSlot_PrepareHardware @ 0x1C000F75C
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0057010 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     XilDeviceSlot_AllocateSecureResources @ 0x1C000F15C (XilDeviceSlot_AllocateSecureResources.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C003F548 (XilCoreDeviceSlot_AllocateResources.c)
 */

__int64 __fastcall XilDeviceSlot_PrepareHardware(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  bool v3; // zf
  __int64 v4; // rcx
  int SecureResources; // eax
  unsigned int Resources; // edi
  int v7; // r9d
  const char *v8; // rcx
  PVOID PoolWithTag; // rax
  int v11; // [rsp+28h] [rbp-10h]
  unsigned int v12; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = a1 + 16;
  v3 = *(_BYTE *)(a1 + 80) == 0;
  v4 = a1 + 16;
  if ( v3 )
  {
    Resources = XilCoreDeviceSlot_AllocateResources(v4);
    *(_DWORD *)(v2 + 80) = *(_DWORD *)(v2 + 16);
    return Resources;
  }
  SecureResources = XilDeviceSlot_AllocateSecureResources(v4);
  Resources = SecureResources;
  if ( SecureResources >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(
                    *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
                    8LL * (unsigned int)(*(_DWORD *)(v2 + 80) + 1),
                    0x49434858u);
    *(_QWORD *)(v2 + 8) = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * (unsigned int)(*(_DWORD *)(v2 + 80) + 1));
      return Resources;
    }
    v12 = Resources;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1 + 72),
      2u,
      0xAu,
      0x10u,
      (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
      v12);
    v7 = 281;
    v8 = "Allocation for LocalUsbDeviceHandleArray failed";
  }
  else
  {
    v11 = SecureResources;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1 + 72),
      2u,
      0xAu,
      0xFu,
      (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
      v11);
    v7 = 262;
    v8 = "XilDeviceSlot_AllocateSecureResources failed";
  }
  Debug_FreAssertMsg((__int64)v8, 0, (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c", v7);
  return Resources;
}
