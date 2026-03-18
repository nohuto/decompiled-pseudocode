/*
 * XREFs of TR_CreateSecureObject @ 0x1C00228E0
 * Callers:
 *     TR_Create @ 0x1C005E82C (TR_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x1C000F878 (CommonBuffer_AcquireShadowBuffer.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C000FA0C (CommonBuffer_ReleaseBuffer.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006053C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall TR_CreateSecureObject(__int64 a1)
{
  __int64 v2; // r14
  _DWORD *v3; // rdi
  int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rcx
  int v10; // [rsp+30h] [rbp-78h] BYREF
  __int64 v11; // [rsp+38h] [rbp-70h]
  __int64 v12; // [rsp+40h] [rbp-68h]
  _QWORD v13[7]; // [rsp+48h] [rbp-60h] BYREF

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 441LL) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
      1968);
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 120LL);
  v3 = CommonBuffer_AcquireShadowBuffer(*(_DWORD *)(a1 + 20), a1, 828862034);
  if ( v3 )
  {
    memset(v13, 0, sizeof(v13));
    v5 = *(_QWORD *)(a1 + 56);
    v13[3] = 0LL;
    LODWORD(v13[4]) = 38;
    if ( *(_BYTE *)(v5 + 1336) )
    {
      v6 = *(_QWORD *)(v5 + 1312);
    }
    else
    {
      Debug_FreAssertMsg(
        (__int64)"Unexpected code path hit",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilendpoint.c",
        32);
      v6 = 0LL;
    }
    LODWORD(v13[6]) = *(_DWORD *)(a1 + 64);
    HIDWORD(v13[6]) = *(_DWORD *)(a1 + 20);
    v7 = *(_QWORD *)(a1 + 40);
    v13[5] = v6;
    v4 = SecureChannel_SendRequestSynchronously(*(_QWORD *)(v7 + 112), (unsigned int)v13, 56, (unsigned int)&v10, 24);
    if ( v4 < 0 )
      goto LABEL_16;
    if ( v10 >= 0 )
    {
      *(_QWORD *)(a1 + 288) = v11;
      *((_QWORD *)v3 + 3) = v12;
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      v8 = *(_QWORD **)(a1 + 216);
      if ( *v8 != a1 + 208 )
        __fastfail(3u);
      *((_QWORD *)v3 + 1) = v8;
      *(_QWORD *)v3 = a1 + 208;
      *v8 = v3;
      *(_QWORD *)(a1 + 216) = v3;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    }
    else
    {
      v4 = v10;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
        2u,
        0xEu,
        0x18u,
        (__int64)&WPP_f27ad55644b83fdbb868113b0758d65b_Traceguids,
        v10);
      Debug_FreAssertMsg(
        (__int64)"TransferRingCreate Failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
        2017);
    }
    if ( v4 < 0 )
LABEL_16:
      CommonBuffer_ReleaseBuffer(v2, v3);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v4;
}
