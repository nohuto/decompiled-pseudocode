/*
 * XREFs of IopInitActivityIdIrp @ 0x1401EFC10
 * Callers:
 *     IopAllocateIrpPrivate @ 0x1400ED9B0 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x14012BFC8 (IopAllocateIrpWithExtension.c)
 *     IopAllocateBackpocketIrp @ 0x1401EF168 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1401EF44C (IopAllocateReserveIrp.c)
 *     IovAllocateIrp @ 0x140762990 (IovAllocateIrp.c)
 * Callees:
 *     EtwActivityIdControl @ 0x140024570 (EtwActivityIdControl.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x140080268 (PnpIsSafeToExamineUserModeTeb.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     IopIsActivityTracingEventEnabled @ 0x140135F68 (IopIsActivityTracingEventEnabled.c)
 *     IoSetActivityIdIrp @ 0x1401535C0 (IoSetActivityIdIrp.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

int __fastcall IopInitActivityIdIrp(__int64 a1)
{
  char v2; // si
  const GUID *RelatedActivityId; // rbx
  const EVENT_DESCRIPTOR *v4; // r14
  struct _KTHREAD *CurrentThread; // rdi
  GUID *SparePtr; // rdi
  __int64 v7; // rcx
  _WORD *v8; // rax
  char v10; // [rsp+40h] [rbp-68h]
  GUID ActivityId; // [rsp+60h] [rbp-48h] BYREF
  __m128i v12; // [rsp+70h] [rbp-38h] BYREF

  v2 = 0;
  RelatedActivityId = 0LL;
  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
    SparePtr = (GUID *)CurrentThread[1].WaitBlock[0].SparePtr;
    if ( SparePtr )
    {
      if ( IopIsActivityTracingEventEnabled(&IoTrace_KernelIo_AllocateIrp) )
      {
        RelatedActivityId = SparePtr;
        v4 = &IoTrace_KernelIo_AllocateIrp;
        goto LABEL_17;
      }
      ActivityId = *SparePtr;
LABEL_16:
      v2 = 1;
      goto LABEL_17;
    }
    if ( PnpIsSafeToExamineUserModeTeb() )
    {
      v10 = 0;
      if ( KeGetPcr()->NtTib.$FD99E398B9CE9653B759FFC9FDEDD739::$F77F79717011C0370B4D23A77E221CBE::Self )
      {
        v12 = *(__m128i *)&KeGetPcr()->NtTib.$FD99E398B9CE9653B759FFC9FDEDD739::$F77F79717011C0370B4D23A77E221CBE::Self[105].SubSystemTib;
        v10 = 1;
      }
      if ( v10 )
      {
        v7 = *(_QWORD *)&NullGuid.Data1 - v12.m128i_i64[0];
        if ( *(_QWORD *)&NullGuid.Data1 == v12.m128i_i64[0] )
          v7 = *(_QWORD *)NullGuid.Data4 - _mm_srli_si128(v12, 8).m128i_u64[0];
        if ( v7 )
        {
          if ( IopIsActivityTracingEventEnabled(&IoTrace_UserInitiatedIo) )
          {
            RelatedActivityId = (const GUID *)&v12;
            v4 = &IoTrace_UserInitiatedIo;
            goto LABEL_17;
          }
          ActivityId = (GUID)v12;
          goto LABEL_16;
        }
      }
    }
  }
LABEL_17:
  if ( !v2 )
    EtwActivityIdControl(3u, &ActivityId);
  LODWORD(v8) = IoSetActivityIdIrp(a1, &ActivityId);
  if ( (int)v8 >= 0 )
  {
    v8 = *(_WORD **)(a1 + 200);
    *v8 |= 2u;
    if ( RelatedActivityId )
      LODWORD(v8) = EtwWriteEx(IoTraceHandle, v4, 0LL, 0, &ActivityId, RelatedActivityId, 0, 0LL);
  }
  return (int)v8;
}
