/*
 * XREFs of LdrpPrepareImportAddressTableForSnap @ 0x18002259C
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18002EEF8 (LdrpMapAndSnapDependency.c)
 *     AVrfpSnapDllImports @ 0x1800DB67C (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x1800DB92C (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1800230B8 (LdrImageDirectoryEntryToLoadConfig.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180026720 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180028970 (RtlImageNtHeaderEx.c)
 *     ZwProtectVirtualMemory @ 0x1800A0AC0 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall LdrpPrepareImportAddressTableForSnap(__int64 a1)
{
  __int64 v1; // rsi
  __int64 *v2; // rdi
  int v4; // eax
  __int64 v5; // rcx
  bool v6; // zf
  __int64 Config; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 result; // rax
  _QWORD *v13; // rcx
  unsigned __int64 v14; // r8
  unsigned int v15; // r10d
  unsigned int *v16; // rdx
  unsigned int v17; // r9d
  unsigned int v18; // r8d
  __int64 v19; // rax
  __int64 v20; // [rsp+60h] [rbp+30h] BYREF
  __int64 v21; // [rsp+68h] [rbp+38h] BYREF
  _QWORD *v22; // [rsp+70h] [rbp+40h] BYREF
  __int64 v23; // [rsp+78h] [rbp+48h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v2 = (__int64 *)(a1 + 112);
  v4 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(v1 + 48), 1, 12, (int)a1 + 112, (__int64)&v21);
  v5 = v21;
  if ( v4 < 0 )
    v5 = 0LL;
  v6 = (*(_DWORD *)(a1 + 32) & 0x800000) == 0;
  v21 = v5;
  *(_QWORD *)(a1 + 104) = v5;
  if ( !v6 )
    return 0LL;
  RtlImageNtHeaderEx(3LL, *(_QWORD *)(v1 + 48), 0LL, &v20);
  Config = LdrImageDirectoryEntryToLoadConfig(*(_QWORD *)(v1 + 48));
  if ( !Config || *(_DWORD *)Config < 0x94u )
    goto LABEL_10;
  v8 = v20;
  if ( (*(_WORD *)(v20 + 94) & 0x4000) != 0 && (*(_DWORD *)(Config + 144) & 0x100) != 0 )
  {
    v9 = *(_QWORD **)(Config + 112);
    *(_QWORD *)(a1 + 152) = v9;
    if ( v9 )
    {
      *(_QWORD *)(a1 + 144) = *v9;
LABEL_10:
      v8 = v20;
    }
  }
  if ( !*(_QWORD *)(a1 + 104) )
  {
    v15 = *(_DWORD *)(v8 + 144);
    v16 = (unsigned int *)(*(unsigned __int16 *)(v8 + 20) + v8 + 24);
    if ( v15 )
    {
      v17 = 0;
      if ( *(_WORD *)(v8 + 6) )
      {
        while ( 1 )
        {
          v18 = v16[3];
          if ( v15 >= v18 && v15 < v18 + v16[4] )
            break;
          ++v17;
          v16 += 10;
          if ( v17 >= *(unsigned __int16 *)(v8 + 6) )
            goto LABEL_12;
        }
        *(_QWORD *)(a1 + 104) = *(_QWORD *)(v1 + 48) + v18;
        v19 = v16[2];
        *v2 = v19;
        if ( !v19 )
          *v2 = v16[4];
      }
    }
  }
LABEL_12:
  v10 = 0;
  if ( *(_QWORD *)(a1 + 104) )
  {
    v11 = *v2;
    if ( *v2 )
    {
      v22 = *(_QWORD **)(a1 + 104);
      v23 = v11;
      result = ZwProtectVirtualMemory(-1LL, &v22, &v23, 4LL, a1 + 136);
      v10 = result;
      if ( (int)result < 0 )
        return result;
      v13 = v22;
      v14 = (unsigned __int64)v22 + v23;
      do
      {
        *v13 = *v13;
        v13 += 512;
      }
      while ( (unsigned __int64)v13 < v14 );
    }
  }
  return v10;
}
