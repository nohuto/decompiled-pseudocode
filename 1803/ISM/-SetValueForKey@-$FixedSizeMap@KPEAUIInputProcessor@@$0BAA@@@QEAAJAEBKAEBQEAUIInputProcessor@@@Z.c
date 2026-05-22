/*
 * XREFs of ?SetValueForKey@?$FixedSizeMap@KPEAUIInputProcessor@@$0BAA@@@QEAAJAEBKAEBQEAUIInputProcessor@@@Z @ 0x1800074CC
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x1800066F0 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FixedSizeMap<unsigned long,IInputProcessor *,256>::SetValueForKey(
        _DWORD *a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // r9d
  int v4; // esi
  _DWORD *v5; // r10
  unsigned int v6; // ebp
  char v7; // bl
  char v8; // r11
  unsigned int v9; // eax
  __int64 v10; // rcx

  v3 = 0;
  v4 = a1[1024];
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
    v9 = 0;
    while ( *a1 != *a2 )
    {
      if ( !v8 && *a1 == v4 )
      {
        v6 = v9;
        v8 = 1;
      }
      ++v9;
      a1 += 4;
      if ( v9 >= 0x100 )
        goto LABEL_11;
    }
    v7 = 1;
    *(_QWORD *)&v5[4 * v9 + 2] = *a3;
LABEL_11:
    if ( !v7 )
    {
      if ( v8 )
      {
        v10 = 2LL * v6;
        v5[2 * v10] = *a2;
        *(_QWORD *)&v5[2 * v10 + 2] = *a3;
      }
      else
      {
        return (unsigned int)-2147467259;
      }
    }
  }
  return v3;
}
