/*
 * XREFs of ?FreeResourceManagerProxy@@YAXXZ @ 0x1800053C0
 * Callers:
 *     DllMain @ 0x1800080C0 (DllMain.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 */

void FreeResourceManagerProxy(void)
{
  if ( qword_18001B740 )
    (**(void (__fastcall ***)(__int64, __int64))qword_18001B740)(qword_18001B740, 1LL);
  qword_18001B740 = 0LL;
  RtlDeleteCriticalSection(&s_csProxy);
}
