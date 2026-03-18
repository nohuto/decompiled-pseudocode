/*
 * XREFs of IopGetSetSpecificExtension @ 0x140024EE4
 * Callers:
 *     IopSetLockOperationProcess @ 0x140024D28 (IopSetLockOperationProcess.c)
 *     IopCheckInitiatorHint @ 0x140062424 (IopCheckInitiatorHint.c)
 *     IopGetSetStreamIdentifier @ 0x1401FA004 (IopGetSetStreamIdentifier.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401FAAE4 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1404922C4 (IopAllocateFoExtensionsOnCreate.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     IopRetrieveTransactionParameters @ 0x1404BB400 (IopRetrieveTransactionParameters.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1405542D0 (IoCreateStreamFileObjectEx2.c)
 *     IoCopyDeviceObjectHint @ 0x1406B7320 (IoCopyDeviceObjectHint.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14002469C (IopGetFileObjectExtension.c)
 *     IopVerifierExAllocatePool_0 @ 0x140024EB4 (IopVerifierExAllocatePool_0.c)
 *     IopSetTypeSpecificFoExtension @ 0x140024FC4 (IopSetTypeSpecificFoExtension.c)
 *     IopAllocateFileObjectExtension @ 0x140060ED0 (IopAllocateFileObjectExtension.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetSetSpecificExtension(__int64 a1, int a2, unsigned int a3, char a4, _QWORD *a5, _QWORD *a6)
{
  __int64 v6; // rdi
  SIZE_T v7; // r15
  __int64 v8; // r14
  __int64 result; // rax
  _QWORD *v12; // rcx
  void *FileObjectExtension; // rbx
  PVOID Pool_0; // rax

  v6 = 0LL;
  v7 = a3;
  v8 = a2;
  if ( a4 )
  {
    result = IopAllocateFileObjectExtension(a1, 0LL);
    if ( (int)result < 0 )
      return result;
  }
  v12 = *(_QWORD **)(a1 + 208);
  if ( v12 )
  {
    if ( v12 == IopRevocationExtension )
    {
      FileObjectExtension = 0LL;
LABEL_13:
      if ( a4 )
      {
        Pool_0 = IopVerifierExAllocatePool_0((__int64)v12, v7);
        FileObjectExtension = Pool_0;
        if ( !Pool_0 )
          return 3221225626LL;
        memset(Pool_0, 0, v7);
        if ( (int)IopSetTypeSpecificFoExtension(v6, (unsigned int)v8, FileObjectExtension) < 0 )
        {
          ExFreePoolWithTag(FileObjectExtension, 0);
          FileObjectExtension = (void *)IopGetFileObjectExtension(a1, v8, 0LL);
        }
      }
      goto LABEL_7;
    }
    FileObjectExtension = (void *)v12[v8 + 1];
    v6 = *(_QWORD *)(a1 + 208);
  }
  else
  {
    FileObjectExtension = 0LL;
  }
  if ( !FileObjectExtension )
    goto LABEL_13;
LABEL_7:
  if ( a5 )
    *a5 = FileObjectExtension;
  if ( a6 )
    *a6 = v6;
  return 0LL;
}
