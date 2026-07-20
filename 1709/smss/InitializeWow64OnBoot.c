/*
 * XREFs of InitializeWow64OnBoot @ 0x14000A298
 * Callers:
 *     SmpInit @ 0x140009F54 (SmpInit.c)
 * Callees:
 *     CreateRegistryLinksForMachine @ 0x140005790 (CreateRegistryLinksForMachine.c)
 *     __security_check_cookie @ 0x14000C4E0 (__security_check_cookie.c)
 *     __chkstk_0 @ 0x14000C861 (__chkstk_0.c)
 */

__int64 InitializeWow64OnBoot()
{
  int RegistryLinksForMachine; // ecx
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rcx
  void *v3; // rsp
  void *v4; // rsp
  __int64 v5; // rdi
  __int16 *v6; // rdx
  _DWORD v8[2]; // [rsp+30h] [rbp+0h] BYREF
  __int64 v9; // [rsp+38h] [rbp+8h] BYREF

  v9 = 0LL;
  RegistryLinksForMachine = NtQuerySystemInformationEx(181LL, &v9, 8LL);
  if ( RegistryLinksForMachine == -1073741789 )
  {
    v1 = v8[0] + 15LL;
    if ( v1 <= v8[0] )
      v1 = 0xFFFFFFFFFFFFFF0LL;
    v2 = v1 & 0xFFFFFFFFFFFFFFF0uLL;
    v3 = alloca(v2);
    v4 = alloca(v2);
    RegistryLinksForMachine = NtQuerySystemInformationEx(181LL, &v9, 8LL);
    if ( RegistryLinksForMachine >= 0 )
    {
      LODWORD(v5) = 0;
      if ( LOWORD(v8[0]) )
      {
        v6 = (__int16 *)v8;
        do
        {
          if ( (*(_DWORD *)v6 & 0x60000) == 0x20000 )
          {
            RegistryLinksForMachine = CreateRegistryLinksForMachine(*v6);
            if ( RegistryLinksForMachine < 0 )
              break;
          }
          v5 = (unsigned int)(v5 + 1);
          v6 = (__int16 *)&v8[v5];
        }
        while ( *v6 );
      }
    }
  }
  return (unsigned int)RegistryLinksForMachine;
}
