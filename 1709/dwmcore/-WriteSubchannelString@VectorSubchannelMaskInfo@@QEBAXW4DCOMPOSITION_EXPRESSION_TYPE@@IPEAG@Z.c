/*
 * XREFs of ?WriteSubchannelString@VectorSubchannelMaskInfo@@QEBAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEAG@Z @ 0x1801CAF34
 * Callers:
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBGPEBX@Z @ 0x180157080 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMa.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18011FB40 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 */

char __fastcall VectorSubchannelMaskInfo::WriteSubchannelString(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4)
{
  int v4; // eax
  int v5; // ebx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  wchar_t *v11; // r8

  LOBYTE(v4) = *(_BYTE *)(a1 + 4);
  v5 = 0;
  if ( (_BYTE)v4 )
  {
    do
    {
      v8 = (*(unsigned __int8 *)(a1 + 8) >> (2 * (v4 - v5) - 2)) & 3;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 == 1 )
              v11 = L"W";
            else
              v11 = 0LL;
          }
          else
          {
            v11 = L"Z";
          }
        }
        else
        {
          v11 = L"Y";
        }
      }
      else
      {
        v11 = (wchar_t *)L"X";
      }
      StringCchCatW(a4, 48LL, (size_t *)v11);
      v4 = *(unsigned __int8 *)(a1 + 4);
      ++v5;
    }
    while ( v5 < v4 );
  }
  return v4;
}
