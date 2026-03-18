/*
 * XREFs of Etw_EndpointListRundown @ 0x1C0038940
 * Callers:
 *     Etw_DeviceRundown @ 0x1C0038734 (Etw_DeviceRundown.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Etw_EndpointRundown @ 0x1C0038AFC (Etw_EndpointRundown.c)
 */

void __fastcall Etw_EndpointListRundown(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rbp
  KIRQL v4; // al
  __int64 v5; // rsi
  KIRQL v6; // al
  unsigned int v7; // ecx
  KIRQL v8; // r15
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // r14
  __int64 v12; // r13
  __int64 v13; // rdi
  _QWORD *v14; // r12
  unsigned int v15; // ebp
  _QWORD *v16; // r14
  __int64 v17; // rdi
  KSPIN_LOCK *v19; // [rsp+78h] [rbp+10h]

  v2 = (KSPIN_LOCK *)(a2 + 88);
  v19 = (KSPIN_LOCK *)(a2 + 88);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 88));
  v5 = *(unsigned int *)(a2 + 112);
  KeReleaseSpinLock(v2, v4);
  if ( (_DWORD)v5 )
  {
    while ( 1 )
    {
      PoolWithTag = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), 8 * v5, 0x49434858u);
      v10 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      memset(PoolWithTag, 0, 8 * v5);
      v6 = KeAcquireSpinLockRaiseToDpc(v2);
      v7 = *(_DWORD *)(a2 + 112);
      v8 = v6;
      if ( (unsigned int)v5 >= v7 )
      {
        v11 = (_QWORD *)(a2 + 96);
        v12 = 0LL;
        v13 = *v11 - 64LL;
        v14 = (_QWORD *)*v11;
        if ( v11 != (_QWORD *)*v11 )
        {
          do
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(_QWORD, _QWORD), __int64, const char *))(WdfFunctions_01015 + 1640))(
              WdfDriverGlobals,
              *(_QWORD *)(v13 + 24),
              Etw_EndpointListRundown,
              549LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
            v10[v12] = v13;
            v12 = (unsigned int)(v12 + 1);
            v13 = *v14 - 64LL;
            v14 = (_QWORD *)*v14;
          }
          while ( v11 != v14 );
          v2 = v19;
        }
        KeReleaseSpinLock(v2, v8);
        v15 = 0;
        if ( (_DWORD)v5 )
        {
          v16 = v10;
          do
          {
            v17 = *v16;
            if ( !*v16 )
              break;
            Etw_EndpointRundown(a1, *v16);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(_QWORD, _QWORD), __int64, const char *))(WdfFunctions_01015 + 1648))(
              WdfDriverGlobals,
              *(_QWORD *)(v17 + 24),
              Etw_EndpointListRundown,
              583LL,
              "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\etw.c");
            ++v15;
            ++v16;
          }
          while ( v15 < (unsigned int)v5 );
        }
        if ( v10 )
          ExFreePoolWithTag(v10, 0x49434858u);
        return;
      }
      v5 = v7;
      KeReleaseSpinLock(v2, v6);
      ExFreePoolWithTag(v10, 0x49434858u);
    }
  }
}
