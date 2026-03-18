/*
 * XREFs of UsbhInsertQueuePortChangeObject @ 0x1C000D1F0
 * Callers:
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C0007A08 (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x1C000BF20 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C000D5A0 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C0016310 (Usbh_PCE_Suspend_Action.c)
 * Callees:
 *     UsbhLatchPdo @ 0x1C001A5DC (UsbhLatchPdo.c)
 *     UsbhUnlatchPdo @ 0x1C00245B0 (UsbhUnlatchPdo.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1C003BF58 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003C01C (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall UsbhInsertQueuePortChangeObject(__int64 a1, unsigned __int16 a2, _DWORD *a3, int a4, __int64 a5)
{
  unsigned int v9; // r14d
  _DWORD *v10; // rdx
  _QWORD *PoolWithTag; // rbx
  char v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  char v17; // r10
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rcx
  void (__fastcall *v21)(_QWORD, _DWORD *); // rax
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rbx
  _QWORD *v27; // rcx
  __int64 v29; // rax
  _DWORD v30[14]; // [rsp+40h] [rbp-38h] BYREF

  v9 = -1073741670;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      49,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      a2);
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v10 = *(_DWORD **)(a1 + 64);
  if ( !v10 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v10 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v10);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x38uLL, 0x42554855u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    v9 = 0;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    PoolWithTag[5] = 0LL;
    PoolWithTag[6] = 0LL;
    v12 = UsbhLogMask;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 64);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
        *(_DWORD *)v14 = 1413771367;
        *(_QWORD *)(v14 + 16) = a2;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 24) = 0LL;
        v12 = UsbhLogMask;
      }
    }
    if ( a2 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      if ( !v15 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *(_DWORD *)v15 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v15);
      if ( a2 <= *(unsigned __int8 *)(v15 + 2938) )
      {
        v16 = *(_QWORD *)(v15 + 3056);
        if ( v16 )
        {
          v17 = a2;
          v18 = v16 + 2928LL * (a2 - 1);
          if ( (v12 & 8) != 0 )
          {
            v19 = *(_QWORD *)(v15 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
            *(_DWORD *)v19 = 1044672615;
            *(_QWORD *)(v19 + 16) = a2;
            *(_QWORD *)(v19 + 8) = 0LL;
            *(_QWORD *)(v19 + 24) = v18;
          }
          if ( v18 )
          {
            *((_WORD *)PoolWithTag + 2) = a2;
            *((_DWORD *)PoolWithTag + 2) = *a3;
            *(_DWORD *)PoolWithTag = 1145332592;
            v20 = *(_QWORD *)(a1 + 64);
            if ( !v20 )
              UsbhTrapFatal_Dbg(a1, 0LL);
            if ( *(_DWORD *)v20 != 541218120 )
              UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
            v21 = *(void (__fastcall **)(_QWORD, _DWORD *))(v20 + 4592);
            if ( v21 )
            {
              v21(*(_QWORD *)(v20 + 4560), v30);
              v22 = v30[0];
              v17 = a2;
            }
            else
            {
              v22 = 0;
            }
            v23 = *((unsigned int *)PoolWithTag + 2);
            PoolWithTag[5] = a5;
            *((_DWORD *)PoolWithTag + 8) = v22;
            *((_DWORD *)PoolWithTag + 12) = a4;
            if ( (UsbhLogMask & 0x200) != 0 )
            {
              v15 = *(_QWORD *)(a1 + 64);
              if ( v15 )
              {
                v24 = *(_QWORD *)(v15 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
                *(_DWORD *)v24 = 1145262193;
                *(_QWORD *)(v24 + 8) = 0LL;
                *(_QWORD *)(v24 + 16) = v18;
                *(_QWORD *)(v24 + 24) = v23;
              }
            }
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_dD(
                WPP_GLOBAL_Control->DeviceExtension,
                v15,
                v23,
                50,
                (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
                v17,
                *((_DWORD *)PoolWithTag + 2));
            if ( a4 != 1 )
              goto LABEL_28;
            v29 = UsbhLatchPdo(a1, a2, PoolWithTag, 1230065731LL);
            if ( v29 )
            {
              if ( v29 == a5 )
              {
LABEL_28:
                if ( (PoolWithTag[1] & 0x16) != 0 )
                  _InterlockedIncrement((volatile signed __int32 *)(v18 + 2876));
                if ( (PoolWithTag[1] & 1) == 0 )
                {
                  v25 = v18 + 456;
                  v26 = PoolWithTag + 2;
                  v27 = *(_QWORD **)(v18 + 464);
                  if ( *v27 != v18 + 456 )
                    __fastfail(3u);
LABEL_32:
                  *v26 = v25;
                  v26[1] = v27;
                  *v27 = v26;
                  *(_QWORD *)(v25 + 8) = v26;
                  KeSetEvent((PRKEVENT)(v18 + 496), 0, 0);
                  goto LABEL_33;
                }
                if ( !*(_BYTE *)(v18 + 2839) )
                {
                  v25 = v18 + 456;
                  *(_BYTE *)(v18 + 2839) = 1;
                  v27 = *(_QWORD **)(v18 + 464);
                  v26 = PoolWithTag + 2;
                  if ( *v27 != v18 + 456 )
                    __fastfail(3u);
                  goto LABEL_32;
                }
                goto LABEL_51;
              }
              v9 = -1073741811;
              UsbhUnlatchPdo(a1, v29, PoolWithTag, 1230065731LL);
            }
            else
            {
              v9 = -1073741811;
            }
LABEL_51:
            ExFreePoolWithTag(PoolWithTag, 0);
            goto LABEL_33;
          }
        }
      }
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    v9 = -1073741811;
  }
LABEL_33:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dd(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1,
      51,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      a2,
      v9);
  return v9;
}
