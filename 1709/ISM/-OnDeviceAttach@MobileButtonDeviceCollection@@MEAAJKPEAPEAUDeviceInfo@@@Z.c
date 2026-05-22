/*
 * XREFs of ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180099840
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x180089F60 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?IsMobile0DButtonDevice@MobileButtonDeviceCollection@@AEAAJPEAVHIDDevice@@PEA_N@Z @ 0x18009A004 (-IsMobile0DButtonDevice@MobileButtonDeviceCollection@@AEAAJPEAVHIDDevice@@PEA_N@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009C9F0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::OnDeviceAttach(
        MobileButtonDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  int DeviceId; // eax
  MobileButtonDeviceCollection *v7; // rcx
  unsigned int v8; // ebx
  int v9; // r9d
  void *v10; // rax
  __int64 v11; // rcx
  char *v12; // rdx
  int v13; // r10d
  unsigned int *v14; // r9
  __int64 v15; // rcx
  int v16; // r9d
  __int64 v17; // rax
  _DWORD *v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct RIMDevice *v22; // [rsp+30h] [rbp-28h] BYREF
  __int128 v23; // [rsp+38h] [rbp-20h]
  bool v24; // [rsp+78h] [rbp+20h] BYREF

  v22 = 0LL;
  v24 = 0;
  DeviceId = HIDDeviceCollection::OnDeviceAttach(this, a2, a3);
  v8 = DeviceId;
  if ( DeviceId >= 0 )
  {
    v10 = operator new[](0x28uLL);
    *(_QWORD *)&v23 = v10;
    if ( v10 )
    {
      memset(v10, 0, 0x28uLL);
      v12 = (char *)this + 2760;
      DWORD2(v23) = 20;
      v13 = *((_DWORD *)this + 2226);
      v14 = 0LL;
      LOBYTE(v15) = 0;
      if ( a2 != v13 )
      {
        v17 = 0LL;
        v18 = (_DWORD *)((char *)this + 2760);
        do
        {
          if ( *v18 == a2 )
          {
            v19 = 3 * v17;
            goto LABEL_25;
          }
          if ( !(_BYTE)v15 && *v18 == v13 )
          {
            v14 = (unsigned int *)(unsigned int)v17;
            LOBYTE(v15) = 1;
          }
          v17 = (unsigned int)(v17 + 1);
          v18 += 6;
        }
        while ( (unsigned int)v17 < 0x100 );
        if ( !(_BYTE)v15 )
        {
          v8 = -2147467259;
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            return v8;
          v16 = 182;
          goto LABEL_22;
        }
        v19 = 3LL * (unsigned int)v14;
        *(_DWORD *)&v12[24 * (unsigned int)v14] = a2;
LABEL_25:
        *(_OWORD *)&v12[8 * v19 + 8] = v23;
        DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, &v22, v14);
        v8 = DeviceId;
        if ( DeviceId >= 0 )
        {
          DeviceId = MobileButtonDeviceCollection::IsMobile0DButtonDevice(v7, v22, &v24);
          v8 = DeviceId;
          if ( DeviceId >= 0 )
          {
            *((_BYTE *)*a3 + 40) = v24;
            return v8;
          }
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            return v8;
          v9 = 130;
        }
        else
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            return v8;
          v9 = 129;
        }
        goto LABEL_4;
      }
      v8 = -2147024809;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v16 = 152;
LABEL_22:
        McTemplateU0qqq(v15, &MinInput_Warning_CheckResult, 0, v16, v8);
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v20, &MinInput_Warning_CheckResult, 0, 124, v8);
      }
    }
    else
    {
      v8 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v11, &MinInput_Warning_CheckResult, 0, 117, 14);
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v9 = 113;
LABEL_4:
    McTemplateU0qqq((__int64)v7, &MinInput_Warning_CheckResult, 0, v9, DeviceId);
  }
  return v8;
}
