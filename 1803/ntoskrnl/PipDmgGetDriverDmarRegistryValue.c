/*
 * XREFs of PipDmgGetDriverDmarRegistryValue @ 0x1405F6D6C
 * Callers:
 *     PipDmgGetDriverDmarCompatLevel @ 0x1405F6E8C (PipDmgGetDriverDmarCompatLevel.c)
 * Callees:
 *     IopGetRegistryValue @ 0x1405D9B94 (IopGetRegistryValue.c)
 */

__int64 __fastcall PipDmgGetDriverDmarRegistryValue(void *a1, _DWORD *a2)
{
  int v3; // ebx
  NTSTATUS RegistryValue; // r8d
  _DWORD *v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v6 = 0LL;
  RegistryValue = IopGetRegistryValue(a1, L"DmaRemappingCompatible", 0, &v6);
  if ( RegistryValue >= 0 )
  {
    if ( v6 && (v6[1] != 4 || v6[3] != 4) )
      RegistryValue = -1073741271;
    if ( RegistryValue >= 0 )
      v3 = *(_DWORD *)((char *)v6 + (unsigned int)v6[2]);
  }
  *a2 = v3;
  return (unsigned int)RegistryValue;
}
