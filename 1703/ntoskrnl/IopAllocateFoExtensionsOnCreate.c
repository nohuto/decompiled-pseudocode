/*
 * XREFs of IopAllocateFoExtensionsOnCreate @ 0x14048BEC8
 * Callers:
 *     IopAllocRealFileObject @ 0x14053AC70 (IopAllocRealFileObject.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x1400478A0 (IopAllocateFileObjectExtension.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     PsIsHostSilo @ 0x140050C00 (PsIsHostSilo.c)
 *     IopGetSetSpecificExtension @ 0x140050EF0 (IopGetSetSpecificExtension.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObReferenceObjectByPointer @ 0x14012B9D0 (ObReferenceObjectByPointer.c)
 *     IopCheckStackForTransactionSupport @ 0x1401534A0 (IopCheckStackForTransactionSupport.c)
 *     PsAcquireSiloHardReference @ 0x1402388B0 (PsAcquireSiloHardReference.c)
 *     PsReleaseSiloHardReference @ 0x140238950 (PsReleaseSiloHardReference.c)
 */

int __fastcall IopAllocateFoExtensionsOnCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int FileObjectExtension; // ebx
  int result; // eax
  _DWORD *v11; // rdi
  __int64 v12; // rsi
  void *v13; // rsi
  _DWORD *v14; // rax
  _DWORD *v15; // [rsp+60h] [rbp+18h] BYREF

  FileObjectExtension = -1073741811;
  if ( (*(_DWORD *)(a3 + 152) & 2) != 0 )
  {
    FileObjectExtension = IopAllocateFileObjectExtension(a1, (__int64 *)&v15);
    if ( FileObjectExtension >= 0 )
    {
      *v15 |= 1u;
      FileObjectExtension = 0;
    }
    if ( FileObjectExtension < 0 )
      return FileObjectExtension;
  }
  if ( (*(_DWORD *)(a3 + 152) & 1) != 0 )
  {
    result = IopGetSetSpecificExtension(a1, 1u, 0x20u, 1, &v15, 0LL);
    FileObjectExtension = result;
    if ( result < 0 )
      return result;
    *(_QWORD *)v15 = *(_QWORD *)(a3 + 176);
  }
  if ( (*(_DWORD *)(a3 + 152) & 4) != 0 )
  {
    if ( !IopCheckStackForTransactionSupport(a2)
      && (*(_DWORD *)(a3 + 88) != 1 || (*(_BYTE *)(a3 + 70) & 6) != 0 || (a5 & 0xFEEDFF56) != 0)
      && !*(_BYTE *)(a3 + 137) )
    {
      return -1072103361;
    }
    v12 = *(_QWORD *)(a3 + 184);
    if ( !v12 )
      return -1073741811;
    if ( *(_WORD *)v12 != 16 )
      return -1073741811;
    v13 = *(void **)(v12 + 8);
    if ( !v13 )
      return -1073741811;
    result = ObReferenceObjectByPointer(v13, 0x120037u, (POBJECT_TYPE)TmTransactionObjectType, 0);
    if ( result < 0 )
      return result;
    FileObjectExtension = IopGetSetSpecificExtension(a1, 0, 0x10u, 1, &v15, 0LL);
    if ( FileObjectExtension < 0 )
    {
      ObfDereferenceObject(v13);
      return FileObjectExtension;
    }
    *(_OWORD *)v15 = *(_OWORD *)*(_QWORD *)(a3 + 184);
  }
  if ( (*(_DWORD *)(a3 + 152) & 0x40) == 0 && PsIsHostSilo(*(_QWORD *)(a4 + 8)) )
    return FileObjectExtension;
  v11 = *(_DWORD **)(a4 + 8);
  FileObjectExtension = 0;
  if ( PsIsHostSilo((__int64)v11) )
    return FileObjectExtension;
  result = PsAcquireSiloHardReference(v11);
  if ( result >= 0 )
  {
    FileObjectExtension = IopGetSetSpecificExtension(a1, 7u, 0x10u, 1, &v15, 0LL);
    if ( FileObjectExtension >= 0 )
    {
      v14 = v15;
      *v15 = 16;
      *((_QWORD *)v14 + 1) = v11;
      v14[1] |= 1u;
      ObfReferenceObjectWithTag(v11, 0x70536F49u);
    }
    else
    {
      PsReleaseSiloHardReference(v11);
    }
    return FileObjectExtension;
  }
  return result;
}
