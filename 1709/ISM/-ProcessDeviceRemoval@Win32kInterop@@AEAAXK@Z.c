/*
 * XREFs of ?ProcessDeviceRemoval@Win32kInterop@@AEAAXK@Z @ 0x18000F578
 * Callers:
 *     ?ProcessPnpNotification@Win32kInterop@@AEAAXAEBU_PnpNotification@@@Z @ 0x18000F640 (-ProcessPnpNotification@Win32kInterop@@AEAAXAEBU_PnpNotification@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetValueForKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKPEAPEAUDeviceInfo@@@Z @ 0x180011EDC (-GetValueForKey@-$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKPEAPEAUDeviceInfo@@@Z.c)
 *     ?RemoveKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBK@Z @ 0x180012180 (-RemoveKey@-$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBK@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Win32kInterop::ProcessDeviceRemoval(Win32kInterop *this, int a2)
{
  char *v2; // rdi
  int ValueForKey; // eax
  __int64 v5; // rcx
  int v6; // r9d
  __int64 v7; // rcx
  void *v8; // rbx
  void *Block; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v2 = (char *)this + 72;
  ValueForKey = DynamicSizeMap<unsigned long,DeviceInfo *,1>::GetValueForKey((char *)this + 72, &v10, &Block);
  if ( ValueForKey < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_5;
    v6 = 485;
    goto LABEL_4;
  }
  v7 = *((_QWORD *)this + 8);
  v8 = Block;
  ValueForKey = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 56LL))(v7, Block);
  if ( ValueForKey < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 486;
LABEL_4:
      McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, v6, ValueForKey);
      goto LABEL_5;
    }
    goto LABEL_5;
  }
  ValueForKey = DynamicSizeMap<unsigned long,DeviceInfo *,1>::RemoveKey(v2, v8);
  if ( ValueForKey < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 487;
      goto LABEL_4;
    }
LABEL_5:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  operator delete(v8);
}
