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

__int64 __fastcall sub_18001AF94(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // r14d
  unsigned int v4; // r12d
  __int64 v5; // rbx
  char v7; // bp
  char v8; // r15
  __int64 v10; // r8
  char v11; // dl
  _BYTE *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  _BYTE *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  _BYTE *v19; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v3 = *(_DWORD *)(a2 + 72);
  v4 = 4;
  v5 = *(_QWORD *)(a1 + 248);
  v7 = 0;
  v8 = 0;
  if ( v3 != 2 )
  {
    result = *(_WORD *)(a2 + 78) >> 15;
    if ( *(__int16 *)(a2 + 78) >= 0 )
    {
      v10 = a1 + 104;
LABEL_4:
      v7 = *(_BYTE *)(v10 + 20);
      *(_QWORD *)v10 = *(_QWORD *)(a2 + 96);
      *(_QWORD *)(v10 + 8) = *(_QWORD *)(a2 + 88);
      *(_BYTE *)(v10 + 21) = *(_BYTE *)(a2 + 76);
      *(_DWORD *)(v10 + 16) = *(_DWORD *)(a2 + 80);
      *(_BYTE *)(v10 + 20) = v3 != 0;
      result = *(_WORD *)(a2 + 78) >> 15;
      if ( *(__int16 *)(a2 + 78) < 0 )
      {
        if ( v4 < 4 )
        {
          v14 = 3LL * v4;
          *(_OWORD *)(a1 + 8 * v14 + 128) = *(_OWORD *)v10;
          *(_QWORD *)(a1 + 8 * v14 + 144) = *(_QWORD *)(v10 + 16);
        }
        sub_180084EDC(a1, 0x3FFFLL);
        if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 || (result = 0x8000LL, *(_WORD *)(a1 + 98) >= 0x8000u) )
          result = sub_18007A824(*(unsigned __int16 *)(a2 + 78), a1);
      }
      if ( v8 )
      {
        *(_DWORD *)(v5 + 48) = 0;
        result = RtlReleaseSRWLockExclusive(v5 + 40);
        if ( v4 < 4 && !v3 )
          result = sub_1800528A4(v5);
      }
      goto LABEL_6;
    }
    v8 = 1;
    if ( v3 == 1 )
    {
      result = sub_180086A30(*(unsigned __int16 *)(a2 + 78), 0x3FFFLL);
      if ( !(_BYTE)result )
        return result;
    }
    if ( !v5 )
    {
      if ( !v3 )
        return result;
      v5 = sub_18001B870((void *)(a1 + 32));
      if ( !v5 )
      {
        result = sub_180052A9C(a1 + 32);
        v5 = result;
        if ( !result )
          return result;
      }
      *(_QWORD *)(a1 + 248) = v5;
    }
    sub_180052A74(v5);
    v11 = *(_BYTE *)(a2 + 78);
    v12 = (_BYTE *)(v5 + 78);
    v13 = 0LL;
    while ( !*(v12 - 2) || *v12 != v11 )
    {
      v13 = (unsigned int)(v13 + 1);
      v12 += 24;
      if ( (unsigned int)v13 >= 4 )
      {
        v10 = 0LL;
        goto LABEL_21;
      }
    }
    v4 = v13;
    v10 = v5 + 8 * (v13 + 2 * v13 + 7);
LABEL_21:
    if ( v10 )
      goto LABEL_4;
    if ( v3 )
    {
      v15 = 0LL;
      v16 = (_BYTE *)(v5 + 76);
      do
      {
        if ( !*v16 )
        {
          v4 = v15;
          v17 = v5 + 8 * (v15 + 2 * v15 + 7);
          goto LABEL_37;
        }
        v15 = (unsigned int)(v15 + 1);
        v16 += 24;
      }
      while ( (unsigned int)v15 < 4 );
      v17 = 0LL;
LABEL_37:
      if ( v17 )
      {
        *(_BYTE *)(v17 + 22) = v11;
        sub_180052928(v5);
        goto LABEL_4;
      }
    }
    else
    {
      v18 = 0LL;
      v19 = (_BYTE *)(a1 + 150);
      do
      {
        if ( *(v19 - 2) && *v19 == v11 )
        {
          v10 = a1 + 8 * (v18 + 2 * (v18 + 8));
          goto LABEL_47;
        }
        v18 = (unsigned int)(v18 + 1);
        v19 += 24;
      }
      while ( (unsigned int)v18 < 4 );
      v10 = 0LL;
LABEL_47:
      if ( v10 )
        goto LABEL_4;
    }
    *(_DWORD *)(v5 + 48) = 0;
    return RtlReleaseSRWLockExclusive(v5 + 40);
  }
LABEL_6:
  if ( *(_DWORD *)(a2 + 72) || v7 )
  {
    if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 2 )
      return sub_180052944(a2, a1, 0LL);
    else
      return sub_18001ABBC(a2, a1);
  }
  return result;
}
