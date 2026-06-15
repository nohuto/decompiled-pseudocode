/*
 * XREFs of ?ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800984CC
 * Callers:
 *     ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x18008C8A0 (-GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?ToString@CAppAudioSessionId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001ED6C (-ToString@CAppAudioSessionId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180020560 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x180023200 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180023588 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?ToString@CAppInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180023650 (-ToString@CAppInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@.c)
 *     ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18003202C (-EscapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionInstanceId::ToStreamSwitchString(__int64 a1, wchar_t *const *a2)
{
  int v4; // ebx
  ATL::CAtlException *v6; // [rsp+28h] [rbp-20h] BYREF
  const wchar_t *v7; // [rsp+60h] [rbp+18h] BYREF
  const wchar_t *v8; // [rsp+68h] [rbp+20h] BYREF

  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    &v8,
    (volatile signed __int32 *)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
    &v7,
    (volatile signed __int32 *)&ATL::g_strmgr);
  v4 = CAppAudioSessionId::ToString(a1 + 8, &v8);
  if ( v4 < 0 )
    goto LABEL_5;
  v4 = CAppInstanceId::ToString((unsigned int *)(a1 + 56), (wchar_t *const *)&v7);
  if ( v4 < 0 )
    goto LABEL_5;
  try
  {
    CAudioIdentifier::EscapeIdentifierString(&v8);
    CAudioIdentifier::EscapeIdentifierString(&v7);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      a2,
      L"%s|%s",
      v8,
      v7,
      -2LL);
  }
  catch ( ATL::CAtlException *v6 )
  {
    v4 = *(_DWORD *)v6;
  }
  if ( v4 < 0 )
LABEL_5:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::ToStreamSwitchString", 1172, v4);
  ATL::CStringData::Release((ATL::CStringData *)(v7 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v8 - 12));
  return (unsigned int)v4;
}
