/*
 * XREFs of KiInsertTimer2WithCollectionLockHeld @ 0x140049B80
 * Callers:
 *     KeSetTimer2 @ 0x140049180 (KeSetTimer2.c)
 *     KiInsertTimer2 @ 0x14004B87C (KiInsertTimer2.c)
 * Callees:
 *     KiRemoveTimer2 @ 0x140047F00 (KiRemoveTimer2.c)
 *     RtlRbInsertNodeEx @ 0x14004A340 (RtlRbInsertNodeEx.c)
 */

char __fastcall KiInsertTimer2WithCollectionLockHeld(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char v4; // cl
  _BYTE *v5; // r15
  char v6; // r12
  int v7; // edi
  int v8; // r14d
  unsigned __int8 v9; // al
  char *v10; // rdi
  unsigned __int64 v11; // rdx
  char v12; // cl
  char *v14; // rsi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  signed __int32 v18[14]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(_BYTE *)(a1 + 130);
  v5 = (_BYTE *)a3;
  v6 = a2;
  v7 = 0;
  *(_BYTE *)a3 = 0;
  v8 = 1;
  if ( v4 == 20 || (v4 & 0x20) != 0 && *(_QWORD *)(a1 + 72) == *(_QWORD *)(a1 + 80) )
  {
    *(_BYTE *)(a1 + 130) = v4 | 0x10;
  }
  else
  {
    *(_BYTE *)(a1 + 130) = v4 & 0xEF;
    v9 = 0;
    v10 = (char *)&KiTimer2Collections + 24 * (v4 & 3);
    v11 = *(_QWORD *)v10;
    if ( *(_QWORD *)v10 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(a1 + 72) >= *(_QWORD *)(v11 + 48) )
        {
          v17 = *(_QWORD *)(v11 + 8);
          if ( (v10[8] & 1) != 0 )
          {
            if ( !v17 )
            {
LABEL_30:
              v9 = 1;
              break;
            }
            v17 ^= v11;
          }
          if ( !v17 )
            goto LABEL_30;
        }
        else
        {
          v17 = *(_QWORD *)v11;
          if ( (v10[8] & 1) != 0 )
          {
            if ( !v17 )
            {
LABEL_37:
              v9 = 0;
              break;
            }
            v17 ^= v11;
          }
          if ( !v17 )
            goto LABEL_37;
        }
        v11 = v17;
      }
    }
    RtlRbInsertNodeEx(v10, v11, v9, a1 + 24);
    if ( (*((_QWORD *)v10 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == a1 + 24 )
    {
      *((_QWORD *)v10 + 2) = *(_QWORD *)(a1 + 72);
      v7 = 1;
    }
    else
    {
      v7 = 0;
    }
  }
  v12 = *(_BYTE *)(a1 + 131);
  if ( *(_QWORD *)(a1 + 80) == -1LL )
  {
    *(_BYTE *)(a1 + 131) = v12 | 0x10;
    goto LABEL_8;
  }
  LOBYTE(a3) = 0;
  *(_BYTE *)(a1 + 131) = v12 & 0xEF;
  v14 = (char *)&KiTimer2Collections + 24 * (v12 & 3);
  v15 = *(_QWORD *)v14;
  if ( !*(_QWORD *)v14 )
    goto LABEL_33;
  a3 = *(_QWORD *)(a1 + 80);
  while ( a3 >= *(_QWORD *)(v15 + 32) )
  {
    v16 = *(_QWORD *)(v15 + 8);
    if ( (v14[8] & 1) != 0 )
    {
      if ( !v16 )
      {
LABEL_23:
        a3 = 1LL;
        goto LABEL_33;
      }
      v16 ^= v15;
    }
    if ( !v16 )
      goto LABEL_23;
LABEL_20:
    v15 = v16;
  }
  v16 = *(_QWORD *)v15;
  if ( (v14[8] & 1) == 0 )
  {
LABEL_19:
    if ( !v16 )
      goto LABEL_32;
    goto LABEL_20;
  }
  if ( v16 )
  {
    v16 ^= v15;
    goto LABEL_19;
  }
LABEL_32:
  LOBYTE(a3) = 0;
LABEL_33:
  RtlRbInsertNodeEx(v14, v15, a3, a1 + 48);
  if ( (*((_QWORD *)v14 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == a1 + 48 )
    *((_QWORD *)v14 + 2) = *(_QWORD *)(a1 + 80);
  else
    v8 = 0;
  v7 |= v8;
LABEL_8:
  if ( !v7 )
    return 1;
  if ( (unsigned __int64)KiNextTimer2DueTime > *(_QWORD *)(a1 + 72) )
  {
    KiNextTimer2DueTime = *(_QWORD *)(a1 + 72);
    _InterlockedOr(v18, 0);
  }
  if ( *(_QWORD *)(a1 + 72) > MEMORY[0xFFFFF78000000008] )
    return 1;
  *v5 = 1;
  if ( v6 )
    return 1;
  KiRemoveTimer2(a1, a2, a3);
  return 0;
}
