/*
 * XREFs of RtlpIsFrameInBoundsEx @ 0x14012D4D8
 * Callers:
 *     PspGetSetContextInternal @ 0x1405B7BD0 (PspGetSetContextInternal.c)
 * Callees:
 *     KeGetNextKernelStackSegment @ 0x1400B2D38 (KeGetNextKernelStackSegment.c)
 *     KeQueryCurrentStackInformation @ 0x140130810 (KeQueryCurrentStackInformation.c)
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
  char *v12; // rcx
  char *v13; // rdx
  char v14; // al
  char v15; // r8
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  char v18[8]; // [rsp+20h] [rbp-18h] BYREF
  char v19[16]; // [rsp+28h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+48h] [rbp+10h] BYREF

  if ( (a2 & 7) == 0 )
  {
    if ( a2 >= *a1 && a2 < *a3 )
      return 1;
    if ( *a1 >= 0xFFFF800000000000uLL )
    {
      KeQueryCurrentStackInformation(&v20, v19, v18);
      if ( v20 > 7 || (v9 = 161, !_bittest(&v9, v20)) )
      {
        CurrentThread = KeGetCurrentThread();
        v11 = v20;
        if ( v20 != 1 )
        {
          if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && CurrentThread != KeGetCurrentPrcb()->IdleThread )
          {
            v12 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
            v13 = &v12[-(unsigned int)KeKernelStackSize];
            if ( (unsigned __int64)v13 <= a2 && a2 < (unsigned __int64)v12 )
            {
              *a3 = (unsigned __int64)v12;
              *a1 = (unsigned __int64)v13;
              return 1;
            }
          }
          v11 = v20;
        }
        v14 = 0;
        if ( !*a4 )
        {
          KeGetNextKernelStackSegment(CurrentThread, a4, 1);
          v14 = v15;
        }
        if ( (v11 == 1 || v11 == 6) && v14 || KeGetNextKernelStackSegment(CurrentThread, a4, 0) )
        {
          v16 = a4[1];
          v17 = *a4;
          if ( a2 >= v16 && a2 < v17 )
          {
            *a1 = v16;
            *a3 = v17;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
