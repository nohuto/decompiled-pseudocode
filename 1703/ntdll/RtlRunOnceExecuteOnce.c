/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x18001B510
 * Callers:
 *     sub_180008E70 @ 0x180008E70 (sub_180008E70.c)
 *     sub_1800093FC @ 0x1800093FC (sub_1800093FC.c)
 *     RtlQueryResourcePolicy @ 0x18000F560 (RtlQueryResourcePolicy.c)
 *     sub_1800198E4 @ 0x1800198E4 (sub_1800198E4.c)
 *     sub_18001B270 @ 0x18001B270 (sub_18001B270.c)
 *     RtlRandomEx @ 0x18007E880 (RtlRandomEx.c)
 *     RtlSetHeapInformation @ 0x18007EF50 (RtlSetHeapInformation.c)
 *     sub_180081D84 @ 0x180081D84 (sub_180081D84.c)
 *     sub_180089798 @ 0x180089798 (sub_180089798.c)
 *     sub_18008A924 @ 0x18008A924 (sub_18008A924.c)
 *     sub_1800D65C8 @ 0x1800D65C8 (sub_1800D65C8.c)
 *     sub_1800FE1C0 @ 0x1800FE1C0 (sub_1800FE1C0.c)
 *     sub_1800FEC74 @ 0x1800FEC74 (sub_1800FEC74.c)
 * Callees:
 *     RtlRunOnceComplete @ 0x18001A390 (RtlRunOnceComplete.c)
 *     sub_180088C98 @ 0x180088C98 (sub_180088C98.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1800F7568 @ 0x1800F7568 (sub_1800F7568.c)
 */

NTSTATUS __cdecl RtlRunOnceExecuteOnce(
        PRTL_RUN_ONCE RunOnce,
        PRTL_RUN_ONCE_INIT_FN InitFn,
        PVOID Parameter,
        PVOID *Context)
{
  signed __int64 Ptr; // rax
  NTSTATUS v9; // edi
  signed __int64 v11; // rcx
  PVOID v12; // r8
  int v13; // ebx
  char v14[24]; // [rsp+20h] [rbp-18h] BYREF

  Ptr = (signed __int64)RunOnce->Ptr;
  if ( ((__int64)RunOnce->Ptr & 3) == 2 )
  {
LABEL_2:
    if ( Context )
      *Context = (PVOID)(Ptr & 0xFFFFFFFFFFFFFFFCuLL);
    return 0;
  }
  do
  {
    while ( (Ptr & 3) != 0 )
    {
      if ( (Ptr & 3) != 1 )
      {
        if ( (Ptr & 3) != 3 )
          goto LABEL_2;
        v13 = -1073741584;
        v14[0] = 0;
        goto LABEL_20;
      }
      Ptr = sub_180088C98(Ptr, RunOnce);
    }
    v11 = Ptr;
    Ptr = _InterlockedCompareExchange64((volatile signed __int64 *)RunOnce, 1LL, Ptr);
  }
  while ( Ptr != v11 );
  if ( !((unsigned int (__fastcall *)(PRTL_RUN_ONCE, PVOID, PVOID *))InitFn)(RunOnce, Parameter, Context) )
  {
    v9 = -1073741823;
    v13 = RtlRunOnceComplete(RunOnce, 4u, 0LL);
    if ( v13 >= 0 )
      return v9;
    v14[0] = 2;
    goto LABEL_20;
  }
  if ( Context )
    v12 = *Context;
  else
    v12 = 0LL;
  v13 = RtlRunOnceComplete(RunOnce, 0, v12);
  if ( v13 < 0 )
  {
    v14[0] = 1;
LABEL_20:
    sub_1800F7568((unsigned int)v13, v14, 1LL);
    return v13;
  }
  return 0;
}
