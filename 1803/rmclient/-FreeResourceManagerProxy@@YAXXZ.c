/*
 * XREFs of ?FreeResourceManagerProxy@@YAXXZ @ 0x1800068C0
 * Callers:
 *     DllMain @ 0x1800075F4 (DllMain.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180007B90 (_guard_dispatch_icall_nop.c)
 */

void FreeResourceManagerProxy(void)
{
  if ( qword_18001C720 )
    (**(void (__fastcall ***)(__int64, __int64))qword_18001C720)(qword_18001C720, 1LL);
  qword_18001C720 = 0LL;
  RtlDeleteCriticalSection(&s_csProxy);
}
