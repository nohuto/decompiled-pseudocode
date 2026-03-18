/*
 * XREFs of UsbhHubSSH_Timer @ 0x1C0023450
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhHubSSH_Timer(__int64 a1, __int64 a2)
{
  struct _KEVENT *v3; // rax
  struct _KEVENT *v4; // r14
  __int64 v5; // rax
  __int64 v6; // r12
  unsigned __int8 v7; // r15
  PDEVICE_OBJECT v8; // rcx
  int v9; // esi
  __int64 v10; // rbp
  PVOID PoolWithTag; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 (__fastcall *v14)(__int64, _QWORD); // rax
  __int64 v15; // rax
  __int64 v16; // rax
  void (__fastcall *v17)(__int64, _QWORD, __int64 (__fastcall *(__fastcall *)(__int64, __int64))(__int64), __int64, __int64, int); // rax
  int v19; // [rsp+28h] [rbp-40h]

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
    v8 = WPP_GLOBAL_Control;
    v9 = 0;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        46,
        (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids,
        0);
      v8 = WPP_GLOBAL_Control;
    }
    v10 = *(_QWORD *)(a2 + 64);
    if ( !v10 )
      UsbhTrapFatal_Dbg(a2, 0LL);
    if ( *(_DWORD *)v10 != 541218120 )
      UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
    if ( LOWORD(v8->DeviceType) )
      WPP_RECORDER_SF_d(v8->DeviceExtension, 0, 1, 45, (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids, 0);
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x48uLL, 0x42554855u);
    v12 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x48uLL);
      v13 = *(_QWORD *)(a2 + 64);
      if ( !v13 )
        UsbhTrapFatal_Dbg(a2, 0LL);
      if ( *(_DWORD *)v13 != 541218120 )
        UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
      v14 = *(__int64 (__fastcall **)(__int64, _QWORD))(v13 + 4768);
      if ( v14 )
      {
        v15 = v14(a2, v7);
        if ( v15 )
        {
          *(_QWORD *)(v12 + 40) = v15;
          *(_DWORD *)v12 = 1230463592;
          *(_QWORD *)(v12 + 24) = UsbhHubSSH_Worker;
          *(_DWORD *)(v12 + 4) = 2001228627;
          *(_DWORD *)(v12 + 12) = 0;
          *(_QWORD *)(v12 + 32) = v6;
          *(_QWORD *)(v12 + 16) = a2;
          ExInterlockedInsertTailList((PLIST_ENTRY)(v10 + 2784), (PLIST_ENTRY)(v12 + 48), (PKSPIN_LOCK)(v10 + 2800));
          if ( *(_DWORD *)(v12 + 4) != 2001228627 )
            Log(a2, 8, 1464552747, 0LL, v12);
          _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              47,
              (__int64)&WPP_769f670b4daf3a39507e1b81909708b8_Traceguids,
              0);
          v16 = *(_QWORD *)(a2 + 64);
          if ( !v16 )
            UsbhTrapFatal_Dbg(a2, 0LL);
          if ( *(_DWORD *)v16 != 541218120 )
            UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
          v17 = *(void (__fastcall **)(__int64, _QWORD, __int64 (__fastcall *(__fastcall *)(__int64, __int64))(__int64), __int64, __int64, int))(v16 + 4784);
          if ( v17 )
          {
            LOBYTE(v19) = v7;
            v17(a2, *(_QWORD *)(v12 + 40), UsbhHubWorker, 1LL, v12, v19);
          }
          else
          {
            v9 = -1073741822;
          }
          goto LABEL_26;
        }
      }
      ExFreePoolWithTag((PVOID)v12, 0);
    }
    v9 = -1073741670;
LABEL_26:
    if ( (v9 & 0xC0000000) == 0xC0000000 )
      KeSetEvent(v4, 0, 0);
  }
  return 0LL;
}
