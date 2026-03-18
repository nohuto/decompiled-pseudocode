/*
 * XREFs of TR_CreateSecureObject @ 0x1C0020190
 * Callers:
 *     TR_Create @ 0x1C005BBAC (TR_Create.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x1C0006678 (CommonBuffer_AcquireShadowBuffer.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C00068AC (CommonBuffer_ReleaseBuffer.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C005D940 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall TR_CreateSecureObject(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r15
  _DWORD *v4; // rdi
  int v5; // esi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  int v11; // [rsp+38h] [rbp-29h] BYREF
  __int64 v12; // [rsp+40h] [rbp-21h]
  __int64 v13; // [rsp+48h] [rbp-19h]
  _QWORD v14[8]; // [rsp+58h] [rbp-9h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  if ( *(_BYTE *)(v2 + 441) && KeGetCurrentIrql() )
  {
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
      1984);
    v2 = *(_QWORD *)(a1 + 40);
  }
  v3 = *(_QWORD *)(v2 + 120);
  v4 = CommonBuffer_AcquireShadowBuffer(*(_DWORD *)(a1 + 20), a1, 828862034);
  if ( v4 )
  {
    memset(v14, 0, sizeof(v14));
    v6 = *(_QWORD *)(a1 + 56);
    v14[3] = 0LL;
    LODWORD(v14[4]) = 38;
    if ( *(_BYTE *)(v6 + 1336) )
    {
      v7 = *(_QWORD *)(v6 + 1312);
    }
    else
    {
      Debug_FreAssertMsg(
        (__int64)"Unexpected code path hit",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilendpoint.c",
        32);
      v7 = 0LL;
    }
    LODWORD(v14[6]) = *(_DWORD *)(a1 + 64);
    HIDWORD(v14[6]) = *(_DWORD *)(a1 + 20);
    v14[5] = v7;
    v8 = *(_QWORD *)(a1 + 40);
    LOBYTE(v14[7]) = (*(_QWORD *)(v8 + 272) & 0x4000000000000LL) != 0;
    v5 = SecureChannel_SendRequestSynchronously(*(_QWORD *)(v8 + 112), (unsigned int)v14, 64, (unsigned int)&v11, 24);
    if ( v5 < 0 )
      goto LABEL_16;
    if ( v11 >= 0 )
    {
      *(_QWORD *)(a1 + 288) = v12;
      *((_QWORD *)v4 + 3) = v13;
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      v9 = *(_QWORD **)(a1 + 216);
      if ( *v9 != a1 + 208 )
        __fastfail(3u);
      *((_QWORD *)v4 + 1) = v9;
      *(_QWORD *)v4 = a1 + 208;
      *v9 = v4;
      *(_QWORD *)(a1 + 216) = v4;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    }
    else
    {
      v5 = v11;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
        2u,
        0xEu,
        0x18u,
        (__int64)&WPP_a1a6325854bc39664f145b9860d7b9b4_Traceguids,
        v11);
      Debug_FreAssertMsg(
        (__int64)"TransferRingCreate Failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
        2041);
    }
    if ( v5 < 0 )
LABEL_16:
      CommonBuffer_ReleaseBuffer(v3, v4);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
