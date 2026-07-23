/*
 * XREFs of sub_18007AE58 @ 0x18007AE58
 * Callers:
 *     sub_18002DF14 @ 0x18002DF14 (sub_18002DF14.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_180055BBC @ 0x180055BBC (sub_180055BBC.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 *     sub_1800CCA84 @ 0x1800CCA84 (sub_1800CCA84.c)
 */

__int64 __fastcall sub_18007AE58(__int64 *a1)
{
  int v1; // esi
  int v3; // ebx
  __int64 result; // rax
  char v5; // al
  _WORD *i; // rdi
  __int64 v7; // rax
  unsigned int v8; // ebp
  __int64 v9; // rdi
  unsigned int (__fastcall *v10)(_WORD *, _QWORD, __int64); // [rsp+68h] [rbp+10h] BYREF

  v1 = dword_1801596D0;
  v3 = 0;
  if ( dword_1801596D0 && Src )
  {
    dword_1801596D0 = 0;
    v3 = sub_1800CCA84(&v10);
    if ( v3 >= 0 )
    {
      for ( i = Src; *i; i += v7 + 1 )
      {
        if ( !v10(i, 0LL, 1LL) )
        {
          v3 = -1073741502;
          goto LABEL_3;
        }
        v7 = -1LL;
        do
          ++v7;
        while ( i[v7] );
      }
      v8 = MEMORY[0x7FFE0330];
      v9 = __ROR8__(qword_18016F260, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
      RtlEnterCriticalSection(&stru_1801564C0);
      if ( dword_18015CFB8 < 3 && (*(_DWORD *)(*a1 - 56) & 0x800) == 0 )
        sub_180055BBC(a1, (__int64 (__fastcall *)(__int64 *))(v9 ^ v8));
      RtlLeaveCriticalSection(&stru_1801564C0);
    }
    else
    {
      v5 = dword_180156A70;
      if ( (dword_180156A70 & 3) != 0 )
      {
        sub_1800CA554(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          2878,
          (unsigned int)"LdrpDynamicShimModule",
          0,
          "Getting ApphelpCheckModule failed with status 0x%08lx\n",
          v3);
        v5 = dword_180156A70;
      }
      if ( (v5 & 0x10) != 0 )
        __debugbreak();
      v3 = 0;
    }
  }
LABEL_3:
  if ( Src && v1 == 1 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Src);
    Src = 0LL;
    qword_18015C310 = 0LL;
  }
  result = (unsigned int)v3;
  dword_1801596D0 = v1;
  return result;
}
