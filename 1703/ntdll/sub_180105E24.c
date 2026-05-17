/*
 * XREFs of sub_180105E24 @ 0x180105E24
 * Callers:
 *     sub_180106250 @ 0x180106250 (sub_180106250.c)
 * Callees:
 *     sub_1800102BC @ 0x1800102BC (sub_1800102BC.c)
 *     sub_180017A78 @ 0x180017A78 (sub_180017A78.c)
 *     sub_180018508 @ 0x180018508 (sub_180018508.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180086D90 @ 0x180086D90 (sub_180086D90.c)
 */

__int64 __fastcall sub_180105E24(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  unsigned __int64 Heap; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  _BYTE *v11; // rsi
  _DWORD *v12; // r14
  volatile signed __int32 *v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-28h]
  volatile signed __int32 *v16; // [rsp+68h] [rbp+20h] BYREF

  v16 = 0LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 184LL);
  if ( !Heap )
  {
    v10 = -1073741801;
LABEL_9:
    v15 = v10;
    goto LABEL_10;
  }
  v10 = sub_180018508((volatile signed __int32 **)&qword_18015C378, (struct _PEB_LDR_DATA *)&qword_18015C380, &v16, v9);
  v15 = v10;
  if ( v10 >= 0 )
  {
    *(_QWORD *)Heap = a2;
    *(_QWORD *)(Heap + 64) = sub_1800957D0;
    v11 = (_BYTE *)(Heap + 76);
    v12 = (_DWORD *)(Heap + 72);
    if ( v16 )
    {
      sub_180017A78((__int64)v16, (_DWORD *)(Heap + 72), (BYTE *)(Heap + 76));
    }
    else
    {
      *v12 = 0;
      *v11 = 0;
    }
    *(_QWORD *)(Heap + 40) = 0LL;
    *(_QWORD *)(Heap + 56) = Heap + 48;
    *(_QWORD *)(Heap + 48) = Heap + 48;
    *(_QWORD *)(Heap + 8) = off_1801101B0;
    *(_DWORD *)(Heap + 16) = *v12;
    *(_BYTE *)(Heap + 20) = *v11;
    v13 = v16;
    *(_QWORD *)(Heap + 80) = v16;
    v10 = sub_1800102BC(a3, Heap + 8, (__int64)v13);
    v15 = v10;
    if ( v10 >= 0 )
    {
      ++*(_DWORD *)(Heap + 88);
      *(_QWORD *)(Heap + 96) = Heap + 96;
      *(_QWORD *)(Heap + 104) = 0LL;
      *(_QWORD *)(Heap + 112) = 0LL;
      *a1 = Heap;
      v10 = 0;
      goto LABEL_9;
    }
  }
LABEL_10:
  if ( v10 < 0 )
  {
    if ( v16 )
      sub_180086D90((__int64)v16, v6, v8, v9);
    if ( Heap )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
      return v15;
    }
  }
  return (unsigned int)v10;
}
