/*
 * XREFs of ?OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z @ 0x18008B880
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetValueForKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKPEAPEAUDeviceInfo@@@Z @ 0x180011EDC (-GetValueForKey@-$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKPEAPEAUDeviceInfo@@@Z.c)
 *     ?SetValueForKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKAEBQEAUDeviceInfo@@@Z @ 0x180011F94 (-SetValueForKey@-$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKAEBQEAUDeviceInfo@@@Z.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18008A448 (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?ExistsValueForKey@?$DynamicSizeMap@KPEAVInputInfoSanitizer@@$00@@QEAA_NAEBK@Z @ 0x18008ADC4 (-ExistsValueForKey@-$DynamicSizeMap@KPEAVInputInfoSanitizer@@$00@@QEAA_NAEBK@Z.c)
 *     ??0InputInfoSanitizer@@QEAA@PEAUIInputClient@@_N1@Z @ 0x1800A2B8C (--0InputInfoSanitizer@@QEAA@PEAUIInputClient@@_N1@Z.c)
 *     ?OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z @ 0x1800A2CE8 (-OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenDeviceCollection::OnInputReport(struct IInputClient **this, int a2, _DWORD *a3, unsigned int *a4)
{
  int DeviceInfo; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // r9d
  unsigned int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  struct DeviceInfo *v15; // rax
  bool v16; // r9
  struct DeviceInfo *v17; // rbx
  struct DeviceInfo *v18; // rdi
  int ValueForKey; // eax
  __int64 v20; // rcx
  int v21; // r9d
  struct DeviceInfo *v23; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+40h] [rbp-C0h]
  _QWORD v26[356]; // [rsp+48h] [rbp-B8h] BYREF

  v25 = -2LL;
  v24 = a2;
  v23 = 0LL;
  DeviceInfo = RIMDeviceCollection::GetDeviceInfo((RIMDeviceCollection *)this, a2, &v23, a4);
  v9 = DeviceInfo;
  if ( DeviceInfo < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v10 = 127;
LABEL_50:
      McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 0, v10, DeviceInfo);
      return v9;
    }
    return v9;
  }
  v11 = a3[6];
  if ( v11 <= 1 )
  {
    memset(v26, 0, sizeof(v26));
    HIDWORD(v26[0]) = a2;
    v8 = *((unsigned int *)v23 + 1);
    LODWORD(v26[0]) = *((_DWORD *)v23 + 1);
    LODWORD(v26[1]) = a3[15];
    v26[2] = *((_QWORD *)a3 + 8);
    LODWORD(v26[5]) = 2848;
    BYTE3(v26[86]) = 1;
    v12 = 0LL;
    if ( v11 )
    {
      v13 = *((_QWORD *)a3 + 11);
      while ( 1 )
      {
        v14 = 168LL * (unsigned int)v12;
        if ( *(_DWORD *)(v14 + v13 + 16) != 3 )
          break;
        v8 = 6 * v12;
        LODWORD(v26[6 * v12 + 7]) = *(unsigned __int16 *)(v14 + v13 + 8);
        if ( (*(_BYTE *)(v14 + v13 + 28) & 2) != 0 )
          HIDWORD(v26[6 * v12 + 7]) |= 1u;
        if ( (*(_BYTE *)(v14 + v13 + 28) & 4) != 0 )
          HIDWORD(v26[6 * v12 + 7]) |= 2u;
        if ( (*(_DWORD *)(v14 + v13 + 28) & 0x8000) != 0 )
          HIDWORD(v26[6 * v12 + 7]) |= 4u;
        if ( (*(_BYTE *)(v14 + v13 + 112) & 1) != 0 )
          LODWORD(v26[6 * v12 + 8]) |= 4u;
        if ( (*(_BYTE *)(v14 + v13 + 112) & 2) != 0 )
          LODWORD(v26[6 * v12 + 8]) |= 1u;
        if ( (*(_BYTE *)(v14 + v13 + 112) & 4) != 0 )
          LODWORD(v26[6 * v12 + 8]) |= 2u;
        HIDWORD(v26[6 * v12 + 8]) = *(_DWORD *)(v14 + v13 + 64);
        LODWORD(v26[6 * v12 + 9]) = *(_DWORD *)(v14 + v13 + 68);
        HIDWORD(v26[6 * v12 + 11]) = *(_DWORD *)(v14 + v13 + 120);
        HIDWORD(v26[6 * v12 + 10]) = *(_DWORD *)(v14 + v13 + 128);
        LODWORD(v26[6 * v12 + 11]) = *(_DWORD *)(v14 + v13 + 132);
        HIDWORD(v26[6 * v12 + 12]) = *(_DWORD *)(v14 + v13 + 124);
        ++LODWORD(v26[6]);
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= v11 )
          goto LABEL_26;
      }
      LOBYTE(DeviceInfo) = -1;
      v9 = -2147418113;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v10 = 168;
        goto LABEL_50;
      }
      return v9;
    }
LABEL_26:
    v23 = 0LL;
    if ( DynamicSizeMap<unsigned long,InputInfoSanitizer *,1>::ExistsValueForKey((__int64)(this + 345), &v24) )
    {
      ValueForKey = DynamicSizeMap<unsigned long,DeviceInfo *,1>::GetValueForKey((__int64)(this + 345), &v24, &v23);
      if ( ValueForKey < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v21 = 239;
LABEL_35:
          McTemplateU0qqq(v20, &MinInput_Warning_CheckResult, 0, v21, ValueForKey);
        }
LABEL_36:
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
      v18 = v23;
    }
    else
    {
      v15 = (struct DeviceInfo *)malloc(0x38uLL);
      v17 = v15;
      if ( v15 )
        memset(v15, 0, 0x38uLL);
      v23 = v17;
      if ( v17 )
        v18 = InputInfoSanitizer::InputInfoSanitizer(v17, this[2], 1, v16);
      else
        v18 = 0LL;
      v23 = v18;
      ValueForKey = DynamicSizeMap<unsigned long,DeviceInfo *,1>::SetValueForKey((__int64)(this + 345), &v24, &v23);
      if ( ValueForKey < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_36;
        v21 = 233;
        goto LABEL_35;
      }
    }
    ValueForKey = InputInfoSanitizer::OnInputReport(v18, (struct InputInfo *)v26, *((_BYTE *)v18 + 24));
    v9 = ValueForKey;
    if ( ValueForKey >= 0 )
    {
      if ( LODWORD(v26[6]) )
      {
        DeviceInfo = (*(__int64 (__fastcall **)(struct IInputClient *, _QWORD *))(*(_QWORD *)this[2] + 24LL))(
                       this[2],
                       v26);
        v9 = DeviceInfo;
        if ( DeviceInfo < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v10 = 251;
          goto LABEL_50;
        }
      }
      return v9;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v21 = 242;
      goto LABEL_35;
    }
    goto LABEL_36;
  }
  LOBYTE(DeviceInfo) = -1;
  v9 = -2147418113;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v10 = 136;
    goto LABEL_50;
  }
  return v9;
}
