/*
 * XREFs of BgpFwLibraryEnable @ 0x140140494
 * Callers:
 *     BgLibraryEnable @ 0x14013DDEC (BgLibraryEnable.c)
 *     BgpFwLibraryInitialize @ 0x140756D58 (BgpFwLibraryInitialize.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400A7A80 (MmGetPhysicalAddress.c)
 *     MmUnmapIoSpace @ 0x1401238F0 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x1401243A0 (MmMapIoSpaceEx.c)
 *     ResFwBackgroundTransition @ 0x140755EE8 (ResFwBackgroundTransition.c)
 */

__int64 __fastcall BgpFwLibraryEnable(__int64 a1)
{
  int v2; // ecx
  int v3; // ebp
  __int64 v4; // rsi
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rax
  int v10; // eax
  __int64 v12; // rax

  v2 = dword_140341A30;
  v3 = dword_140341A30 & 0xC00;
  if ( (dword_140341A30 & 2) != 0 && v3 != 3072 )
    return 0LL;
  v4 = 0LL;
  if ( !*(_BYTE *)a1 || *(_BYTE *)(a1 + 1) )
  {
LABEL_13:
    if ( v3 != 3072 )
    {
      ResFwBackgroundTransition(0LL);
      v2 = dword_140341A30;
    }
    BgInternal = *(_OWORD *)a1;
    v10 = _mm_cvtsi128_si32(*(__m128i *)(a1 + 16));
    xmmword_1403419D0 = *(_OWORD *)(a1 + 16);
    qword_1403419E0 = *(PVOID *)(a1 + 32);
    if ( v10 == 1 )
    {
      LODWORD(xmmword_1403419D0) = 5;
      v2 |= 8u;
    }
    dword_140341A30 = v2 | 2;
    return 0LL;
  }
  if ( v3 == 3072 )
  {
    if ( (_BYTE)xmmword_1403419E8
      && BYTE1(xmmword_1403419E8)
      && *(_DWORD *)(a1 + 16) == (_DWORD)xmmword_1403419F8
      && *(_QWORD *)(a1 + 4) == *(_QWORD *)((char *)&xmmword_1403419E8 + 4)
      && *(_DWORD *)(a1 + 12) == HIDWORD(xmmword_1403419E8)
      && *(_QWORD *)(a1 + 32) == MmGetPhysicalAddress(BaseAddress) )
    {
      *(_BYTE *)(a1 + 1) = 1;
      *(_QWORD *)(a1 + 32) = BaseAddress;
LABEL_12:
      v2 = dword_140341A30;
      goto LABEL_13;
    }
    return 3221225659LL;
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 12);
    if ( ((*(_BYTE *)(a1 + 2) - 1) & 0xFD) != 0 )
      v6 = (unsigned int)(*(_DWORD *)(a1 + 4) * v5);
    else
      v6 = (unsigned int)(*(_DWORD *)(a1 + 8) * v5);
    v7 = *(_QWORD *)(a1 + 32);
    v8 = v6 * ((*(_DWORD *)(a1 + 16) != 4) + 3LL);
    v9 = MmMapIoSpaceEx(v7, v8, 0x404u);
    *(_QWORD *)(a1 + 32) = v9;
    if ( !v9 )
      *(_QWORD *)(a1 + 32) = MmMapIoSpaceEx(v7, v8, 0x204u);
    if ( *(_QWORD *)(a1 + 32) )
    {
      *(_BYTE *)(a1 + 1) = 1;
      if ( (_BYTE)xmmword_1403419E8 && BYTE1(xmmword_1403419E8) )
      {
        if ( ((BYTE2(xmmword_1403419E8) - 1) & 0xFD) != 0 )
          v12 = (unsigned int)(DWORD1(xmmword_1403419E8) * HIDWORD(xmmword_1403419E8));
        else
          v12 = (unsigned int)(HIDWORD(xmmword_1403419E8) * DWORD2(xmmword_1403419E8));
        LOBYTE(v4) = (_DWORD)xmmword_1403419F8 != 4;
        MmUnmapIoSpace(BaseAddress, v12 * (v4 + 3));
      }
      xmmword_1403419E8 = *(_OWORD *)a1;
      xmmword_1403419F8 = *(_OWORD *)(a1 + 16);
      BaseAddress = *(PVOID *)(a1 + 32);
      goto LABEL_12;
    }
    return 3221225626LL;
  }
}
