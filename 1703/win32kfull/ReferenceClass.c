/*
 * XREFs of ReferenceClass @ 0x1C00F4DC0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 * Callees:
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C0035C2C (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z @ 0x1C003940C (-ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall ReferenceClass(int *Src, __int64 a2)
{
  PVOID *v2; // rbx
  unsigned int v5; // r12d
  PVOID *v7; // rsi
  PVOID *v8; // rax
  __int64 v9; // r15
  __int64 v10; // rdi
  unsigned int v11; // edi
  PVOID v12; // rax
  __int64 v13; // rax
  const void *v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  char *v17; // [rsp+20h] [rbp-10h] BYREF
  __int64 v18; // [rsp+28h] [rbp-8h]

  v2 = *(PVOID **)(a2 + 24);
  v5 = 0;
  if ( *((PVOID **)Src + 2) == v2 )
  {
    ++Src[22];
    return 1LL;
  }
  v7 = (PVOID *)*((_QWORD *)Src + 9);
  if ( v7 )
  {
    do
    {
      if ( v7[2] == v2 )
        break;
      v7 = (PVOID *)*v7;
    }
    while ( v7 );
    if ( v7 )
    {
LABEL_13:
      ++Src[22];
      ++*((_DWORD *)v7 + 22);
      *(_QWORD *)(a2 + 168) = v7;
      return 1LL;
    }
  }
  v8 = (PVOID *)ClassAlloc(v2, Src[26] + 168 + (*((_BYTE *)Src + 34) & 8u));
  v7 = v8;
  if ( v8 )
  {
    memmove(v8, Src, (*((_WORD *)Src + 17) & 8) + Src[26] + 168LL);
    v9 = -1LL;
    v10 = -1LL;
    do
      ++v10;
    while ( *(_BYTE *)(*((_QWORD *)Src + 19) + v10) );
    v11 = v10 + 1;
    v12 = ClassAlloc(v2, v11);
    v7[19] = v12;
    if ( v12 )
    {
      v13 = *((_QWORD *)Src + 18);
      if ( (v13 & 0xFFFFFFFFFFFF0000uLL) == 0 )
        goto LABEL_10;
      do
        ++v9;
      while ( *(_WORD *)(v13 + 2 * v9) );
      v5 = 2 * v9 + 2;
      v16 = Win32AllocPoolWithQuota(v5, 2020897621LL);
      v7[18] = (PVOID)v16;
      if ( v16 )
      {
LABEL_10:
        v7[2] = 0LL;
        LockObjectAssignment(v7 + 2, v2);
        *v7 = (PVOID)*((_QWORD *)Src + 9);
        v7[9] = 0LL;
        v14 = (const void *)*((_QWORD *)Src + 19);
        *((_QWORD *)Src + 9) = v7;
        memmove(v7[19], v14, v11);
        v15 = (unsigned __int64)v7[18];
        if ( (v15 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          memmove((void *)v15, *((const void **)Src + 18), v5);
        v17 = (char *)(v7 + 15);
        v7[16] = 0LL;
        v7[20] = 0LL;
        v7[15] = 0LL;
        v18 = *((_QWORD *)Src + 15);
        HMAssignmentLock(&v17);
        v18 = *((_QWORD *)Src + 20);
        v17 = (char *)(v7 + 20);
        HMAssignmentLock(&v17);
        v18 = *((_QWORD *)Src + 16);
        v17 = (char *)(v7 + 16);
        HMAssignmentLock(&v17);
        v7[7] = 0LL;
        *((_DWORD *)v7 + 22) = 0;
        goto LABEL_13;
      }
      ClassFree(v2, v7[19]);
    }
    ClassFree(v2, v7);
  }
  return 0LL;
}
