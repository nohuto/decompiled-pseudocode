/*
 * XREFs of KiInsertTimer2WithCollectionLockHeld @ 0x14005DD20
 * Callers:
 *     KeSetTimer2 @ 0x1400605A0 (KeSetTimer2.c)
 *     KiInsertTimer2 @ 0x1400E339C (KiInsertTimer2.c)
 * Callees:
 *     KiRemoveTimer2 @ 0x14005DBF0 (KiRemoveTimer2.c)
 *     RtlRbInsertNodeEx @ 0x14005E640 (RtlRbInsertNodeEx.c)
 */

char __fastcall KiInsertTimer2WithCollectionLockHeld(__int64 a1, char a2, _BYTE *a3)
{
  char v3; // r9
  int v6; // ebx
  int v8; // ebp
  _RTL_BALANCED_NODE *v9; // rbx
  BOOLEAN v10; // r8
  _RTL_RB_TREE *v11; // rsi
  _RTL_BALANCED_NODE *Root; // rdx
  _RTL_BALANCED_NODE *v13; // rcx
  _RTL_BALANCED_NODE *v14; // rax
  char v15; // cl
  BOOLEAN v16; // r8
  _RTL_RB_TREE *v17; // r14
  _RTL_BALANCED_NODE *v18; // rdx
  _RTL_BALANCED_NODE *v19; // rax
  signed __int32 v21[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_BYTE *)(a1 + 130);
  v6 = 0;
  *a3 = 0;
  v8 = 1;
  if ( v3 == 20 || (v3 & 0x20) != 0 && *(_QWORD *)(a1 + 72) == *(_QWORD *)(a1 + 80) )
  {
    *(_BYTE *)(a1 + 130) = v3 | 0x10;
  }
  else
  {
    v9 = (_RTL_BALANCED_NODE *)(a1 + 24);
    v10 = 0;
    *(_BYTE *)(a1 + 130) = v3 & 0xEF;
    v11 = (_RTL_RB_TREE *)((char *)&KiTimer2Collections + 24 * (v3 & 3));
    Root = v11->Root;
    if ( v11->Root )
    {
      v13 = *(_RTL_BALANCED_NODE **)(a1 + 72);
      while ( 1 )
      {
        if ( v13 >= Root[2].Children[0] )
        {
          v14 = Root->Children[1];
          if ( (*(_BYTE *)&v11->0 & 1) != 0 )
          {
            if ( !v14 )
            {
LABEL_12:
              v10 = 1;
              break;
            }
            v14 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v14);
          }
          if ( !v14 )
            goto LABEL_12;
        }
        else
        {
          v14 = Root->Children[0];
          if ( (*(_BYTE *)&v11->0 & 1) != 0 )
          {
            if ( !v14 )
            {
LABEL_37:
              v10 = 0;
              break;
            }
            v14 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v14);
          }
          if ( !v14 )
            goto LABEL_37;
        }
        Root = v14;
      }
    }
    RtlRbInsertNodeEx(v11, Root, v10, v9);
    if ( (_RTL_BALANCED_NODE *)((unsigned __int64)v11->Min & 0xFFFFFFFFFFFFFFFEuLL) == v9 )
    {
      v6 = 1;
      v11[1].Root = *(_RTL_BALANCED_NODE **)(a1 + 72);
    }
    else
    {
      v6 = 0;
    }
  }
  v15 = *(_BYTE *)(a1 + 131);
  if ( *(_QWORD *)(a1 + 80) == -1LL )
  {
    *(_BYTE *)(a1 + 131) = v15 | 0x10;
    goto LABEL_28;
  }
  v16 = 0;
  *(_BYTE *)(a1 + 131) = v15 & 0xEF;
  v17 = (_RTL_RB_TREE *)((char *)&KiTimer2Collections + 24 * (v15 & 3));
  v18 = v17->Root;
  if ( !v17->Root )
    goto LABEL_25;
  while ( (_RTL_BALANCED_NODE *)*(_QWORD *)(a1 + 80) >= v18[1].Children[1] )
  {
    v19 = v18->Children[1];
    if ( (*(_BYTE *)&v17->0 & 1) != 0 )
    {
      if ( !v19 )
      {
LABEL_23:
        v16 = 1;
        goto LABEL_25;
      }
      v19 = (_RTL_BALANCED_NODE *)((unsigned __int64)v18 ^ (unsigned __int64)v19);
    }
    if ( !v19 )
      goto LABEL_23;
LABEL_20:
    v18 = v19;
  }
  v19 = v18->Children[0];
  if ( (*(_BYTE *)&v17->0 & 1) == 0 )
  {
LABEL_19:
    if ( !v19 )
      goto LABEL_24;
    goto LABEL_20;
  }
  if ( v19 )
  {
    v19 = (_RTL_BALANCED_NODE *)((unsigned __int64)v18 ^ (unsigned __int64)v19);
    goto LABEL_19;
  }
LABEL_24:
  v16 = 0;
LABEL_25:
  RtlRbInsertNodeEx(v17, v18, v16, (PRTL_BALANCED_NODE)(a1 + 48));
  if ( ((unsigned __int64)v17->Min & 0xFFFFFFFFFFFFFFFEuLL) == a1 + 48 )
    v17[1].Root = *(_RTL_BALANCED_NODE **)(a1 + 80);
  else
    v8 = 0;
  v6 |= v8;
LABEL_28:
  if ( !v6 )
    return 1;
  if ( (unsigned __int64)KiNextTimer2DueTime > *(_QWORD *)(a1 + 72) )
  {
    KiNextTimer2DueTime = *(_QWORD *)(a1 + 72);
    _InterlockedOr(v21, 0);
  }
  if ( *(_QWORD *)(a1 + 72) > MEMORY[0xFFFFF78000000008] )
    return 1;
  *a3 = 1;
  if ( a2 )
    return 1;
  KiRemoveTimer2(a1);
  return 0;
}
