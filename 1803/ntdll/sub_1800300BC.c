/*
 * XREFs of sub_1800300BC @ 0x1800300BC
 * Callers:
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 *     sub_1800E0A40 @ 0x1800E0A40 (sub_1800E0A40.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_1800302AC @ 0x1800302AC (sub_1800302AC.c)
 */

__int64 __fastcall sub_1800300BC(
        __int64 a1,
        int a2,
        int a3,
        char a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        __int64 a13,
        int a14,
        unsigned __int64 *a15,
        _BYTE *a16,
        _DWORD *a17)
{
  int v20; // ebp
  void *ProcessHeap; // rsi
  unsigned __int64 *v22; // rbx
  unsigned int v23; // ecx
  int v24; // r14d
  __int64 Heap; // rax
  int v26; // r9d
  unsigned int v27; // edi
  int v29; // [rsp+D0h] [rbp+18h] BYREF

  v20 = a1;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( a3 || a1 )
  {
    v22 = a15;
    v23 = 200;
    v29 = 200;
    v24 = 0;
    while ( 1 )
    {
      Heap = RtlAllocateHeap((__int64)ProcessHeap, dword_18015C294 + 1310720, v23);
      *v22 = Heap;
      if ( !Heap )
        break;
      LOBYTE(v26) = a4;
      v27 = sub_1800302AC(
              v20,
              a2,
              a3,
              v26,
              a5,
              a6,
              a7,
              a8,
              a9,
              a10,
              a11,
              a12,
              a13,
              a14,
              (__int64)&v29,
              Heap,
              (__int64)a16,
              (__int64)a17);
      if ( (v27 & 0x80000000) == 0 )
      {
        if ( !v29 )
        {
          RtlFreeHeap((__int64)ProcessHeap, 0, *v22);
          *v22 = 0LL;
        }
        return v27;
      }
      RtlFreeHeap((__int64)ProcessHeap, 0, *v22);
      *v22 = 0LL;
      if ( v27 != -1073741789 )
        return v27;
      if ( (unsigned int)++v24 >= 2 )
        return v27;
      v23 = v29;
    }
    return 3221225495LL;
  }
  else
  {
    *a16 = 0;
    *a17 = a5 != 0 ? 0x400 : 0;
    *a15 = 0LL;
    return 2147483659LL;
  }
}
