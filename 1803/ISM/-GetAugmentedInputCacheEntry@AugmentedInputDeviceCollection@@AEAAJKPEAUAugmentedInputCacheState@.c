/*
 * XREFs of ?GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@@@Z @ 0x18006D38C
 * Callers:
 *     ?OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z @ 0x18006CF30 (-OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z @ 0x18006D070 (-OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AugmentedInputDeviceCollection::GetAugmentedInputCacheEntry(
        AugmentedInputDeviceCollection *this,
        unsigned int a2,
        struct AugmentedInputCacheState *a3)
{
  __int64 *v3; // r9
  __int64 *v4; // rax
  __int64 *v5; // rcx
  unsigned int v6; // r10d
  __int64 *v7; // r11
  __int64 result; // rax
  __int64 v9; // xmm0_8
  int v10; // ecx

  v3 = (__int64 *)*((_QWORD *)this + 345);
  v4 = v3;
  v5 = (__int64 *)v3[1];
  if ( *((_BYTE *)v5 + 25) )
    goto LABEL_10;
  do
  {
    v6 = *((_DWORD *)v5 + 7);
    v7 = v5;
    if ( v6 >= a2 )
      v5 = (__int64 *)*v5;
    else
      v5 = (__int64 *)v5[2];
    if ( v6 >= a2 )
      v4 = v7;
  }
  while ( !*((_BYTE *)v5 + 25) );
  if ( v4 == v3 || a2 < *((_DWORD *)v4 + 7) )
LABEL_10:
    v4 = v3;
  if ( v4 == v3 )
    return 2147500037LL;
  v9 = v4[4];
  v10 = *((_DWORD *)v4 + 10);
  result = 0LL;
  *(_QWORD *)a3 = v9;
  *((_DWORD *)a3 + 2) = v10;
  return result;
}
