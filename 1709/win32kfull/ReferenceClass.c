/*
 * XREFs of ReferenceClass @ 0x1C0073510
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 * Callees:
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C00742C0 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z @ 0x1C00F22F0 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall ReferenceClass(int *Src, __int64 a2, unsigned int a3)
{
  struct tagDESKTOP *v3; // rbx
  unsigned int v6; // r12d
  struct tagDESKTOP *v8; // rsi
  unsigned int v9; // r8d
  __int64 v10; // r15
  __int64 v11; // rdi
  unsigned int v12; // edi
  void *v13; // rax
  __int64 v14; // rax
  const void *v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  char *v18; // [rsp+20h] [rbp-10h] BYREF
  __int64 v19; // [rsp+28h] [rbp-8h]

  v3 = *(struct tagDESKTOP **)(a2 + 24);
  v6 = 0;
  if ( *((struct tagDESKTOP **)Src + 2) == v3 )
  {
    ++Src[24];
    return 1LL;
  }
  v8 = (struct tagDESKTOP *)*((_QWORD *)Src + 9);
  if ( v8 )
  {
    do
    {
      if ( *((struct tagDESKTOP **)v8 + 2) == v3 )
        break;
      v8 = *(struct tagDESKTOP **)v8;
    }
    while ( v8 );
    if ( v8 )
    {
LABEL_13:
      ++Src[24];
      ++*((_DWORD *)v8 + 24);
      *(_QWORD *)(a2 + 168) = v8;
      return 1LL;
    }
  }
  v8 = (struct tagDESKTOP *)ClassAlloc(v3, Src[28] + (*((_WORD *)Src + 17) & 8 | 0xB0u), a3);
  if ( v8 )
  {
    memmove(v8, Src, Src[28] + (*((_WORD *)Src + 17) & 8 | 0xB0LL));
    v10 = -1LL;
    v11 = -1LL;
    do
      ++v11;
    while ( *(_BYTE *)(*((_QWORD *)Src + 20) + v11) );
    v12 = v11 + 1;
    v13 = ClassAlloc(v3, v12, v9);
    *((_QWORD *)v8 + 20) = v13;
    if ( v13 )
    {
      v14 = *((_QWORD *)Src + 19);
      if ( (v14 & 0xFFFFFFFFFFFF0000uLL) == 0 )
        goto LABEL_10;
      do
        ++v10;
      while ( *(_WORD *)(v14 + 2 * v10) );
      v6 = 2 * v10 + 2;
      v17 = Win32AllocPoolWithQuota(v6, 2020897621LL);
      *((_QWORD *)v8 + 19) = v17;
      if ( v17 )
      {
LABEL_10:
        *((_QWORD *)v8 + 2) = 0LL;
        LockObjectAssignment((char *)v8 + 16, v3);
        *(_QWORD *)v8 = *((_QWORD *)Src + 9);
        *((_QWORD *)v8 + 9) = 0LL;
        v15 = (const void *)*((_QWORD *)Src + 20);
        *((_QWORD *)Src + 9) = v8;
        memmove(*((void **)v8 + 20), v15, v12);
        v16 = *((_QWORD *)v8 + 19);
        if ( (v16 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          memmove((void *)v16, *((const void **)Src + 19), v6);
        v18 = (char *)v8 + 128;
        *((_QWORD *)v8 + 17) = 0LL;
        *((_QWORD *)v8 + 21) = 0LL;
        *((_QWORD *)v8 + 16) = 0LL;
        v19 = *((_QWORD *)Src + 16);
        HMAssignmentLock(&v18);
        v19 = *((_QWORD *)Src + 21);
        v18 = (char *)v8 + 168;
        HMAssignmentLock(&v18);
        v19 = *((_QWORD *)Src + 17);
        v18 = (char *)v8 + 136;
        HMAssignmentLock(&v18);
        *((_QWORD *)v8 + 7) = 0LL;
        *((_DWORD *)v8 + 24) = 0;
        goto LABEL_13;
      }
      ClassFree(v3, *((void **)v8 + 20));
    }
    ClassFree(v3, v8);
  }
  return 0LL;
}
