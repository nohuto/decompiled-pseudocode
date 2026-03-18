/*
 * XREFs of ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C0294F70
 * Callers:
 *     ?ipfdDevMax@XDCOBJ@@QEAAHXZ @ 0x1C0294F48 (-ipfdDevMax@XDCOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002B684 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0282168 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

__int64 __fastcall XDCOBJ::ipfdDevMaxGet(XDCOBJ *this)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 DeviceHdev; // rax
  __int64 (__fastcall *v6)(_QWORD, __int64, _QWORD); // rax
  int v7; // eax
  struct _RECTL v9; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v10[80]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v11; // [rsp+A0h] [rbp+8h] BYREF

  v2 = 0;
  v11 = *(_QWORD *)(*(_QWORD *)this + 48LL);
  v3 = v11;
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v10, (struct PDEVOBJ *)&v11);
  if ( (*(_DWORD *)(v3 + 32) & 0x20000) != 0 )
  {
    v4 = *(_QWORD *)this;
    v9 = *(struct _RECTL *)(*(_QWORD *)this + 1448LL);
    DeviceHdev = hdevFindDeviceHdev(*(_QWORD **)(v4 + 48), &v9, 0LL);
    if ( DeviceHdev )
      v3 = DeviceHdev;
  }
  v6 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v3 + 3144);
  if ( v6 )
  {
    v7 = v6(*(_QWORD *)(v3 + 1816), 1LL, 0LL);
    if ( v7 < 0 )
      v7 = 0;
    v2 = v7;
  }
  *(_WORD *)(*(_QWORD *)this + 2520LL) = v2;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v10);
  return v2;
}
