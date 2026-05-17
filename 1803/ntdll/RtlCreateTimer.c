/*
 * XREFs of RtlCreateTimer @ 0x180057FF0
 * Callers:
 *     RtlSetTimer @ 0x180108B20 (RtlSetTimer.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     TpSetTimerEx @ 0x180024F70 (TpSetTimerEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800588B4 @ 0x1800588B4 (sub_1800588B4.c)
 *     TpAllocTimer @ 0x180058CD0 (TpAllocTimer.c)
 *     sub_180058EC0 @ 0x180058EC0 (sub_180058EC0.c)
 *     sub_180058F2C @ 0x180058F2C (sub_180058F2C.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

__int64 __fastcall RtlCreateTimer(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        unsigned int a7)
{
  int v10; // ebx
  __int64 Heap; // rax
  __int64 v12; // rdi
  __int64 *v13; // r12
  int v14; // eax
  unsigned __int64 v15; // rdx
  unsigned __int64 *v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rdx
  __int64 v19; // r8
  __int64 v21; // rcx
  int v22; // [rsp+24h] [rbp-94h]
  _QWORD *v23; // [rsp+28h] [rbp-90h]
  __int64 v24; // [rsp+30h] [rbp-88h] BYREF
  __int64 v25; // [rsp+38h] [rbp-80h] BYREF
  int v26; // [rsp+40h] [rbp-78h] BYREF
  __int64 v27; // [rsp+48h] [rbp-70h]
  __int64 v28; // [rsp+50h] [rbp-68h]
  __int64 v29; // [rsp+58h] [rbp-60h]
  __int128 v30; // [rsp+60h] [rbp-58h]
  __int64 (__fastcall *v31)(__int64, __int64); // [rsp+70h] [rbp-48h]
  int v32; // [rsp+78h] [rbp-40h]
  int v33; // [rsp+7Ch] [rbp-3Ch]
  int v34; // [rsp+80h] [rbp-38h]

  v24 = 0LL;
  v23 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  *a2 = 0LL;
  v10 = sub_180058F2C(&v24, a7 & 0x100);
  v22 = v10;
  if ( v10 < 0 )
  {
    v12 = 0LL;
  }
  else
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 96LL);
    v12 = Heap;
    v23 = (_QWORD *)Heap;
    if ( Heap )
    {
      v13 = (__int64 *)(Heap + 64);
      *(_QWORD *)(Heap + 64) = 0LL;
      *(_DWORD *)(Heap + 92) = 0;
      v10 = sub_180058EC0(Heap + 16, a7, v24);
      v22 = v10;
      if ( v10 < 0 )
        goto LABEL_16;
      *(_QWORD *)(v12 + 32) = a3;
      *(_QWORD *)(v12 + 40) = a4;
      *(_DWORD *)(v12 + 48) = 0;
      *(_BYTE *)(v12 + 88) = a6 != 0;
      *(_QWORD *)(v12 + 56) = a1;
      *(_QWORD *)(v12 + 72) = 0LL;
      *(_QWORD *)(v12 + 80) = 0LL;
      v26 = 3;
      v27 = 0LL;
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      v31 = 0LL;
      v32 = 0;
      v33 = 1;
      v34 = 72;
      v14 = 0;
      if ( (a7 & 0xE0) != 0 )
      {
        v14 = 2;
        v32 = 2;
      }
      if ( (a7 & 0x10) != 0 )
        v32 = v14 | 1;
      v31 = sub_1800569D0;
      v10 = TpAllocTimer(v13, sub_180075FE0, v12, &v26);
      v22 = v10;
      if ( v10 < 0 )
        goto LABEL_16;
      v25 = -10000LL * a5;
      _InterlockedIncrement((volatile signed __int32 *)a1);
      RtlAcquireSRWLockExclusive(a1 + 8, v15, v16, v17);
      v18 = (_QWORD *)(a1 + 24);
      v19 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(v19 + 8) != a1 + 24 )
        __fastfail(3u);
      *v23 = v19;
      v23[1] = v18;
      *(_QWORD *)(v19 + 8) = v23;
      *v18 = v23;
      *a2 = v23;
      TpSetTimerEx(*v13, (__int64)&v25, a6, 0);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
      v12 = 0LL;
      v23 = 0LL;
      v10 = 0;
    }
    else
    {
      v10 = -1073741801;
    }
    v22 = v10;
  }
LABEL_16:
  if ( v12 )
  {
    v21 = *(_QWORD *)(v12 + 16);
    if ( v21 )
      ZwClose(v21);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v23);
    v10 = v22;
  }
  sub_1800588B4(v24);
  return (unsigned int)v10;
}
