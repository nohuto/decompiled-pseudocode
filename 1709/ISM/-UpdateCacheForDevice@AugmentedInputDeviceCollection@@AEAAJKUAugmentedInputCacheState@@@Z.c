/*
 * XREFs of ?UpdateCacheForDevice@AugmentedInputDeviceCollection@@AEAAJKUAugmentedInputCacheState@@@Z @ 0x18008C5FC
 * Callers:
 *     ?OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z @ 0x18008C1B0 (-OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AugmentedInputDeviceCollection::UpdateCacheForDevice(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 *v3; // rcx
  __int64 *v4; // rax
  __int64 *v5; // r9
  int v7; // ecx

  v3 = *(__int64 **)(a1 + 2760);
  v4 = v3;
  v5 = (__int64 *)v3[1];
  while ( !*((_BYTE *)v5 + 25) )
  {
    if ( *((_DWORD *)v5 + 7) >= a2 )
    {
      v4 = v5;
      v5 = (__int64 *)*v5;
    }
    else
    {
      v5 = (__int64 *)v5[2];
    }
  }
  if ( v4 == v3 || a2 < *((_DWORD *)v4 + 7) )
    v4 = v3;
  if ( v4 == v3 )
    return 2147500037LL;
  v7 = *(_DWORD *)(a3 + 8);
  v4[4] = *(_QWORD *)a3;
  *((_DWORD *)v4 + 10) = v7;
  return 0LL;
}
