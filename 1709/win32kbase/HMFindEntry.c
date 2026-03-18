/*
 * XREFs of HMFindEntry @ 0x1C00E4D90
 * Callers:
 *     ValidateHwndMinuser @ 0x1C00DBAC0 (ValidateHwndMinuser.c)
 *     UserAddBaseWindowHandle @ 0x1C00EBD30 (UserAddBaseWindowHandle.c)
 *     UserDeleteBaseWindowHandle @ 0x1C00EBF10 (UserDeleteBaseWindowHandle.c)
 *     UserFindBaseWindowHandle @ 0x1C00EC0BC (UserFindBaseWindowHandle.c)
 *     UserFindBaseWindowHandleLocked @ 0x1C00EC330 (UserFindBaseWindowHandleLocked.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall HMFindEntry(__int64 a1, unsigned int (__fastcall *a2)(__int64, char *))
{
  unsigned int v4; // edi
  char *v5; // rbx

  v4 = 0;
  while ( 1 )
  {
    v5 = (char *)qword_1C018E9B8 + 32 * v4;
    if ( v5[24] )
    {
      if ( a2(a1, (char *)qword_1C018E9B8 + 32 * v4) )
        break;
    }
    if ( ++v4 > giheLast )
      return 0LL;
  }
  return v5;
}
