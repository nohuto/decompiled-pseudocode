/*
 * XREFs of ?FreeResourceManagerProxy@@YAXXZ @ 0x180004E60
 * Callers:
 *     DllMain @ 0x180007C90 (DllMain.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 */

void FreeResourceManagerProxy(void)
{
  if ( qword_1800186E8 )
    (**(void (__fastcall ***)(__int64, __int64))qword_1800186E8)(qword_1800186E8, 1LL);
  qword_1800186E8 = 0LL;
  RtlDeleteCriticalSection(&s_csProxy);
}
