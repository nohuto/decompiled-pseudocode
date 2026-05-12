/*
 * XREFs of RaInitializeConfiguration @ 0x1C0066364
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1C0028C7C (RaidAdapterStartDeviceIrp.c)
 * Callees:
 *     memset @ 0x1C0018140 (memset.c)
 */

__int64 __fastcall RaInitializeConfiguration(_DWORD *a1, __int64 a2, int a3, int a4, char a5)
{
  int v9; // esi
  int *v10; // rax
  int v11; // ecx
  unsigned int v12; // eax
  PVOID PoolWithTag; // rax
  __int64 result; // rax
  PCONFIGURATION_INFORMATION ConfigurationInformation; // rax

  if ( a5 )
    v9 = a1[2];
  else
    v9 = *(_DWORD *)(a2 + 4);
  memset(a1, 0, 0xE0uLL);
  *a1 = 224;
  a1[6] = -1;
  a1[8] = -1;
  a1[9] = -1;
  a1[2] = v9;
  a1[5] = 1;
  *((_WORD *)a1 + 48) = -32767;
  *((_WORD *)a1 + 73) = 264;
  *(_WORD *)((char *)a1 + 81) = 257;
  *(_WORD *)((char *)a1 + 87) = 1;
  *(_DWORD *)((char *)a1 + 90) = 16843009;
  *((_BYTE *)a1 + 95) = 0;
  *((_BYTE *)a1 + 196) = 0;
  if ( *(_DWORD *)a2 == 208 )
  {
    *((_BYTE *)a1 + 98) = (*(_DWORD *)(a2 + 188) & 2) != 0;
    v10 = a1 + 53;
    v11 = (*(_DWORD *)(a2 + 184) & 1) != 0 ? 250 : 20;
  }
  else
  {
    *((_BYTE *)a1 + 98) = 0;
    v10 = a1 + 53;
    v11 = 250;
    if ( *(_DWORD *)a2 != 176 )
      v11 = 20;
  }
  *v10 = v11;
  *((_BYTE *)a1 + 144) = (_BYTE)Mm64BitPhysicalAddress != 0 ? 0x80 : 0;
  *((_BYTE *)a1 + 94) = *(_BYTE *)(a2 + 93);
  a1[35] = *(_DWORD *)(a2 + 72);
  a1[34] = *(_DWORD *)(a2 + 68);
  *((_BYTE *)a1 + 89) = *(_BYTE *)(a2 + 88);
  v12 = *(_DWORD *)(a2 + 76);
  a1[13] = v12;
  if ( v12 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v12, 0x43506152u);
    *((_QWORD *)a1 + 7) = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225495LL;
    memset(PoolWithTag, 0, 16LL * (unsigned int)a1[13]);
  }
  else
  {
    *((_QWORD *)a1 + 7) = 0LL;
  }
  ConfigurationInformation = IoGetConfigurationInformation();
  *((_BYTE *)a1 + 85) = ConfigurationInformation->AtDiskPrimaryAddressClaimed;
  *((_BYTE *)a1 + 86) = ConfigurationInformation->AtDiskSecondaryAddressClaimed;
  *(_QWORD *)((char *)a1 + 73) = -1LL;
  result = 0LL;
  a1[7] = 17;
  a1[1] = a3;
  a1[25] = a4;
  *((_BYTE *)a1 + 99) = 0;
  a1[51] = 1000;
  a1[52] = 255;
  a1[54] = 4000000;
  return result;
}
