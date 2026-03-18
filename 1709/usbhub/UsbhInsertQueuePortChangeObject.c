/*
 * XREFs of UsbhInsertQueuePortChangeObject @ 0x1C000C580
 * Callers:
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C0006488 (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C000C920 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x1C00129D0 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C0018524 (Usbh_PCE_Suspend_Action.c)
 * Callees:
 *     UsbhLatchPdo @ 0x1C000A448 (UsbhLatchPdo.c)
 *     UsbhUnlatchPdo @ 0x1C00248C0 (UsbhUnlatchPdo.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003D2D8 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_dD @ 0x1C00474E0 (WPP_RECORDER_SF_dD.c)
 */

__int64 __fastcall UsbhInsertQueuePortChangeObject(__int64 a1, unsigned __int16 a2, _DWORD *a3, int a4, __int64 a5)
{
  unsigned int v9; // ebp
  _DWORD *v10; // rdx
  _QWORD *PoolWithTag; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rcx
  void (__fastcall *v20)(_QWORD, int *); // rax
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 *v26; // rbx
  __int64 **v27; // rcx
  __int64 v29; // rax
  int v30[14]; // [rsp+40h] [rbp-38h] BYREF

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
  v12 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_33;
  *PoolWithTag = 0LL;
  v9 = 0;
  PoolWithTag[1] = 0LL;
  PoolWithTag[2] = 0LL;
  PoolWithTag[3] = 0LL;
  PoolWithTag[4] = 0LL;
  PoolWithTag[5] = 0LL;
  PoolWithTag[6] = 0LL;
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
    }
  }
  if ( !a2 )
    goto LABEL_53;
  v15 = *(_QWORD *)(a1 + 64);
  if ( !v15 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v15 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v15);
  if ( a2 > *(unsigned __int8 *)(v15 + 2938) )
    goto LABEL_53;
  v16 = *(_QWORD *)(v15 + 3056);
  if ( !v16 )
    goto LABEL_53;
  v17 = 2928LL * a2 + v16 - 2928;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v18 = *(_QWORD *)(v15 + 888)
        + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
    *(_DWORD *)v18 = 1044672615;
    *(_QWORD *)(v18 + 8) = 0LL;
    *(_QWORD *)(v18 + 16) = a2;
    *(_QWORD *)(v18 + 24) = v17;
  }
  if ( !v17 )
  {
LABEL_53:
    ExFreePoolWithTag(PoolWithTag, 0);
    goto LABEL_54;
  }
  *((_WORD *)PoolWithTag + 2) = a2;
  *((_DWORD *)PoolWithTag + 2) = *a3;
  *(_DWORD *)PoolWithTag = 1145332592;
  v19 = *(_QWORD *)(a1 + 64);
  if ( !v19 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v19 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v20 = *(void (__fastcall **)(_QWORD, int *))(v19 + 4592);
  if ( v20 )
  {
    v20(*(_QWORD *)(v19 + 4560), v30);
    v21 = v30[0];
  }
  else
  {
    v21 = 0;
  }
  v22 = *(unsigned int *)(v12 + 8);
  *(_QWORD *)(v12 + 40) = a5;
  *(_DWORD *)(v12 + 32) = v21;
  *(_DWORD *)(v12 + 48) = a4;
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v23 = *(_QWORD *)(a1 + 64);
    if ( v23 )
    {
      v24 = *(_QWORD *)(v23 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
      *(_DWORD *)v24 = 1145262193;
      *(_QWORD *)(v24 + 8) = 0LL;
      *(_QWORD *)(v24 + 16) = v17;
      *(_QWORD *)(v24 + 24) = v22;
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dD(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      v22,
      50,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      a2,
      *(_DWORD *)(v12 + 8));
  if ( a4 != 1 )
    goto LABEL_28;
  v29 = UsbhLatchPdo(a1, a2, v12, 0x49515043u);
  if ( !v29 )
  {
LABEL_50:
    ExFreePoolWithTag((PVOID)v12, 0);
LABEL_54:
    v9 = -1073741811;
    goto LABEL_33;
  }
  if ( v29 != a5 )
  {
    UsbhUnlatchPdo(a1, v29, v12, 1230065731LL);
    goto LABEL_50;
  }
LABEL_28:
  if ( (*(_DWORD *)(v12 + 8) & 0x16) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 2876));
  if ( (*(_DWORD *)(v12 + 8) & 1) == 0 )
  {
    v25 = v17 + 456;
    v26 = (__int64 *)(v12 + 16);
    v27 = *(__int64 ***)(v17 + 464);
    if ( *v27 != (__int64 *)(v17 + 456) )
      __fastfail(3u);
LABEL_32:
    *v26 = v25;
    v26[1] = (__int64)v27;
    *v27 = v26;
    *(_QWORD *)(v25 + 8) = v26;
    KeSetEvent((PRKEVENT)(v17 + 496), 0, 0);
    goto LABEL_33;
  }
  if ( !*(_BYTE *)(v17 + 2839) )
  {
    v25 = v17 + 456;
    *(_BYTE *)(v17 + 2839) = 1;
    v27 = *(__int64 ***)(v17 + 464);
    v26 = (__int64 *)(v12 + 16);
    if ( *v27 != (__int64 *)(v17 + 456) )
      __fastfail(3u);
    goto LABEL_32;
  }
  ExFreePoolWithTag((PVOID)v12, 0);
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
