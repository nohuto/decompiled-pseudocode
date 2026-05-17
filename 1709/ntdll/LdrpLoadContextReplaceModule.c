/*
 * XREFs of LdrpLoadContextReplaceModule @ 0x18008041C
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x1800220AC (LdrpMapDllWithSectionHandle.c)
 *     LdrpLoadKnownDll @ 0x180035B64 (LdrpLoadKnownDll.c)
 *     LdrpMapDllFullPath @ 0x18004D28C (LdrpMapDllFullPath.c)
 *     LdrpMapDllSearchPath @ 0x18004F618 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllRetry @ 0x180080334 (LdrpMapDllRetry.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x180029804 (LdrpDereferenceModule.c)
 *     LdrpDependencyExist @ 0x18002BE20 (LdrpDependencyExist.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     LdrpQueueWork @ 0x18004B450 (LdrpQueueWork.c)
 */

signed __int64 __fastcall LdrpLoadContextReplaceModule(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // rbx
  int v8; // eax
  _QWORD **v9; // rcx
  _QWORD *v10; // rdi
  unsigned __int64 v11; // rdi
  __int64 v12; // rsi
  _QWORD *v13; // r8
  _QWORD *i; // rcx
  int v15; // eax
  _QWORD *v18; // rcx
  _QWORD *v19; // rdx
  _QWORD *v20; // rax

  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 152LL);
  *(_QWORD *)(a1 + 56) = a2;
  v7 = *(_QWORD *)(a2 + 152);
  v8 = *(_DWORD *)(v7 + 24);
  if ( v8 != -1 )
    *(_DWORD *)(v7 + 24) = v8 + 1;
  *(_DWORD *)(v6 + 24) = 0;
  if ( *(_QWORD *)(v6 + 48) )
  {
    v9 = *(_QWORD ***)(v6 + 48);
    if ( v9 )
    {
      v10 = *v9;
      if ( *v9 == v9 )
        *(_QWORD *)(v6 + 48) = 0LL;
      else
        *v9 = (_QWORD *)*v10;
    }
    else
    {
      v10 = 0LL;
    }
    LdrpDereferenceModule(a2);
    v11 = v10[1] & 0xFFFFFFFFFFFFFFF8uLL;
    v12 = *(_QWORD *)(*(_QWORD *)v11 + 16LL);
    if ( LdrpDependencyExist(v11, v7) )
    {
      for ( i = *(_QWORD **)(v11 + 40); (_QWORD *)*i != v13; i = (_QWORD *)*i )
        ;
      *i = *v13;
      if ( *(_QWORD **)(v11 + 40) == v13 )
      {
        v20 = 0LL;
        if ( i != v13 )
          v20 = i;
        *(_QWORD *)(v11 + 40) = v20;
      }
      v15 = *(_DWORD *)(v7 + 24);
      if ( v15 != -1 )
        *(_DWORD *)(v7 + 24) = v15 - 1;
      RtlFreeHeap(LdrpHeap, 0, (unsigned __int64)v13);
      v13 = 0LL;
    }
    else
    {
      v13[1] = v7;
      v18 = v13 + 2;
      v19 = *(_QWORD **)(v7 + 48);
      if ( v19 )
      {
        *v18 = *v19;
        *v19 = v18;
      }
      else
      {
        *v18 = v18;
      }
      *(_QWORD *)(v7 + 48) = v18;
    }
    if ( v12 && (*(int *)(v7 + 56) >= 2 || !v13) && (*(_DWORD *)(v12 + 100))-- == 1 )
    {
      *(_DWORD *)(v11 + 56) = 4;
      LdrpQueueWork(v12);
    }
  }
  return RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}
