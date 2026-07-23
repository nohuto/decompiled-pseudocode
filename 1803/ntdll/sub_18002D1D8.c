/*
 * XREFs of sub_18002D1D8 @ 0x18002D1D8
 * Callers:
 *     sub_18002D150 @ 0x18002D150 (sub_18002D150.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18002D32C @ 0x18002D32C (sub_18002D32C.c)
 *     sub_18002D3B8 @ 0x18002D3B8 (sub_18002D3B8.c)
 *     sub_18003BC9C @ 0x18003BC9C (sub_18003BC9C.c)
 *     sub_18003FF10 @ 0x18003FF10 (sub_18003FF10.c)
 *     sub_180082F40 @ 0x180082F40 (sub_180082F40.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 */

__int64 __fastcall sub_18002D1D8(__int64 a1)
{
  __int64 v1; // r13
  void (__fastcall *v2)(__int64); // rdi
  BOOL v3; // esi
  ULONG NtGlobalFlag; // ebp
  __int64 v5; // rdx
  __int64 v6; // r14
  int v7; // r12d
  int v8; // ebp
  __int64 v9; // rbx
  _WORD *v10; // rsi
  __int64 v11; // rcx
  __int64 v13; // rcx
  __int64 v14; // r15
  char *Heap; // rbp
  char v16; // al
  __int64 v17; // r13
  __int64 v18; // r8
  __int64 v19; // r8
  BOOL v21; // [rsp+78h] [rbp+10h]
  int v22; // [rsp+80h] [rbp+18h]

  v1 = a1;
  v2 = 0LL;
  v3 = Src != 0LL;
  v21 = v3;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  RtlEnterCriticalSection(&stru_1801564C0);
  if ( byte_18015CFB4 )
  {
    v5 = MEMORY[0x7FFE0330];
    v2 = (void (__fastcall *)(__int64))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                               qword_18016F260,
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
        v7 = sub_180082F40(v6 - 160);
        if ( v7 < 0 )
          break;
      }
      sub_18002D3B8(v6 - 160, v5, 0LL);
      if ( v2 && !byte_18015CFBC )
      {
        v2(v6 - 160);
        *(_BYTE *)(v9 + 105) |= 8u;
      }
      if ( !v3 )
      {
        v10 = *(_WORD **)(v9 + 80);
        if ( (unsigned int)sub_18003FF10(v10) )
        {
          v13 = -1LL;
          do
            ++v13;
          while ( v10[v13] );
          if ( Src )
            v14 = v13 + qword_18015C310 + 1;
          else
            v14 = v13 + 2;
          Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2 * v14);
          if ( Heap )
          {
            if ( Src )
            {
              v17 = 2 * qword_18015C310;
              memmove(Heap, Src, 2 * qword_18015C310);
              v18 = -1LL;
              do
                ++v18;
              while ( v10[v18] );
              memmove(&Heap[v17 + 2], v10, 2 * v18);
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Src);
              v1 = a1;
            }
            else
            {
              v19 = -1LL;
              do
                ++v19;
              while ( v10[v19] );
              memmove(Heap, v10, 2 * v19);
            }
            Src = Heap;
            qword_18015C310 = v14;
          }
          else
          {
            v16 = dword_180156A70;
            if ( (dword_180156A70 & 3) != 0 )
            {
              sub_1800CA554(
                (unsigned int)"minkernel\\ntdll\\ldrinit.c",
                2704,
                (unsigned int)"LdrpCheckModule",
                0,
                "Failed to allocated memory for shimmed module list\n");
              v16 = dword_180156A70;
            }
            if ( (v16 & 0x10) != 0 )
              __debugbreak();
          }
          v8 = v22;
        }
        v3 = v21;
      }
      sub_18002D32C(v6 - 160, 1LL);
      v11 = *(_QWORD *)(v9 + 48);
      *(_DWORD *)(v9 + 104) |= 8u;
      sub_18003BC9C(v11, v9 + 72, 5293LL);
      v6 = *(_QWORD *)(v6 + 8);
    }
    while ( v6 != v1 );
  }
  RtlLeaveCriticalSection(&stru_1801564C0);
  return (unsigned int)v7;
}
