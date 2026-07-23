/*
 * XREFs of sub_180029AF4 @ 0x180029AF4
 * Callers:
 *     sub_180002524 @ 0x180002524 (sub_180002524.c)
 *     sub_180005CCC @ 0x180005CCC (sub_180005CCC.c)
 *     sub_180029538 @ 0x180029538 (sub_180029538.c)
 *     sub_18007278C @ 0x18007278C (sub_18007278C.c)
 * Callees:
 *     sub_180005D90 @ 0x180005D90 (sub_180005D90.c)
 *     sub_180005DB0 @ 0x180005DB0 (sub_180005DB0.c)
 *     sub_180005DCC @ 0x180005DCC (sub_180005DCC.c)
 *     sub_180005DF4 @ 0x180005DF4 (sub_180005DF4.c)
 *     sub_180024300 @ 0x180024300 (sub_180024300.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     sub_180074A2C @ 0x180074A2C (sub_180074A2C.c)
 *     sub_180081554 @ 0x180081554 (sub_180081554.c)
 *     sub_180082148 @ 0x180082148 (sub_180082148.c)
 *     sub_180083054 @ 0x180083054 (sub_180083054.c)
 *     sub_180085C54 @ 0x180085C54 (sub_180085C54.c)
 */

void __fastcall sub_180029AF4(__int64 a1, __int64 a2)
{
  int v2; // r14d
  char *v3; // rbx
  unsigned int v4; // r12d
  char v7; // bp
  char v8; // r15
  char *v9; // r8
  char v10; // dl
  _BYTE *v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rax
  _BYTE *v15; // rcx
  char *v16; // r8
  unsigned int v17; // ecx
  _BYTE *v18; // rax

  v2 = *(_DWORD *)(a2 + 72);
  v3 = *(char **)(a1 + 248);
  v4 = 4;
  v7 = 0;
  v8 = 0;
  if ( v2 != 2 )
  {
    if ( *(__int16 *)(a2 + 78) >= 0 )
    {
      v9 = (char *)(a1 + 104);
LABEL_4:
      v7 = v9[20];
      *(_QWORD *)v9 = *(_QWORD *)(a2 + 96);
      *((_QWORD *)v9 + 1) = *(_QWORD *)(a2 + 88);
      v9[21] = *(_BYTE *)(a2 + 76);
      *((_DWORD *)v9 + 4) = *(_DWORD *)(a2 + 80);
      v9[20] = v2 != 0;
      if ( *(__int16 *)(a2 + 78) < 0 )
      {
        if ( v4 < 4 )
        {
          v13 = 3LL * v4;
          *(_OWORD *)(a1 + 8 * v13 + 128) = *(_OWORD *)v9;
          *(_QWORD *)(a1 + 8 * v13 + 144) = *((_QWORD *)v9 + 2);
        }
        sub_180082148(a1, 0x3FFFLL);
        if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 || *(__int16 *)(a1 + 98) < 0 )
          sub_180085C54(*(unsigned __int16 *)(a2 + 78), a1);
      }
      if ( v8 )
      {
        *((_DWORD *)v3 + 12) = 0;
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v3 + 5);
        if ( v4 < 4 && !v2 )
          sub_180005D90(v3);
      }
      goto LABEL_6;
    }
    v8 = 1;
    if ( v2 == 1 && !(unsigned __int8)sub_180083054(*(unsigned __int16 *)(a2 + 78), 0x3FFFLL) )
      return;
    if ( !v3 )
    {
      if ( !v2 )
        return;
      v3 = (char *)sub_180024300((_QWORD *)(a1 + 32));
      if ( !v3 )
      {
        v3 = sub_180005DF4((__int128 *)(a1 + 32));
        if ( !v3 )
          return;
      }
      *(_QWORD *)(a1 + 248) = v3;
    }
    sub_180005DCC((__int64)v3);
    v10 = *(_BYTE *)(a2 + 78);
    v11 = v3 + 78;
    v12 = 0;
    while ( !*(v11 - 2) || *v11 != v10 )
    {
      ++v12;
      v11 += 24;
      if ( v12 >= 4 )
      {
        v9 = 0LL;
        goto LABEL_21;
      }
    }
    v4 = v12;
    v9 = &v3[16 * v12 + 56 + 8 * v12];
LABEL_21:
    if ( v9 )
      goto LABEL_4;
    if ( v2 )
    {
      v14 = 0LL;
      v15 = v3 + 76;
      do
      {
        if ( !*v15 )
        {
          v4 = v14;
          v16 = &v3[16 * v14 + 56 + 8 * v14];
          goto LABEL_36;
        }
        v14 = (unsigned int)(v14 + 1);
        v15 += 24;
      }
      while ( (unsigned int)v14 < 4 );
      v16 = 0LL;
LABEL_36:
      if ( v16 )
      {
        v16[22] = v10;
        sub_180005DB0((__int64)v3);
        goto LABEL_4;
      }
    }
    else
    {
      v17 = 0;
      v18 = (_BYTE *)(a1 + 150);
      do
      {
        if ( *(v18 - 2) && *v18 == v10 )
        {
          v9 = (char *)(a1 + 8 * (v17 + 2 * (v17 + 8LL)));
          goto LABEL_50;
        }
        ++v17;
        v18 += 24;
      }
      while ( v17 < 4 );
      v9 = 0LL;
LABEL_50:
      if ( v9 )
        goto LABEL_4;
    }
    *((_DWORD *)v3 + 12) = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v3 + 5);
    return;
  }
LABEL_6:
  if ( *(_DWORD *)(a2 + 72) || v7 )
  {
    if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 )
      sub_180081554(a2, a1, 0LL);
    else
      sub_180074A2C(a2, a1);
  }
}
