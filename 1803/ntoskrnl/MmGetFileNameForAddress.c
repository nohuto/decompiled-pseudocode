/*
 * XREFs of MmGetFileNameForAddress @ 0x140749798
 * Callers:
 *     DbgkPostModuleMessage @ 0x140223554 (DbgkPostModuleMessage.c)
 *     EtwpProviderArrivalCallback @ 0x14058C90C (EtwpProviderArrivalCallback.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x14001B0F0 (MiObtainReferencedVadEx.c)
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x1404A78E0 (ObQueryNameStringMode.c)
 */

__int64 __fastcall MmGetFileNameForAddress(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  void *v7; // rbx
  __int64 v9; // rcx
  char *v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  SIZE_T i; // rsi
  int v15; // edi
  const void **PoolWithTag; // rax
  const void **v17; // rbx
  size_t v18; // r8
  unsigned int v19; // [rsp+60h] [rbp+18h] BYREF
  int v20; // [rsp+68h] [rbp+20h] BYREF

  v3 = MiObtainReferencedVadEx(a1, 0, &v20);
  v7 = (void *)v3;
  if ( !v3 )
    return 3221225793LL;
  if ( (*(_DWORD *)(v3 + 48) & 0x4000) != 0 || (v9 = **(_QWORD **)(v3 + 72), (*(_DWORD *)(v9 + 56) & 0x20) == 0) )
  {
    MiUnlockAndDereferenceVad((PVOID)v3, v4, v5, v6);
    return 3221225545LL;
  }
  else
  {
    v10 = (char *)MiReferenceControlAreaFile(v9);
    MiUnlockAndDereferenceVad(v7, v11, v12, v13);
    for ( i = 1040LL; ; i = v19 )
    {
      PoolWithTag = (const void **)ExAllocatePoolWithTag(PagedPool, i, 0x20206D4Du);
      v17 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v15 = -1073741801;
        goto LABEL_11;
      }
      v19 = 0;
      v15 = ObQueryNameStringMode(v10, (__int64)PoolWithTag, i, &v19, 0);
      if ( v15 >= 0 )
        break;
      ExFreePoolWithTag(v17, 0);
      if ( v19 <= (unsigned int)i )
        goto LABEL_11;
    }
    v18 = *(unsigned __int16 *)v17;
    *(_WORD *)(a2 + 2) = v18;
    *(_WORD *)a2 = v18;
    *(_QWORD *)(a2 + 8) = v17;
    memmove(v17, v17[1], v18);
LABEL_11:
    ObfDereferenceObject(v10);
    return (unsigned int)v15;
  }
}
