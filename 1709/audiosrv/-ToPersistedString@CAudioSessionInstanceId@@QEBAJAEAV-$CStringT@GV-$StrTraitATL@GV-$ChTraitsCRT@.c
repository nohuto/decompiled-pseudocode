/*
 * XREFs of ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x18007EF84
 * Callers:
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180070514 (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?GetId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180071BB0 (-GetId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180074174 (-OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ?ToString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800133B0 (-ToString@CAudioEndpointId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@AT.c)
 *     ?ToString@CAppAudioSessionId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180014120 (-ToString@CAppAudioSessionId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x180017E9C (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001827C (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18005B588 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?EscapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18007DF2C (-EscapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@AT.c)
 *     ?ToMigratedString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18007ED8C (-ToMigratedString@CAudioEndpointId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionInstanceId::ToPersistedString(__int64 *a1, const void **a2, int a3)
{
  int v6; // eax
  int v7; // ebx
  const void *v9[2]; // [rsp+20h] [rbp-28h] BYREF
  ATL::CAtlException *v10; // [rsp+30h] [rbp-18h] BYREF
  char *v11; // [rsp+68h] [rbp+20h] BYREF

  v9[1] = (const void *)-2LL;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v11, (__int64)&ATL::g_strmgr);
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(v9, (__int64)&ATL::g_strmgr);
  if ( a3 )
    v6 = CAudioEndpointId::ToMigratedString(a1, (__int64 *)&v11);
  else
    v6 = CAudioEndpointId::ToString(a1, &v11);
  v7 = v6;
  if ( v6 < 0 )
    goto LABEL_8;
  v7 = CAppAudioSessionId::ToString((__int64)(a1 + 1), v9);
  if ( v7 < 0 )
    goto LABEL_8;
  try
  {
    CAudioIdentifier::EscapeIdentifierString((const void **)&v11);
    CAudioIdentifier::EscapeIdentifierString(v9);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      a2,
      L"%s|%s",
      v11,
      v9[0]);
  }
  catch ( ATL::CAtlException *v10 )
  {
    v7 = *(_DWORD *)v10;
  }
  if ( v7 < 0 )
LABEL_8:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::ToPersistedString", 1116, v7);
  ATL::CStringData::Release((ATL::CStringData *)((char *)v9[0] - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v11 - 24));
  return (unsigned int)v7;
}
