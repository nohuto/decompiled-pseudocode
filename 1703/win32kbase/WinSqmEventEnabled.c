/*
 * XREFs of WinSqmEventEnabled @ 0x1C0065B00
 * Callers:
 *     WinSqmAddToStreamEx @ 0x1C0065880 (WinSqmAddToStreamEx.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0065A6C (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmEndSession @ 0x1C0065EB4 (WinSqmEndSession.c)
 *     WinSqmAddToStream @ 0x1C00E7580 (WinSqmAddToStream.c)
 *     WinSqmSetString @ 0x1C00E7780 (WinSqmSetString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WinSqmEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor, void *Source1)
{
  unsigned int v2; // ebx
  char SecurityDescriptor; // al
  bool v6; // zf

  v2 = 0;
  if ( *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock )
  {
    SecurityDescriptor = (char)WPP_MAIN_CB.SecurityDescriptor;
    if ( !LODWORD(WPP_MAIN_CB.SecurityDescriptor) )
      return EtwEventEnabled(*(REGHANDLE *)&WPP_MAIN_CB.DeviceLock.Header.Lock, EventDescriptor);
    if ( Source1 )
    {
      if ( RtlCompareMemory(Source1, &unk_1C0161360, 0x10uLL) != 16 )
      {
        v6 = ((__int64)WPP_MAIN_CB.SecurityDescriptor & 2) == 0;
        goto LABEL_10;
      }
      SecurityDescriptor = (char)WPP_MAIN_CB.SecurityDescriptor;
    }
    v6 = (SecurityDescriptor & 1) == 0;
LABEL_10:
    if ( !v6 )
      return v2;
    return EtwEventEnabled(*(REGHANDLE *)&WPP_MAIN_CB.DeviceLock.Header.Lock, EventDescriptor);
  }
  return v2;
}
