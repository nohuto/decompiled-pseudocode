/*
 * XREFs of KiMceDispatch @ 0x1402AC3A0
 * Callers:
 *     KiMceLinkage @ 0x1402B13E0 (KiMceLinkage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiMceDispatch(_QWORD *a1, unsigned int a2)
{
  __m128i *IdtBase; // r8
  unsigned int Number; // ecx
  char *StackBase; // r15
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // r10
  __m128i v9; // xmm0
  int v10; // edx
  unsigned int v11; // ebx
  unsigned __int64 *v12; // r15
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rax
  _QWORD *v16; // rax
  int v17; // ecx
  _BYTE *v18; // rax
  char *v19; // rcx
  __int64 v20; // r11
  char v21; // al
  signed __int32 v23[6]; // [rsp+0h] [rbp-18h] BYREF
  __int64 v24; // [rsp+30h] [rbp+18h]
  __int64 v25; // [rsp+30h] [rbp+18h]

  IdtBase = (__m128i *)KeGetPcr()->IdtBase;
  Number = KeGetPcr()->Prcb.Number;
  StackBase = (char *)KeGetPcr()->NtTib.StackBase;
  LODWORD(v24) = IdtBase[4];
  HIDWORD(v24) = _mm_cvtsi128_si32(_mm_srli_si128(IdtBase[4], 8));
  v6 = v24;
  v7 = *(_QWORD *)(v24 + 5120);
  v8 = *(_QWORD **)(v24 + 5128);
  v9 = _mm_srli_si128(*(__m128i *)(v24 + 16 * (a2 + 32LL)), 8);
  LODWORD(v25) = *(_OWORD *)(v24 + 16 * (a2 + 32LL));
  HIDWORD(v25) = _mm_cvtsi128_si32(v9);
  _InterlockedOr((volatile signed __int32 *)(v6 + 5168), 1u);
  if ( Number != *(_DWORD *)(v6 + 5172) )
  {
    while ( (*(_DWORD *)(v6 + 5168) & 2) != 0 )
      _mm_pause();
    _InterlockedOr(v23, 0);
  }
  v10 = 4096;
  if ( Number == *(_DWORD *)(v6 + 5172) )
  {
    if ( (*(_DWORD *)(v7 + 2012) & 0x20000) == 0 )
    {
      **(_QWORD **)(v7 + 1144) = 0xA3A03F5891C8B4E8uLL;
      **(_QWORD **)(v7 + 1152) = 0LL;
      **(_QWORD **)(v7 + 1160) = 0LL;
      **(_QWORD **)(v7 + 1168) = 0LL;
    }
    v11 = 1;
    v12 = (unsigned __int64 *)(StackBase + 36);
    do
    {
      v13 = *v12;
      if ( *v12 )
      {
        v14 = a1[3];
        if ( v14 <= v13 && v14 > v13 - ((-(__int64)((*(_BYTE *)(v7 + 1755) & 8) != 0) & 0xFFFFFFFFFFFFE1E0uLL) + 0x2000) )
          break;
        if ( (*(_BYTE *)(v7 + 1755) & 8) != 0 )
        {
          v15 = *(_QWORD *)(v13 + 8);
          if ( v14 <= v15 && v14 > v15 - 8160 )
            break;
        }
      }
      ++v11;
      ++v12;
    }
    while ( v11 < 8 );
    if ( v11 == 8 && *a1 - (_QWORD)v8 < 0x1000uLL )
    {
      v16 = (_QWORD *)a1[3];
      if ( *v16 == v7 + 1785 )
      {
        *a1 = *v16;
        a1[3] = v16 + 1;
      }
    }
    v17 = 4;
    *(_QWORD *)(v7 + 1790) = 0xC3C3C3C3C3C3C3C3uLL;
    v18 = (_BYTE *)(v7 + 1798);
    do
    {
      *v18++ = -61;
      --v17;
    }
    while ( v17 );
    _InterlockedAnd((volatile signed __int32 *)(v6 + 5168), 0xFFFFFFFD);
  }
  if ( (*(_DWORD *)(v6 + 5168) & 4) == 0 )
  {
    v19 = (char *)(v6 + 1024);
    v20 = 512LL;
    do
    {
      v10 -= 8;
      *v8 = *(_QWORD *)v19;
      v19 += 8;
      ++v8;
      --v20;
    }
    while ( v20 );
    for ( ; v10; --v10 )
    {
      v21 = *v19++;
      *(_BYTE *)v8 = v21;
      v8 = (_QWORD *)((char *)v8 + 1);
    }
  }
  *(_QWORD *)(v6 + 5136) = v7 + 1754;
  return v25;
}
