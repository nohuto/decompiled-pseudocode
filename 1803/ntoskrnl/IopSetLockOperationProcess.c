/*
 * XREFs of IopSetLockOperationProcess @ 0x140068F80
 * Callers:
 *     NtLockFile @ 0x1404E39A0 (NtLockFile.c)
 *     IopCloseFile @ 0x1405B12E0 (IopCloseFile.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400694C0 (IopVerifierExAllocatePool_0.c)
 *     IopGetSetSpecificExtension @ 0x1400694F0 (IopGetSetSpecificExtension.c)
 *     IopGetFileObjectExtension @ 0x140069628 (IopGetFileObjectExtension.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSetLockOperationProcess(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  _QWORD *v4; // rbx
  char v5; // si
  __int64 result; // rax
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 Pool_0; // rax
  __int64 FileObjectExtension; // r15
  KSPIN_LOCK *v14; // r13
  KIRQL v15; // al
  _QWORD *v16; // rdx
  char v17; // bp
  _QWORD *v18; // rcx
  __int64 v19; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0LL;
  v5 = 0;
  if ( !a2 )
    return 3221225485LL;
  if ( a3 )
  {
    v11 = 0;
    FileObjectExtension = IopGetFileObjectExtension(a1, 1LL, 0LL);
    if ( !FileObjectExtension )
      return 3221225473LL;
  }
  else
  {
    LOBYTE(a4) = 1;
    result = IopGetSetSpecificExtension(a1, 1LL, 32LL, a4, &v19, 0LL);
    v11 = result;
    if ( (int)result < 0 )
      return result;
    Pool_0 = IopVerifierExAllocatePool_0(v10, 16LL);
    FileObjectExtension = v19;
    v4 = (_QWORD *)Pool_0;
  }
  v14 = (KSPIN_LOCK *)(a1 + 184);
  v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v16 = *(_QWORD **)(FileObjectExtension + 16);
  v17 = *(_BYTE *)(a1 + 72);
  LOBYTE(v19) = v15;
  if ( v16 )
  {
    v18 = v16;
    while ( v18[1] != a2 )
    {
      v18 = (_QWORD *)*v18;
      if ( !v18 )
        goto LABEL_18;
    }
    v5 = 1;
  }
  else
  {
LABEL_18:
    if ( !a3 )
    {
      if ( v4 )
      {
        *v4 = v16;
        *(_QWORD *)(FileObjectExtension + 16) = v4;
        v4[1] = a2;
      }
      else
      {
        v11 = -1073741670;
      }
    }
  }
  KxReleaseSpinLock(v14);
  __writecr8((unsigned __int8)v19);
  if ( v5 )
  {
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
  if ( a3 )
  {
    if ( v17 )
      return v5 == 0 ? 0xC0000001 : 0;
    return 3221225473LL;
  }
  return v11;
}
