/*
 * XREFs of ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x1800164B0
 * Callers:
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180035BF0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800A8940 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x1800AA698 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z.c)
 * Callees:
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x180030B28 (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 */

const unsigned __int16 *__fastcall CAudioEndpointId::GetBuffer(CAudioEndpointId *this)
{
  const unsigned __int16 *result; // rax
  ATL::CAtlException *v2; // [rsp+28h] [rbp-10h] BYREF

  try
  {
    result = (const unsigned __int16 *)ATL::CSimpleStringT<unsigned short,0>::GetBuffer(this);
  }
  catch ( ATL::CAtlException *v2 )
  {
    if ( *(_DWORD *)v2 == -1073741571 )
      _o__resetstkoflw();
    return 0LL;
  }
  return result;
}
