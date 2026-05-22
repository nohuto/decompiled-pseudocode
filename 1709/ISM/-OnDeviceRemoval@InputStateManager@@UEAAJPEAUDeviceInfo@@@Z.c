/*
 * XREFs of ?OnDeviceRemoval@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z @ 0x180006930
 * Callers:
 *     ?OnDeviceRemoval@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z @ 0x1800076E0 (-OnDeviceRemoval@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetValueForKey@?$FixedSizeMap@KPEAUIRawInputProvider@@$0BAA@@@QEAAJAEBKPEAPEAUIRawInputProvider@@@Z @ 0x180007544 (-GetValueForKey@-$FixedSizeMap@KPEAUIRawInputProvider@@$0BAA@@@QEAAJAEBKPEAPEAUIRawInputProvider.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputStateManager::OnDeviceRemoval(InputStateManager *this, struct DeviceInfo *a2)
{
  int ValueForKey; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rbx
  int v8; // r9d
  unsigned int v9; // eax
  _DWORD *v10; // rcx
  char v11; // al
  int v12; // r8d
  int v13; // r9d
  unsigned int v14; // ecx
  _DWORD *v15; // rax
  __int64 v16; // rax
  _DWORD *v17; // rcx
  char v18; // al
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  v20 = 0LL;
  ValueForKey = FixedSizeMap<unsigned long,IRawInputProvider *,256>::GetValueForKey((char *)this + 72, a2, &v20);
  v6 = ValueForKey;
  v7 = v20;
  if ( ValueForKey < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_31;
    v8 = 340;
LABEL_30:
    McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 1, v8, ValueForKey);
    goto LABEL_31;
  }
  ValueForKey = (*(__int64 (__fastcall **)(__int64, struct DeviceInfo *))(*(_QWORD *)v20 + 40LL))(v20, a2);
  v6 = ValueForKey;
  if ( ValueForKey < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_31;
    v8 = 342;
    goto LABEL_30;
  }
  v9 = 0;
  v10 = (_DWORD *)((char *)this + 72);
  while ( *v10 != *(_DWORD *)a2 )
  {
    ++v9;
    v10 += 4;
    if ( v9 >= 0x100 )
    {
      v11 = Microsoft_OneCore_MinInputEnableBits;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        McTemplateU0qqq((__int64)v10, &MinInput_Warning_CheckResult, 1, 212, 5);
        v11 = Microsoft_OneCore_MinInputEnableBits;
      }
      v6 = -2147467259;
      if ( (v11 & 2) != 0 )
        McTemplateU0qqq((__int64)v10, &MinInput_Warning_CheckResult, 1, 344, 5);
      goto LABEL_31;
    }
  }
  *((_DWORD *)this + 4 * v9 + 18) = *((_DWORD *)this + 1042);
  v12 = *(_DWORD *)a2;
  v13 = *((_DWORD *)this + 2068);
  if ( *(_DWORD *)a2 == v13 )
  {
LABEL_27:
    ValueForKey = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this + 5) + 40LL))(
                    *((_QWORD *)this + 5),
                    a2);
    v6 = ValueForKey;
    if ( ValueForKey < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v8 = 359;
      goto LABEL_30;
    }
  }
  else
  {
    v14 = 0;
    v15 = (_DWORD *)((char *)this + 4176);
    while ( *v15 != v12 )
    {
      ++v14;
      v15 += 4;
      if ( v14 >= 0x100 )
        goto LABEL_27;
    }
    v16 = 0LL;
    v17 = (_DWORD *)((char *)this + 4176);
    do
    {
      if ( *v17 == v12 )
      {
        *((_DWORD *)this + 4 * v16 + 1044) = v13;
        goto LABEL_27;
      }
      v16 = (unsigned int)(v16 + 1);
      v17 += 4;
    }
    while ( (unsigned int)v16 < 0x100 );
    v18 = Microsoft_OneCore_MinInputEnableBits;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq((__int64)v17, &MinInput_Warning_CheckResult, 1, 212, 5);
      v18 = Microsoft_OneCore_MinInputEnableBits;
    }
    v6 = -2147467259;
    if ( (v18 & 2) != 0 )
      McTemplateU0qqq((__int64)v17, &MinInput_Warning_CheckResult, 1, 352, 5);
  }
LABEL_31:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v6;
}
