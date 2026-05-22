/*
 * XREFs of SpatialInteractionDevices::ListSupportedButtons @ 0x180078960
 * Callers:
 *     ?ListSupportedValues@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@IPEAPEAUHSTRING__@@@Z @ 0x180078A48 (-ListSupportedValues@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@IPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     SpatialInteractionDevices::IsValidButtonUsage @ 0x180078144 (SpatialInteractionDevices--IsValidButtonUsage.c)
 */

HRESULT __fastcall SpatialInteractionDevices::ListSupportedButtons(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        _DWORD *a6)
{
  unsigned __int64 i; // rdi
  unsigned int v11; // r10d
  __int64 v12; // r14
  int v13; // r10d
  unsigned int v14; // r11d
  __int64 v15; // rcx
  int v16; // eax
  HSTRING *v17; // r8
  const WCHAR *v18; // rcx
  __int64 v19; // rdx
  HRESULT result; // eax

  for ( i = 0LL; i < a5; a4 += 24LL )
  {
    v11 = 0;
    if ( *(_DWORD *)(a1 + 192) )
    {
      v12 = *(_QWORD *)(a1 + 184);
      while ( !SpatialInteractionDevices::IsValidButtonUsage(v12 + 72LL * v11, (_WORD *)a4) )
      {
        v11 = v13 + 1;
        if ( v11 >= v14 )
          goto LABEL_11;
      }
      v15 = (unsigned int)*a6;
      if ( (unsigned int)v15 >= a2 )
        return -2147024774;
      v16 = v15 + 1;
      v17 = (HSTRING *)(a3 + 8 * v15);
      v18 = *(const WCHAR **)(a4 + 16);
      v19 = -1LL;
      *a6 = v16;
      do
        ++v19;
      while ( v18[v19] );
      result = WindowsCreateString(v18, v19, v17);
      if ( result < 0 )
        return result;
    }
LABEL_11:
    ++i;
  }
  return 0;
}
