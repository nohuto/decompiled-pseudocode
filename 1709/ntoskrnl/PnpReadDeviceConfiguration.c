/*
 * XREFs of PnpReadDeviceConfiguration @ 0x140558428
 * Callers:
 *     PnpGetDeviceResourcesFromRegistry @ 0x140557EA8 (PnpGetDeviceResourcesFromRegistry.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     IopGetRegistryValue @ 0x14051A5E4 (IopGetRegistryValue.c)
 */

__int64 __fastcall PnpReadDeviceConfiguration(void *a1, int a2, void **a3, _DWORD *a4)
{
  int v6; // edx
  int v7; // edx
  const WCHAR *v8; // rdx
  NTSTATUS RegistryValue; // ebx
  unsigned int *v11; // rdi
  int v12; // eax
  unsigned int v13; // ecx
  PVOID PoolWithTag; // rax
  unsigned int *v15; // r9
  unsigned int v16; // r8d
  __int64 i; // rcx
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  *a4 = 0;
  v6 = a2 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 2 )
        return 3221225712LL;
      v8 = L"BootConfig";
    }
    else
    {
      v8 = L"ForcedConfig";
    }
  }
  else
  {
    v8 = L"AllocConfig";
  }
  RegistryValue = IopGetRegistryValue(a1, v8, 0, &P);
  if ( RegistryValue >= 0 )
  {
    v11 = (unsigned int *)P;
    v12 = *((_DWORD *)P + 1);
    if ( v12 == 8 && (v13 = *((_DWORD *)P + 3)) != 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x75737050u);
      *a3 = PoolWithTag;
      if ( PoolWithTag )
      {
        *a4 = v11[3];
        memmove(*a3, (char *)v11 + v11[2], v11[3]);
        v15 = (unsigned int *)*a3;
        v16 = 0;
        for ( i = (__int64)*a3 + 4; v16 < *v15; i = v19 )
        {
          if ( *(_DWORD *)i == -1 )
            *(_QWORD *)i = (unsigned int)PnpDefaultInterfaceType;
          v18 = *(_DWORD *)(i + 12);
          v19 = i + 16;
          if ( v18 )
          {
            v20 = v18;
            do
            {
              v21 = 0LL;
              if ( *(_BYTE *)v19 == 5 )
                v21 = *(unsigned int *)(v19 + 4);
              v19 += v21 + 20;
              --v20;
            }
            while ( v20 );
          }
          ++v16;
        }
      }
      else
      {
        RegistryValue = -1073741670;
      }
    }
    else if ( v12 != 8 )
    {
      RegistryValue = -1073741823;
    }
    ExFreePoolWithTag(v11, 0);
  }
  return (unsigned int)RegistryValue;
}
