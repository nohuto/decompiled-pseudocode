/*
 * XREFs of ?SignalTokenSync@CAdapter@@UEAAJPEAX_K@Z @ 0x1C0014110
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkKernelModeWaitForSynchronizationObjectFromGpu @ 0x1C00D6F30 (DxgkKernelModeWaitForSynchronizationObjectFromGpu.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00DFE10 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 */

__int64 __fastcall CAdapter::SignalTokenSync(CAdapter *this, void *a2, __int64 a3)
{
  int v5; // ecx
  __int64 v7; // rdi
  _QWORD v9[10]; // [rsp+20h] [rbp-58h] BYREF

  v5 = 0;
  v7 = *((_QWORD *)this + 10);
  if ( *((_QWORD *)this + 9) != v7 )
  {
    memset(v9, 0, sizeof(v9));
    LODWORD(v9[0]) = *((_DWORD *)this + 16);
    v9[1] = (char *)this + 48;
    HIDWORD(v9[0]) = 1;
    v9[2] = v7;
    v5 = DxgkKernelModeWaitForSynchronizationObjectFromGpu(v9);
    if ( v5 >= 0 )
      *((_QWORD *)this + 9) = *((_QWORD *)this + 10);
  }
  if ( v5 >= 0 )
    return (unsigned int)DxgkSignalSynchronizationObjectFromGpuByReference(a2, a3, *((unsigned int *)this + 16));
  return (unsigned int)v5;
}
