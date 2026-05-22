/*
 * XREFs of ?OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009A5F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x180089F60 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009C9F0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall ConsumerControlDeviceCollection::OnDeviceAttach(
        ConsumerControlDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  int DeviceId; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // r9d
  void *v9; // rax
  __int64 v10; // rcx
  char *v11; // rdx
  int v12; // r10d
  unsigned int *v13; // r9
  __int64 v14; // rcx
  int v15; // r9d
  __int64 v16; // rax
  _DWORD *v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int128 v21; // [rsp+30h] [rbp-18h]
  struct RIMDevice *v22; // [rsp+68h] [rbp+20h] BYREF

  DeviceId = HIDDeviceCollection::OnDeviceAttach(this, a2, a3);
  v7 = DeviceId;
  if ( DeviceId >= 0 )
  {
    v9 = operator new[](0x28uLL);
    *(_QWORD *)&v21 = v9;
    if ( v9 )
    {
      memset(v9, 0, 0x28uLL);
      v11 = (char *)this + 2760;
      DWORD2(v21) = 20;
      v12 = *((_DWORD *)this + 2226);
      v13 = 0LL;
      LOBYTE(v14) = 0;
      if ( a2 == v12 )
      {
        v7 = -2147024809;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v15 = 152;
LABEL_20:
          McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 0, v15, v7);
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(v19, &MinInput_Warning_CheckResult, 0, 117, v7);
        }
      }
      else
      {
        v16 = 0LL;
        v17 = (_DWORD *)((char *)this + 2760);
        do
        {
          if ( *v17 == a2 )
          {
            v18 = 3 * v16;
            goto LABEL_23;
          }
          if ( !(_BYTE)v14 && *v17 == v12 )
          {
            v13 = (unsigned int *)(unsigned int)v16;
            LOBYTE(v14) = 1;
          }
          v16 = (unsigned int)(v16 + 1);
          v17 += 6;
        }
        while ( (unsigned int)v16 < 0x100 );
        if ( !(_BYTE)v14 )
        {
          v7 = -2147467259;
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            return v7;
          v15 = 182;
          goto LABEL_20;
        }
        v18 = 3LL * (unsigned int)v13;
        *(_DWORD *)&v11[24 * (unsigned int)v13] = a2;
LABEL_23:
        *(_OWORD *)&v11[8 * v18 + 8] = v21;
        DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, &v22, v13);
        v7 = DeviceId;
        if ( DeviceId < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v8 = 122;
          goto LABEL_26;
        }
      }
    }
    else
    {
      v7 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, 110, 14);
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v8 = 106;
LABEL_26:
    McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 0, v8, DeviceId);
  }
  return v7;
}
