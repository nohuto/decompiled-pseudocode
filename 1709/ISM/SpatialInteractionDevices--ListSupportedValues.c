/*
 * XREFs of SpatialInteractionDevices::ListSupportedValues @ 0x180078844
 * Callers:
 *     ?ListSupportedValues@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@IPEAPEAUHSTRING__@@@Z @ 0x180078A48 (-ListSupportedValues@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@IPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall SpatialInteractionDevices::ListSupportedValues(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        _DWORD *a6)
{
  unsigned int v10; // ebx
  __int64 v11; // r10
  unsigned int v12; // r9d
  unsigned int v13; // r8d
  __int64 v14; // r10
  __int64 v15; // rdx
  __int16 v16; // ax
  __int64 v17; // rcx
  __int64 v18; // rdx
  HSTRING *v19; // r8
  const WCHAR *v20; // rcx
  HRESULT result; // eax

  v10 = 0;
  if ( a5 )
  {
    v11 = 0LL;
    do
    {
      v12 = *(_DWORD *)(a1 + 176);
      v13 = 0;
      v14 = a4 + 16 * v11;
      if ( v12 )
      {
        v15 = *(_QWORD *)(a1 + 168);
        while ( 1 )
        {
          if ( *(_WORD *)(v15 + 72LL * v13) == *(_WORD *)(v14 + 4)
            && !*(_BYTE *)(v15 + 72LL * v13 + 12)
            && *(_WORD *)(v15 + 72LL * v13 + 56) == *(_WORD *)(v14 + 6) )
          {
            v16 = *(_WORD *)(v14 + 2);
            if ( (!v16 || *(_WORD *)(v15 + 72LL * v13 + 8) == v16)
              && (!*(_WORD *)v14 || *(_WORD *)(v15 + 72LL * v13 + 10) == *(_WORD *)v14) )
            {
              break;
            }
          }
          if ( ++v13 >= v12 )
            goto LABEL_18;
        }
        v17 = (unsigned int)*a6;
        if ( (unsigned int)v17 >= a2 )
          return -2147024774;
        v18 = -1LL;
        v19 = (HSTRING *)(a3 + 8 * v17);
        *a6 = v17 + 1;
        v20 = *(const WCHAR **)(v14 + 8);
        do
          ++v18;
        while ( v20[v18] );
        result = WindowsCreateString(v20, v18, v19);
        if ( result < 0 )
          return result;
      }
LABEL_18:
      v11 = ++v10;
    }
    while ( v10 < a5 );
  }
  return 0;
}
