/*
 * XREFs of CmpReportNotifyHelper @ 0x14047C340
 * Callers:
 *     CmpReportNotify @ 0x14047C204 (CmpReportNotify.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpTransIsTransActive @ 0x1401E3CFC (CmpTransIsTransActive.c)
 *     CmpNotifyTriggerCheck @ 0x14047BE6C (CmpNotifyTriggerCheck.c)
 *     CmpPostNotify @ 0x14047BFBC (CmpPostNotify.c)
 *     CmpDelayedDerefKeys @ 0x14047D8A8 (CmpDelayedDerefKeys.c)
 */

__int64 __fastcall CmpReportNotifyHelper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        _QWORD *a7)
{
  __int64 v8; // r14
  __int64 result; // rax
  __int64 v11; // r12
  unsigned __int8 CurrentIrql; // r15
  __int64 v13; // rbx
  _QWORD *v14; // r15
  unsigned int v15; // r14d
  int v16; // ebp
  __int64 v17; // r13
  __int64 v18; // r8
  unsigned int v19; // ecx
  unsigned int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned __int8 v25; // [rsp+40h] [rbp-58h]
  _QWORD v26[3]; // [rsp+48h] [rbp-50h] BYREF
  int v28; // [rsp+B0h] [rbp+18h] BYREF
  int v29; // [rsp+B4h] [rbp+1Ch]
  unsigned int v30; // [rsp+B8h] [rbp+20h]

  v30 = a4;
  v28 = -1;
  v29 = 0;
  v8 = a2;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a3 + 8))(a3, a4, &v28);
  v11 = result;
  if ( result )
  {
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v8 + 2832));
    CurrentIrql = KeGetCurrentIrql();
    v25 = CurrentIrql;
    __writecr8(1uLL);
    v26[1] = v26;
    v26[0] = v26;
    v13 = *(_QWORD *)(v8 + 2712);
    if ( v13 )
    {
      v14 = a7;
      v15 = v30;
      v16 = a6;
      v17 = a5;
      do
      {
        v18 = *(_QWORD *)(v13 + 32);
        v19 = (*(_DWORD *)(a1 + 4) >> 21) & 0x3FF;
        v20 = (*(_DWORD *)(v18 + 4) >> 21) & 0x3FF;
        if ( v20 > v19 )
          break;
        v21 = a1;
        if ( v19 > v20 )
        {
          do
            v21 = *(_QWORD *)(v21 + 64);
          while ( ((*(_DWORD *)(v21 + 4) >> 21) & 0x3FFu) > v20 );
        }
        if ( v21 == v18
          && (v16 & *(_DWORD *)(v13 + 48) & 0x3FFFFFFF) != 0
          && ((*(_DWORD *)(v13 + 48) & 0x40000000) != 0 || v15 == *(_DWORD *)(v21 + 32)) )
        {
          v22 = *(_QWORD *)(*(_QWORD *)(v13 + 40) + 56LL);
          if ( (!v17 || *(_QWORD *)(v17 + 56) == v22) && (!v22 || (unsigned int)CmpTransIsTransActive(v22)) )
          {
            if ( CmpNotifyTriggerCheck(v13, a3, v11) )
              CmpPostNotify(v13, v23, v24, 0x10Cu, 0, v26, v14);
          }
        }
        v13 = *(_QWORD *)v13;
      }
      while ( v13 );
      v8 = a2;
      CurrentIrql = v25;
    }
    __writecr8(CurrentIrql);
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v8 + 2832));
    CmpDelayedDerefKeys(v26);
    return (*(__int64 (__fastcall **)(__int64, int *))(a3 + 16))(a3, &v28);
  }
  return result;
}
