/*
 * XREFs of PopGetNextTable @ 0x140241D08
 * Callers:
 *     PopCompressHiberBlocks @ 0x140432774 (PopCompressHiberBlocks.c)
 *     PopWriteHiberImage @ 0x140435DD4 (PopWriteHiberImage.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400BBFC0 (MmGetPhysicalAddress.c)
 *     RtlFindNextForwardRunClearCapped @ 0x1400C1A50 (RtlFindNextForwardRunClearCapped.c)
 *     MmMapMemoryDumpMdlEx @ 0x14021B38C (MmMapMemoryDumpMdlEx.c)
 */

__int64 PopGetNextTable(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  unsigned __int64 *v4; // r12
  bool v5; // zf
  __int64 v6; // r14
  __int64 v7; // rbp
  _BYTE *v8; // r13
  unsigned __int16 v10; // si
  unsigned int v11; // edi
  __int64 v12; // r15
  unsigned __int16 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // esi
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // rcx
  unsigned int v20; // ebp
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  int NextForwardRunClearCapped; // eax
  int v23; // r9d
  __int64 v24; // rcx
  unsigned __int64 v25; // r10
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  char v32; // [rsp+20h] [rbp-58h]
  _BYTE *v33; // [rsp+88h] [rbp+10h]
  __int64 v36; // [rsp+A0h] [rbp+28h] BYREF
  va_list va; // [rsp+A0h] [rbp+28h]
  unsigned __int64 v38; // [rsp+A8h] [rbp+30h]
  va_list va1; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v36 = va_arg(va1, _QWORD);
  v38 = va_arg(va1, _QWORD);
  v33 = (_BYTE *)a2;
  v4 = (unsigned __int64 *)(a4 + 48);
  v5 = (_BYTE)v36 == 0;
  v6 = a4;
  *(_DWORD *)a2 = 0;
  v7 = a3;
  v32 = v5;
  v8 = (_BYTE *)a2;
  v10 = 0;
  v11 = 0;
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), 1, 0) )
  {
    do
      _mm_pause();
    while ( *(_DWORD *)(a1 + 8) );
  }
  v12 = a1 + 64;
  if ( *(_QWORD *)(a1 + 104) != a1 + 64 && *(_DWORD *)(a1 + 292) )
  {
    v13 = 0;
    do
    {
      v14 = *(_QWORD *)(a1 + 104);
      if ( v14 == v12 )
        break;
      a2 = *(_QWORD *)(a1 + 112);
      v15 = a2 + *(_QWORD *)(v14 + 24);
      v16 = *(_DWORD *)(v14 + 32) - v15;
      v17 = *(_DWORD *)(a1 + 292) - v11;
      v18 = *(_QWORD *)(v14 + 40) + (a2 << 12);
      if ( v16 <= (unsigned int)v17 )
      {
        *(_QWORD *)(a1 + 104) = *(_QWORD *)v14;
        *(_QWORD *)(a1 + 112) = 0LL;
      }
      else
      {
        v16 = *(_DWORD *)(a1 + 292) - v11;
        *(_QWORD *)(a1 + 112) = a2 + v17;
      }
      v19 = v13++;
      *(_QWORD *)(v7 + 8 * v19) = (16 * v15) ^ ((_BYTE)v16 - 1) & 0xF;
      v20 = 0;
      if ( v16 )
      {
        v11 += v16;
        do
        {
          PhysicalAddress = MmGetPhysicalAddress((PVOID)(v18 + ((unsigned __int64)v20++ << 12)));
          *v4++ = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
          --v16;
        }
        while ( v16 );
        v12 = a1 + 64;
      }
      v7 = a3;
    }
    while ( v11 < *(_DWORD *)(a1 + 292) );
    v8 = v33;
    v10 = v13;
    v6 = a4;
  }
  if ( v11 < *(_DWORD *)(a1 + 292) )
  {
    while ( 1 )
    {
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(
                                    *(_QWORD *)(a1 + 96),
                                    *(_DWORD *)(a1 + 112),
                                    *(_DWORD *)(a1 + 292) - v11,
                                    (unsigned int *)va);
      v23 = NextForwardRunClearCapped;
      if ( !NextForwardRunClearCapped )
        break;
      v24 = ((_BYTE)NextForwardRunClearCapped - 1) & 0xF;
      v11 += NextForwardRunClearCapped;
      v25 = (unsigned int)v36;
      v26 = (unsigned int)(v36 + NextForwardRunClearCapped);
      v27 = (unsigned int)v36;
      *(_QWORD *)(a1 + 112) = v26;
      a2 = v10++;
      *(_QWORD *)(v7 + 8 * a2) = (16 * v27) ^ v24;
      do
      {
        *v4++ = v25++;
        --v23;
      }
      while ( v23 );
      if ( v11 >= *(_DWORD *)(a1 + 292) )
        goto LABEL_24;
    }
    *(_QWORD *)(a1 + 112) = **(unsigned int **)(a1 + 96);
  }
LABEL_24:
  *(_DWORD *)(a1 + 8) = 0;
  if ( v11 )
  {
    *v8 = v10;
    v28 = (unsigned __int64)v11 << 12;
    *(_DWORD *)(v6 + 40) = v28;
    *(_QWORD *)v6 = 0LL;
    *(_WORD *)(v6 + 10) = 0;
    v29 = v28 + 4095;
    *(_QWORD *)(v6 + 32) = 0LL;
    v30 = v38;
    *(_DWORD *)(v6 + 44) = 0;
    *(_WORD *)(v6 + 8) = 8 * ((v29 >> 12) + 6);
    MmMapMemoryDumpMdlEx(v30, a2, v6, v32);
  }
  return v11;
}
