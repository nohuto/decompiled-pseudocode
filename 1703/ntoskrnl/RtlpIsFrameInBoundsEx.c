/*
 * XREFs of RtlpIsFrameInBoundsEx @ 0x1400E6D30
 * Callers:
 *     PspGetSetContextInternal @ 0x140521E20 (PspGetSetContextInternal.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x1400E7800 (KeQueryCurrentStackInformation.c)
 *     KeGetNextKernelStackSegment @ 0x14010F074 (KeGetNextKernelStackSegment.c)
 */

char __fastcall RtlpIsFrameInBoundsEx(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  __int64 v9; // r8
  _KTHREAD *CurrentThread; // r10
  unsigned int v11; // r9d
  char v12; // al
  char v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  int v16; // ecx
  char *v17; // rcx
  char *v18; // rdx
  char v19[8]; // [rsp+20h] [rbp-18h] BYREF
  char v20[16]; // [rsp+28h] [rbp-10h] BYREF
  unsigned int v21; // [rsp+48h] [rbp+10h] BYREF

  if ( (a2 & 7) != 0 )
    return 0;
  if ( a2 >= *a1 && a2 < *a3 )
    return 1;
  if ( *a1 < 0xFFFF800000000000uLL )
    return 0;
  KeQueryCurrentStackInformation(&v21, v20, v19);
  if ( v21 <= 7 )
  {
    v16 = 161;
    if ( _bittest(&v16, v21) )
      return 0;
  }
  CurrentThread = KeGetCurrentThread();
  v11 = v21;
  if ( v21 != 1 )
  {
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && CurrentThread != KeGetCurrentPrcb()->IdleThread )
    {
      v17 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
      v18 = &v17[-(unsigned int)KeKernelStackSize];
      if ( (unsigned __int64)v18 <= a2 && a2 < (unsigned __int64)v17 )
      {
        *a3 = (unsigned __int64)v17;
        *a1 = (unsigned __int64)v18;
        return 1;
      }
    }
    v11 = v21;
  }
  v12 = 0;
  if ( !*a4 )
  {
    LOBYTE(v9) = 1;
    KeGetNextKernelStackSegment(CurrentThread, a4, v9);
    v12 = v13;
  }
  if ( (v11 != 1 && v11 != 6 || !v12) && !(unsigned __int8)KeGetNextKernelStackSegment(CurrentThread, a4, 0LL) )
    return 0;
  v14 = a4[1];
  v15 = *a4;
  if ( a2 < v14 || a2 >= v15 )
    return 0;
  *a1 = v14;
  *a3 = v15;
  return 1;
}
