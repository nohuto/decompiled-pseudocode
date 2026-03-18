/*
 * XREFs of NtUserGetActiveProcessesDpis @ 0x1C0117C20
 * Callers:
 *     <none>
 * Callees:
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C0077DC8 (GetDpiDepSysMetCachePlateauSlot.c)
 */

__int64 NtUserGetActiveProcessesDpis()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v2; // ebx
  __int64 i; // r11
  unsigned int DpiDepSysMetCachePlateauSlot; // eax
  __int64 v5; // r11

  EnterCrit(0LL, 1LL);
  v2 = 0;
  for ( i = gppiList; i; i = *(_QWORD *)(v5 + 352) )
  {
    DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(*(unsigned __int16 *)(i + 284));
    if ( DpiDepSysMetCachePlateauSlot != -1 )
    {
      v1 = DpiDepSysMetCachePlateauSlot;
      v0 = (unsigned int)(1 << DpiDepSysMetCachePlateauSlot);
      v2 |= v0;
    }
  }
  UserSessionSwitchLeaveCrit(v1, v0);
  return v2;
}
