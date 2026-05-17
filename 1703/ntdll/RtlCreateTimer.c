/*
 * XREFs of RtlCreateTimer @ 0x180011110
 * Callers:
 *     RtlSetTimer @ 0x180105C90 (RtlSetTimer.c)
 * Callees:
 *     sub_180012CB0 @ 0x180012CB0 (sub_180012CB0.c)
 *     sub_180012D28 @ 0x180012D28 (sub_180012D28.c)
 *     sub_180012FFC @ 0x180012FFC (sub_180012FFC.c)
 *     TpAllocTimer @ 0x180013F90 (TpAllocTimer.c)
 *     TpSetTimerEx @ 0x180017510 (TpSetTimerEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

__int64 __fastcall RtlCreateTimer(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  int v10; // ebx
  __int64 Heap; // rax
  __int64 v12; // rdi
  _QWORD *v13; // r15
  int v14; // eax
  _QWORD *v15; // rdx
  __int64 v16; // r8
  __int64 v18; // rcx
  int v19; // [rsp+24h] [rbp-94h]
  _QWORD *v20; // [rsp+28h] [rbp-90h]
  __int64 v21; // [rsp+30h] [rbp-88h] BYREF
  __int64 v22; // [rsp+38h] [rbp-80h] BYREF
  int v23; // [rsp+40h] [rbp-78h] BYREF
  __int64 v24; // [rsp+48h] [rbp-70h]
  __int64 v25; // [rsp+50h] [rbp-68h]
  __int64 v26; // [rsp+58h] [rbp-60h]
  __int128 v27; // [rsp+60h] [rbp-58h]
  __int64 (__fastcall *v28)(); // [rsp+70h] [rbp-48h]
  int v29; // [rsp+78h] [rbp-40h]
  int v30; // [rsp+7Ch] [rbp-3Ch]
  int v31; // [rsp+80h] [rbp-38h]

  v21 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  *a2 = 0LL;
  v10 = sub_180012CB0(&v21, a7 & 0x100);
  v19 = v10;
  if ( v10 < 0 )
  {
    v12 = 0LL;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, 96LL);
    v12 = Heap;
    v20 = (_QWORD *)Heap;
    if ( Heap )
    {
      v13 = (_QWORD *)(Heap + 64);
      *(_QWORD *)(Heap + 64) = 0LL;
      *(_DWORD *)(Heap + 92) = 0;
      v10 = sub_180012D28(Heap + 16, a7, v21);
      v19 = v10;
      if ( v10 < 0 )
        goto LABEL_16;
      *(_QWORD *)(v12 + 32) = a3;
      *(_QWORD *)(v12 + 40) = a4;
      *(_DWORD *)(v12 + 48) = 0;
      *(_BYTE *)(v12 + 88) = a6 != 0;
      *(_QWORD *)(v12 + 56) = a1;
      *(_QWORD *)(v12 + 72) = 0LL;
      *(_QWORD *)(v12 + 80) = 0LL;
      v23 = 3;
      v24 = 0LL;
      v25 = 0LL;
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      v29 = 0;
      v30 = 1;
      v31 = 72;
      v14 = 0;
      if ( (a7 & 0xE0) != 0 )
        v14 = 2;
      v29 = v14;
      if ( (a7 & 0x10) != 0 )
        v29 = v14 | 1;
      v28 = sub_1800846E0;
      v10 = TpAllocTimer(v13, sub_180011380, v12, &v23);
      v19 = v10;
      if ( v10 < 0 )
        goto LABEL_16;
      v22 = -10000LL * a5;
      _InterlockedIncrement((volatile signed __int32 *)a1);
      RtlAcquireSRWLockExclusive(a1 + 8);
      v15 = (_QWORD *)(a1 + 24);
      v16 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(v16 + 8) != a1 + 24 )
        __fastfail(3u);
      *v20 = v16;
      v20[1] = v15;
      *(_QWORD *)(v16 + 8) = v20;
      *v15 = v20;
      *a2 = v20;
      TpSetTimerEx(*v13, &v22, a6, 0LL, 1);
      RtlReleaseSRWLockExclusive(a1 + 8);
      v12 = 0LL;
      v10 = 0;
    }
    else
    {
      v10 = -1073741801;
    }
    v19 = v10;
  }
LABEL_16:
  if ( v12 )
  {
    v18 = *(_QWORD *)(v12 + 16);
    if ( v18 )
      ZwClose(v18);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
    v10 = v19;
  }
  sub_180012FFC(v21);
  return (unsigned int)v10;
}
