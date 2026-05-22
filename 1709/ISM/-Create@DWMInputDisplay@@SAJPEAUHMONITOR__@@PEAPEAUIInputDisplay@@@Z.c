/*
 * XREFs of ?Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z @ 0x1800208BC
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001789C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z @ 0x180018FE0 (-BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z.c)
 *     ?GetDisplayForDevice@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAPEAUIInputDisplay@@@Z @ 0x18001AD50 (-GetDisplayForDevice@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAPEAUIInputDisplay@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

__int64 __fastcall DWMInputDisplay::Create(__int64 a1, struct IInputDisplay **a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rbp
  char v5; // al
  int v6; // r9d
  _QWORD *v7; // rax
  _QWORD *v8; // rdi

  v2 = 0;
  v4 = a1;
  if ( a2 )
  {
    v7 = malloc(0x50uLL);
    v8 = v7;
    if ( v7 )
    {
      memset(v7, 0, 0x50uLL);
      a1 = 1LL;
      v8[1] = &RefCountedObject::`vftable';
      *((_DWORD *)v8 + 4) = 1;
      *v8 = &DWMInputDisplay::`vftable'{for `IInputDisplay'};
      v8[1] = &DWMInputDisplay::`vftable'{for `RefCountedObject'};
      v8[3] = v4;
      v8[4] = 0LL;
      *((_BYTE *)v8 + 48) = 0;
      v8[7] = 0LL;
      *((_DWORD *)v8 + 16) = 1;
      v8[9] = 0LL;
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
    {
      *a2 = (struct IInputDisplay *)v8;
      return v2;
    }
    v5 = 14;
    v2 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 101;
      goto LABEL_4;
    }
  }
  else
  {
    v5 = 87;
    v2 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 93;
LABEL_4:
      McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 0, v6, v5);
    }
  }
  return v2;
}
