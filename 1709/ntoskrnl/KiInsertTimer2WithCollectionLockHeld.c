/*
 * XREFs of KiInsertTimer2WithCollectionLockHeld @ 0x14005DD20
 * Callers:
 *     KeSetTimer2 @ 0x1400605A0 (KeSetTimer2.c)
 *     KiInsertTimer2 @ 0x1400E339C (KiInsertTimer2.c)
 * Callees:
 *     KiRemoveTimer2 @ 0x14005DBF0 (KiRemoveTimer2.c)
 *     RtlRbInsertNodeEx @ 0x14005E640 (RtlRbInsertNodeEx.c)
 */

char __fastcall KiInsertTimer2WithCollectionLockHeld(__int64 a1, char a2, unsigned __int64 a3)
{
  char v3; // r9
  _BYTE *v4; // r15
  int v6; // ebx
  int v8; // ebp
  __int64 v9; // rbx
  char *v10; // rsi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  char v14; // cl
  char *v15; // r14
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  signed __int32 v19[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_BYTE *)(a1 + 130);
  v4 = (_BYTE *)a3;
  v6 = 0;
  *(_BYTE *)a3 = 0;
  v8 = 1;
  if ( v3 == 20 || (v3 & 0x20) != 0 && *(_QWORD *)(a1 + 72) == *(_QWORD *)(a1 + 80) )
  {
    *(_BYTE *)(a1 + 130) = v3 | 0x10;
  }
  else
  {
    v9 = a1 + 24;
    LOBYTE(a3) = 0;
    *(_BYTE *)(a1 + 130) = v3 & 0xEF;
    v10 = (char *)&KiTimer2Collections + 24 * (v3 & 3);
    v11 = *(_QWORD *)v10;
    if ( *(_QWORD *)v10 )
    {
      v12 = *(_QWORD *)(a1 + 72);
      while ( 1 )
      {
        if ( v12 >= *(_QWORD *)(v11 + 48) )
        {
          v13 = *(_QWORD *)(v11 + 8);
          if ( (v10[8] & 1) != 0 )
          {
            if ( !v13 )
            {
LABEL_12:
              a3 = 1LL;
              break;
            }
            v13 ^= v11;
          }
          if ( !v13 )
            goto LABEL_12;
        }
        else
        {
          v13 = *(_QWORD *)v11;
          if ( (v10[8] & 1) != 0 )
          {
            if ( !v13 )
            {
LABEL_38:
              LOBYTE(a3) = 0;
              break;
            }
            v13 ^= v11;
          }
          if ( !v13 )
            goto LABEL_38;
        }
        v11 = v13;
      }
    }
    RtlRbInsertNodeEx(v10, v11, a3, v9);
    if ( (*((_QWORD *)v10 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == v9 )
    {
      v6 = 1;
      *((_QWORD *)v10 + 2) = *(_QWORD *)(a1 + 72);
    }
    else
    {
      v6 = 0;
    }
  }
  v14 = *(_BYTE *)(a1 + 131);
  if ( *(_QWORD *)(a1 + 80) == -1LL )
  {
    *(_BYTE *)(a1 + 131) = v14 | 0x10;
    goto LABEL_29;
  }
  LOBYTE(a3) = 0;
  *(_BYTE *)(a1 + 131) = v14 & 0xEF;
  v15 = (char *)&KiTimer2Collections + 24 * (v14 & 3);
  v16 = *(_QWORD *)v15;
  if ( !*(_QWORD *)v15 )
    goto LABEL_26;
  a3 = *(_QWORD *)(a1 + 80);
  while ( a3 >= *(_QWORD *)(v16 + 32) )
  {
    v17 = *(_QWORD *)(v16 + 8);
    if ( (v15[8] & 1) != 0 )
    {
      if ( !v17 )
      {
LABEL_24:
        a3 = 1LL;
        goto LABEL_26;
      }
      v17 ^= v16;
    }
    if ( !v17 )
      goto LABEL_24;
LABEL_21:
    v16 = v17;
  }
  v17 = *(_QWORD *)v16;
  if ( (v15[8] & 1) == 0 )
  {
LABEL_20:
    if ( !v17 )
      goto LABEL_25;
    goto LABEL_21;
  }
  if ( v17 )
  {
    v17 ^= v16;
    goto LABEL_20;
  }
LABEL_25:
  LOBYTE(a3) = 0;
LABEL_26:
  RtlRbInsertNodeEx(v15, v16, a3, a1 + 48);
  if ( (*((_QWORD *)v15 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == a1 + 48 )
    *((_QWORD *)v15 + 2) = *(_QWORD *)(a1 + 80);
  else
    v8 = 0;
  v6 |= v8;
LABEL_29:
  if ( !v6 )
    return 1;
  if ( (unsigned __int64)KiNextTimer2DueTime > *(_QWORD *)(a1 + 72) )
  {
    KiNextTimer2DueTime = *(_QWORD *)(a1 + 72);
    _InterlockedOr(v19, 0);
  }
  if ( *(_QWORD *)(a1 + 72) > MEMORY[0xFFFFF78000000008] )
    return 1;
  *v4 = 1;
  if ( a2 )
    return 1;
  KiRemoveTimer2(a1);
  return 0;
}
