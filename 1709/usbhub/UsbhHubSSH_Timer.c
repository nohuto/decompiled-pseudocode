/*
 * XREFs of UsbhHubSSH_Timer @ 0x1C001DDD0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhHubSSH_Timer(__int64 a1, __int64 a2)
{
  struct _KEVENT *v3; // rax
  struct _KEVENT *v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r12
  unsigned __int8 v7; // r15
  int v8; // r14d
  __int64 v9; // rsi
  PVOID PoolWithTag; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 (__fastcall *v13)(__int64, _QWORD); // rax
  __int64 v14; // rax
  __int64 v15; // rax
  void (__fastcall *v16)(__int64, _QWORD, __int64 (__fastcall *(__fastcall *)(__int64, __int64))(__int64), __int64, __int64, int); // rax
  int v18; // [rsp+28h] [rbp-40h]

  if ( !a2 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v3 = *(struct _KEVENT **)(a2 + 64);
  if ( !v3 )
    UsbhTrapFatal_Dbg(a2, 0LL);
  if ( v3->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v4 = v3 + 143;
  if ( KeReadStateEvent(v3 + 143) )
  {
    KeResetEvent(v4);
    v5 = *(_QWORD *)(a2 + 64);
    if ( !v5 )
      UsbhTrapFatal_Dbg(a2, 0LL);
    if ( *(_DWORD *)v5 != 541218120 )
      UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
    v6 = v5 + 2088;
    v7 = *(_BYTE *)(v5 + 5268);
    v8 = 0;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        46,
        (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids,
        0);
    v9 = *(_QWORD *)(a2 + 64);
    if ( !v9 )
      UsbhTrapFatal_Dbg(a2, 0LL);
    if ( *(_DWORD *)v9 != 541218120 )
      UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        45,
        (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids,
        0);
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x48uLL, 0x42554855u);
    v11 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x48uLL);
      v12 = *(_QWORD *)(a2 + 64);
      if ( !v12 )
        UsbhTrapFatal_Dbg(a2, 0LL);
      if ( *(_DWORD *)v12 != 541218120 )
        UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
      v13 = *(__int64 (__fastcall **)(__int64, _QWORD))(v12 + 4768);
      if ( v13 && (v14 = v13(a2, v7)) != 0 )
      {
        *(_QWORD *)(v11 + 40) = v14;
        *(_DWORD *)v11 = 1230463592;
        *(_QWORD *)(v11 + 24) = UsbhHubSSH_Worker;
        *(_DWORD *)(v11 + 4) = 2001228627;
        *(_DWORD *)(v11 + 12) = 0;
        *(_QWORD *)(v11 + 32) = v6;
        *(_QWORD *)(v11 + 16) = a2;
        ExInterlockedInsertTailList((PLIST_ENTRY)(v9 + 2784), (PLIST_ENTRY)(v11 + 48), (PKSPIN_LOCK)(v9 + 2800));
        if ( *(_DWORD *)(v11 + 4) != 2001228627 )
          Log(a2, 8, 1464552747, 0LL, v11);
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            47,
            (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids,
            0);
        v15 = *(_QWORD *)(a2 + 64);
        if ( !v15 )
          UsbhTrapFatal_Dbg(a2, 0LL);
        if ( *(_DWORD *)v15 != 541218120 )
          UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
        v16 = *(void (__fastcall **)(__int64, _QWORD, __int64 (__fastcall *(__fastcall *)(__int64, __int64))(__int64), __int64, __int64, int))(v15 + 4784);
        if ( v16 )
        {
          LOBYTE(v18) = v7;
          v16(a2, *(_QWORD *)(v11 + 40), UsbhHubWorker, 1LL, v11, v18);
        }
        else
        {
          v8 = 3;
        }
        if ( v8 != 3 )
          return 0LL;
      }
      else
      {
        ExFreePoolWithTag((PVOID)v11, 0);
      }
    }
    KeSetEvent(v4, 0, 0);
  }
  return 0LL;
}
