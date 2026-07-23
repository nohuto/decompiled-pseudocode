/*
 * XREFs of sub_180039848 @ 0x180039848
 * Callers:
 *     sub_180038790 @ 0x180038790 (sub_180038790.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_180038FC4 @ 0x180038FC4 (sub_180038FC4.c)
 *     sub_1800397BC @ 0x1800397BC (sub_1800397BC.c)
 *     sub_18003CA5C @ 0x18003CA5C (sub_18003CA5C.c)
 *     sub_1800798B8 @ 0x1800798B8 (sub_1800798B8.c)
 *     sub_180088F00 @ 0x180088F00 (sub_180088F00.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

__int64 __fastcall sub_180039848(__int64 a1)
{
  __int64 v1; // r12
  void (__fastcall *v2)(__int64); // rsi
  _BOOL8 v3; // rdi
  ULONG NtGlobalFlag; // ebp
  _DWORD *v5; // rdx
  __int64 v6; // r15
  int v7; // r13d
  int v8; // ebp
  __int64 v9; // rbx
  _WORD *v10; // rbp
  __int64 v11; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdi
  char *Heap; // r14
  char v17; // al
  __int64 v18; // r12
  __int64 v19; // r8
  __int64 v20; // r8
  int v22; // [rsp+78h] [rbp+10h]
  _BOOL8 v23; // [rsp+80h] [rbp+18h]

  v1 = a1;
  v2 = 0LL;
  v3 = qword_18015C3C0 != 0LL;
  v23 = v3;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  RtlEnterCriticalSection(&CriticalSection);
  if ( byte_18015BF54 )
  {
    v5 = (_DWORD *)MEMORY[0x7FFE0330];
    v2 = (void (__fastcall *)(__int64))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                               qword_18016B250,
                                                               64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  }
  v6 = *(_QWORD *)(v1 + 8);
  v7 = 0;
  if ( v6 != v1 )
  {
    v8 = NtGlobalFlag & 0x100;
    v22 = v8;
    do
    {
      v9 = v6 - 160;
      if ( v8 )
      {
        v7 = sub_180088F00(v6 - 160);
        if ( v7 < 0 )
          break;
      }
      sub_180038FC4(v6 - 160, v5, 0);
      if ( v2 && !byte_18015BF56 )
      {
        v2(v6 - 160);
        *(_BYTE *)(v9 + 105) |= 8u;
      }
      if ( !v3 )
      {
        v10 = *(_WORD **)(v9 + 80);
        if ( (unsigned int)sub_1800798B8(v10) )
        {
          if ( qword_18015C3C0 )
          {
            v13 = -1LL;
            do
              ++v13;
            while ( v10[v13] );
            v14 = v13 + qword_18015B2E0 + 1;
          }
          else
          {
            v15 = -1LL;
            do
              ++v15;
            while ( v10[v15] );
            v14 = v15 + 2;
          }
          Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2 * v14);
          if ( Heap )
          {
            if ( qword_18015C3C0 )
            {
              v18 = 2 * qword_18015B2E0;
              memmove(Heap, qword_18015C3C0, 2 * qword_18015B2E0);
              v19 = -1LL;
              do
                ++v19;
              while ( v10[v19] );
              memmove(&Heap[v18 + 2], v10, 2 * v19);
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, qword_18015C3C0);
              v1 = a1;
            }
            else
            {
              v20 = -1LL;
              do
                ++v20;
              while ( v10[v20] );
              memmove(Heap, v10, 2 * v20);
            }
            qword_18015C3C0 = Heap;
            qword_18015B2E0 = v14;
          }
          else
          {
            v17 = dword_180155A10;
            if ( (dword_180155A10 & 3) != 0 )
            {
              sub_1800D5274(
                (unsigned int)"minkernel\\ntdll\\ldrinit.c",
                2729,
                (unsigned int)"LdrpCheckModule",
                0,
                "Failed to allocated memory for shimmed module list\n");
              v17 = dword_180155A10;
            }
            if ( (v17 & 0x10) != 0 )
              __debugbreak();
          }
          v3 = v23;
        }
        v8 = v22;
      }
      sub_1800397BC(v6 - 160, 1u);
      v11 = *(_QWORD *)(v9 + 48);
      *(_DWORD *)(v9 + 104) |= 8u;
      sub_18003CA5C(v11, v9 + 72, 5293LL);
      v6 = *(_QWORD *)(v6 + 8);
    }
    while ( v6 != v1 );
  }
  RtlLeaveCriticalSection(&CriticalSection);
  return (unsigned int)v7;
}
