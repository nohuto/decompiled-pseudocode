/*
 * XREFs of VidSchiIsQuantumLeft @ 0x1C000D300
 * Callers:
 *     ?VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z @ 0x1C0009DD0 (-VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z.c)
 * Callees:
 *     VidSchiSetTransferContextRunningTime @ 0x1C00106F0 (VidSchiSetTransferContextRunningTime.c)
 */

__int64 __fastcall VidSchiIsQuantumLeft(__int64 a1, volatile signed __int32 **a2)
{
  __int64 v2; // rdi
  __int64 v5; // r8
  bool v6; // zf
  __int64 v7; // rax
  _QWORD **v8; // r14
  int v9; // ebp
  _QWORD *i; // rdi
  __int64 result; // rax
  volatile signed __int32 *v12; // rdx
  __int64 *v13; // rdx
  __int64 *v14; // r8
  __int64 **v15; // rax
  __int64 v16; // r8
  __int64 **v17; // rax
  __int64 v18; // rax
  char v19; // [rsp+60h] [rbp+8h] BYREF
  char v20; // [rsp+70h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 96);
  v5 = (*(_DWORD *)(a1 + 176) >> 1) & 1;
  v6 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 448), v5, 3) == 2;
  v7 = *(_QWORD *)(a1 + 96);
  if ( v6 )
  {
    v19 = 0;
    DpSynchronizeExecution(
      *(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL),
      VidSchiResetContextQuantumAtISR,
      a1,
      *(unsigned int *)(*(_QWORD *)(v7 + 24) + 32LL),
      &v19);
    v13 = (__int64 *)(a1 + 8);
    v14 = *(__int64 **)(a1 + 8);
    v15 = *(__int64 ***)(a1 + 16);
    if ( v14[1] != a1 + 8 || *v15 != v13 )
      __fastfail(3u);
    *v15 = v14;
    v14[1] = (__int64)v15;
    v16 = 16LL * *(unsigned int *)(a1 + 396) + v2 + 1960;
    v17 = *(__int64 ***)(v16 + 8);
    if ( *v17 != (__int64 *)v16 )
      __fastfail(3u);
    *(_QWORD *)(a1 + 16) = v17;
    *v13 = v16;
    *v17 = v13;
    result = 0LL;
    *(_QWORD *)(v16 + 8) = v13;
  }
  else
  {
    v8 = (_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) + 24LL)
                               + 8LL * *(unsigned int *)(*(_QWORD *)(v7 + 24) + 4LL))
                   + 648LL);
    v9 = 0;
    while ( 2 )
    {
      for ( i = *v8; i != v8; i = (_QWORD *)*i )
      {
        v12 = (volatile signed __int32 *)(i - 51);
        if ( *(i - 39) == *(_QWORD *)(a1 + 96) )
        {
          if ( _InterlockedCompareExchange(v12 + 112, (*((_DWORD *)v12 + 44) >> 1) & 1, 3) != 2 )
          {
            *a2 = v12;
            goto LABEL_7;
          }
          v18 = *((_QWORD *)v12 + 12);
          v20 = 0;
          DpSynchronizeExecution(
            *(_QWORD *)(*(_QWORD *)(v18 + 24) + 24LL),
            VidSchiResetContextQuantumAtISR,
            i - 51,
            *(unsigned int *)(*(_QWORD *)(v18 + 24) + 32LL),
            &v20);
        }
      }
      if ( (unsigned int)++v9 < 2 )
        continue;
      break;
    }
    *a2 = (volatile signed __int32 *)a1;
LABEL_7:
    if ( *a2 != (volatile signed __int32 *)a1 )
    {
      LOBYTE(v5) = 1;
      VidSchiSetTransferContextRunningTime(*a2, a1, v5);
    }
    return 1LL;
  }
  return result;
}
