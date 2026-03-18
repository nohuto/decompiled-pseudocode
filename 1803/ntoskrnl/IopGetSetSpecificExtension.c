/*
 * XREFs of IopGetSetSpecificExtension @ 0x1400694F0
 * Callers:
 *     IopSetLockOperationProcess @ 0x140068F80 (IopSetLockOperationProcess.c)
 *     IopCheckInitiatorHint @ 0x14012B520 (IopCheckInitiatorHint.c)
 *     IopGetSetStreamIdentifier @ 0x140237194 (IopGetSetStreamIdentifier.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140237888 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1404E36C8 (IopAllocateFoExtensionsOnCreate.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140592DF0 (IoCreateStreamFileObjectEx2.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     IopRetrieveTransactionParameters @ 0x1405B4060 (IopRetrieveTransactionParameters.c)
 *     IoCopyDeviceObjectHint @ 0x14071BFB0 (IoCopyDeviceObjectHint.c)
 * Callees:
 *     IopVerifierExAllocatePool_0 @ 0x1400694C0 (IopVerifierExAllocatePool_0.c)
 *     IopGetFileObjectExtension @ 0x140069628 (IopGetFileObjectExtension.c)
 *     IopAllocateFileObjectExtension @ 0x140069670 (IopAllocateFileObjectExtension.c)
 *     IopSetTypeSpecificFoExtension @ 0x140069DD4 (IopSetTypeSpecificFoExtension.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetSetSpecificExtension(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        _QWORD *a5,
        _QWORD *a6)
{
  SIZE_T v7; // r15
  __int64 result; // rax
  __int64 FileObjectExtension; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  void *v14; // rbx
  PVOID Pool_0; // rax
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v16[0] = 0LL;
  v7 = a3;
  if ( !a4 || (result = IopAllocateFileObjectExtension(a1, 0LL), (int)result >= 0) )
  {
    FileObjectExtension = IopGetFileObjectExtension(a1, a2, v16);
    v13 = v16[0];
    v14 = (void *)FileObjectExtension;
    if ( !FileObjectExtension && a4 )
    {
      Pool_0 = IopVerifierExAllocatePool_0(v12, v7);
      v14 = Pool_0;
      if ( !Pool_0 )
        return 3221225626LL;
      memset(Pool_0, 0, v7);
      if ( (int)IopSetTypeSpecificFoExtension(v13, a2, v14) < 0 )
      {
        ExFreePoolWithTag(v14, 0);
        v14 = (void *)IopGetFileObjectExtension(a1, a2, 0LL);
      }
    }
    if ( a5 )
      *a5 = v14;
    if ( a6 )
      *a6 = v13;
    return 0LL;
  }
  return result;
}
