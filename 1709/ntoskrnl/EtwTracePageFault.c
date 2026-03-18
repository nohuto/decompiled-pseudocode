/*
 * XREFs of EtwTracePageFault @ 0x14027B5F0
 * Callers:
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall EtwTracePageFault(int a1, __int64 a2, char a3, __int64 a4)
{
  unsigned __int16 v4; // cx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+38h] [rbp-30h]
  __int64 *v8; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]

  switch ( a1 )
  {
    case 273:
      v4 = 523;
      break;
    case 272:
      v4 = 522;
      break;
    case 274:
      v4 = 524;
      break;
    case 276:
      v4 = 526;
      break;
    case 275:
      v4 = 525;
      break;
    case -1073741819:
      v4 = 527;
      break;
    default:
      return;
  }
  v7 = 0LL;
  v6 = a2;
  if ( a4 )
    v7 = *(_QWORD *)(a4 + 360);
  v10 = 0;
  v8 = &v6;
  v9 = 16;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 0x10) != 0 )
  {
    EtwTraceKernelEvent((__int64)&v8, 1u, 0x1000u, v4, 0x2000102u);
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    LOBYTE(CurrentThread[1].Queue) |= 0x10u;
    EtwTraceKernelEvent((__int64)&v8, 1u, 0x1000u, v4, a3 != 0 ? 33558786 : 50338050);
    LOBYTE(CurrentThread[1].Queue) &= ~0x10u;
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
}
