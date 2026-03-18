/*
 * XREFs of RtlpIsFrameInBoundsEx @ 0x1400D85C0
 * Callers:
 *     RtlpWalkFrameChain @ 0x1400D68B0 (RtlpWalkFrameChain.c)
 *     PspGetSetContextInternal @ 0x140514300 (PspGetSetContextInternal.c)
 * Callees:
 *     KeGetNextKernelStackSegment @ 0x1400AD2C8 (KeGetNextKernelStackSegment.c)
 *     KeQueryCurrentStackInformation @ 0x1400D9080 (KeQueryCurrentStackInformation.c)
 */

char __fastcall RtlpIsFrameInBoundsEx(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  int v9; // ecx
  _KTHREAD *CurrentThread; // r10
  unsigned int v11; // r9d
  char v12; // al
  char v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  char *v16; // rcx
  char *v17; // rdx
  char v18[8]; // [rsp+20h] [rbp-18h] BYREF
  char v19[16]; // [rsp+28h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+48h] [rbp+10h] BYREF

  if ( (a2 & 7) != 0 )
    return 0;
  if ( a2 >= *a1 && a2 < *a3 )
    return 1;
  if ( *a1 < 0xFFFF800000000000uLL )
    return 0;
  KeQueryCurrentStackInformation(&v20, v19, v18);
  if ( v20 <= 7 )
  {
    v9 = 161;
    if ( _bittest(&v9, v20) )
      return 0;
  }
  CurrentThread = KeGetCurrentThread();
  v11 = v20;
  if ( v20 != 1 )
  {
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && CurrentThread != KeGetCurrentPrcb()->IdleThread )
    {
      v16 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
      v17 = &v16[-(unsigned int)KeKernelStackSize];
      if ( (unsigned __int64)v17 <= a2 && a2 < (unsigned __int64)v16 )
      {
        *a3 = (unsigned __int64)v16;
        *a1 = (unsigned __int64)v17;
        return 1;
      }
    }
    v11 = v20;
  }
  v12 = 0;
  if ( !*a4 )
  {
    KeGetNextKernelStackSegment(CurrentThread, a4, 1);
    v12 = v13;
  }
  if ( (v11 != 1 && v11 != 6 || !v12) && !KeGetNextKernelStackSegment(CurrentThread, a4, 0) )
    return 0;
  v14 = a4[1];
  v15 = *a4;
  if ( a2 < v14 || a2 >= v15 )
    return 0;
  *a1 = v14;
  *a3 = v15;
  return 1;
}
