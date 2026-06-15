/*
 * XREFs of ?IsPropertyChangeRelevant@CSpatialProperties@@QEAA_NAEBU_tagpropertykey@@@Z @ 0x18007B5D8
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PEAH@Z @ 0x180079E28 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PE.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSpatialProperties::IsPropertyChangeRelevant(
        CSpatialProperties *this,
        const struct _tagpropertykey *a2)
{
  bool result; // al
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  result = 0;
  v3 = *(_QWORD *)&a2->fmtid.Data1 - *(_QWORD *)&PKEY_SpatialAudioEndpoint_Settings.fmtid.Data1;
  if ( *(_QWORD *)&a2->fmtid.Data1 == *(_QWORD *)&PKEY_SpatialAudioEndpoint_Settings.fmtid.Data1 )
    v3 = *(_QWORD *)a2->fmtid.Data4 - *(_QWORD *)PKEY_SpatialAudioEndpoint_Settings.fmtid.Data4;
  if ( !v3 && a2->pid == 2 )
    return 1;
  v4 = *(_QWORD *)&a2->fmtid.Data1 - PKEY_SpatialAudioEndpoint_RenderingMode;
  if ( *(_QWORD *)&a2->fmtid.Data1 == (_QWORD)PKEY_SpatialAudioEndpoint_RenderingMode )
    v4 = *(_QWORD *)a2->fmtid.Data4 - *((_QWORD *)&PKEY_SpatialAudioEndpoint_RenderingMode + 1);
  if ( !v4 && !a2->pid )
    return 1;
  v5 = *(_QWORD *)&a2->fmtid.Data1 - PKEY_SpatialAudioEndpoint_VirtualSurroundEffectMode;
  if ( *(_QWORD *)&a2->fmtid.Data1 == (_QWORD)PKEY_SpatialAudioEndpoint_VirtualSurroundEffectMode )
    v5 = *(_QWORD *)a2->fmtid.Data4 - *((_QWORD *)&PKEY_SpatialAudioEndpoint_VirtualSurroundEffectMode + 1);
  if ( !v5 && a2->pid == 1 )
    return 1;
  v6 = *(_QWORD *)&a2->fmtid.Data1 - *(_QWORD *)&PKEY_AudioEngine_DeviceFormat.fmtid.Data1;
  if ( *(_QWORD *)&a2->fmtid.Data1 == *(_QWORD *)&PKEY_AudioEngine_DeviceFormat.fmtid.Data1 )
    v6 = *(_QWORD *)a2->fmtid.Data4 - *(_QWORD *)PKEY_AudioEngine_DeviceFormat.fmtid.Data4;
  if ( !v6 && !a2->pid )
    return 1;
  return result;
}
