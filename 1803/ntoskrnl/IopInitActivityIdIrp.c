/*
 * XREFs of IopInitActivityIdIrp @ 0x140232848
 * Callers:
 *     IopAllocateIrpWithExtension @ 0x140006144 (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x1400FDE70 (IopAllocateIrpPrivate.c)
 *     IopAllocateBackpocketIrp @ 0x140231DA8 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x14023208C (IopAllocateReserveIrp.c)
 *     IovAllocateIrp @ 0x1408115F0 (IovAllocateIrp.c)
 * Callees:
 *     PnpIsSafeToExamineUserModeTeb @ 0x1400750E4 (PnpIsSafeToExamineUserModeTeb.c)
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     EtwActivityIdControl @ 0x14012A620 (EtwActivityIdControl.c)
 *     IopIsActivityTracingEventEnabled @ 0x14014B888 (IopIsActivityTracingEventEnabled.c)
 *     IoSetActivityIdIrp @ 0x140162500 (IoSetActivityIdIrp.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
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
      if ( KeGetPcr()->NtTib.$E75840294B8B6CDB220941BF8BA011B2::$95891DD37A8D0C15AC204BC06A86484B::Self )
      {
        v12 = *(__m128i *)&KeGetPcr()->NtTib.$E75840294B8B6CDB220941BF8BA011B2::$95891DD37A8D0C15AC204BC06A86484B::Self[105].SubSystemTib;
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
