/*
 * XREFs of ?DeInitialize@SimpleHapticsController@@QEAAJXZ @ 0x1C02237D4
 * Callers:
 *     ??_GSimpleHapticsController@@QEAAPEAXI@Z @ 0x1C0220758 (--_GSimpleHapticsController@@QEAAPEAXI@Z.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0220A6C (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0220FFC (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z @ 0x1C02235F4 (-CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z.c)
 */

__int64 __fastcall SimpleHapticsController::DeInitialize(SimpleHapticsController *this)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  const GUID *v4; // r8
  const GUID *v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v10; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  const char *v12; // [rsp+60h] [rbp-38h]
  __int64 v13; // [rsp+68h] [rbp-30h]
  unsigned int *v14; // [rsp+70h] [rbp-28h]
  __int64 v15; // [rsp+78h] [rbp-20h]

  v10 = 0;
  v2 = SimpleHapticsController::CloseHapticsWriteDevice(this, 1);
  v6 = *((_QWORD *)this + 10);
  v10 = v2;
  if ( v6 )
  {
    Win32FreePool(v6, v3, v4);
    *((_QWORD *)this + 10) = 0LL;
  }
  v7 = *((_QWORD *)this + 8);
  if ( v7 )
  {
    Win32FreePool(v7, v3, v4);
    *((_QWORD *)this + 8) = 0LL;
    *((_WORD *)this + 36) = 0;
  }
  v8 = *((_QWORD *)this + 2);
  if ( v8 )
  {
    Win32FreePool(v8, v3, v4);
    *((_QWORD *)this + 2) = 0LL;
  }
  if ( (unsigned int)dword_1C0320150 > 4 )
  {
    v13 = 38LL;
    v12 = "SimpleHapticsController::DeInitialize";
    v14 = &v10;
    v15 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320150, &unk_1C02E9891, v4, v5, 4u, &pData);
  }
  return v10;
}
