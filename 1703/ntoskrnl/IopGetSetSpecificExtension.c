/*
 * XREFs of IopGetSetSpecificExtension @ 0x140050EF0
 * Callers:
 *     IopCheckInitiatorHint @ 0x14001E214 (IopCheckInitiatorHint.c)
 *     IopSetLockOperationProcess @ 0x14004F2B0 (IopSetLockOperationProcess.c)
 *     IopGetSetStreamIdentifier @ 0x1401F447C (IopGetSetStreamIdentifier.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401F4C88 (IopAdjustFileObjectKeepAliveCount.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140422650 (IoCreateStreamFileObjectEx2.c)
 *     IopRetrieveTransactionParameters @ 0x140429360 (IopRetrieveTransactionParameters.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14048BEC8 (IopAllocateFoExtensionsOnCreate.c)
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     IoCopyDeviceObjectHint @ 0x14068B680 (IoCopyDeviceObjectHint.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x1400478A0 (IopAllocateFileObjectExtension.c)
 *     IopVerifierExAllocatePool_1 @ 0x14004B4A8 (IopVerifierExAllocatePool_1.c)
 *     IopGetFileObjectExtension @ 0x1400511D0 (IopGetFileObjectExtension.c)
 *     IopSetTypeSpecificFoExtension @ 0x140051214 (IopSetTypeSpecificFoExtension.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
  __int64 v11; // rcx
  void *FileObjectExtension; // rbx
  PVOID Pool_1; // rax

  v7 = a3;
  if ( !a4 || (result = IopAllocateFileObjectExtension(a1, 0LL), (int)result >= 0) )
  {
    FileObjectExtension = (void *)IopGetFileObjectExtension(a1, a2);
    if ( !FileObjectExtension && a4 )
    {
      Pool_1 = IopVerifierExAllocatePool_1(v11, v7);
      FileObjectExtension = Pool_1;
      if ( !Pool_1 )
        return 3221225626LL;
      memset(Pool_1, 0, v7);
      if ( (int)IopSetTypeSpecificFoExtension(0LL, a2, FileObjectExtension) < 0 )
      {
        ExFreePoolWithTag(FileObjectExtension, 0);
        FileObjectExtension = (void *)IopGetFileObjectExtension(a1, a2);
      }
    }
    if ( a5 )
      *a5 = FileObjectExtension;
    if ( a6 )
      *a6 = 0LL;
    return 0LL;
  }
  return result;
}
