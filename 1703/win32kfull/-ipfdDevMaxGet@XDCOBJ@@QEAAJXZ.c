/*
 * XREFs of ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C02988B8
 * Callers:
 *     GreDescribePixelFormat @ 0x1C0298974 (GreDescribePixelFormat.c)
 *     NtGdiSetPixelFormat @ 0x1C0298AC0 (NtGdiSetPixelFormat.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0074884 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0285604 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

__int64 __fastcall XDCOBJ::ipfdDevMaxGet(XDCOBJ *this)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 DeviceHdev; // rax
  __int64 (__fastcall *v7)(_QWORD, __int64, _QWORD); // rax
  int v8; // eax
  struct _RECTL v10; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v11[80]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v12; // [rsp+A0h] [rbp+8h] BYREF

  v2 = 0;
  v12 = *(_QWORD *)(*(_QWORD *)this + 48LL);
  v3 = v12;
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v11, (struct PDEVOBJ *)&v12);
  if ( (*(_DWORD *)(v3 + 32) & 0x20000) != 0 )
  {
    v5 = *(_QWORD *)this;
    v10 = *(struct _RECTL *)(*(_QWORD *)this + 1448LL);
    DeviceHdev = hdevFindDeviceHdev(*(_QWORD **)(v5 + 48), &v10, 0LL, v4);
    if ( DeviceHdev )
      v3 = DeviceHdev;
  }
  v7 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v3 + 3144);
  if ( v7 )
  {
    v8 = v7(*(_QWORD *)(v3 + 1816), 1LL, 0LL);
    if ( v8 < 0 )
      v8 = 0;
    v2 = v8;
  }
  *(_WORD *)(*(_QWORD *)this + 2520LL) = v2;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v11);
  return v2;
}
