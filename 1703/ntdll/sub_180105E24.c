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

__int64 __fastcall sub_180105E24(_QWORD *a1, __int64 a2, void *a3)
{
  char *Heap; // rdi
  NTSTATUS v7; // ebx
  char *v8; // rsi
  _DWORD *v9; // r14
  volatile signed __int32 *v10; // rcx
  unsigned __int32 v12; // [rsp+20h] [rbp-28h]
  volatile signed __int32 *v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xB8uLL);
  if ( !Heap )
  {
    v7 = -1073741801;
LABEL_9:
    v12 = v7;
    goto LABEL_10;
  }
  v7 = sub_180018508((volatile signed __int32 **)&qword_18015C378, (PPEB_LDR_DATA)&stru_18015C380, &v13);
  v12 = v7;
  if ( v7 >= 0 )
  {
    *(_QWORD *)Heap = a2;
    *((_QWORD *)Heap + 8) = sub_1800957D0;
    v8 = Heap + 76;
    v9 = Heap + 72;
    if ( v13 )
    {
      sub_180017A78((__int64)v13, (_DWORD *)Heap + 18, (BYTE *)Heap + 76);
    }
    else
    {
      *v9 = 0;
      *v8 = 0;
    }
    *((_QWORD *)Heap + 5) = 0LL;
    *((_QWORD *)Heap + 7) = Heap + 48;
    *((_QWORD *)Heap + 6) = Heap + 48;
    *((_QWORD *)Heap + 1) = off_1801101B0;
    *((_DWORD *)Heap + 4) = *v9;
    Heap[20] = *v8;
    v10 = v13;
    *((_QWORD *)Heap + 10) = v13;
    v7 = sub_1800102BC(a3, (__int64)(Heap + 8), (__int64)v10);
    v12 = v7;
    if ( v7 >= 0 )
    {
      ++*((_DWORD *)Heap + 22);
      *((_QWORD *)Heap + 12) = Heap + 96;
      *((_QWORD *)Heap + 13) = 0LL;
      *((_QWORD *)Heap + 14) = 0LL;
      *a1 = Heap;
      v7 = 0;
      goto LABEL_9;
    }
  }
LABEL_10:
  if ( v7 < 0 )
  {
    if ( v13 )
      sub_180086D90((PVOID)v13);
    if ( Heap )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return v12;
    }
  }
  return (unsigned int)v7;
}
