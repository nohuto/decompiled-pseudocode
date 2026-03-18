/*
 * XREFs of WinSqmEventEnabled @ 0x1C0078440
 * Callers:
 *     WinSqmEndSession @ 0x1C007639C (WinSqmEndSession.c)
 *     WinSqmAddToStreamEx @ 0x1C00781B0 (WinSqmAddToStreamEx.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C00783B4 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmAddToStream @ 0x1C00ECB60 (WinSqmAddToStream.c)
 *     WinSqmSetString @ 0x1C00ECD6C (WinSqmSetString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WinSqmEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor, void *Source1)
{
  unsigned int v2; // ebx
  char DeviceObjectExtension; // al
  bool v6; // zf

  v2 = 0;
  if ( WPP_MAIN_CB.Reserved )
  {
    DeviceObjectExtension = (char)WPP_MAIN_CB.DeviceObjectExtension;
    if ( !LODWORD(WPP_MAIN_CB.DeviceObjectExtension) )
      return EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Reserved, EventDescriptor);
    if ( Source1 )
    {
      if ( RtlCompareMemory(Source1, &unk_1C01617A0, 0x10uLL) != 16 )
      {
        v6 = ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 2) == 0;
        goto LABEL_10;
      }
      DeviceObjectExtension = (char)WPP_MAIN_CB.DeviceObjectExtension;
    }
    v6 = (DeviceObjectExtension & 1) == 0;
LABEL_10:
    if ( !v6 )
      return v2;
    return EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Reserved, EventDescriptor);
  }
  return v2;
}
