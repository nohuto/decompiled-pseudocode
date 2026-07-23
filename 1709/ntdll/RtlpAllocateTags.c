/*
 * XREFs of RtlpAllocateTags @ 0x1800EFC58
 * Callers:
 *     RtlCreateTagHeap @ 0x180003370 (RtlCreateTagHeap.c)
 * Callees:
 *     RtlLogStackBackTraceEx @ 0x180009C98 (RtlLogStackBackTraceEx.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall RtlpAllocateTags(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int16 v6; // bp
  __int16 v7; // r15
  __int64 *v8; // r14
  __int64 v9; // rsi
  _WORD *v10; // rdx
  unsigned int i; // eax
  __int16 v12; // ax
  __int64 v13; // rdx
  __int64 v14; // rax
  ULONG_PTR v15[7]; // [rsp+30h] [rbp-38h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+18h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp+20h] BYREF

  v2 = RtlpGlobalTagHeap;
  v4 = a1;
  if ( !RtlpGlobalTagHeap )
    return 0LL;
  if ( a1 )
  {
    v6 = 0;
  }
  else
  {
    *(_DWORD *)(RtlpGlobalTagHeap + 152) = -285217025;
    v6 = 2048;
    *(_DWORD *)(v2 + 112) = 1;
    v4 = v2;
  }
  v7 = 0;
  if ( (*(_DWORD *)(v4 + 112) & 0x8000000) != 0 )
    v7 = RtlLogStackBackTraceEx(1u);
  v8 = (__int64 *)(v4 + 232);
  if ( !*(_QWORD *)(v4 + 232) )
  {
    RegionSize = 147384LL;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v4 + 232), 0LL, &RegionSize, 0x2000u, 4u) < 0 )
      return 0LL;
    *(_DWORD *)(v4 + 224) = 134152192;
    ++a2;
  }
  v9 = *(unsigned __int16 *)(v4 + 224);
  if ( a2 > *(unsigned __int16 *)(v4 + 226) - (unsigned int)v9 )
    return 0LL;
  v10 = (_WORD *)(*v8 + 72 * v9);
  for ( i = v9 + a2; ; i = a2 + *(unsigned __int16 *)(v4 + 224) )
  {
    BaseAddress = v10;
    if ( (unsigned int)v9 >= i )
      break;
    if ( (((_WORD)v10 + 72) & 0xFFFu) <= 0x48uLL )
    {
      v15[0] = 4096LL;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, v15, 0x1000u, 4u) < 0 )
        return 0LL;
      v10 = BaseAddress;
    }
    v12 = v9;
    LODWORD(v9) = v9 + 1;
    v10[8] = v6 | v12;
    *((_WORD *)BaseAddress + 9) = v7;
    v10 = (char *)BaseAddress + 72;
  }
  v13 = *(unsigned __int16 *)(v4 + 224);
  v14 = *v8;
  *(_WORD *)(v4 + 224) = a2 + v13;
  return v14 + 72 * v13;
}
