/*
 * XREFs of ?SetValueForKey@?$FixedSizeMap@KUUsageList@CameraControlDeviceCollection@@$0BAA@@@QEAAJAEBKAEBUUsageList@CameraControlDeviceCollection@@@Z @ 0x180074978
 * Callers:
 *     ?OnDeviceAttach@CameraControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180074450 (-OnDeviceAttach@CameraControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FixedSizeMap<unsigned long,CameraControlDeviceCollection::UsageList,256>::SetValueForKey(
        _DWORD *a1,
        _DWORD *a2,
        _OWORD *a3)
{
  unsigned int v3; // r9d
  int v4; // esi
  _DWORD *v5; // r10
  unsigned int v6; // ebp
  char v7; // bl
  char v8; // r11
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int64 v11; // rcx

  v3 = 0;
  v4 = a1[1536];
  v5 = a1;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( *a2 == v4 )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    v9 = 0LL;
    while ( *a1 != *a2 )
    {
      if ( !v8 && *a1 == v4 )
      {
        v6 = v9;
        v8 = 1;
      }
      v9 = (unsigned int)(v9 + 1);
      a1 += 6;
      if ( (unsigned int)v9 >= 0x100 )
        goto LABEL_11;
    }
    v7 = 1;
    *(_OWORD *)&v5[6 * v9 + 2] = *a3;
LABEL_11:
    if ( !v7 )
    {
      if ( v8 )
      {
        v10 = *a3;
        v11 = 3LL * v6;
        v5[2 * v11] = *a2;
        *(_OWORD *)&v5[2 * v11 + 2] = v10;
      }
      else
      {
        return (unsigned int)-2147467259;
      }
    }
  }
  return v3;
}
