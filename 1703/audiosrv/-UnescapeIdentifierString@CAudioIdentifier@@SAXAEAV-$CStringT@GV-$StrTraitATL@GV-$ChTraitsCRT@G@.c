/*
 * XREFs of ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800985E0
 * Callers:
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x18008E3A4 (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x1800973B4 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x180097C70 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18009802C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800235CC (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x18002362C (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??A?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x180097294 (--A-$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z.c)
 *     ?Delete@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z @ 0x1800972BC (-Delete@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z.c)
 */

__int64 __fastcall CAudioIdentifier::UnescapeIdentifierString(__int64 *a1)
{
  __int64 result; // rax
  int v2; // ebx
  int v4; // esi
  __int64 v5; // rbp
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r14d

  result = *a1;
  v2 = 0;
  v4 = *(_DWORD *)(*a1 - 16);
  if ( v4 > 0 )
  {
    v5 = 0LL;
    do
    {
      result = ATL::CSimpleStringT<unsigned short,0>::operator[](a1, v2);
      if ( (_WORD)result == 37 )
      {
        if ( (unsigned __int16)ATL::CSimpleStringT<unsigned short,0>::operator[](a1, v2 + 1) == 37 )
        {
          result = ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Delete(
                     (const void **)a1,
                     (unsigned int)v2,
                     v6,
                     v7);
LABEL_10:
          --v4;
          goto LABEL_11;
        }
        result = ATL::CSimpleStringT<unsigned short,0>::operator[](a1, v2 + 1);
        if ( (_WORD)result == 98 )
        {
          ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Delete(
            (const void **)a1,
            (unsigned int)v2,
            v8,
            v9);
          if ( v2 < 0 || (v13 = *(_DWORD *)(*a1 - 16), v2 >= v13) )
            ATL::AtlThrowImpl(-2147024809);
          *(_WORD *)((char *)ATL::CSimpleStringT<unsigned short,0>::GetBuffer((const void **)a1, v10, v11, v12) + v5) = 124;
          result = ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, v13);
          goto LABEL_10;
        }
      }
LABEL_11:
      ++v2;
      v5 += 2LL;
    }
    while ( v2 < v4 );
  }
  return result;
}
