/*
 * XREFs of IopInitActivityIdIrp @ 0x1401F5318
 * Callers:
 *     IopAllocateIrpPrivate @ 0x140082210 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x1400FFE44 (IopAllocateIrpWithExtension.c)
 *     IopAllocateBackpocketIrp @ 0x1401F4878 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1401F4B5C (IopAllocateReserveIrp.c)
 *     IovAllocateIrp @ 0x1407A4620 (IovAllocateIrp.c)
 * Callees:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x1400FB2D4 (PnpIsSafeToExamineUserModeTeb.c)
 *     EtwActivityIdControl @ 0x14010EE00 (EtwActivityIdControl.c)
 *     IopIsActivityTracingEventEnabled @ 0x140127F78 (IopIsActivityTracingEventEnabled.c)
 *     IoSetActivityIdIrp @ 0x14014A2C0 (IoSetActivityIdIrp.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

int __fastcall IopInitActivityIdIrp(__int64 a1)
{
  bool v2; // r14
  const GUID *RelatedActivityId; // rdi
  const EVENT_DESCRIPTOR *v4; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  GUID *SparePtr; // rsi
  bool IsActivityTracingEventEnabled; // al
  __int64 v8; // rcx
  _WORD *v9; // rax
  char v11; // [rsp+40h] [rbp-68h]
  GUID ActivityId; // [rsp+60h] [rbp-48h] BYREF
  __m128i v13; // [rsp+70h] [rbp-38h] BYREF

  v2 = 0;
  RelatedActivityId = 0LL;
  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
    SparePtr = (GUID *)CurrentThread[1].WaitBlock[0].SparePtr;
    if ( SparePtr )
    {
      IsActivityTracingEventEnabled = IopIsActivityTracingEventEnabled(&IoTrace_KernelIo_AllocateIrp);
      if ( IsActivityTracingEventEnabled )
        RelatedActivityId = SparePtr;
      else
        ActivityId = *SparePtr;
      v2 = !IsActivityTracingEventEnabled;
      v4 = (const EVENT_DESCRIPTOR *)((unsigned __int64)&IoTrace_KernelIo_AllocateIrp & -(__int64)IsActivityTracingEventEnabled);
    }
    else if ( PnpIsSafeToExamineUserModeTeb() )
    {
      v11 = 0;
      if ( KeGetPcr()->NtTib.$166D8ABE2A92F8472FE720CEE456C2DC::$8D6405090912A04D7DAC26580625742B::Self )
      {
        v13 = *(__m128i *)&KeGetPcr()->NtTib.$166D8ABE2A92F8472FE720CEE456C2DC::$8D6405090912A04D7DAC26580625742B::Self[105].SubSystemTib;
        v11 = 1;
      }
      if ( v11 )
      {
        v8 = *(_QWORD *)&NullGuid.Data1 - v13.m128i_i64[0];
        if ( *(_QWORD *)&NullGuid.Data1 == v13.m128i_i64[0] )
          v8 = *(_QWORD *)NullGuid.Data4 - _mm_srli_si128(v13, 8).m128i_u64[0];
        if ( v8 )
        {
          if ( IopIsActivityTracingEventEnabled(&IoTrace_UserInitiatedIo) )
          {
            RelatedActivityId = (const GUID *)&v13;
            v4 = &IoTrace_UserInitiatedIo;
          }
          else
          {
            ActivityId = (GUID)v13;
            v2 = 1;
          }
        }
      }
    }
  }
  if ( !v2 )
    EtwActivityIdControl(3u, &ActivityId);
  LODWORD(v9) = IoSetActivityIdIrp(a1, &ActivityId);
  if ( (int)v9 >= 0 )
  {
    v9 = *(_WORD **)(a1 + 200);
    *v9 |= 2u;
    if ( RelatedActivityId )
      LODWORD(v9) = EtwWriteEx(IoTraceHandle, v4, 0LL, 0, &ActivityId, RelatedActivityId, 0, 0LL);
  }
  return (int)v9;
}
