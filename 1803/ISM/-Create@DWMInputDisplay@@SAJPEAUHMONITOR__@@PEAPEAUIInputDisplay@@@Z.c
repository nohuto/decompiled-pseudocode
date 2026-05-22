/*
 * XREFs of ?Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z @ 0x1800177BC
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18007BDCC (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z @ 0x18007F6D0 (-BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z.c)
 *     ?GetDisplayForDevice@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAPEAUIInputDisplay@@@Z @ 0x18007F9D0 (-GetDisplayForDevice@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAPEAUIInputDisplay@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 */

__int64 __fastcall DWMInputDisplay::Create(HMONITOR a1, struct IInputDisplay **a2)
{
  unsigned int v2; // ebx
  _QWORD *v5; // rax
  _QWORD *v6; // rdi

  v2 = 0;
  if ( a2 )
  {
    v5 = malloc(0x28uLL);
    v6 = v5;
    if ( v5 )
    {
      memset_0(v5, 0, 0x28uLL);
      v6[1] = &RefCountedObject::`vftable';
      *((_DWORD *)v6 + 4) = 1;
      *v6 = &DWMInputDisplay::`vftable'{for `IInputDisplay'};
      v6[1] = &DWMInputDisplay::`vftable'{for `RefCountedObject'};
      v6[3] = a1;
      v6[4] = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
    if ( v6 )
      *a2 = (struct IInputDisplay *)v6;
    else
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v2;
}
