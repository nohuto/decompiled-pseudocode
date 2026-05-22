/*
 * XREFs of ?OnDeviceUpdate@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z @ 0x180006950
 * Callers:
 *     ?OnDeviceUpdate@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z @ 0x1800075B0 (-OnDeviceUpdate@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?GetValueForKey@?$FixedSizeMap@KPEAUIInputProcessor@@$0BAA@@@QEAAJAEBKPEAPEAUIInputProcessor@@@Z @ 0x180007480 (-GetValueForKey@-$FixedSizeMap@KPEAUIInputProcessor@@$0BAA@@@QEAAJAEBKPEAPEAUIInputProcessor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputStateManager::OnDeviceUpdate(InputStateManager *this, struct DeviceInfo *a2)
{
  int ValueForKey; // edi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  ValueForKey = FixedSizeMap<unsigned long,IInputProcessor *,256>::GetValueForKey((char *)this + 72, a2, &v10);
  v5 = v10;
  if ( ValueForKey >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v6 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v5)(v5, &GUID_3cc27501_dfa8_48b9_9841_43a516320b1d, &v9) < 0
      || (ValueForKey = (*(__int64 (__fastcall **)(__int64, struct DeviceInfo *))(*(_QWORD *)v9 + 24LL))(v9, a2),
          ValueForKey >= 0) )
    {
      ValueForKey = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this + 5) + 32LL))(
                      *((_QWORD *)this + 5),
                      a2);
    }
  }
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)ValueForKey;
}
