/*
 * XREFs of ?DeInitialize@SimpleHapticsController@@QEAAJXZ @ 0x1C0222320
 * Callers:
 *     ??_GSimpleHapticsController@@QEAAPEAXI@Z @ 0x1C021F348 (--_GSimpleHapticsController@@QEAAPEAXI@Z.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C021F65C (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021FBF4 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z @ 0x1C022215C (-CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z.c)
 */

__int64 __fastcall SimpleHapticsController::DeInitialize(SimpleHapticsController *this)
{
  unsigned int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  const GUID *cData; // r9
  LPCGUID v7; // r8
  unsigned int v9; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-48h] BYREF
  unsigned int *v12; // [rsp+70h] [rbp-38h]
  const GUID *v13; // [rsp+78h] [rbp-30h]

  v9 = 0;
  v2 = SimpleHapticsController::CloseHapticsWriteDevice(this, 1);
  v3 = *((_QWORD *)this + 10);
  v9 = v2;
  if ( v3 )
  {
    Win32FreePool(v3);
    *((_QWORD *)this + 10) = 0LL;
  }
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
  {
    Win32FreePool(v4);
    *((_QWORD *)this + 8) = 0LL;
    *((_WORD *)this + 36) = 0;
  }
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    Win32FreePool(v5);
    *((_QWORD *)this + 2) = 0LL;
  }
  if ( (unsigned int)dword_1C0324150 > 4 )
  {
    TlgCreateSz(&pDesc, "SimpleHapticsController::DeInitialize");
    v13 = cData;
    v12 = &v9;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECBC1, v7, cData, (UINT32)cData, &pData);
  }
  return v9;
}
