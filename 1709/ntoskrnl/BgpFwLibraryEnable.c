/*
 * XREFs of BgpFwLibraryEnable @ 0x14013E9AC
 * Callers:
 *     BgLibraryEnable @ 0x140290490 (BgLibraryEnable.c)
 *     BgpFwLibraryInitialize @ 0x1407D01A4 (BgpFwLibraryInitialize.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400BBFC0 (MmGetPhysicalAddress.c)
 *     MmUnmapIoSpace @ 0x1401186A0 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x1401199B0 (MmMapIoSpaceEx.c)
 *     ResFwBackgroundTransition @ 0x1407D0BC4 (ResFwBackgroundTransition.c)
 */

__int64 __fastcall BgpFwLibraryEnable(__int64 a1)
{
  int v2; // ebp
  __int64 v3; // rsi
  int v4; // ecx
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rax
  int v10; // eax
  int v12; // eax

  v2 = dword_14035A1B0 & 0xC00;
  if ( (dword_14035A1B0 & 2) != 0 && v2 != 3072 )
    return 0LL;
  v3 = 0LL;
  if ( !*(_BYTE *)a1 || *(_BYTE *)(a1 + 1) )
    goto LABEL_12;
  if ( v2 == 3072 )
  {
    if ( !(_BYTE)xmmword_14035A168
      || !BYTE1(xmmword_14035A168)
      || *(_DWORD *)(a1 + 16) != (_DWORD)xmmword_14035A178
      || *(_QWORD *)(a1 + 4) != *(_QWORD *)((char *)&xmmword_14035A168 + 4)
      || *(_DWORD *)(a1 + 12) != HIDWORD(xmmword_14035A168)
      || *(_QWORD *)(a1 + 32) != MmGetPhysicalAddress(BaseAddress) )
    {
      return 3221225659LL;
    }
    *(_BYTE *)(a1 + 1) = 1;
    *(_QWORD *)(a1 + 32) = BaseAddress;
LABEL_12:
    if ( v2 != 3072 )
      ResFwBackgroundTransition(0LL);
    BgInternal = *(_OWORD *)a1;
    v10 = _mm_cvtsi128_si32(*(__m128i *)(a1 + 16));
    xmmword_14035A150 = *(_OWORD *)(a1 + 16);
    qword_14035A160 = *(PVOID *)(a1 + 32);
    if ( v10 == 1 )
    {
      dword_14035A1B0 |= 8u;
      LODWORD(xmmword_14035A150) = 5;
    }
    dword_14035A1B0 |= 2u;
    return 0LL;
  }
  v4 = *(_DWORD *)(a1 + 16);
  v5 = *(_DWORD *)(a1 + 12);
  if ( ((*(_BYTE *)(a1 + 2) - 1) & 0xFD) != 0 )
    v6 = (unsigned int)(*(_DWORD *)(a1 + 4) * v5);
  else
    v6 = (unsigned int)(*(_DWORD *)(a1 + 8) * v5);
  v7 = *(_QWORD *)(a1 + 32);
  v8 = v6 * ((v4 != 4) + 3LL);
  v9 = MmMapIoSpaceEx(v7, v8, 0x404u);
  *(_QWORD *)(a1 + 32) = v9;
  if ( !v9 )
    *(_QWORD *)(a1 + 32) = MmMapIoSpaceEx(v7, v8, 0x204u);
  if ( *(_QWORD *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 1) = 1;
    if ( (_BYTE)xmmword_14035A168 && BYTE1(xmmword_14035A168) )
    {
      v12 = DWORD1(xmmword_14035A168);
      if ( ((BYTE2(xmmword_14035A168) - 1) & 0xFD) == 0 )
        v12 = DWORD2(xmmword_14035A168);
      LOBYTE(v3) = (_DWORD)xmmword_14035A178 != 4;
      MmUnmapIoSpace(BaseAddress, (unsigned int)(HIDWORD(xmmword_14035A168) * v12) * (v3 + 3));
    }
    xmmword_14035A168 = *(_OWORD *)a1;
    xmmword_14035A178 = *(_OWORD *)(a1 + 16);
    BaseAddress = *(PVOID *)(a1 + 32);
    goto LABEL_12;
  }
  return 3221225626LL;
}
