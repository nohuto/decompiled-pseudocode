/*
 * XREFs of ?GetValueForKey@?$FixedSizeMap@KPEAUIInputProcessor@@$0BAA@@@QEAAJAEBKPEAPEAUIInputProcessor@@@Z @ 0x180007480
 * Callers:
 *     ?OnDeviceUpdate@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z @ 0x180006950 (-OnDeviceUpdate@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z @ 0x180006A50 (-OnDeviceRemoval@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z @ 0x180006BB0 (-OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FixedSizeMap<unsigned long,IInputProcessor *,256>::GetValueForKey(_DWORD *a1, int *a2, _QWORD *a3)
{
  int v3; // r10d
  unsigned int v4; // r9d
  __int64 v5; // rax
  _DWORD *i; // rdx

  v3 = *a2;
  v4 = 0;
  if ( *a2 == a1[1024] || !a3 )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    v5 = 0LL;
    for ( i = a1; *i != v3; i += 4 )
    {
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= 0x100 )
        return (unsigned int)-2147467259;
    }
    *a3 = *(_QWORD *)&a1[4 * v5 + 2];
  }
  return v4;
}
