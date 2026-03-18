/*
 * XREFs of AcpiAllocateNativeMethodOutputBuffer @ 0x1C0053C50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0014E98 (WPP_RECORDER_SF_qD.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall AcpiAllocateNativeMethodOutputBuffer(_QWORD *a1, void *a2, SIZE_T a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  PVOID PoolWithTag; // rax
  int v9; // edx
  __int64 v10; // rcx

  v4 = 0;
  if ( a2 )
    ExFreePoolWithTag(a2, 0x4E706341u);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a3, 0x4E706341u);
  a1[7] = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, a3);
    v10 = a1[7];
    a1[6] = a3;
    *a4 = v10;
  }
  else
  {
    v4 = -1073741670;
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      19,
      17,
      (__int64)&WPP_f584d6e152f936bbeb0888d1dfdf0b19_Traceguids,
      a1[1],
      154);
  }
  return v4;
}
