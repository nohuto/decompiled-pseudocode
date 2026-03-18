/*
 * XREFs of HMFindEntry @ 0x1C00DE7D0
 * Callers:
 *     ValidateHwndMinuser @ 0x1C00D5710 (ValidateHwndMinuser.c)
 *     UserAddBaseWindowHandle @ 0x1C00E66C0 (UserAddBaseWindowHandle.c)
 *     UserDeleteBaseWindowHandle @ 0x1C00E68A0 (UserDeleteBaseWindowHandle.c)
 *     UserFindBaseWindowHandle @ 0x1C00E6A4C (UserFindBaseWindowHandle.c)
 *     UserFindBaseWindowHandleLocked @ 0x1C00E6D70 (UserFindBaseWindowHandleLocked.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall HMFindEntry(__int64 a1, unsigned int (__fastcall *a2)(__int64, char *))
{
  unsigned int v4; // edi
  char *v5; // rbx

  v4 = 0;
  while ( 1 )
  {
    v5 = (char *)qword_1C0189E38 + 32 * v4;
    if ( v5[24] )
    {
      if ( a2(a1, (char *)qword_1C0189E38 + 32 * v4) )
        break;
    }
    if ( ++v4 > giheLast )
      return 0LL;
  }
  return v5;
}
