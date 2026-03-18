/*
 * XREFs of TR_AcquireSecureSegments @ 0x1C0022054
 * Callers:
 *     TR_EnsureSegments @ 0x1C0022ED4 (TR_EnsureSegments.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x1C000F878 (CommonBuffer_AcquireShadowBuffer.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C000FA0C (CommonBuffer_ReleaseBuffer.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006053C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall TR_AcquireSecureSegments(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  int *PoolWithTag; // rdi
  unsigned int v9; // ebx
  __int64 v10; // r12
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // r12
  int v16; // eax
  unsigned int v17; // r8d
  int v18; // ebx
  _DWORD *v19; // rdx
  __int64 v20; // rax
  _QWORD *j; // rdx
  __int64 v22; // rax
  _QWORD *v24; // [rsp+30h] [rbp-50h] BYREF
  _QWORD **v25; // [rsp+38h] [rbp-48h]
  __int64 i; // [rsp+40h] [rbp-40h]
  _QWORD v27[6]; // [rsp+48h] [rbp-38h] BYREF

  v25 = &v24;
  v24 = &v24;
  PoolWithTag = 0LL;
  v9 = 0;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 120LL);
  for ( i = v10; v9 < a2; v25 = (_QWORD **)v11 )
  {
    v11 = CommonBuffer_AcquireShadowBuffer(*(_DWORD *)(a1 + 20), a1, 828862034);
    if ( !v11 )
      goto LABEL_17;
    v12 = v25;
    if ( *v25 != &v24 )
      __fastfail(3u);
    v11[1] = v25;
    *v11 = &v24;
    ++v9;
    *v12 = v11;
  }
  if ( 8 * a2 + 8 < 8 * a2 )
    v13 = 0;
  else
    v13 = 8 * a2 + 8;
  PoolWithTag = (int *)ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), v13, 0x49434858u);
  if ( !PoolWithTag )
  {
LABEL_17:
    v18 = -1073741670;
    goto LABEL_21;
  }
  memset(v27, 0, sizeof(v27));
  v27[3] = *(_QWORD *)(a1 + 288);
  v14 = *(_QWORD *)(a1 + 40);
  LODWORD(v27[4]) = 39;
  LODWORD(v27[5]) = a2;
  v15 = *(_QWORD *)(v14 + 112);
  if ( a4 )
    KeLowerIrql(0);
  v16 = SecureChannel_SendRequestSynchronously(v15, (unsigned int)v27, 48, (_DWORD)PoolWithTag, v13);
  v17 = 0;
  v18 = v16;
  if ( a4 )
  {
    KfRaiseIrql(2u);
    v17 = 0;
  }
  if ( v18 >= 0 )
  {
    v18 = *PoolWithTag;
    if ( *PoolWithTag < 0 )
    {
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
        2u,
        0xEu,
        0x16u,
        (__int64)&WPP_f27ad55644b83fdbb868113b0758d65b_Traceguids,
        *PoolWithTag);
      Debug_FreAssertMsg(
        (__int64)"TransferRingAllocateSegments Failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
        1891);
      goto LABEL_29;
    }
    if ( PoolWithTag[1] == a2 )
    {
      for ( j = v24; &v24 != j; j = (_QWORD *)*j )
      {
        v22 = v17++;
        j[3] = *(_QWORD *)&PoolWithTag[2 * v22 + 2];
      }
      Debug_FreAssertMsg(
        (__int64)"Segment mismatch",
        v17 == a2,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
        1919);
      v18 = 0;
LABEL_29:
      if ( v18 >= 0 )
      {
        if ( v24 != &v24 )
        {
          **(_QWORD **)(a3 + 8) = v24;
          v24[1] = *(_QWORD *)(a3 + 8);
          *v25 = (_QWORD *)a3;
          *(_QWORD *)(a3 + 8) = v25;
          v25 = &v24;
          v24 = &v24;
        }
        goto LABEL_32;
      }
      goto LABEL_20;
    }
    v18 = -1073741823;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      2u,
      0xEu,
      0x17u,
      (__int64)&WPP_f27ad55644b83fdbb868113b0758d65b_Traceguids);
    Debug_FreAssertMsg(
      (__int64)"allocateSegmentsOut->NumberOfSegments != SegmentsRequired",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
      1900);
  }
LABEL_20:
  v10 = i;
LABEL_21:
  while ( 1 )
  {
    v19 = v24;
    if ( v24 == &v24 )
      break;
    if ( (_QWORD **)v24[1] != &v24 || (v20 = *v24, *(_QWORD **)(*v24 + 8LL) != v24) )
      __fastfail(3u);
    v24 = (_QWORD *)*v24;
    *(_QWORD *)(v20 + 8) = &v24;
    CommonBuffer_ReleaseBuffer(v10, v19);
  }
LABEL_32:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x49434858u);
  return (unsigned int)v18;
}
