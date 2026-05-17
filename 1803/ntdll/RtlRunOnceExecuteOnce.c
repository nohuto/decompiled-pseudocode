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

__int64 __fastcall RtlRunOnceExecuteOnce(
        volatile signed __int64 *a1,
        unsigned int (__fastcall *a2)(volatile signed __int64 *, __int64, unsigned __int64 *),
        __int64 a3,
        unsigned __int64 *a4)
{
  signed __int64 v4; // rax
  unsigned int v9; // edi
  signed __int64 v11; // rdx
  signed __int64 v12; // rcx
  unsigned __int64 v13; // r8
  int v14; // ebx
  char v15[24]; // [rsp+20h] [rbp-18h] BYREF

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
    while ( 1 )
    {
      v11 = v4 & 3;
      if ( (v4 & 3) == 0 )
        break;
      if ( v11 != 1 )
      {
        if ( v11 != 3 )
          goto LABEL_2;
        v14 = -1073741584;
        v15[0] = 0;
        goto LABEL_20;
      }
      v4 = sub_180082E7C(v4, a1);
    }
    v12 = v4;
    v4 = _InterlockedCompareExchange64(a1, 1LL, v4);
  }
  while ( v4 != v12 );
  if ( !a2(a1, a3, a4) )
  {
    v9 = -1073741823;
    v14 = RtlRunOnceComplete(a1, 4LL, 0LL);
    if ( v14 >= 0 )
      return v9;
    v15[0] = 2;
    goto LABEL_20;
  }
  if ( a4 )
    v13 = *a4;
  else
    v13 = 0LL;
  v14 = RtlRunOnceComplete(a1, 0LL, v13);
  if ( v14 < 0 )
  {
    v15[0] = 1;
LABEL_20:
    sub_1800F4894((unsigned int)v14, v15, 1LL);
    return (unsigned int)v14;
  }
  return 0;
}
