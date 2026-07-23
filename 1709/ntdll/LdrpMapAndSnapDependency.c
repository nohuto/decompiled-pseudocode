/*
 * XREFs of LdrpMapAndSnapDependency @ 0x18002EEF8
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x1800220AC (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpPrepareImportAddressTableForSnap @ 0x18002259C (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpSnapModule @ 0x180027FC0 (LdrpSnapModule.c)
 *     LdrpLoadDependentModule @ 0x18002F160 (LdrpLoadDependentModule.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     LdrpQueueWork @ 0x18004B450 (LdrpQueueWork.c)
 *     LdrpFindDllActivationContext @ 0x1800770D8 (LdrpFindDllActivationContext.c)
 *     LdrpGetImportDescriptorForSnap @ 0x180079880 (LdrpGetImportDescriptorForSnap.c)
 */

int *__fastcall LdrpMapAndSnapDependency(__int64 a1)
{
  __int64 v1; // rbp
  _QWORD *v2; // rbx
  int DllActivationContext; // edi
  int v4; // r14d
  __int64 ImportDescriptorForSnap; // rax
  __int64 v6; // r13
  unsigned int v7; // r15d
  unsigned int *v8; // rsi
  _DWORD *v9; // r8
  __int64 v10; // rcx
  int v11; // edx
  PVOID Heap; // rax
  unsigned int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // zf
  char *v17; // rcx
  unsigned __int64 v18; // rax
  int *result; // rax
  ANSI_STRING SourceString; // [rsp+30h] [rbp-48h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v2 = (_QWORD *)a1;
  DllActivationContext = 0;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) == 0 )
    DllActivationContext = LdrpFindDllActivationContext(*(_QWORD *)(a1 + 56));
  if ( DllActivationContext >= 0 )
    DllActivationContext = LdrpPrepareImportAddressTableForSnap((__int64)v2);
  if ( DllActivationContext < 0 )
    goto LABEL_35;
  v4 = 0;
  if ( !v2[13] )
    goto LABEL_39;
  ImportDescriptorForSnap = LdrpGetImportDescriptorForSnap(v2);
  v6 = ImportDescriptorForSnap;
  v7 = 0;
  v8 = (unsigned int *)(ImportDescriptorForSnap + 12);
  if ( !*(_DWORD *)(ImportDescriptorForSnap + 12) )
    goto LABEL_32;
  v9 = (_DWORD *)(ImportDescriptorForSnap + 12);
  do
  {
    v10 = (unsigned int)v9[1];
    if ( !(_DWORD)v10 )
      break;
    v11 = v4 + 1;
    ++v7;
    v9 += 5;
    if ( !*(_QWORD *)(v10 + *(_QWORD *)(v1 + 48)) )
      v11 = v4;
    v4 = v11;
  }
  while ( *v9 );
  v2 = (_QWORD *)a1;
  if ( !v4 )
    goto LABEL_32;
  Heap = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 1572864) | 8, 8LL * v7);
  *(_QWORD *)(a1 + 88) = Heap;
  if ( !Heap )
  {
    DllActivationContext = -1073741801;
    goto LABEL_31;
  }
  *(_DWORD *)(a1 + 96) = v7;
  *(_DWORD *)(a1 + 100) = v4 + 1;
  v13 = 0;
  *(_QWORD *)(a1 + 128) = v6;
  BaseAddress = 0LL;
  if ( !*v8 )
    goto LABEL_29;
  while ( v8[1] )
  {
    v14 = *(_QWORD *)(v1 + 48);
    if ( !*(_QWORD *)(v8[1] + v14) )
      goto LABEL_26;
    v15 = *v8;
    v16 = v14 + v15 == 0;
    v17 = (char *)(v14 + v15);
    *(_DWORD *)&SourceString.Length = 0;
    SourceString.Buffer = v17;
    if ( !v16 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( v17[v18] );
      if ( v18 > 0xFFFE )
      {
        DllActivationContext = -1073741562;
        goto LABEL_24;
      }
      SourceString.Length = v18;
      SourceString.MaximumLength = v18 + 1;
    }
    DllActivationContext = 0;
LABEL_24:
    if ( DllActivationContext < 0 )
      break;
    DllActivationContext = LdrpLoadDependentModule(
                             &SourceString,
                             *(_QWORD *)(a1 + 88) + 8LL * v13,
                             (__int64)&BaseAddress);
    if ( DllActivationContext < 0 )
      break;
LABEL_26:
    v8 += 5;
    ++v13;
    if ( !*v8 )
      break;
  }
  if ( BaseAddress )
    RtlFreeHeap(LdrpHeap, 0, BaseAddress);
LABEL_29:
  if ( DllActivationContext >= 0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    v4 = --*(_DWORD *)(a1 + 100);
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  }
LABEL_31:
  if ( !v4 )
  {
LABEL_32:
    if ( v2[13] )
    {
      *(_DWORD *)(*(_QWORD *)(v1 + 152) + 56LL) = 4;
      if ( v2[6] )
        LdrpQueueWork(v2);
      else
        DllActivationContext = LdrpSnapModule((__int64)v2);
      goto LABEL_35;
    }
LABEL_39:
    *(_DWORD *)(*(_QWORD *)(v1 + 152) + 56LL) = 5;
  }
LABEL_35:
  result = (int *)(unsigned int)~DllActivationContext;
  if ( DllActivationContext < 0 )
  {
    result = (int *)v2[5];
    *result = DllActivationContext;
  }
  return result;
}
