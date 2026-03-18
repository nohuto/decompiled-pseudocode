/*
 * XREFs of ?EstimateNextVSync@CPartitionVerticalBlankScheduler@@AEAA_KXZ @ 0x18005A738
 * Callers:
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18005D88C (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CPartitionVerticalBlankScheduler::EstimateNextVSync(CPartitionVerticalBlankScheduler *this)
{
  _QWORD *v1; // r9
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r9

  v1 = (_QWORD *)*((_QWORD *)this + 3231);
  if ( v1[2] )
  {
    v2 = v1[38];
    v3 = *((_QWORD *)this + 4412) - v2 + v1[183] - (*((_QWORD *)this + 4412) - v2) % v1[183];
  }
  else
  {
    v2 = *(_QWORD *)(*((_QWORD *)this + 3230) + 1464LL);
    v3 = *((_QWORD *)this + 4412) - *((_QWORD *)this + 4412) % v2;
  }
  return v2 + v3;
}
