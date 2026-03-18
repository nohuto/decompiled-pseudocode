/*
 * XREFs of KeStartProfile @ 0x140201D7C
 * Callers:
 *     EtwpEnableKernelTrace @ 0x140435210 (EtwpEnableKernelTrace.c)
 *     NtStartProfile @ 0x140720BEC (NtStartProfile.c)
 *     KiInitializeCacheErrataSupport @ 0x140834BBC (KiInitializeCacheErrataSupport.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140088870 (KeQueryMaximumProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x140147FF0 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KiStartProfileTarget @ 0x1402021C0 (KiStartProfileTarget.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

char __fastcall KeStartProfile(ULONG_PTR a1)
{
  SIZE_T v2; // rbx
  PVOID PoolWithTag; // rax
  ULONG_PTR Context[26]; // [rsp+20h] [rbp-89h] BYREF

  memset(Context, 0, 0xC8uLL);
  HIDWORD(Context[1]) = KeNumberProcessors_0;
  LODWORD(Context[1]) = KeNumberProcessors_0;
  LODWORD(Context[2]) = 1310721;
  Context[0] = a1;
  memset((char *)&Context[2] + 4, 0, 0xA4uLL);
  v2 = 4 * KeQueryMaximumProcessorCountEx(0xFFFFu) + 196;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v2, 0x666F7250u);
  Context[23] = (ULONG_PTR)PoolWithTag;
  if ( !PoolWithTag )
    return 1;
  memset(PoolWithTag, 0, v2);
  if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    KiStartProfileTarget((ULONG_PTR)Context);
  else
    KeIpiGenericCall(KiStartProfileTarget, (ULONG_PTR)Context);
  if ( Context[23] )
    ExFreePoolWithTag((PVOID)Context[23], 0x666F7250u);
  return Context[24];
}
