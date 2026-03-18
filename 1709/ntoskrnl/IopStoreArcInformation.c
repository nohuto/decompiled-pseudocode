/*
 * XREFs of IopStoreArcInformation @ 0x140845950
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x140024538 (IopVerifierExAllocatePool.c)
 *     RtlStringCbCopyA @ 0x1400B9B10 (RtlStringCbCopyA.c)
 *     _strnicmp @ 0x14015E6A0 (_strnicmp.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopStoreArcInformation(__int64 a1)
{
  __int64 **v1; // r15
  int v2; // r12d
  unsigned int v3; // ebx
  __int64 *i; // r14
  __int64 v5; // rsi
  SIZE_T v6; // rsi
  char *v7; // rbp
  PVOID *v8; // rcx
  PVOID **v9; // rax
  PVOID *Pool; // rdi
  PVOID *j; // rax
  PVOID *m; // rcx
  PVOID *v14; // rbx
  __int64 v15; // rax
  int v16; // edx
  PVOID *k; // rcx

  v1 = *(__int64 ***)(a1 + 232);
  v2 = dword_14035E690;
  v3 = 0;
  qword_1407F3D08 = (__int64)&IoArcTableListHead;
  IoArcTableListHead = &IoArcTableListHead;
  for ( i = *v1; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v1 )
    {
      for ( j = (PVOID *)IoArcTableListHead; j != &IoArcTableListHead; j = (PVOID *)*j )
      {
        if ( !*((_BYTE *)j + 36) && !*((_BYTE *)j + 72) )
        {
          v16 = *((_DWORD *)j + 8);
          for ( k = (PVOID *)*j; k != &IoArcTableListHead; k = (PVOID *)*k )
          {
            if ( !*((_BYTE *)k + 36) && !*((_BYTE *)k + 72) && v16 == *((_DWORD *)k + 8) )
            {
              *((_BYTE *)j + 72) = 1;
              *((_BYTE *)k + 72) = 1;
            }
          }
        }
      }
      if ( v2 == 1 )
      {
        for ( m = (PVOID *)IoArcTableListHead; m != &IoArcTableListHead; m = (PVOID *)*m )
        {
          if ( *((_BYTE *)m + 76) && *((_BYTE *)m + 72) )
            IopAmbiguousSystemDisk = 1;
        }
      }
      return v3;
    }
    Pool = (PVOID *)IopVerifierExAllocatePool(NonPagedPoolNx, 0x50uLL);
    if ( !Pool )
      goto LABEL_28;
    v5 = -1LL;
    do
      ++v5;
    while ( *(_BYTE *)(i[3] + v5) );
    v6 = v5 + 1;
    v7 = (char *)IopVerifierExAllocatePool(NonPagedPoolNx, v6);
    v8 = Pool;
    if ( !v7 )
      break;
    memset(Pool, 0, 0x50uLL);
    *(_OWORD *)Pool = *(_OWORD *)i;
    *((_OWORD *)Pool + 1) = *((_OWORD *)i + 1);
    *((_OWORD *)Pool + 2) = *((_OWORD *)i + 2);
    *((_OWORD *)Pool + 3) = *((_OWORD *)i + 3);
    RtlStringCbCopyA(v7, v6, (NTSTRSAFE_PCSTR)i[3]);
    Pool[3] = v7;
    if ( v2 == 1 && v6 >= 9 && !strnicmp(&v7[v6 - 9], "rdisk(0)", 8uLL) )
      *((_BYTE *)Pool + 76) = 1;
    v9 = (PVOID **)qword_1407F3D08;
    if ( *(PVOID **)qword_1407F3D08 != &IoArcTableListHead )
      __fastfail(3u);
    *Pool = &IoArcTableListHead;
    Pool[1] = v9;
    *v9 = Pool;
    qword_1407F3D08 = (__int64)Pool;
  }
  while ( 1 )
  {
    ExFreePoolWithTag(v8, 0);
LABEL_28:
    v14 = (PVOID *)IoArcTableListHead;
    if ( IoArcTableListHead == &IoArcTableListHead )
      break;
    if ( *((PVOID **)IoArcTableListHead + 1) != &IoArcTableListHead
      || (v15 = *(_QWORD *)IoArcTableListHead, *(PVOID *)(*(_QWORD *)IoArcTableListHead + 8LL) != IoArcTableListHead) )
    {
      __fastfail(3u);
    }
    IoArcTableListHead = *(PVOID *)IoArcTableListHead;
    *(_QWORD *)(v15 + 8) = &IoArcTableListHead;
    ExFreePoolWithTag(v14[3], 0);
    v8 = v14;
  }
  return (unsigned int)-1073741670;
}
