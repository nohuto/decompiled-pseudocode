/*
 * XREFs of sub_18001AF94 @ 0x18001AF94
 * Callers:
 *     sub_180019E6C @ 0x180019E6C (sub_180019E6C.c)
 *     sub_18001B270 @ 0x18001B270 (sub_18001B270.c)
 *     sub_1800520F8 @ 0x1800520F8 (sub_1800520F8.c)
 *     sub_1800527EC @ 0x1800527EC (sub_1800527EC.c)
 * Callees:
 *     sub_18001ABBC @ 0x18001ABBC (sub_18001ABBC.c)
 *     sub_18001B870 @ 0x18001B870 (sub_18001B870.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     sub_1800528A4 @ 0x1800528A4 (sub_1800528A4.c)
 *     sub_180052928 @ 0x180052928 (sub_180052928.c)
 *     sub_180052944 @ 0x180052944 (sub_180052944.c)
 *     sub_180052A74 @ 0x180052A74 (sub_180052A74.c)
 *     sub_180052A9C @ 0x180052A9C (sub_180052A9C.c)
 *     sub_18007A824 @ 0x18007A824 (sub_18007A824.c)
 *     sub_180084EDC @ 0x180084EDC (sub_180084EDC.c)
 *     sub_180086A30 @ 0x180086A30 (sub_180086A30.c)
 */

void __fastcall sub_18001AF94(__int64 a1, __int64 a2)
{
  int v2; // r14d
  unsigned int v3; // r12d
  __int64 v4; // rbx
  char v6; // bp
  char v7; // r15
  __int64 v9; // r8
  char v10; // dl
  _BYTE *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  _BYTE *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  _BYTE *v18; // rax

  v2 = *(_DWORD *)(a2 + 72);
  v3 = 4;
  v4 = *(_QWORD *)(a1 + 248);
  v6 = 0;
  v7 = 0;
  if ( v2 != 2 )
  {
    if ( *(__int16 *)(a2 + 78) >= 0 )
    {
      v9 = a1 + 104;
LABEL_4:
      v6 = *(_BYTE *)(v9 + 20);
      *(_QWORD *)v9 = *(_QWORD *)(a2 + 96);
      *(_QWORD *)(v9 + 8) = *(_QWORD *)(a2 + 88);
      *(_BYTE *)(v9 + 21) = *(_BYTE *)(a2 + 76);
      *(_DWORD *)(v9 + 16) = *(_DWORD *)(a2 + 80);
      *(_BYTE *)(v9 + 20) = v2 != 0;
      if ( *(__int16 *)(a2 + 78) < 0 )
      {
        if ( v3 < 4 )
        {
          v13 = 3LL * v3;
          *(_OWORD *)(a1 + 8 * v13 + 128) = *(_OWORD *)v9;
          *(_QWORD *)(a1 + 8 * v13 + 144) = *(_QWORD *)(v9 + 16);
        }
        sub_180084EDC(a1, 0x3FFFLL);
        if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 || *(_WORD *)(a1 + 98) >= 0x8000u )
          sub_18007A824(*(unsigned __int16 *)(a2 + 78), a1);
      }
      if ( v7 )
      {
        *(_DWORD *)(v4 + 48) = 0;
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v4 + 40));
        if ( v3 < 4 && !v2 )
          sub_1800528A4((PRTL_BALANCED_NODE)v4);
      }
      goto LABEL_6;
    }
    v7 = 1;
    if ( v2 == 1 && !(unsigned __int8)sub_180086A30(*(unsigned __int16 *)(a2 + 78), 0x3FFFLL) )
      return;
    if ( !v4 )
    {
      if ( !v2 )
        return;
      v4 = sub_18001B870((void *)(a1 + 32));
      if ( !v4 )
      {
        v4 = sub_180052A9C(a1 + 32);
        if ( !v4 )
          return;
      }
      *(_QWORD *)(a1 + 248) = v4;
    }
    sub_180052A74(v4);
    v10 = *(_BYTE *)(a2 + 78);
    v11 = (_BYTE *)(v4 + 78);
    v12 = 0LL;
    while ( !*(v11 - 2) || *v11 != v10 )
    {
      v12 = (unsigned int)(v12 + 1);
      v11 += 24;
      if ( (unsigned int)v12 >= 4 )
      {
        v9 = 0LL;
        goto LABEL_21;
      }
    }
    v3 = v12;
    v9 = v4 + 8 * (v12 + 2 * v12 + 7);
LABEL_21:
    if ( v9 )
      goto LABEL_4;
    if ( v2 )
    {
      v14 = 0LL;
      v15 = (_BYTE *)(v4 + 76);
      do
      {
        if ( !*v15 )
        {
          v3 = v14;
          v16 = v4 + 8 * (v14 + 2 * v14 + 7);
          goto LABEL_37;
        }
        v14 = (unsigned int)(v14 + 1);
        v15 += 24;
      }
      while ( (unsigned int)v14 < 4 );
      v16 = 0LL;
LABEL_37:
      if ( v16 )
      {
        *(_BYTE *)(v16 + 22) = v10;
        sub_180052928(v4);
        goto LABEL_4;
      }
    }
    else
    {
      v17 = 0LL;
      v18 = (_BYTE *)(a1 + 150);
      do
      {
        if ( *(v18 - 2) && *v18 == v10 )
        {
          v9 = a1 + 8 * (v17 + 2 * (v17 + 8));
          goto LABEL_47;
        }
        v17 = (unsigned int)(v17 + 1);
        v18 += 24;
      }
      while ( (unsigned int)v17 < 4 );
      v9 = 0LL;
LABEL_47:
      if ( v9 )
        goto LABEL_4;
    }
    *(_DWORD *)(v4 + 48) = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v4 + 40));
    return;
  }
LABEL_6:
  if ( *(_DWORD *)(a2 + 72) || v6 )
  {
    if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 )
      sub_180052944(a2, a1, 0LL);
    else
      sub_18001ABBC(a2, a1);
  }
}
