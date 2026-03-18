/*
 * XREFs of CmpReportNotifyHelper @ 0x14048D130
 * Callers:
 *     CmpReportNotify @ 0x14048CFF4 (CmpReportNotify.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpTransIsTransActive @ 0x1401DF9BC (CmpTransIsTransActive.c)
 *     CmpPostNotify @ 0x14048C118 (CmpPostNotify.c)
 *     CmpDelayedDerefKeys @ 0x14048D3E4 (CmpDelayedDerefKeys.c)
 *     CmpNotifyTriggerCheck @ 0x14048E298 (CmpNotifyTriggerCheck.c)
 */

__int64 __fastcall CmpReportNotifyHelper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 *a7)
{
  __int64 result; // rax
  __int64 v12; // r15
  unsigned __int8 CurrentIrql; // r14
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // r14
  __int64 v19; // r13
  __int64 v20; // r8
  unsigned int v21; // ecx
  unsigned int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // [rsp+20h] [rbp-68h]
  __int64 v28; // [rsp+28h] [rbp-60h]
  __int64 v29; // [rsp+30h] [rbp-58h]
  unsigned __int8 v30; // [rsp+40h] [rbp-48h]
  __int64 v31[8]; // [rsp+48h] [rbp-40h] BYREF
  int v32; // [rsp+A0h] [rbp+18h] BYREF
  int v33; // [rsp+A4h] [rbp+1Ch]

  v32 = -1;
  v33 = 0;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a3 + 8))(a3, a4, &v32);
  v12 = result;
  if ( result )
  {
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a2 + 2832));
    CurrentIrql = KeGetCurrentIrql();
    v30 = CurrentIrql;
    __writecr8(1uLL);
    v31[1] = (__int64)v31;
    v31[0] = (__int64)v31;
    v14 = *(_QWORD *)(a2 + 2712);
    if ( v14 )
    {
      v18 = a7;
      v19 = a5;
      do
      {
        v20 = *(_QWORD *)(v14 + 32);
        v21 = (*(_DWORD *)(a1 + 4) >> 21) & 0x3FF;
        v22 = (*(_DWORD *)(v20 + 4) >> 21) & 0x3FF;
        if ( v22 > v21 )
          break;
        v23 = a1;
        if ( v21 > v22 )
        {
          do
            v23 = *(_QWORD *)(v23 + 64);
          while ( ((*(_DWORD *)(v23 + 4) >> 21) & 0x3FFu) > v22 );
        }
        if ( v23 == v20
          && (a6 & *(_DWORD *)(v14 + 48) & 0x3FFFFFFF) != 0
          && ((*(_DWORD *)(v14 + 48) & 0x40000000) != 0 || a4 == *(_DWORD *)(v23 + 32)) )
        {
          v24 = *(_QWORD *)(*(_QWORD *)(v14 + 40) + 56LL);
          if ( (!v19 || *(_QWORD *)(v19 + 56) == v24) && (!v24 || (unsigned int)CmpTransIsTransActive(v24)) )
          {
            if ( (unsigned __int8)CmpNotifyTriggerCheck(v14, a3, v12) )
              CmpPostNotify(v14, v25, v26, 0x10Cu, 0, v31, v18);
          }
        }
        v14 = *(_QWORD *)v14;
      }
      while ( v14 );
      CurrentIrql = v30;
    }
    __writecr8(CurrentIrql);
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a2 + 2832));
    CmpDelayedDerefKeys(v31, v15, v16, v17, v27, v28, v29);
    return (*(__int64 (__fastcall **)(__int64, int *))(a3 + 16))(a3, &v32);
  }
  return result;
}
