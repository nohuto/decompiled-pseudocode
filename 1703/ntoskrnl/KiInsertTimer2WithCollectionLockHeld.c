/*
 * XREFs of KiInsertTimer2WithCollectionLockHeld @ 0x140049B80
 * Callers:
 *     KeSetTimer2 @ 0x140049180 (KeSetTimer2.c)
 *     KiInsertTimer2 @ 0x14004B87C (KiInsertTimer2.c)
 * Callees:
 *     KiRemoveTimer2 @ 0x140047F00 (KiRemoveTimer2.c)
 *     RtlRbInsertNodeEx @ 0x14004A340 (RtlRbInsertNodeEx.c)
 */

char __fastcall KiInsertTimer2WithCollectionLockHeld(__int64 a1, char a2, _BYTE *a3)
{
  char v4; // cl
  int v7; // edi
  int v8; // r14d
  BOOLEAN v9; // al
  _RTL_RB_TREE *v10; // rdi
  _RTL_BALANCED_NODE *Root; // rdx
  char v12; // cl
  BOOLEAN v14; // r8
  _RTL_RB_TREE *v15; // rsi
  _RTL_BALANCED_NODE *v16; // rdx
  _RTL_BALANCED_NODE *v17; // rax
  _RTL_BALANCED_NODE *v18; // rax
  signed __int32 v19[14]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(_BYTE *)(a1 + 130);
  v7 = 0;
  *a3 = 0;
  v8 = 1;
  if ( v4 == 20 || (v4 & 0x20) != 0 && *(_QWORD *)(a1 + 72) == *(_QWORD *)(a1 + 80) )
  {
    *(_BYTE *)(a1 + 130) = v4 | 0x10;
  }
  else
  {
    *(_BYTE *)(a1 + 130) = v4 & 0xEF;
    v9 = 0;
    v10 = (_RTL_RB_TREE *)((char *)&KiTimer2Collections + 24 * (v4 & 3));
    Root = v10->Root;
    if ( v10->Root )
    {
      while ( 1 )
      {
        if ( (_RTL_BALANCED_NODE *)*(_QWORD *)(a1 + 72) >= Root[2].Children[0] )
        {
          v18 = Root->Children[1];
          if ( (*(_BYTE *)&v10->0 & 1) != 0 )
          {
            if ( !v18 )
            {
LABEL_29:
              v9 = 1;
              break;
            }
            v18 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v18);
          }
          if ( !v18 )
            goto LABEL_29;
        }
        else
        {
          v18 = Root->Children[0];
          if ( (*(_BYTE *)&v10->0 & 1) != 0 )
          {
            if ( !v18 )
            {
LABEL_36:
              v9 = 0;
              break;
            }
            v18 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v18);
          }
          if ( !v18 )
            goto LABEL_36;
        }
        Root = v18;
      }
    }
    RtlRbInsertNodeEx(v10, Root, v9, (PRTL_BALANCED_NODE)(a1 + 24));
    if ( ((unsigned __int64)v10->Min & 0xFFFFFFFFFFFFFFFEuLL) == a1 + 24 )
    {
      v10[1].Root = *(_RTL_BALANCED_NODE **)(a1 + 72);
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
  v14 = 0;
  *(_BYTE *)(a1 + 131) = v12 & 0xEF;
  v15 = (_RTL_RB_TREE *)((char *)&KiTimer2Collections + 24 * (v12 & 3));
  v16 = v15->Root;
  if ( !v15->Root )
    goto LABEL_32;
  while ( (_RTL_BALANCED_NODE *)*(_QWORD *)(a1 + 80) >= v16[1].Children[1] )
  {
    v17 = v16->Children[1];
    if ( (*(_BYTE *)&v15->0 & 1) != 0 )
    {
      if ( !v17 )
      {
LABEL_22:
        v14 = 1;
        goto LABEL_32;
      }
      v17 = (_RTL_BALANCED_NODE *)((unsigned __int64)v16 ^ (unsigned __int64)v17);
    }
    if ( !v17 )
      goto LABEL_22;
LABEL_19:
    v16 = v17;
  }
  v17 = v16->Children[0];
  if ( (*(_BYTE *)&v15->0 & 1) == 0 )
  {
LABEL_18:
    if ( !v17 )
      goto LABEL_31;
    goto LABEL_19;
  }
  if ( v17 )
  {
    v17 = (_RTL_BALANCED_NODE *)((unsigned __int64)v16 ^ (unsigned __int64)v17);
    goto LABEL_18;
  }
LABEL_31:
  v14 = 0;
LABEL_32:
  RtlRbInsertNodeEx(v15, v16, v14, (PRTL_BALANCED_NODE)(a1 + 48));
  if ( ((unsigned __int64)v15->Min & 0xFFFFFFFFFFFFFFFEuLL) == a1 + 48 )
    v15[1].Root = *(_RTL_BALANCED_NODE **)(a1 + 80);
  else
    v8 = 0;
  v7 |= v8;
LABEL_8:
  if ( !v7 )
    return 1;
  if ( (unsigned __int64)KiNextTimer2DueTime > *(_QWORD *)(a1 + 72) )
  {
    KiNextTimer2DueTime = *(_QWORD *)(a1 + 72);
    _InterlockedOr(v19, 0);
  }
  if ( *(_QWORD *)(a1 + 72) > MEMORY[0xFFFFF78000000008] )
    return 1;
  *a3 = 1;
  if ( a2 )
    return 1;
  KiRemoveTimer2(a1);
  return 0;
}
