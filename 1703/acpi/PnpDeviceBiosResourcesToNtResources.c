/*
 * XREFs of PnpDeviceBiosResourcesToNtResources @ 0x1C0007AF4
 * Callers:
 *     PnpBiosGetDeviceResourceList @ 0x1C008CC0C (PnpBiosGetDeviceResourceList.c)
 * Callees:
 *     PnpBiosResourcesToNtResources @ 0x1C008D264 (PnpBiosResourcesToNtResources.c)
 */

__int64 __fastcall PnpDeviceBiosResourcesToNtResources(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // r8
  bool v8; // zf
  __int64 v9; // rcx
  __int64 result; // rax
  unsigned int v11; // edi
  char v12; // si
  KIRQL v13; // al
  unsigned int v14; // edx
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // rax
  char v18; // dl

  v5 = a1;
  v6 = a3 | 2;
  v8 = (*(_QWORD *)(a1 + 8) & 0x10000000000LL) == 0;
  v9 = *(_QWORD *)(a1 + 720);
  if ( v8 )
    v6 = a3;
  result = PnpBiosResourcesToNtResources(v9, a2, v6);
  v11 = result;
  if ( (int)result >= 0 && *(_QWORD *)a4 )
  {
    v12 = 0;
    v13 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    while ( (*(_QWORD *)(v5 + 8) & 0x2000000000LL) == 0 )
    {
      v5 = *(_QWORD *)(v5 + 744);
      if ( !v5 )
        goto LABEL_8;
    }
    v12 = 1;
LABEL_8:
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v13);
    if ( v12 )
    {
      v14 = *(_DWORD *)(*(_QWORD *)a4 + 28LL);
      v15 = *(_QWORD *)a4 + 32LL;
      if ( v14 )
      {
        v16 = v14;
        do
        {
          v17 = v15 + 8;
          v15 += 8 + 32LL * *(unsigned int *)(v15 + 4);
          while ( v17 < v15 )
          {
            v18 = *(_BYTE *)(v17 + 1);
            if ( (v18 == 1 || v18 == 3 || (unsigned __int8)(v18 - 6) <= 1u) && *(_BYTE *)(v17 + 2) == 3 )
              *(_BYTE *)(v17 + 2) = 1;
            v17 += 32LL;
          }
          --v16;
        }
        while ( v16 );
      }
    }
    return v11;
  }
  return result;
}
