/*
 * XREFs of BgpFwLibraryEnable @ 0x1401658A8
 * Callers:
 *     BgLibraryEnable @ 0x140156038 (BgLibraryEnable.c)
 *     BgpFwLibraryInitialize @ 0x14083B9FC (BgpFwLibraryInitialize.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14003C3D0 (MmGetPhysicalAddress.c)
 *     MmMapIoSpaceEx @ 0x14013A010 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x14013D150 (MmUnmapIoSpace.c)
 *     ResFwBackgroundTransition @ 0x14083C338 (ResFwBackgroundTransition.c)
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
  __int64 v12; // rax
  int v13; // eax

  v2 = dword_14039D7F0 & 0xC00;
  if ( (dword_14039D7F0 & 2) != 0 && v2 != 3072 )
    return 0LL;
  v3 = 0LL;
  if ( !*(_BYTE *)a1 || *(_BYTE *)(a1 + 1) )
  {
LABEL_10:
    if ( v2 != 3072 )
      ResFwBackgroundTransition(0LL);
    BgInternal = *(_OWORD *)a1;
    v10 = _mm_cvtsi128_si32(*(__m128i *)(a1 + 16));
    xmmword_14039D790 = *(_OWORD *)(a1 + 16);
    qword_14039D7A0 = *(PVOID *)(a1 + 32);
    if ( v10 == 1 )
    {
      dword_14039D7F0 |= 8u;
      LODWORD(xmmword_14039D790) = 5;
    }
    dword_14039D7F0 |= 2u;
    return 0LL;
  }
  if ( v2 == 3072 )
  {
    if ( !(_BYTE)xmmword_14039D7A8
      || !BYTE1(xmmword_14039D7A8)
      || *(_DWORD *)(a1 + 16) != (_DWORD)xmmword_14039D7B8
      || *(_QWORD *)(a1 + 4) != *(_QWORD *)((char *)&xmmword_14039D7A8 + 4)
      || *(_DWORD *)(a1 + 12) != HIDWORD(xmmword_14039D7A8)
      || *(_QWORD *)(a1 + 32) != MmGetPhysicalAddress(BaseAddress) )
    {
      return 3221225659LL;
    }
    *(_BYTE *)(a1 + 1) = 1;
    *(_QWORD *)(a1 + 32) = BaseAddress;
    goto LABEL_10;
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
  if ( v9 || (v12 = MmMapIoSpaceEx(v7, v8, 0x204u), (*(_QWORD *)(a1 + 32) = v12) != 0LL) )
  {
    *(_BYTE *)(a1 + 1) = 1;
    if ( (_BYTE)xmmword_14039D7A8 && BYTE1(xmmword_14039D7A8) )
    {
      v13 = DWORD1(xmmword_14039D7A8);
      if ( ((BYTE2(xmmword_14039D7A8) - 1) & 0xFD) == 0 )
        v13 = DWORD2(xmmword_14039D7A8);
      LOBYTE(v3) = (_DWORD)xmmword_14039D7B8 != 4;
      MmUnmapIoSpace(BaseAddress, (unsigned int)(HIDWORD(xmmword_14039D7A8) * v13) * (v3 + 3));
    }
    xmmword_14039D7A8 = *(_OWORD *)a1;
    xmmword_14039D7B8 = *(_OWORD *)(a1 + 16);
    BaseAddress = *(PVOID *)(a1 + 32);
    goto LABEL_10;
  }
  return 3221225626LL;
}
