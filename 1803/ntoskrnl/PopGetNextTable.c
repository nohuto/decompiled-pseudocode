/*
 * XREFs of PopGetNextTable @ 0x14014EE24
 * Callers:
 *     PopWriteHiberImage @ 0x140474280 (PopWriteHiberImage.c)
 *     PopCompressHiberBlocks @ 0x140474904 (PopCompressHiberBlocks.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14003C3D0 (MmGetPhysicalAddress.c)
 *     RtlFindNextForwardRunClearCapped @ 0x1400D7870 (RtlFindNextForwardRunClearCapped.c)
 *     MmMapMemoryDumpMdlEx @ 0x14014F088 (MmMapMemoryDumpMdlEx.c)
 */

__int64 PopGetNextTable(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  unsigned __int64 *v4; // r15
  bool v5; // zf
  __int64 v6; // r14
  __int64 v7; // rbp
  _BYTE *v8; // r13
  unsigned __int16 v10; // si
  unsigned int v11; // edi
  __int64 v12; // r12
  unsigned int v13; // eax
  int NextForwardRunClearCapped; // eax
  int v15; // r9d
  __int64 v16; // rcx
  unsigned __int64 v17; // r10
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rbx
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v25; // ecx
  unsigned __int16 v26; // r14
  __int64 v27; // r8
  unsigned int v28; // ecx
  __int64 v29; // r9
  unsigned int v30; // esi
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // ebp
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  BOOL v36; // [rsp+20h] [rbp-58h]
  _BYTE *v37; // [rsp+88h] [rbp+10h]
  __int64 v40; // [rsp+A0h] [rbp+28h] BYREF
  va_list va; // [rsp+A0h] [rbp+28h]
  __int64 v42; // [rsp+A8h] [rbp+30h]
  va_list va1; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v40 = va_arg(va1, _QWORD);
  v42 = va_arg(va1, _QWORD);
  v37 = (_BYTE *)a2;
  v4 = (unsigned __int64 *)(a4 + 48);
  v5 = (_BYTE)v40 == 0;
  v6 = a4;
  *(_DWORD *)a2 = 0;
  v7 = a3;
  v36 = v5;
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
  if ( *(_QWORD *)(a1 + 104) != a1 + 64 )
  {
    v25 = *(_DWORD *)(a1 + 284);
    if ( v25 )
    {
      v26 = 0;
      do
      {
        a2 = *(_QWORD *)(a1 + 104);
        if ( a2 == v12 )
          break;
        v27 = *(_QWORD *)(a1 + 112);
        v28 = v25 - v11;
        v29 = v27 + *(_QWORD *)(a2 + 24);
        v30 = *(_DWORD *)(a2 + 32) - v29;
        v31 = *(_QWORD *)(a2 + 40) + (v27 << 12);
        if ( v30 > v28 )
        {
          v32 = v27 + v28;
          v30 = v28;
        }
        else
        {
          *(_QWORD *)(a1 + 104) = *(_QWORD *)a2;
          v32 = 0LL;
        }
        *(_QWORD *)(a1 + 112) = v32;
        v33 = v26++;
        *(_QWORD *)(v7 + 8 * v33) = (16 * v29) | ((_BYTE)v30 - 1) & 0xF;
        v34 = 0;
        if ( v30 )
        {
          v11 += v30;
          do
          {
            PhysicalAddress = MmGetPhysicalAddress((PVOID)(v31 + ((unsigned __int64)v34++ << 12)));
            *v4++ = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
            --v30;
          }
          while ( v30 );
          v12 = a1 + 64;
        }
        v25 = *(_DWORD *)(a1 + 284);
        v7 = a3;
      }
      while ( v11 < v25 );
      v8 = v37;
      v10 = v26;
      v6 = a4;
    }
  }
  v13 = *(_DWORD *)(a1 + 284);
  if ( v11 < v13 )
  {
    while ( 1 )
    {
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(
                                    *(_QWORD *)(a1 + 96),
                                    *(_DWORD *)(a1 + 112),
                                    v13 - v11,
                                    (unsigned int *)va);
      v15 = NextForwardRunClearCapped;
      if ( !NextForwardRunClearCapped )
        break;
      v16 = ((_BYTE)NextForwardRunClearCapped - 1) & 0xF;
      v11 += NextForwardRunClearCapped;
      v17 = (unsigned int)v40;
      v18 = (unsigned int)(v40 + NextForwardRunClearCapped);
      v19 = (unsigned int)v40;
      *(_QWORD *)(a1 + 112) = v18;
      a2 = v10++;
      *(_QWORD *)(v7 + 8 * a2) = (16 * v19) | v16;
      do
      {
        *v4++ = v17++;
        --v15;
      }
      while ( v15 );
      v13 = *(_DWORD *)(a1 + 284);
      if ( v11 >= v13 )
        goto LABEL_9;
    }
    *(_QWORD *)(a1 + 112) = **(unsigned int **)(a1 + 96);
  }
LABEL_9:
  *(_DWORD *)(a1 + 8) = 0;
  if ( !v11 )
    return 0LL;
  *v8 = v10;
  v20 = (unsigned __int64)v11 << 12;
  *(_DWORD *)(v6 + 40) = v20;
  v21 = v11;
  *(_QWORD *)v6 = 0LL;
  v22 = v20 + 4095;
  *(_WORD *)(v6 + 10) = 0;
  v23 = v42;
  *(_QWORD *)(v6 + 32) = 0LL;
  *(_WORD *)(v6 + 8) = 8 * ((v22 >> 12) + 6);
  *(_DWORD *)(v6 + 44) = 0;
  MmMapMemoryDumpMdlEx(v23, a2, v6, v36);
  return v21;
}
