/*
 * XREFs of sub_1800703F8 @ 0x1800703F8
 * Callers:
 *     LdrShutdownProcess @ 0x18006FA10 (LdrShutdownProcess.c)
 * Callees:
 *     EtwNotificationUnregister @ 0x18005FD10 (EtwNotificationUnregister.c)
 */

__int64 sub_1800703F8()
{
  unsigned int v0; // ebx
  char *pShimData; // rdi
  char *v2; // rdi
  REGHANDLE v3; // rcx

  v0 = 0;
  pShimData = (char *)NtCurrentPeb()->pShimData;
  if ( pShimData )
  {
    v2 = pShimData + 1496;
    if ( !v2 || !*((_DWORD *)v2 + 12) )
      v2 = 0LL;
    if ( v2 )
    {
      v3 = *((_QWORD *)v2 + 2);
      if ( v3 )
      {
        EtwNotificationUnregister(v3, 0LL);
        *((_QWORD *)v2 + 2) = 0LL;
        return 1;
      }
    }
  }
  return v0;
}
