/*
 * XREFs of ?AddHead@?$CAtlList@PEAVCTrackedEndpoint@@V?$CElementTraits@PEAVCTrackedEndpoint@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCTrackedEndpoint@@@Z @ 0x180017498
 * Callers:
 *     ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180010A08 (-LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?GetSmtcProcesses@CApplication@@QEAAJAEAV?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@@Z @ 0x180012B74 (-GetSmtcProcesses@CApplication@@QEAAJAEAV-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B0A4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x180020618 (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x1800209C4 (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedA.c)
 *     ?TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z @ 0x180026018 (-TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z.c)
 *     ?StreamStarted@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z @ 0x18002B8C0 (-StreamStarted@CVolumeLimitTrackerImpl@@UEAAJPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z @ 0x18002D4AC (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001013C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

_QWORD *__fastcall ATL::CAtlList<CTrackedEndpoint *,ATL::CElementTraits<CTrackedEndpoint *>>::AddHead(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rsi
  unsigned __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // r8
  int v8; // edx
  _QWORD *i; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  _QWORD *result; // rax

  v3 = *a1;
  if ( a1[4] )
    goto LABEL_13;
  v5 = *((unsigned int *)a1 + 10);
  if ( v5 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v5 < 0x18 )
    {
LABEL_8:
      v7 = 0LL;
      goto LABEL_9;
    }
    v5 *= 24LL;
  }
  if ( ~v5 < 8 )
    goto LABEL_8;
  v6 = malloc(v5 + 8);
  v7 = v6;
  if ( !v6 )
    goto LABEL_17;
  *v6 = a1[3];
  a1[3] = (__int64)v6;
LABEL_9:
  if ( !v7 )
LABEL_17:
    ATL::AtlThrowImpl(-2147024882);
  v8 = *((_DWORD *)a1 + 10);
  for ( i = &v7[2 * (v8 - 1) + 1 + (unsigned int)(v8 - 1)]; --v8 >= 0; i -= 3 )
  {
    *i = a1[4];
    a1[4] = (__int64)i;
  }
LABEL_13:
  v10 = (_QWORD *)a1[4];
  v11 = *v10;
  v10[2] = *a2;
  a1[4] = v11;
  v10[1] = 0LL;
  *v10 = v3;
  ++a1[2];
  if ( *a1 )
    *(_QWORD *)(*a1 + 8) = v10;
  else
    a1[1] = (__int64)v10;
  result = v10;
  *a1 = (__int64)v10;
  return result;
}
