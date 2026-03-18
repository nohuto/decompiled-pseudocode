/*
 * XREFs of TR_AcquireSecureSegments @ 0x1C001F8FC
 * Callers:
 *     TR_EnsureSegments @ 0x1C0020794 (TR_EnsureSegments.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x1C0006678 (CommonBuffer_AcquireShadowBuffer.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C00068AC (CommonBuffer_ReleaseBuffer.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C000EC48 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C005D940 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall TR_AcquireSecureSegments(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  int *PoolWithTag; // rdi
  unsigned int v5; // ebx
  __int64 v10; // r12
  __int64 **v11; // rax
  __int64 **v12; // rcx
  int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // r12d
  int v17; // ebx
  __int64 *v18; // rdx
  __int64 *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  const char *v22; // rcx
  char v23; // dl
  int v24; // r9d
  __int64 *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 *v29; // [rsp+30h] [rbp-50h] BYREF
  __int64 **v30; // [rsp+38h] [rbp-48h]
  __int64 v31; // [rsp+40h] [rbp-40h]
  _QWORD v32[6]; // [rsp+48h] [rbp-38h] BYREF

  PoolWithTag = 0LL;
  v30 = &v29;
  v5 = 0;
  v29 = (__int64 *)&v29;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 120LL);
  v31 = v10;
  if ( a2 )
  {
    while ( 1 )
    {
      v11 = (__int64 **)CommonBuffer_AcquireShadowBuffer(*(_DWORD *)(a1 + 20), a1, 828862034);
      if ( !v11 )
        break;
      v12 = v30;
      if ( *v30 != (__int64 *)&v29 )
        __fastfail(3u);
      v11[1] = (__int64 *)v30;
      *v11 = (__int64 *)&v29;
      ++v5;
      *v12 = (__int64 *)v11;
      v30 = v11;
      if ( v5 >= a2 )
        goto LABEL_5;
    }
    v17 = -1073741670;
    goto LABEL_12;
  }
LABEL_5:
  v13 = -1;
  v14 = 8 * a2 + 8;
  if ( v14 >= 8 * a2 )
    v13 = 8 * a2 + 8;
  v15 = 0;
  if ( v14 >= 8 * a2 )
    v15 = v13;
  v16 = v15;
  PoolWithTag = (int *)ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), v15, 0x49434858u);
  if ( !PoolWithTag )
  {
    v17 = -1073741670;
LABEL_11:
    v10 = v31;
LABEL_12:
    while ( 1 )
    {
      v18 = v29;
      if ( v29 == (__int64 *)&v29 )
        break;
      if ( (__int64 **)v29[1] != &v29 || (v19 = (__int64 *)*v29, *(__int64 **)(*v29 + 8) != v29) )
        __fastfail(3u);
      v29 = (__int64 *)*v29;
      v19[1] = (__int64)&v29;
      CommonBuffer_ReleaseBuffer(v10, v18);
    }
    goto LABEL_34;
  }
  memset(v32, 0, sizeof(v32));
  v32[3] = *(_QWORD *)(a1 + 288);
  v20 = *(_QWORD *)(a1 + 40);
  LODWORD(v32[4]) = 39;
  LODWORD(v32[5]) = a2;
  v21 = *(_QWORD *)(v20 + 112);
  if ( a4 )
    KeLowerIrql(0);
  v17 = SecureChannel_SendRequestSynchronously(v21, (unsigned int)v32, 48, (_DWORD)PoolWithTag, v16);
  if ( a4 )
    KfRaiseIrql(2u);
  if ( v17 < 0 )
    goto LABEL_11;
  v17 = *PoolWithTag;
  if ( *PoolWithTag >= 0 )
  {
    if ( PoolWithTag[1] != a2 )
    {
      v17 = -1073741823;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
        2u,
        0xEu,
        0x17u,
        (__int64)&WPP_a1a6325854bc39664f145b9860d7b9b4_Traceguids);
      Debug_FreAssertMsg(
        (__int64)"allocateSegmentsOut->NumberOfSegments != SegmentsRequired",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
        1916);
      goto LABEL_11;
    }
    v25 = v29;
    v26 = 0LL;
    while ( &v29 != (__int64 **)v25 )
    {
      v27 = *(_QWORD *)&PoolWithTag[2 * v26 + 2];
      v26 = (unsigned int)(v26 + 1);
      v25[3] = v27;
      v25 = (__int64 *)*v25;
    }
    v17 = 0;
    v22 = "Segment mismatch";
    v24 = 1935;
    v23 = (_DWORD)v26 == a2;
  }
  else
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      2u,
      0xEu,
      0x16u,
      (__int64)&WPP_a1a6325854bc39664f145b9860d7b9b4_Traceguids,
      *PoolWithTag);
    v22 = "TransferRingAllocateSegments Failed";
    v23 = 0;
    v24 = 1907;
  }
  Debug_FreAssertMsg((__int64)v22, v23, (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c", v24);
  if ( v17 < 0 )
    goto LABEL_11;
  if ( v29 != (__int64 *)&v29 )
  {
    **(_QWORD **)(a3 + 8) = v29;
    v29[1] = *(_QWORD *)(a3 + 8);
    *v30 = (__int64 *)a3;
    *(_QWORD *)(a3 + 8) = v30;
    v30 = &v29;
    v29 = (__int64 *)&v29;
  }
LABEL_34:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x49434858u);
  return (unsigned int)v17;
}
