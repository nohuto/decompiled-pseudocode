/*
 * XREFs of Register_ReadSecureMmio @ 0x1C005AEA0
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0001640 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     XilRegister_ReadBufferUlong @ 0x1C0019684 (XilRegister_ReadBufferUlong.c)
 *     XilRegister_ReadUchar @ 0x1C00196CC (XilRegister_ReadUchar.c)
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
 *     XilRegister_ReadUlong64 @ 0x1C0019748 (XilRegister_ReadUlong64.c)
 *     XilRegister_ReadUshort @ 0x1C00197AC (XilRegister_ReadUshort.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     memmove @ 0x1C0002A00 (memmove.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C005D940 (SecureChannel_SendRequestSynchronously.c)
 */

void __fastcall Register_ReadSecureMmio(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, void *a5)
{
  __int64 v6; // r15
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // esi
  _DWORD *PoolWithTag; // rbx
  _QWORD v16[7]; // [rsp+38h] [rbp-A0h] BYREF
  _BYTE v17[16]; // [rsp+70h] [rbp-68h] BYREF

  v6 = a4;
  if ( KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\register.c",
      2328);
  v8 = 8LL;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL);
  if ( a3 )
  {
    switch ( a3 )
    {
      case 1u:
        v10 = 2LL;
        break;
      case 2u:
        v10 = 4LL;
        break;
      case 3u:
        v10 = 8LL;
        break;
      default:
LABEL_17:
        v12 = 0;
        goto LABEL_18;
    }
  }
  else
  {
    v10 = 1LL;
  }
  v11 = v10 * v6;
  if ( (unsigned __int64)(v10 * v6) > 0xFFFFFFFF || !v11 || v11 + 8 < v11 )
    goto LABEL_17;
  v12 = v11 + 8;
  if ( v11 + 8 < 0x10 )
    v12 = 16;
LABEL_18:
  if ( a3 )
  {
    switch ( a3 )
    {
      case 1u:
        v8 = 2LL;
        break;
      case 2u:
        v8 = 4LL;
        break;
      case 3u:
        break;
      default:
        v13 = 0;
        goto LABEL_29;
    }
  }
  else
  {
    v8 = 1LL;
  }
  if ( (unsigned __int64)(v8 * v6) > 0xFFFFFFFF )
    v13 = 0;
  else
    v13 = v8 * v6;
LABEL_29:
  if ( v12 <= 0x10 )
  {
    PoolWithTag = v17;
    v12 = 16;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), v12, 0x49434858u);
    if ( !PoolWithTag )
    {
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        6u,
        0x47u,
        (__int64)&WPP_aa9a6dc92bdc315c6241291f5ec849eb_Traceguids,
        v12);
      return;
    }
  }
  memset(v16, 0, sizeof(v16));
  v16[3] = *(_QWORD *)(a1 + 120);
  v16[5] = a2;
  LODWORD(v16[4]) = 9;
  v16[6] = __PAIR64__(v6, a3);
  if ( (int)SecureChannel_SendRequestSynchronously(v9, (unsigned int)v16, 56, (_DWORD)PoolWithTag, v12) >= 0 )
  {
    if ( (int)*PoolWithTag >= 0 )
      memmove(a5, PoolWithTag + 2, v13);
    else
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        6u,
        0x48u,
        (__int64)&WPP_aa9a6dc92bdc315c6241291f5ec849eb_Traceguids,
        *PoolWithTag);
  }
  if ( PoolWithTag )
  {
    if ( PoolWithTag != (_DWORD *)v17 )
      ExFreePoolWithTag(PoolWithTag, 0x49434858u);
  }
}
