/*
 * XREFs of MiInitializeDynamicPfnsTarget @ 0x140214890
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInitializeUnusablePfns @ 0x140137634 (MiInitializeUnusablePfns.c)
 */

__int64 __fastcall MiInitializeDynamicPfnsTarget(__int64 a1, __int64 *a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v7; // eax
  unsigned int v8; // ebx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  __int64 v11; // rbx
  signed __int32 v12; // eax
  unsigned int v13; // ebx
  __int64 result; // rax
  int v15; // [rsp+58h] [rbp+10h] BYREF
  int i; // [rsp+68h] [rbp+20h] BYREF

  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v15 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v8 )
      KeYieldProcessorEx(&v15);
  }
  else
  {
    *(_DWORD *)a4 = v8 | *(_DWORD *)(a4 + 4);
  }
  while ( 1 )
  {
    ExAcquireSpinLockExclusive(&dword_14038A180);
    v9 = a2[1];
    if ( !v9 )
      break;
    v10 = a2[1];
    v11 = *a2;
    if ( v9 > a2[2] )
      v10 = a2[2];
    a2[1] = v9 - v10;
    *a2 = v11 + v10;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14038A180);
    __writecr8(2uLL);
    MiInitializeUnusablePfns((_QWORD *)(48 * v11 - 0x58000000000LL), v10, *((_WORD *)a2 + 12), *((_DWORD *)a2 + 7));
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14038A180);
  __writecr8(2uLL);
  v12 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v13 = ~v12 & 0x80000000;
  if ( (v12 & 0x7FFFFFFF) != 0 )
  {
    for ( i = 0; ; KeYieldProcessorEx(&i) )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v13 )
        break;
    }
  }
  else
  {
    result = v13 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = result;
  }
  _InterlockedDecrement(a3);
  return result;
}
