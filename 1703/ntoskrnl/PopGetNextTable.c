/*
 * XREFs of PopGetNextTable @ 0x140137B10
 * Callers:
 *     PopWriteHiberImage @ 0x140406638 (PopWriteHiberImage.c)
 *     PopCompressHiberBlocks @ 0x140406950 (PopCompressHiberBlocks.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400A7A80 (MmGetPhysicalAddress.c)
 *     RtlFindNextForwardRunClearCapped @ 0x1400AC7C0 (RtlFindNextForwardRunClearCapped.c)
 *     MmMapMemoryDumpMdlEx @ 0x140137880 (MmMapMemoryDumpMdlEx.c)
 */

__int64 PopGetNextTable(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  unsigned __int64 *v4; // r15
  bool v5; // zf
  __int64 v6; // rsi
  __int64 v7; // r14
  _BYTE *v8; // r13
  unsigned __int16 v10; // bp
  unsigned int v11; // edi
  __int64 v12; // r12
  unsigned __int64 v13; // r10
  int v14; // r9d
  int NextForwardRunClearCapped; // eax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int16 v23; // si
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int v26; // ebp
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // rcx
  unsigned int v30; // r14d
  PHYSICAL_ADDRESS PhysicalAddress; // rax
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
    v23 = 0;
    do
    {
      v24 = *(_QWORD *)(a1 + 104);
      if ( v24 == v12 )
        break;
      a2 = *(_QWORD *)(a1 + 112);
      v25 = a2 + *(_QWORD *)(v24 + 24);
      v26 = *(_DWORD *)(v24 + 32) - v25;
      v27 = *(_DWORD *)(a1 + 292) - v11;
      v28 = *(_QWORD *)(v24 + 40) + (a2 << 12);
      if ( v26 > (unsigned int)v27 )
      {
        v26 = *(_DWORD *)(a1 + 292) - v11;
        *(_QWORD *)(a1 + 112) = a2 + v27;
      }
      else
      {
        *(_QWORD *)(a1 + 104) = *(_QWORD *)v24;
        *(_QWORD *)(a1 + 112) = 0LL;
      }
      v29 = v23++;
      *(_QWORD *)(v7 + 8 * v29) = (16 * v25) ^ ((_BYTE)v26 - 1) & 0xF;
      v30 = 0;
      if ( v26 )
      {
        v11 += v26;
        do
        {
          PhysicalAddress = MmGetPhysicalAddress((PVOID)(v28 + ((unsigned __int64)v30++ << 12)));
          *v4++ = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
          --v26;
        }
        while ( v26 );
        v12 = a1 + 64;
      }
      v7 = a3;
    }
    while ( v11 < *(_DWORD *)(a1 + 292) );
    v8 = v33;
    v10 = v23;
    v6 = a4;
  }
  while ( v11 < *(_DWORD *)(a1 + 292) )
  {
    NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(
                                  *(_QWORD *)(a1 + 96),
                                  *(_DWORD *)(a1 + 112),
                                  *(_DWORD *)(a1 + 292) - v11,
                                  (unsigned int *)va);
    v14 = NextForwardRunClearCapped;
    if ( !NextForwardRunClearCapped )
    {
      *(_QWORD *)(a1 + 112) = **(unsigned int **)(a1 + 96);
      break;
    }
    v16 = ((_BYTE)NextForwardRunClearCapped - 1) & 0xF;
    v11 += NextForwardRunClearCapped;
    v13 = (unsigned int)v36;
    v17 = (unsigned int)(v36 + NextForwardRunClearCapped);
    v18 = (unsigned int)v36;
    *(_QWORD *)(a1 + 112) = v17;
    a2 = v10++;
    *(_QWORD *)(v7 + 8 * a2) = (16 * v18) ^ v16;
    do
    {
      *v4++ = v13++;
      --v14;
    }
    while ( v14 );
  }
  *(_DWORD *)(a1 + 8) = 0;
  if ( v11 )
  {
    *v8 = v10;
    v19 = (unsigned __int64)v11 << 12;
    *(_DWORD *)(v6 + 40) = v19;
    *(_QWORD *)v6 = 0LL;
    *(_WORD *)(v6 + 10) = 0;
    v20 = v19 + 4095;
    *(_QWORD *)(v6 + 32) = 0LL;
    v21 = v38;
    *(_DWORD *)(v6 + 44) = 0;
    *(_WORD *)(v6 + 8) = 8 * ((v20 >> 12) + 6);
    MmMapMemoryDumpMdlEx(v21, a2, v6, v32);
    *(_WORD *)(v6 + 10) |= 1u;
  }
  return v11;
}
