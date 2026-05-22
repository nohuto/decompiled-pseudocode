/*
 * XREFs of ?OnDeviceUpdate@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800067E0
 * Callers:
 *     ?OnDeviceUpdate@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z @ 0x1800076C0 (-OnDeviceUpdate@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetValueForKey@?$FixedSizeMap@KPEAUIRawInputProvider@@$0BAA@@@QEAAJAEBKPEAPEAUIRawInputProvider@@@Z @ 0x180007544 (-GetValueForKey@-$FixedSizeMap@KPEAUIRawInputProvider@@$0BAA@@@QEAAJAEBKPEAPEAUIRawInputProvider.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputStateManager::OnDeviceUpdate(InputStateManager *this, struct DeviceInfo *a2)
{
  int ValueForKey; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rbx
  int v8; // r9d
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  ValueForKey = FixedSizeMap<unsigned long,IRawInputProvider *,256>::GetValueForKey((char *)this + 72, a2, &v13);
  v6 = ValueForKey;
  v7 = v13;
  if ( ValueForKey < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_14;
    v8 = 315;
    goto LABEL_13;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v7)(v7, &GUID_3cc27501_dfa8_48b9_9841_43a516320b1d, &v12) >= 0 )
  {
    ValueForKey = (*(__int64 (__fastcall **)(__int64, struct DeviceInfo *))(*(_QWORD *)v12 + 24LL))(v12, a2);
    v6 = ValueForKey;
    if ( ValueForKey < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_14;
      v8 = 320;
      goto LABEL_13;
    }
  }
  ValueForKey = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this + 5) + 32LL))(
                  *((_QWORD *)this + 5),
                  a2);
  v6 = ValueForKey;
  if ( ValueForKey < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v8 = 323;
LABEL_13:
    McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 1, v8, ValueForKey);
  }
LABEL_14:
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v6;
}
