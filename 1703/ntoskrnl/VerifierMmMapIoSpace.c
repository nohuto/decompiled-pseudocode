/*
 * XREFs of VerifierMmMapIoSpace @ 0x140782050
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x1401243A0 (MmMapIoSpaceEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     MmCheckMapIoSpace @ 0x140763FF4 (MmCheckMapIoSpace.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x1407751DC (ViTargetAddToCounter.c)
 *     ViPoolLogStackTrace @ 0x140775AE8 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x140775D48 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierMmMapIoSpace(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int8 CurrentIrql; // cl
  unsigned int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x73uLL, CurrentIrql, (unsigned int)a1, a2);
  if ( (MmVerifierData & 1) != 0 )
    MmCheckMapIoSpace(a1, a2);
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) == 1 )
    return 0LL;
  if ( (MmVerifierData & 0x2000000) != 0 )
  {
    v8 = 4;
    if ( a3 != 1 )
    {
      v8 = 516;
      if ( a3 == 2 )
        v8 = 1028;
    }
    v9 = MmMapIoSpaceEx(a1, a2, v8);
  }
  else
  {
    v9 = ((__int64 (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD))pXdvMmMapIoSpace)(a1, a2, a3);
  }
  v10 = v9;
  if ( VfPoolTraces )
    ViPoolLogStackTrace(v9, a2);
  if ( v10 )
  {
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetAddToCounter(retaddr, 184LL, 0xC0u, a2);
  }
  return v10;
}
