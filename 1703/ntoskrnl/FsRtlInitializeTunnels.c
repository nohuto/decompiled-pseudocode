/*
 * XREFs of FsRtlInitializeTunnels @ 0x140819950
 * Callers:
 *     FsRtlInitSystem @ 0x140819368 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializePagedLookasideList @ 0x1405681D0 (ExInitializePagedLookasideList.c)
 *     FsRtlGetTunnelParameterValue @ 0x1405BE1E0 (FsRtlGetTunnelParameterValue.c)
 */

void FsRtlInitializeTunnels()
{
  unsigned int v0; // ecx
  USHORT Depth; // ax
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-18h] BYREF

  if ( (_BYTE)dword_1403E3134 )
    TunnelMaxEntries = 1024;
  *(_DWORD *)&ValueName.Length = 2752552;
  ValueName.Buffer = L"MaximumTunnelEntries";
  FsRtlGetTunnelParameterValue(&ValueName, &TunnelMaxEntries);
  *(_DWORD *)&ValueName.Length = 4063292;
  ValueName.Buffer = L"MaximumTunnelEntryAgeInSeconds";
  FsRtlGetTunnelParameterValue(&ValueName, &TunnelMaxAge);
  if ( TunnelMaxAge )
  {
    v0 = TunnelMaxEntries;
  }
  else
  {
    v0 = 0;
    TunnelMaxEntries = 0;
  }
  TunnelMaxAge *= 10000000;
  if ( v0 > 0xFFFF )
  {
    Depth = 256;
  }
  else
  {
    Depth = (unsigned __int16)v0 >> 4;
    if ( !((unsigned __int16)v0 >> 4) )
    {
      if ( !v0 )
        goto LABEL_9;
      Depth = v0 + 1;
    }
    if ( Depth > 0x100u )
      Depth = 256;
  }
LABEL_9:
  ExInitializePagedLookasideList((PPAGED_LOOKASIDE_LIST)&TunnelLookasideList, 0LL, 0LL, 0, 0xB0uLL, 0x4C6E7554u, Depth);
}
