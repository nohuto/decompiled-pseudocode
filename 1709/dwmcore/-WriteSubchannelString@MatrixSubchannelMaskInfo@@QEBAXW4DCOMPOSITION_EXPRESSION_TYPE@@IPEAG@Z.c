/*
 * XREFs of ?WriteSubchannelString@MatrixSubchannelMaskInfo@@QEBAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEAG@Z @ 0x1801CAE5C
 * Callers:
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBGPEBX@Z @ 0x180157080 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMa.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18011FB40 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Matrix4x4SubchannelAtIndex@MatrixSubchannelMaskInfo@@QEBAPEBGI@Z @ 0x1801CAD6C (-Matrix4x4SubchannelAtIndex@MatrixSubchannelMaskInfo@@QEBAPEBGI@Z.c)
 */

char __fastcall MatrixSubchannelMaskInfo::WriteSubchannelString(__int64 a1, int a2, __int64 a3, unsigned __int16 *a4)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned __int16 *v14; // rax

  LOBYTE(v4) = *(_BYTE *)(a1 + 4);
  v5 = 0;
  if ( (_BYTE)v4 )
  {
    do
    {
      if ( a2 == 104 )
      {
        v9 = (*(_QWORD *)(a1 + 8) >> (4 * ((unsigned __int8)v4 - (unsigned __int8)v5) - 4)) & 0xF;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( v12 )
              {
                v13 = v12 - 1;
                if ( v13 )
                {
                  if ( v13 == 1 )
                    v14 = L"_32";
                  else
                    v14 = 0LL;
                }
                else
                {
                  v14 = L"_31";
                }
              }
              else
              {
                v14 = L"_22";
              }
            }
            else
            {
              v14 = L"_21";
            }
          }
          else
          {
            v14 = L"_12";
          }
        }
        else
        {
          v14 = L"_11";
        }
      }
      else
      {
        v14 = (unsigned __int16 *)MatrixSubchannelMaskInfo::Matrix4x4SubchannelAtIndex(
                                    (MatrixSubchannelMaskInfo *)a1,
                                    v5);
      }
      StringCchCatW(a4, 48LL, (size_t *)v14);
      v4 = *(unsigned __int8 *)(a1 + 4);
      ++v5;
    }
    while ( v5 < v4 );
  }
  return v4;
}
