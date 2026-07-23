/*
 * XREFs of sub_18001A2D0 @ 0x18001A2D0
 * Callers:
 *     sub_18001A58C @ 0x18001A58C (sub_18001A58C.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_18006F2AC @ 0x18006F2AC (sub_18006F2AC.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 *     sub_1800D6F80 @ 0x1800D6F80 (sub_1800D6F80.c)
 */

__int64 __fastcall sub_18001A2D0(_QWORD *a1)
{
  int v1; // esi
  int v3; // ebx
  __int64 result; // rax
  __int64 v5; // r8
  char v6; // al
  _WORD *i; // rdi
  __int64 v8; // rax
  unsigned int v9; // ebp
  __int64 v10; // rdi
  unsigned __int8 (__fastcall *v11)(_WORD *, _QWORD, __int64); // [rsp+68h] [rbp+10h] BYREF

  v1 = dword_180158670;
  v3 = 0;
  if ( dword_180158670 && qword_18015C3C0 )
  {
    dword_180158670 = 0;
    v3 = sub_1800D6F80(&v11);
    if ( v3 >= 0 )
    {
      for ( i = qword_18015C3C0; *i; i += v8 + 1 )
      {
        LOBYTE(v5) = 1;
        if ( !v11(i, 0LL, v5) )
        {
          v3 = -1073741502;
          goto LABEL_3;
        }
        v8 = -1LL;
        do
          ++v8;
        while ( i[v8] );
      }
      v9 = MEMORY[0x7FFE0330];
      v10 = __ROR8__(qword_18016B250, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
      RtlEnterCriticalSection(&CriticalSection);
      if ( dword_18015C018 < 3 && (*(_DWORD *)(*a1 - 56LL) & 0x800) == 0 )
        sub_18006F2AC(a1, v10 ^ v9);
      RtlLeaveCriticalSection(&CriticalSection);
    }
    else
    {
      v6 = dword_180155A10;
      if ( (dword_180155A10 & 3) != 0 )
      {
        sub_1800D5274(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          2903,
          (unsigned int)"LdrpDynamicShimModule",
          0,
          "Getting ApphelpCheckModule failed with status 0x%08lx\n",
          v3);
        v6 = dword_180155A10;
      }
      if ( (v6 & 0x10) != 0 )
        __debugbreak();
      v3 = 0;
    }
  }
LABEL_3:
  if ( qword_18015C3C0 && v1 == 1 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, qword_18015C3C0);
    qword_18015C3C0 = 0LL;
    qword_18015B2E0 = 0LL;
  }
  result = (unsigned int)v3;
  dword_180158670 = v1;
  return result;
}
