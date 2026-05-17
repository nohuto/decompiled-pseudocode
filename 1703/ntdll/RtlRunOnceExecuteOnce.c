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

__int64 __fastcall RtlRunOnceExecuteOnce(
        volatile signed __int64 *a1,
        unsigned int (__fastcall *a2)(volatile signed __int64 *, __int64, __int64 *),
        __int64 a3,
        __int64 *a4)
{
  signed __int64 v4; // rax
  unsigned int v9; // edi
  signed __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // ebx
  char v14[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  if ( (*a1 & 3) == 2 )
  {
LABEL_2:
    if ( a4 )
      *a4 = v4 & 0xFFFFFFFFFFFFFFFCuLL;
    return 0;
  }
  do
  {
    while ( (v4 & 3) != 0 )
    {
      if ( (v4 & 3) != 1 )
      {
        if ( (v4 & 3) != 3 )
          goto LABEL_2;
        v13 = -1073741584;
        v14[0] = 0;
        goto LABEL_20;
      }
      v4 = sub_180088C98(v4, a1);
    }
    v11 = v4;
    v4 = _InterlockedCompareExchange64(a1, 1LL, v4);
  }
  while ( v4 != v11 );
  if ( !a2(a1, a3, a4) )
  {
    v9 = -1073741823;
    v13 = RtlRunOnceComplete((signed __int64 *)a1, 4u, 0LL);
    if ( v13 >= 0 )
      return v9;
    v14[0] = 2;
    goto LABEL_20;
  }
  if ( a4 )
    v12 = *a4;
  else
    v12 = 0LL;
  v13 = RtlRunOnceComplete((signed __int64 *)a1, 0, v12);
  if ( v13 < 0 )
  {
    v14[0] = 1;
LABEL_20:
    sub_1800F7568((unsigned int)v13, v14, 1LL);
    return (unsigned int)v13;
  }
  return 0;
}
