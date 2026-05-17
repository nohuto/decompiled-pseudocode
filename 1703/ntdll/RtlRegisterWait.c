/*
 * XREFs of RtlRegisterWait @ 0x180012DA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012CB0 @ 0x180012CB0 (sub_180012CB0.c)
 *     sub_180012D28 @ 0x180012D28 (sub_180012D28.c)
 *     sub_180012FFC @ 0x180012FFC (sub_180012FFC.c)
 *     TpAllocWait @ 0x180013DF0 (TpAllocWait.c)
 *     TpSetWaitEx @ 0x180017300 (TpSetWaitEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

__int64 __fastcall RtlRegisterWait(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  int v8; // edi
  __int64 Heap; // rax
  __int64 v10; // rbx
  _QWORD *v11; // r12
  int v12; // eax
  char v14; // [rsp+20h] [rbp-98h]
  int v15; // [rsp+24h] [rbp-94h]
  __int64 v16; // [rsp+30h] [rbp-88h] BYREF
  int v17; // [rsp+40h] [rbp-78h] BYREF
  __int64 v18; // [rsp+48h] [rbp-70h]
  __int64 v19; // [rsp+50h] [rbp-68h]
  __int64 v20; // [rsp+58h] [rbp-60h]
  __int128 v21; // [rsp+60h] [rbp-58h]
  __int64 (__fastcall *v22)(__int64, __int64); // [rsp+70h] [rbp-48h]
  int v23; // [rsp+78h] [rbp-40h]
  int v24; // [rsp+7Ch] [rbp-3Ch]
  int v25; // [rsp+80h] [rbp-38h]

  v14 = 0;
  v16 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFCuLL || !a3 )
    return 3221225485LL;
  *a1 = 0LL;
  v8 = sub_180012CB0(&v16, a6 & 0x100, a3);
  v15 = v8;
  if ( v8 < 0 )
  {
    v10 = 0LL;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, 96LL);
    v10 = Heap;
    if ( Heap )
    {
      v11 = (_QWORD *)(Heap + 48);
      *(_QWORD *)(Heap + 48) = 0LL;
      v8 = sub_180012D28(Heap, a6, v16);
      v15 = v8;
      if ( v8 >= 0 )
      {
        v14 = 1;
        *(_QWORD *)(v10 + 16) = 0LL;
        *(_DWORD *)(v10 + 24) = 0;
        *(_QWORD *)(v10 + 32) = a3;
        *(_QWORD *)(v10 + 40) = a4;
        *(_QWORD *)(v10 + 56) = a2;
        if ( a5 == -1 )
        {
          *(_QWORD *)(v10 + 64) = 0LL;
          *(_QWORD *)(v10 + 72) = 0LL;
        }
        else
        {
          *(_QWORD *)(v10 + 64) = a5;
          *(_QWORD *)(v10 + 64) = -10000LL * a5;
          *(_QWORD *)(v10 + 72) = v10 + 64;
        }
        *(_QWORD *)(v10 + 80) = 0LL;
        *(_DWORD *)(v10 + 88) = 0;
        v17 = 3;
        v18 = 0LL;
        v19 = 0LL;
        v20 = 0LL;
        v21 = 0LL;
        v22 = 0LL;
        v23 = 0;
        v24 = 1;
        v25 = 72;
        v12 = 0;
        if ( (a6 & 0xC4) != 0 )
          v12 = 2;
        v23 = v12;
        if ( (a6 & 0x10) != 0 )
          v23 = v12 | 1;
        v22 = sub_180010200;
        v8 = TpAllocWait(v11, sub_1800132E0, v10, &v17);
        v15 = v8;
        if ( v8 >= 0 )
        {
          RtlAcquireSRWLockExclusive(v10 + 16);
          *a1 = v10;
          TpSetWaitEx(*v11, a2, *(_QWORD *)(v10 + 72), 0LL);
          RtlReleaseSRWLockExclusive(v10 + 16);
          v10 = 0LL;
          v8 = 0;
          v15 = 0;
        }
      }
    }
    else
    {
      v8 = -1073741801;
      v15 = -1073741801;
    }
  }
  if ( v10 )
  {
    if ( v14 )
    {
      if ( *(_QWORD *)v10 )
        ZwClose(*(_QWORD *)v10);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
    v8 = v15;
  }
  sub_180012FFC(v16);
  return (unsigned int)v8;
}
