/*
 * XREFs of IopAllocateFoExtensionsOnCreate @ 0x1404922C4
 * Callers:
 *     IopAllocRealFileObject @ 0x1404BA930 (IopAllocRealFileObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     IopGetSetSpecificExtension @ 0x140024EE4 (IopGetSetSpecificExtension.c)
 *     IopAllocateFileObjectExtension @ 0x140060ED0 (IopAllocateFileObjectExtension.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PsIsHostSilo @ 0x1400859F0 (PsIsHostSilo.c)
 *     PsIsServerSilo @ 0x1400D4250 (PsIsServerSilo.c)
 *     ObReferenceObjectByPointer @ 0x1400DE9F0 (ObReferenceObjectByPointer.c)
 *     IoGetSilo @ 0x140110140 (IoGetSilo.c)
 *     IopCheckStackForTransactionSupport @ 0x140157C38 (IopCheckStackForTransactionSupport.c)
 *     PsAcquireSiloHardReference @ 0x14024D970 (PsAcquireSiloHardReference.c)
 *     PsReleaseSiloHardReference @ 0x14024DA30 (PsReleaseSiloHardReference.c)
 */

int __fastcall IopAllocateFoExtensionsOnCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int FileObjectExtension; // ebx
  int result; // eax
  __int64 v11; // rdx
  _DWORD *v12; // rdi
  __int64 v13; // rcx
  __int64 Silo; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  void *v17; // rsi
  _DWORD *v18; // rax
  _DWORD *v19; // [rsp+60h] [rbp+18h] BYREF

  FileObjectExtension = -1073741811;
  if ( (*(_DWORD *)(a3 + 152) & 2) != 0 )
  {
    FileObjectExtension = IopAllocateFileObjectExtension(a1, (__int64 *)&v19);
    if ( FileObjectExtension >= 0 )
    {
      *v19 |= 1u;
      FileObjectExtension = 0;
    }
    if ( FileObjectExtension < 0 )
      return FileObjectExtension;
  }
  if ( (*(_DWORD *)(a3 + 152) & 1) != 0 )
  {
    result = IopGetSetSpecificExtension(a1, 1, 0x20u, 1, &v19, 0LL);
    FileObjectExtension = result;
    if ( result < 0 )
      return result;
    *(_QWORD *)v19 = *(_QWORD *)(a3 + 176);
  }
  if ( (*(_DWORD *)(a3 + 152) & 4) != 0 )
  {
    if ( !IopCheckStackForTransactionSupport(a2)
      && (*(_DWORD *)(a3 + 88) != 1 || (*(_BYTE *)(a3 + 70) & 6) != 0 || (a5 & 0xFEEDFF56) != 0)
      && !*(_BYTE *)(a3 + 137) )
    {
      return -1072103361;
    }
    v16 = *(_QWORD *)(a3 + 184);
    if ( !v16 )
      return -1073741811;
    if ( *(_WORD *)v16 != 16 )
      return -1073741811;
    v17 = *(void **)(v16 + 8);
    if ( !v17 )
      return -1073741811;
    result = ObReferenceObjectByPointer(*(PVOID *)(v16 + 8), 0x120037u, (POBJECT_TYPE)TmTransactionObjectType, 0);
    if ( result < 0 )
      return result;
    FileObjectExtension = IopGetSetSpecificExtension(a1, 0, 0x10u, 1, &v19, 0LL);
    if ( FileObjectExtension < 0 )
    {
      ObfDereferenceObject(v17);
      return FileObjectExtension;
    }
    *(_OWORD *)v19 = *(_OWORD *)*(_QWORD *)(a3 + 184);
  }
  if ( (*(_DWORD *)(a3 + 152) & 0x40) == 0 && PsIsHostSilo(*(_QWORD *)(a4 + 8)) )
  {
    v13 = *(_QWORD *)(a3 + 40);
    if ( !v13 )
      return FileObjectExtension;
    Silo = IoGetSilo(v13);
    if ( PsIsHostSilo(Silo) )
      return FileObjectExtension;
  }
  v11 = *(_QWORD *)(a3 + 40);
  FileObjectExtension = 0;
  v12 = *(_DWORD **)(a4 + 8);
  if ( v11 && PsIsServerSilo(*(_QWORD *)(a4 + 8)) )
    v12 = (_DWORD *)IoGetSilo(v15);
  if ( PsIsHostSilo((__int64)v12) )
    return FileObjectExtension;
  result = PsAcquireSiloHardReference(v12);
  if ( result >= 0 )
  {
    FileObjectExtension = IopGetSetSpecificExtension(a1, 7, 0x10u, 1, &v19, 0LL);
    if ( FileObjectExtension >= 0 )
    {
      v18 = v19;
      *v19 = 16;
      *((_QWORD *)v18 + 1) = v12;
      v18[1] |= 1u;
      ObfReferenceObjectWithTag(v12, 0x70536F49u);
    }
    else
    {
      PsReleaseSiloHardReference(v12);
    }
    return FileObjectExtension;
  }
  return result;
}
