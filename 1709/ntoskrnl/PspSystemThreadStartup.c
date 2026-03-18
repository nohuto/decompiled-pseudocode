/*
 * XREFs of PspSystemThreadStartup @ 0x140128180
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheck @ 0x140181270 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PspTerminateThreadByPointer @ 0x1404D6B90 (PspTerminateThreadByPointer.c)
 *     PspDisablePrimaryTokenExchange @ 0x14053F3DC (PspDisablePrimaryTokenExchange.c)
 */

__int64 __fastcall PspSystemThreadStartup(void (__fastcall *a1)(__int64), __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v5; // r8

  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  PspDisablePrimaryTokenExchange(CurrentThread);
  if ( (((unsigned __int8)*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) ^ 1) & 3) == 3 )
    a1(a2);
  LOBYTE(v5) = 1;
  return PspTerminateThreadByPointer(CurrentThread, 0LL, v5);
}
