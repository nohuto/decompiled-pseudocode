/*
 * XREFs of ?ToString@CAppInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180030F64
 * Callers:
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180017800 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18007F0B4 (-ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsC.c)
 * Callees:
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x180017E9C (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAppInstanceId::ToString(unsigned int *a1, const void **a2)
{
  unsigned int v2; // ebx
  int *v4; // rbx
  ATL::CAtlException *v5; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+50h] [rbp+8h]

  v2 = 0;
  if ( a1[2] )
  {
    try
    {
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        a2,
        L"%d|#",
        a1[1]);
    }
    catch ( ATL::CAtlException *v5 )
    {
      v4 = (int *)v5;
      if ( *(_DWORD *)v5 == -1073741571 )
        _o__resetstkoflw();
      v6 = *v4;
      v2 = *v4;
      if ( v6 < 0 )
        AudSrvTraceLoggingErrorHelper("CAppInstanceId::ToString", 0x29Du, v6);
    }
  }
  else
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      a2,
      L"%d|%d",
      a1[1],
      *a1,
      -2LL);
  }
  return v2;
}
