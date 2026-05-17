/*
 * XREFs of RtlCreateMemoryBlockLookaside @ 0x1800800B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitializeSListHead @ 0x1800779F0 (RtlInitializeSListHead.c)
 *     RtlCreateMemoryZone @ 0x180080280 (RtlCreateMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x1800890C0 (RtlDestroyMemoryZone.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     RtlAllocateMemoryZone @ 0x18010F100 (RtlAllocateMemoryZone.c)
 */

__int64 __fastcall RtlCreateMemoryBlockLookaside(
        union _SLIST_HEADER **a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // rdi
  unsigned int v8; // r15d
  unsigned __int64 v9; // rax
  unsigned __int64 i; // r12
  __int64 v11; // r14
  __int64 result; // rax
  ULONGLONG v13; // rbp
  int MemoryZone; // esi
  union _SLIST_HEADER *v15; // rsi
  int v16; // r12d
  ULONGLONG v17; // rax
  union _SLIST_HEADER *v18; // rbp
  char v19; // cl
  char v20; // cl
  __int64 v21[7]; // [rsp+20h] [rbp-38h] BYREF
  ULONGLONG v22; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v5 = a4;
  if ( a2 )
    return 3221225485LL;
  if ( !a3 )
    return 3221225485LL;
  if ( !a4 )
    return 3221225485LL;
  v7 = a5;
  if ( !a5 || a5 < a4 || a5 > 0x8000000000000000uLL )
    return 3221225485LL;
  if ( ((a4 - 1) & a4) != 0 )
  {
    v20 = 0;
    do
    {
      ++v20;
      v5 >>= 1;
    }
    while ( v5 );
    v5 = 1LL << v20;
  }
  if ( ((a5 - 1) & a5) != 0 )
  {
    v19 = 0;
    do
    {
      ++v19;
      v7 >>= 1;
    }
    while ( v7 );
    v7 = 1LL << v19;
  }
  v8 = 1;
  if ( a3 < v7 )
    a3 = v7;
  v9 = v5;
  for ( i = (a3 + 48 * (a3 / v7) + 4095) & 0xFFFFFFFFFFFFF000uLL; v9 < v7; ++v8 )
    v9 *= 2LL;
  v11 = 32LL * v8;
  result = RtlCreateMemoryZone(&v22, (v11 + 4143) & 0xFFFFFFFFFFFFF000uLL, 0LL);
  if ( (int)result >= 0 )
  {
    v13 = v22;
    MemoryZone = RtlAllocateMemoryZone(v22, v11 + 64, v21);
    if ( MemoryZone < 0 )
    {
      RtlDestroyMemoryZone(v13);
      return (unsigned int)MemoryZone;
    }
    else
    {
      v15 = (union _SLIST_HEADER *)((v21[0] + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      v16 = RtlCreateMemoryZone(&v22, i, 0LL);
      if ( v16 < 0 )
      {
        RtlDestroyMemoryZone(v13);
        return (unsigned int)v16;
      }
      else
      {
        memset(v15, 0, v11 + 48);
        v15->Alignment = 0LL;
        v17 = v22;
        v15->Region = v13;
        v18 = v15 + 3;
        v15[1].Alignment = v17;
        v15[1].Region = v5;
        v15[2].Alignment = v7;
        *((_DWORD *)&v15[2].HeaderX64 + 2) = v8;
        while ( 1 )
        {
          RtlInitializeSListHead(v18);
          v18[1].Alignment = v5;
          v18[1].Region = (ULONGLONG)v15;
          if ( v5 == v7 )
            break;
          v5 *= 2LL;
          v18 += 2;
        }
        *a1 = v15;
        return 0LL;
      }
    }
  }
  return result;
}
