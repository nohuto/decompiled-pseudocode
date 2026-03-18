/*
 * XREFs of IopAllocateFoExtensionsOnCreate @ 0x1404E36C8
 * Callers:
 *     IopAllocRealFileObject @ 0x1405B3C40 (IopAllocRealFileObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     IopGetSetSpecificExtension @ 0x1400694F0 (IopGetSetSpecificExtension.c)
 *     IopAllocateFileObjectExtension @ 0x140069670 (IopAllocateFileObjectExtension.c)
 *     ObReferenceObjectByPointer @ 0x140073920 (ObReferenceObjectByPointer.c)
 *     PsIsServerSilo @ 0x14008A910 (PsIsServerSilo.c)
 *     IoGetSilo @ 0x1400ACAA0 (IoGetSilo.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     PsIsHostSilo @ 0x140108640 (PsIsHostSilo.c)
 *     IopCheckStackForTransactionSupport @ 0x14015E8A4 (IopCheckStackForTransactionSupport.c)
 *     PsAcquireSiloHardReference @ 0x140283D50 (PsAcquireSiloHardReference.c)
 *     PsReleaseSiloHardReference @ 0x140283E10 (PsReleaseSiloHardReference.c)
 */

int __fastcall IopAllocateFoExtensionsOnCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int FileObjectExtension; // ebx
  int v10; // eax
  int result; // eax
  __int64 v12; // rdx
  _DWORD *v13; // rdi
  __int64 v14; // rcx
  __int64 Silo; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  void *v18; // rsi
  _DWORD *v19; // rax
  _DWORD *v20; // [rsp+60h] [rbp+18h] BYREF

  FileObjectExtension = -1073741811;
  if ( (*(_DWORD *)(a3 + 152) & 2) != 0 )
  {
    FileObjectExtension = IopAllocateFileObjectExtension(a1, (__int64 *)&v20);
    if ( FileObjectExtension >= 0 )
    {
      *v20 |= 1u;
      FileObjectExtension = 0;
    }
    if ( FileObjectExtension < 0 )
      return FileObjectExtension;
  }
  v10 = *(_DWORD *)(a3 + 152);
  if ( (v10 & 1) != 0 )
  {
    result = IopGetSetSpecificExtension(a1, 1u, 0x20u, 1, &v20, 0LL);
    FileObjectExtension = result;
    if ( result < 0 )
      return result;
    *(_QWORD *)v20 = *(_QWORD *)(a3 + 176);
    v10 = *(_DWORD *)(a3 + 152);
  }
  if ( (v10 & 4) != 0 )
  {
    if ( !IopCheckStackForTransactionSupport(a2)
      && (*(_DWORD *)(a3 + 88) != 1 || (*(_BYTE *)(a3 + 70) & 6) != 0 || (a5 & 0xFEEDFF56) != 0)
      && !*(_BYTE *)(a3 + 137) )
    {
      return -1072103361;
    }
    v17 = *(_QWORD *)(a3 + 184);
    if ( !v17 )
      return -1073741811;
    if ( *(_WORD *)v17 != 16 )
      return -1073741811;
    v18 = *(void **)(v17 + 8);
    if ( !v18 )
      return -1073741811;
    result = ObReferenceObjectByPointer(*(PVOID *)(v17 + 8), 0x120037u, (POBJECT_TYPE)TmTransactionObjectType, 0);
    if ( result < 0 )
      return result;
    FileObjectExtension = IopGetSetSpecificExtension(a1, 0, 0x10u, 1, &v20, 0LL);
    if ( FileObjectExtension < 0 )
    {
      ObfDereferenceObject(v18);
      return FileObjectExtension;
    }
    *(_OWORD *)v20 = *(_OWORD *)*(_QWORD *)(a3 + 184);
    v10 = *(_DWORD *)(a3 + 152);
  }
  if ( (v10 & 0x40) == 0 && PsIsHostSilo(*(_QWORD *)(a4 + 8)) )
  {
    v14 = *(_QWORD *)(a3 + 40);
    if ( !v14 )
      return FileObjectExtension;
    Silo = IoGetSilo(v14);
    if ( PsIsHostSilo(Silo) )
      return FileObjectExtension;
  }
  v12 = *(_QWORD *)(a3 + 40);
  FileObjectExtension = 0;
  v13 = *(_DWORD **)(a4 + 8);
  if ( v12 && PsIsServerSilo(*(_QWORD *)(a4 + 8)) )
    v13 = (_DWORD *)IoGetSilo(v16);
  if ( PsIsHostSilo((__int64)v13) )
    return FileObjectExtension;
  result = PsAcquireSiloHardReference(v13);
  if ( result >= 0 )
  {
    FileObjectExtension = IopGetSetSpecificExtension(a1, 7u, 0x10u, 1, &v20, 0LL);
    if ( FileObjectExtension >= 0 )
    {
      v19 = v20;
      *v20 = 16;
      *((_QWORD *)v19 + 1) = v13;
      v19[1] |= 1u;
      ObfReferenceObjectWithTag(v13, 0x70536F49u);
    }
    else
    {
      PsReleaseSiloHardReference(v13);
    }
    return FileObjectExtension;
  }
  return result;
}
