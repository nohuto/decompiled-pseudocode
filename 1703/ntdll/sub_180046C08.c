/*
 * XREFs of sub_180046C08 @ 0x180046C08
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180040520 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180044C70 @ 0x180044C70 (sub_180044C70.c)
 *     sub_18004576C @ 0x18004576C (sub_18004576C.c)
 *     sub_180046D4C @ 0x180046D4C (sub_180046D4C.c)
 *     sub_18004A35C @ 0x18004A35C (sub_18004A35C.c)
 */

__int64 __fastcall sub_180046C08(__int64 a1)
{
  bool v2; // cc
  WCHAR *Heap; // r15
  int v4; // edi
  char v5; // r14
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // rax
  int v9; // eax
  _UNICODE_STRING v11; // [rsp+20h] [rbp-38h] BYREF
  __int16 v12; // [rsp+60h] [rbp+8h] BYREF

  v12 = 0;
  if ( !a1 )
    return 3221225473LL;
  v2 = *(_WORD *)(a1 + 4) <= 0x40u;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( !v2 )
    return 3221225473LL;
  Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
  if ( !Heap )
    return 3221225495LL;
  v4 = *(unsigned __int16 *)(a1 + 4) - 1;
  if ( v4 >= 0 )
  {
    v5 = *(_WORD *)(a1 + 4) - 1;
    v6 = 6LL * v4;
    v7 = v6;
    do
    {
      v8 = *(_QWORD *)(a1 + 24);
      if ( !*(_WORD *)(v6 + v8) )
        goto LABEL_13;
      v11.Buffer = Heap;
      *(_DWORD *)&v11.Length = 11141120;
      if ( (int)sub_18004576C((__int64)qword_18015BF90, (_WORD *)(v7 + v8), &v11) < 0 )
        goto LABEL_13;
      if ( *((_DWORD *)qword_18015BF90 + 30) < 0x3E8u )
      {
        v9 = sub_180044C70((__int64)qword_18015BF90, v11.Buffer, 1, &v12);
      }
      else
      {
        if ( (int)sub_180046D4C(qword_18015BF90, v11.Buffer) >= 0 )
          goto LABEL_12;
        v9 = sub_18004A35C(qword_18015BF90, v11.Buffer);
      }
      if ( v9 >= 0 )
LABEL_12:
        *(_QWORD *)(a1 + 32) |= 1LL << v5;
LABEL_13:
      --v5;
      v7 -= 6LL;
      v6 -= 6LL;
      --v4;
    }
    while ( v4 >= 0 );
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return 0LL;
}
