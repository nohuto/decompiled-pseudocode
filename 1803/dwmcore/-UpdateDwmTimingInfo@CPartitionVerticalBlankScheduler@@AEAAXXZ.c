/*
 * XREFs of ?UpdateDwmTimingInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005B204
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPartitionVerticalBlankScheduler::UpdateDwmTimingInfo(CPartitionVerticalBlankScheduler *this)
{
  __int64 v1; // rax
  __int64 v2; // rax

  *((_QWORD *)this + 3239) = *(_QWORD *)(*((_QWORD *)this + 3230) + 312LL);
  *(_QWORD *)((char *)this + 25892) = *(_QWORD *)(*((_QWORD *)this + 3230) + 304LL);
  *(_QWORD *)((char *)this + 25900) = *(_QWORD *)(*((_QWORD *)this + 3230) + 16LL);
  *((_DWORD *)this + 6482) = *(_DWORD *)(*((_QWORD *)this + 3230) + 32LL);
  *((_DWORD *)this + 6477) = *(_DWORD *)(*((_QWORD *)this + 3230) + 108LL);
  *(_QWORD *)((char *)this + 25932) = *(_QWORD *)(*((_QWORD *)this + 3230) + 8LL);
  *((_QWORD *)this + 3240) = **((_QWORD **)this + 3230);
  *(_QWORD *)((char *)this + 25868) = *(_QWORD *)(*((_QWORD *)this + 3230) + 1336LL);
  *(_QWORD *)((char *)this + 25876) = *(_QWORD *)(*((_QWORD *)this + 3230) + 1464LL);
  *(_QWORD *)((char *)this + 25884) = *(_QWORD *)(*((_QWORD *)this + 3230) + 1336LL);
  *((_QWORD *)this + 3247) = *((_QWORD *)this + 3820);
  *((_DWORD *)this + 6496) = *((_DWORD *)this + 7638);
  v1 = *((unsigned int *)this + 6458);
  if ( (_DWORD)v1 != -1 )
  {
    *(_QWORD *)((char *)this + 25940) = *((_QWORD *)this + 201 * v1 + 12);
    *((_DWORD *)this + 6487) = *((_DWORD *)this + 402 * *((unsigned int *)this + 6458) + 32);
  }
  v2 = *((unsigned int *)this + 6459);
  if ( (_DWORD)v2 != -1 )
  {
    *((_QWORD *)this + 3244) = *((_QWORD *)this + 201 * v2 + 12);
    *(_QWORD *)((char *)this + 25964) = *((_QWORD *)this + 201 * *((unsigned int *)this + 6459) + 13);
  }
  *((_DWORD *)this + 6490) = *(_OWORD *)(*((_QWORD *)this + 3230) + 480LL);
  *((_DWORD *)this + 6493) = HIDWORD(*(_QWORD *)(*((_QWORD *)this + 3230) + 480LL));
  *(_QWORD *)((char *)this + 26164) = *(_QWORD *)((char *)this + 26156);
  *(_QWORD *)((char *)this + 26156) = *((unsigned int *)this + 6490);
}
