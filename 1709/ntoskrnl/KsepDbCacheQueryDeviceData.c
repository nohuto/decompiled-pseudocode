/*
 * XREFs of KsepDbCacheQueryDeviceData @ 0x1406DAD20
 * Callers:
 *     KseQueryDeviceData @ 0x1404F52B0 (KseQueryDeviceData.c)
 *     KsepDbCacheQueryDevice @ 0x1404F54EC (KsepDbCacheQueryDevice.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     KsepCacheDeviceQueryData @ 0x1406DB870 (KsepCacheDeviceQueryData.c)
 */

__int64 __fastcall KsepDbCacheQueryDeviceData(__int64 a1, __int64 a2, _DWORD *a3, unsigned int *a4, void *a5)
{
  unsigned int v7; // edi
  __int64 Data; // rax
  __int64 v9; // rdx
  unsigned int v10; // eax
  bool v11; // cf

  v7 = -1073741275;
  if ( a1 )
  {
    v7 = 0;
    Data = KsepCacheDeviceQueryData();
    v9 = Data;
    if ( Data )
    {
      *a3 = *(_DWORD *)(Data + 36);
      v10 = *(_DWORD *)(Data + 32);
      v11 = *a4 < v10;
      *a4 = v10;
      if ( v11 )
        return (unsigned int)-1073741789;
      else
        memmove(a5, *(const void **)(v9 + 40), *(unsigned int *)(v9 + 32));
    }
    else
    {
      *a4 = 0;
    }
  }
  return v7;
}
