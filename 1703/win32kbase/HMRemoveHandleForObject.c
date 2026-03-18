/*
 * XREFs of HMRemoveHandleForObject @ 0x1C008B570
 * Callers:
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C004E7F0 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C004F710 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C004F7D0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     HMUnlockObjectInternal @ 0x1C0049030 (HMUnlockObjectInternal.c)
 *     HMRemoveHandleForObjectWorker @ 0x1C008B60C (HMRemoveHandleForObjectWorker.c)
 */

__int64 __fastcall HMRemoveHandleForObject(int *a1)
{
  int v1; // edx
  __int64 v2; // rbx
  char *v3; // rdi
  char v4; // cl
  char *v5; // rax
  void *v6; // rcx

  v1 = *a1;
  v2 = 0LL;
  v3 = (char *)qword_1C0189E38 + dword_1C0189E40 * (unsigned int)(unsigned __int16)*a1;
  v4 = v3[24];
  if ( v4 == 19 || v4 == 22 )
  {
    v5 = (char *)gpKernelHandleTable + 16 * (unsigned __int16)v1;
    if ( v4 == 19 )
    {
      v6 = *(void **)(*(_QWORD *)v5 + 32LL);
    }
    else
    {
      v2 = *(_QWORD *)(*(_QWORD *)v5 + 16LL);
      v6 = *(void **)(v2 + 32);
    }
    ObfDereferenceObject(v6);
  }
  HMRemoveHandleForObjectWorker(v3);
  if ( !gbInDestroyHandleTableObjects )
  {
    if ( v2 )
    {
      if ( (*(_DWORD *)(v2 + 8))-- == 1 )
        HMUnlockObjectInternal((_DWORD *)v2);
    }
  }
  return 1LL;
}
