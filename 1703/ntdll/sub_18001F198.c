/*
 * XREFs of sub_18001F198 @ 0x18001F198
 * Callers:
 *     sub_18001EFB4 @ 0x18001EFB4 (sub_18001EFB4.c)
 *     sub_180020404 @ 0x180020404 (sub_180020404.c)
 *     sub_180020A2C @ 0x180020A2C (sub_180020A2C.c)
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 *     sub_180025780 @ 0x180025780 (sub_180025780.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x18001E790 (RtlRbInsertNodeEx.c)
 *     sub_18001EB74 @ 0x18001EB74 (sub_18001EB74.c)
 *     sub_18001EEF8 @ 0x18001EEF8 (sub_18001EEF8.c)
 *     sub_18001F54C @ 0x18001F54C (sub_18001F54C.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall sub_18001F198(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  int v5; // ebp
  unsigned __int64 v7; // rbx
  char v8; // di
  int v10; // r15d
  char v11; // al
  unsigned __int64 v12; // rax
  _BOOL8 v13; // r8
  unsigned __int64 v14; // rbx
  int v15; // edi
  unsigned __int64 v16; // rsi
  __int64 v17; // r12
  unsigned __int64 v18; // rax
  __int64 result; // rax
  _BYTE *v20; // rcx
  __int64 v21; // rdx

  v5 = *(unsigned __int8 *)(a2 + 27) - a3;
  v7 = a2 + 32LL * a3;
  v8 = a3;
  if ( (unsigned int)(v5 - 1) > 1 )
  {
    v20 = (_BYTE *)(v7 + 56);
    v21 = (unsigned int)(v5 - 2);
    do
    {
      *v20 &= ~4u;
      v20 += 32;
      --v21;
    }
    while ( v21 );
  }
  v10 = a4 & 1;
  if ( (a4 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a1 + 88);
  if ( *(unsigned __int8 *)(a2 + 27) != v5 )
  {
    *(_BYTE *)(a2 + 27) = v8;
    *(_BYTE *)(a2 + 26) = ~v8;
  }
  *(_BYTE *)(v7 + 24) |= 8u;
  *(_BYTE *)(32LL * (unsigned int)(v5 - 1) + v7 + 27) = v5 - 1;
  *(_BYTE *)(v7 + 27) = v5;
  v11 = sub_18001EEF8(v7, v5);
  *(_DWORD *)v7 = -857879331;
  *(_BYTE *)(v7 + 26) = ~v11;
  *(_BYTE *)(v7 + 24) &= 0xDEu;
  v12 = sub_18001EB74(a1, v7, a4);
  LOBYTE(v13) = 0;
  v14 = *(_QWORD *)(a1 + 120);
  v15 = *(_BYTE *)(a1 + 128) & 1;
  v16 = v12;
  v17 = *(unsigned __int16 *)(v12 + 26);
  if ( v14 )
  {
    while ( 1 )
    {
      if ( (int)sub_18001F54C(v17, v14, v13) >= 0 )
      {
        v18 = *(_QWORD *)(v14 + 8);
        if ( v15 )
        {
          if ( !v18 )
          {
LABEL_13:
            LOBYTE(v13) = 1;
            break;
          }
          v18 ^= v14;
        }
        if ( !v18 )
          goto LABEL_13;
      }
      else
      {
        v18 = *(_QWORD *)v14;
        if ( v15 )
        {
          if ( !v18 )
          {
LABEL_17:
            LOBYTE(v13) = 0;
            break;
          }
          v18 ^= v14;
        }
        if ( !v18 )
          goto LABEL_17;
      }
      v14 = v18;
    }
  }
  RtlRbInsertNodeEx(a1 + 120, v14, v13, v16);
  result = (unsigned __int8)~*(_BYTE *)(v16 + 26);
  *(_QWORD *)(a1 + 24) += result;
  if ( !v10 )
    return RtlReleaseSRWLockExclusive(a1 + 88);
  return result;
}
