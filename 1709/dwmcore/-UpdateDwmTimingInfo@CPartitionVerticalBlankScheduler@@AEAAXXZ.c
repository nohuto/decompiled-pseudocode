/*
 * XREFs of ?UpdateDwmTimingInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180011D6C
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPartitionVerticalBlankScheduler::UpdateDwmTimingInfo(CPartitionVerticalBlankScheduler *this)
{
  __int64 v1; // rax
  __int64 v2; // rax

  *((_QWORD *)this + 2634) = *(_QWORD *)(*((_QWORD *)this + 2625) + 240LL);
  *(_QWORD *)((char *)this + 21052) = *(_QWORD *)(*((_QWORD *)this + 2625) + 232LL);
  *(_QWORD *)((char *)this + 21060) = *(_QWORD *)(*((_QWORD *)this + 2625) + 88LL);
  *((_DWORD *)this + 5272) = *(_DWORD *)(*((_QWORD *)this + 2625) + 16LL);
  *((_DWORD *)this + 5267) = *(_DWORD *)(*((_QWORD *)this + 2625) + 100LL);
  *(_QWORD *)((char *)this + 21092) = *(_QWORD *)(*((_QWORD *)this + 2625) + 80LL);
  *((_QWORD *)this + 2635) = **((_QWORD **)this + 2625);
  *(_QWORD *)((char *)this + 21028) = *((_QWORD *)this + 10);
  *(_QWORD *)((char *)this + 21036) = *((_QWORD *)this + 11);
  *(_QWORD *)((char *)this + 21044) = *((_QWORD *)this + 12);
  *((_QWORD *)this + 2642) = *((_QWORD *)this + 3098);
  *((_DWORD *)this + 5286) = *((_DWORD *)this + 6194);
  v1 = *((unsigned int *)this + 5248);
  if ( (_DWORD)v1 != -1 )
  {
    *(_QWORD *)((char *)this + 21100) = *((_QWORD *)this + 163 * v1 + 15);
    *((_DWORD *)this + 5277) = *((_DWORD *)this + 326 * *((unsigned int *)this + 5248) + 34);
  }
  v2 = *((unsigned int *)this + 5249);
  if ( (_DWORD)v2 != -1 )
  {
    *((_QWORD *)this + 2639) = *((_QWORD *)this + 163 * v2 + 15);
    *(_QWORD *)((char *)this + 21124) = *((_QWORD *)this + 163 * *((unsigned int *)this + 5249) + 25);
  }
  *((_DWORD *)this + 5280) = *(_DWORD *)(*((_QWORD *)this + 2625) + 648LL);
  *((_DWORD *)this + 5283) = *(_DWORD *)(*((_QWORD *)this + 2625) + 652LL);
  *(_QWORD *)((char *)this + 21324) = *(_QWORD *)((char *)this + 21316);
  *(_QWORD *)((char *)this + 21316) = *((unsigned int *)this + 5280);
}
