/*
 * XREFs of PnpIoResourceListToCmResourceList @ 0x1C0083C28
 * Callers:
 *     ACPIBusIrpQueryResources @ 0x1C00781C0 (ACPIBusIrpQueryResources.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00808F0 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     LinkNodeGetPossibleResources @ 0x1C008D2A8 (LinkNodeGetPossibleResources.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 */

__int64 __fastcall PnpIoResourceListToCmResourceList(_DWORD *a1, _QWORD *a2)
{
  _DWORD *v4; // rdi
  int v5; // eax
  SIZE_T v6; // rbp
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rbx
  unsigned int v10; // r10d
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // ecx

  *a2 = 0LL;
  if ( !a1 )
    return 3221225488LL;
  v4 = a1 + 8;
  if ( a1 == (_DWORD *)-32LL )
    return 3221225488LL;
  v5 = a1[9];
  if ( !v5 )
    return 3221225488LL;
  v6 = (unsigned int)(20 * (v5 + 1));
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x52706341u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v6);
  *v8 = 1;
  v10 = 0;
  v8[1] = a1[1];
  v8[2] = a1[2];
  v8[3] = 65537;
  v8[4] = v4[1];
  if ( v4[1] )
  {
    while ( 1 )
    {
      v11 = 5LL * v10;
      v12 = 8LL * v10;
      v13 = BYTE1(v4[v12 + 2]);
      LOBYTE(v8[v11 + 5]) = v13;
      BYTE1(v8[v11 + 5]) = BYTE2(v4[v12 + 2]);
      HIWORD(v8[v11 + 5]) = v4[v12 + 3];
      if ( v13 == 1 )
        break;
      switch ( v13 )
      {
        case 2:
          LOWORD(v8[5 * v10 + 6]) = v4[v12 + 4];
          v8[5 * v10 + 7] = v4[v12 + 4];
          *(_QWORD *)&v8[5 * v10 + 8] = 0xFFFFFFFFLL;
          HIWORD(v8[5 * v10 + 6]) = 0;
          break;
        case 3:
          goto LABEL_19;
        case 4:
          if ( SLOBYTE(v4[v12 + 3]) >= 0 )
          {
            *(_QWORD *)&v8[5 * v10 + 6] = (unsigned int)v4[v12 + 4];
          }
          else
          {
            v8[5 * v10 + 6] = v4[v12 + 6];
            v8[5 * v10 + 7] = v4[v12 + 4];
            LOBYTE(v8[5 * v10 + 8]) = v4[v12 + 7];
          }
          break;
        case 6:
          v8[5 * v10 + 6] = v4[v12 + 5];
          v8[5 * v10 + 7] = v4[v12 + 4];
          break;
        case 7:
          goto LABEL_19;
        default:
          v8[5 * v10 + 6] = v4[v12 + 4];
          v8[5 * v10 + 7] = v4[v12 + 5];
          v8[5 * v10 + 8] = v4[v12 + 6];
          break;
      }
LABEL_20:
      if ( ++v10 >= v4[1] )
        goto LABEL_21;
    }
LABEL_19:
    v8[5 * v10 + 8] = v4[v12 + 4];
    *(_QWORD *)&v8[5 * v10 + 6] = *(_QWORD *)&v4[v12 + 6];
    goto LABEL_20;
  }
LABEL_21:
  *a2 = v8;
  return 0LL;
}
