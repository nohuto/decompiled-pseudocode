/*
 * XREFs of ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x180009738
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x180006028 (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?Create@GestureTargetingComponent@@SAJPEAPEAV1@@Z @ 0x18001316C (-Create@GestureTargetingComponent@@SAJPEAPEAV1@@Z.c)
 *     ?Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18003A6D0 (-Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18003D638 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     ?Initialize@MouseProcessor@@IEAAJPEBGJ@Z @ 0x18006BB64 (-Initialize@MouseProcessor@@IEAAJPEBGJ@Z.c)
 *     ?Initialize@MouseAccelerator@@QEAAJPEBGJ@Z @ 0x18006CEEC (-Initialize@MouseAccelerator@@QEAAJPEBGJ@Z.c)
 *     ?RuntimeClassInitialize@InputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@@Z @ 0x18007DE40 (-RuntimeClassInitialize@InputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1.c)
 *     ?Create@MagnifierComponent@@SAJPEAPEAV1@@Z @ 0x1800A56A8 (-Create@MagnifierComponent@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z @ 0x180009588 (-Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RegistryWatcher::Create(
        __int64 a1,
        const unsigned __int16 *a2,
        void *a3,
        void (*a4)(void *, HKEY),
        struct RegistryWatcher **a5)
{
  int v8; // edi
  int v9; // r9d
  _DWORD *v10; // rax
  HKEY v11; // rdx
  _DWORD *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx

  if ( a5 )
  {
    v10 = malloc(0x38uLL);
    v12 = v10;
    if ( v10 )
      memset(v10, 0, 0x38uLL);
    if ( !v12 )
    {
      v8 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return (unsigned int)v8;
      v9 = 114;
      goto LABEL_4;
    }
    *(_QWORD *)v12 = &RefCountedObject::`vftable';
    *(_QWORD *)v12 = &RegistryWatcher::`vftable';
    v12[2] = 1;
    *((_QWORD *)v12 + 2) = 0LL;
    *((_QWORD *)v12 + 5) = a3;
    *((_QWORD *)v12 + 6) = a4;
    v13 = RegistryWatcher::Initialize((RegistryWatcher *)v12, v11, a2);
    v8 = v13;
    if ( v13 >= 0 )
    {
      *a5 = (struct RegistryWatcher *)v12;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 0, 117, v13);
    }
    if ( v8 < 0 )
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v12 + 24LL))(v12, 1LL);
  }
  else
  {
    v8 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v9 = 107;
LABEL_4:
      McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 0, v9, v8);
    }
  }
  return (unsigned int)v8;
}
