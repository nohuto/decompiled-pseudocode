/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C008D60C
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C008D1C0 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H@Z @ 0x1C009B7A0 (-DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMG.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C01A7F50 (DxgkSignalSynchronizationObjectFromCpu.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<unsigned int,4>::AllocateElements(_DWORD *a1, unsigned int a2)
{
  __int64 v2; // rdi
  void *v4; // rcx

  v2 = a2;
  if ( a2 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 4 )
      return 0LL;
    *(_QWORD *)a1 = ExAllocatePoolWithTag(PagedPool, 4LL * a2, 0x4B677844u);
  }
  else
  {
    *(_QWORD *)a1 = a1 + 2;
  }
  v4 = *(void **)a1;
  a1[6] = v2;
  if ( v4 )
    memset(v4, 0, 4 * v2);
  return *(_QWORD *)a1;
}
