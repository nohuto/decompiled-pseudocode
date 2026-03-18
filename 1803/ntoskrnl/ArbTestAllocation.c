/*
 * XREFs of ArbTestAllocation @ 0x140618580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ArbpBuildAllocationStack @ 0x1406194A8 (ArbpBuildAllocationStack.c)
 *     RtlCopyRangeList @ 0x14061A280 (RtlCopyRangeList.c)
 *     RtlDeleteOwnersRanges @ 0x14061A5A0 (RtlDeleteOwnersRanges.c)
 *     RtlFreeRangeList @ 0x14061A680 (RtlFreeRangeList.c)
 */

__int64 __fastcall ArbTestAllocation(__int64 a1, __int64 ****a2)
{
  __int64 ***v2; // r8
  NTSTATUS v5; // eax
  NTSTATUS v6; // ebx
  __int64 ***v7; // r8
  unsigned int v8; // ebp
  __int64 *v9; // r15
  __int64 **v10; // rsi
  __int64 *v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned __int64 i; // rax
  int v14; // eax
  __int64 **v15; // rdx
  char v16; // cl
  __int64 ***v17; // r9
  __int64 result; // rax
  __int64 **v19; // rcx
  __int64 *v20; // rax

  v2 = a2[2];
  if ( v2 )
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 ***, _QWORD))(a1 + 280))(
           a1,
           *((unsigned int *)a2 + 2),
           v2,
           *(_QWORD *)(a1 + 48));
  else
    v5 = RtlCopyRangeList(*(PRTL_RANGE_LIST *)(a1 + 48), *(PRTL_RANGE_LIST *)(a1 + 40));
  v6 = v5;
  if ( v5 < 0 )
    goto LABEL_24;
  v7 = *a2;
  v8 = 0;
  v9 = 0LL;
  v10 = **a2;
  while ( v7 != (__int64 ***)v10 )
  {
    ++v8;
    if ( !a2[2] )
    {
      v11 = v10[4];
      if ( v9 != v11 )
      {
        v9 = v10[4];
        v6 = RtlDeleteOwnersRanges(*(PRTL_RANGE_LIST *)(a1 + 48), v11);
        if ( v6 < 0 )
          goto LABEL_24;
      }
    }
    v10[6] = 0LL;
    if ( *(_QWORD *)(a1 + 144) )
    {
      v12 = (unsigned __int64)v10[3];
      for ( i = v12 + 32LL * *((unsigned int *)v10 + 4);
            v12 < i;
            i = (unsigned __int64)&v10[3][4 * *((unsigned int *)v10 + 4)] )
      {
        v14 = (*(__int64 (__fastcall **)(unsigned __int64))(a1 + 144))(v12);
        if ( v14 < 0 )
        {
          v6 = -1073741438;
          goto LABEL_24;
        }
        v12 += 32LL;
        v10[6] = (__int64 *)((char *)v10[6] + v14);
      }
    }
    v10 = (__int64 **)*v10;
    v7 = *a2;
  }
  do
  {
    v15 = *v7;
    v16 = 1;
    if ( *v7 == (__int64 **)v7 )
      break;
    do
    {
      v17 = (__int64 ***)*v15;
      if ( *v15 == (__int64 *)v7 )
        break;
      if ( (__int64)v15[6] > (__int64)v17[6] )
      {
        v19 = (__int64 **)v15[1];
        v20 = (__int64 *)*v17;
        *v19 = (__int64 *)v17;
        v20[1] = (__int64)v15;
        *v15 = v20;
        v15[1] = (__int64 *)v17;
        v17[1] = v19;
        v16 = 0;
        *v17 = v15;
        v17 = (__int64 ***)*v15;
      }
      v15 = (__int64 **)v17;
    }
    while ( v17 != v7 );
  }
  while ( !v16 );
  v6 = ArbpBuildAllocationStack(a1, *a2, v8);
  if ( v6 < 0
    || (result = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 232))(a1, *(_QWORD *)(a1 + 112)),
        v6 = result,
        (int)result < 0) )
  {
LABEL_24:
    RtlFreeRangeList(*(PRTL_RANGE_LIST *)(a1 + 48));
    return (unsigned int)v6;
  }
  return result;
}
