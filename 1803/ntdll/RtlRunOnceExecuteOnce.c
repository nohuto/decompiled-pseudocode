/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x1800297E0
 * Callers:
 *     sub_180029538 @ 0x180029538 (sub_180029538.c)
 *     sub_1800496F4 @ 0x1800496F4 (sub_1800496F4.c)
 *     RtlQueryResourcePolicy @ 0x18005A240 (RtlQueryResourcePolicy.c)
 *     sub_18005E324 @ 0x18005E324 (sub_18005E324.c)
 *     sub_18007A164 @ 0x18007A164 (sub_18007A164.c)
 *     sub_18007A318 @ 0x18007A318 (sub_18007A318.c)
 *     RtlRandomEx @ 0x18007AA80 (RtlRandomEx.c)
 *     RtlSetHeapInformation @ 0x18007B300 (RtlSetHeapInformation.c)
 *     sub_180083A4C @ 0x180083A4C (sub_180083A4C.c)
 *     sub_1800CBD88 @ 0x1800CBD88 (sub_1800CBD88.c)
 *     sub_1800CC088 @ 0x1800CC088 (sub_1800CC088.c)
 *     sub_1800CC2EC @ 0x1800CC2EC (sub_1800CC2EC.c)
 *     sub_1800FD4A4 @ 0x1800FD4A4 (sub_1800FD4A4.c)
 * Callees:
 *     RtlRunOnceComplete @ 0x180074D60 (RtlRunOnceComplete.c)
 *     sub_180082E7C @ 0x180082E7C (sub_180082E7C.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1800F4894 @ 0x1800F4894 (sub_1800F4894.c)
 */

NTSTATUS __cdecl RtlRunOnceExecuteOnce(
        PRTL_RUN_ONCE RunOnce,
        PRTL_RUN_ONCE_INIT_FN InitFn,
        PVOID Parameter,
        PVOID *Context)
{
  signed __int64 Ptr; // rax
  NTSTATUS v9; // edi
  signed __int64 v11; // rdx
  signed __int64 v12; // rcx
  PVOID v13; // r8
  int v14; // ebx
  char v15[24]; // [rsp+20h] [rbp-18h] BYREF

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
    while ( 1 )
    {
      v11 = Ptr & 3;
      if ( (Ptr & 3) == 0 )
        break;
      if ( v11 != 1 )
      {
        if ( v11 != 3 )
          goto LABEL_2;
        v14 = -1073741584;
        v15[0] = 0;
        goto LABEL_20;
      }
      Ptr = sub_180082E7C(Ptr, RunOnce);
    }
    v12 = Ptr;
    Ptr = _InterlockedCompareExchange64((volatile signed __int64 *)RunOnce, 1LL, Ptr);
  }
  while ( Ptr != v12 );
  if ( !((unsigned int (__fastcall *)(PRTL_RUN_ONCE, PVOID, PVOID *))InitFn)(RunOnce, Parameter, Context) )
  {
    v9 = -1073741823;
    v14 = RtlRunOnceComplete(RunOnce, 4u, 0LL);
    if ( v14 >= 0 )
      return v9;
    v15[0] = 2;
    goto LABEL_20;
  }
  if ( Context )
    v13 = *Context;
  else
    v13 = 0LL;
  v14 = RtlRunOnceComplete(RunOnce, 0, v13);
  if ( v14 < 0 )
  {
    v15[0] = 1;
LABEL_20:
    sub_1800F4894((unsigned int)v14, v15, 1LL);
    return v14;
  }
  return 0;
}
