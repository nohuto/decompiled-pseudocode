/*
 * XREFs of sub_1800FEC74 @ 0x1800FEC74
 * Callers:
 *     sub_1800FE3D0 @ 0x1800FE3D0 (sub_1800FE3D0.c)
 *     sub_1800FECE0 @ 0x1800FECE0 (sub_1800FECE0.c)
 *     sub_1800FEEB8 @ 0x1800FEEB8 (sub_1800FEEB8.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x18001B510 (RtlRunOnceExecuteOnce.c)
 *     RtlRunOnceBeginInitialize @ 0x180028CF0 (RtlRunOnceBeginInitialize.c)
 */

NTSTATUS __fastcall sub_1800FEC74(__int64 a1, int a2, PVOID *a3)
{
  __int64 v4; // rax
  _RTL_RUN_ONCE *v5; // rcx
  NTSTATUS result; // eax
  PVOID Context; // [rsp+30h] [rbp+8h] BYREF

  v4 = 368LL;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    v4 = 136LL;
  v5 = (_RTL_RUN_ONCE *)(v4 + a1);
  if ( a2 )
    result = RtlRunOnceExecuteOnce(v5, (PRTL_RUN_ONCE_INIT_FN)sub_1800FE1C0, 0LL, &Context);
  else
    result = RtlRunOnceBeginInitialize(v5, 1u, &Context);
  if ( result >= 0 )
  {
    *a3 = Context;
    return 0;
  }
  return result;
}
