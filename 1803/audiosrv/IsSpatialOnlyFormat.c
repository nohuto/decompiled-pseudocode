/*
 * XREFs of IsSpatialOnlyFormat @ 0x1800FDD24
 * Callers:
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropertyStore@@PEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x1800FDDD0 (-ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropert.c)
 * Callees:
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180062B98 (IsGetDefaultSpatialRenderingModePresent.c)
 */

char __fastcall IsSpatialOnlyFormat(_QWORD *a1)
{
  char v1; // bl
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rcx
  _OWORD v11[3]; // [rsp+20h] [rbp-48h]

  v1 = 0;
  v11[0] = GUID_0000030c_0cea_0010_8000_00aa00389b71;
  v3 = 3;
  v11[1] = GUID_0000010c_0cea_0010_8000_00aa00389b71;
  v11[2] = GUID_0000000c_0cea_0010_8000_00aa00389b71;
  if ( IsGetDefaultSpatialRenderingModePresent()
    && (unsigned int)IsDolbyMatSupportedByAudioDriver(v5, v4, v6, v7, *(_QWORD *)&v11[0], *((_QWORD *)&v11[0] + 1)) )
  {
    v3 = 2;
  }
  v8 = 0;
  while ( 1 )
  {
    v9 = *(_QWORD *)&v11[v8] - *a1;
    if ( !v9 )
      v9 = *((_QWORD *)&v11[v8] + 1) - a1[1];
    if ( !v9 )
      break;
    if ( ++v8 >= v3 )
      return v1;
  }
  return 1;
}
