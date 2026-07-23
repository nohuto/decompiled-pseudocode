/*
 * XREFs of KiInsertTimer2WithCollectionLockHeld @ 0x1400E7BC0
 * Callers:
 *     KeSetTimer2 @ 0x140037E50 (KeSetTimer2.c)
 *     KiInsertTimer2 @ 0x1400BBA54 (KiInsertTimer2.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 *     KiRemoveTimer2 @ 0x1400E9160 (KiRemoveTimer2.c)
 */

__int64 __fastcall KiInsertTimer2WithCollectionLockHeld(__int64 a1, char a2, _BYTE *a3, _BYTE *a4)
{
  char v4; // r10
  _BYTE *v5; // rbp
  unsigned __int8 v7; // r12
  int v9; // r15d
  int v10; // esi
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  _RTL_RB_TREE *v14; // rdi
  BOOLEAN v15; // r8
  int v16; // ecx
  unsigned __int64 v17; // rax
  _RTL_BALANCED_NODE *Min; // rcx
  __int64 v19; // rax
  char v20; // cl
  _RTL_RB_TREE *v21; // rdi
  __int64 v22; // rax
  unsigned __int64 Root; // rdx
  BOOLEAN v24; // r8
  int v25; // ecx
  unsigned __int64 v26; // rax
  _RTL_BALANCED_NODE *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  signed __int32 v31[8]; // [rsp+0h] [rbp-58h] BYREF

  v4 = *(_BYTE *)(a1 + 130);
  v5 = a4;
  v7 = 1;
  v9 = 0;
  *a3 = 0;
  v10 = 0;
  *a4 = 0;
  if ( v4 == 20 || (v4 & 0x20) != 0 && *(_QWORD *)(a1 + 72) == *(_QWORD *)(a1 + 80) )
  {
    *(_BYTE *)(a1 + 130) = v4 | 0x10;
  }
  else
  {
    v11 = a1 + 24;
    *(_BYTE *)(a1 + 130) = v4 & 0xEF;
    v12 = *((_QWORD *)&KiTimer2Collections + 3 * (v4 & 3) + 1);
    v13 = *((_QWORD *)&KiTimer2Collections + 3 * (v4 & 3));
    v14 = (_RTL_RB_TREE *)((char *)&KiTimer2Collections + 24 * (v4 & 3));
    if ( (v12 & 1) != 0 )
    {
      if ( v13 )
        v13 ^= (unsigned __int64)v14;
      else
        v13 = 0LL;
    }
    v15 = 0;
    v16 = v12 & 1;
    if ( v13 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(a1 + 72) < *(_QWORD *)(v13 + 48) )
        {
          v17 = *(_QWORD *)v13;
          if ( v16 )
          {
            if ( !v17 )
              goto LABEL_20;
            v17 ^= v13;
          }
          if ( !v17 )
          {
LABEL_20:
            v15 = 0;
            break;
          }
        }
        else
        {
          v17 = *(_QWORD *)(v13 + 8);
          if ( v16 )
          {
            if ( !v17 )
              goto LABEL_14;
            v17 ^= v13;
          }
          if ( !v17 )
          {
LABEL_14:
            v15 = 1;
            break;
          }
        }
        v13 = v17;
      }
    }
    RtlRbInsertNodeEx(v14, (PRTL_BALANCED_NODE)v13, v15, (PRTL_BALANCED_NODE)(a1 + 24));
    Min = v14->Min;
    if ( ((unsigned __int8)Min & 1) != 0 )
    {
      if ( Min == (_RTL_BALANCED_NODE *)1 )
        v19 = 0LL;
      else
        v19 = (unsigned __int64)Min ^ ((unsigned __int64)v14 | 1);
    }
    else
    {
      v19 = (__int64)v14->Min;
    }
    if ( v19 == v11 )
    {
      v14[1].Root = *(_RTL_BALANCED_NODE **)(a1 + 72);
      v10 = 1;
    }
    else
    {
      v10 = 0;
    }
  }
  v20 = *(_BYTE *)(a1 + 131);
  if ( *(_QWORD *)(a1 + 80) == -1LL )
  {
    *(_BYTE *)(a1 + 131) = v20 | 0x10;
  }
  else
  {
    *(_BYTE *)(a1 + 131) = v20 & 0xEF;
    v21 = (_RTL_RB_TREE *)(0x140000000LL + 24LL * (v20 & 3) + 3884192);
    v22 = *(_QWORD *)(0x140000008LL + 24LL * (v20 & 3) + 3884192);
    Root = (unsigned __int64)v21->Root;
    if ( (v22 & 1) != 0 )
    {
      if ( Root )
        Root ^= (unsigned __int64)v21;
      else
        Root = 0LL;
    }
    v24 = 0;
    v25 = v22 & 1;
    if ( Root )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(a1 + 80) < *(_QWORD *)(Root + 32) )
        {
          v26 = *(_QWORD *)Root;
          if ( v25 )
          {
            if ( !v26 )
              goto LABEL_47;
            v26 ^= Root;
          }
          if ( !v26 )
          {
LABEL_47:
            v24 = 0;
            break;
          }
        }
        else
        {
          v26 = *(_QWORD *)(Root + 8);
          if ( v25 )
          {
            if ( !v26 )
              goto LABEL_41;
            v26 ^= Root;
          }
          if ( !v26 )
          {
LABEL_41:
            v24 = 1;
            break;
          }
        }
        Root = v26;
      }
    }
    RtlRbInsertNodeEx(v21, (PRTL_BALANCED_NODE)Root, v24, (PRTL_BALANCED_NODE)(a1 + 48));
    v27 = v21->Min;
    if ( ((unsigned __int8)v27 & 1) != 0 )
    {
      if ( v27 == (_RTL_BALANCED_NODE *)1 )
        v28 = 0LL;
      else
        v28 = (unsigned __int64)v27 ^ ((unsigned __int64)v21 | 1);
    }
    else
    {
      v28 = (__int64)v21->Min;
    }
    if ( v28 == a1 + 48 )
    {
      v9 = 1;
      v21[1].Root = *(_RTL_BALANCED_NODE **)(a1 + 80);
    }
    v5 = a4;
    v10 |= v9;
  }
  if ( v10 )
  {
    if ( (unsigned __int64)KiNextTimer2DueTime > *(_QWORD *)(a1 + 72) )
    {
      KiNextTimer2DueTime = *(_QWORD *)(a1 + 72);
      _InterlockedOr(v31, 0);
    }
    if ( *(_QWORD *)(a1 + 72) <= MEMORY[0xFFFFF78000000008] )
    {
      *a3 = 1;
      if ( !a2 )
      {
        KiRemoveTimer2(a1);
        v7 = 0;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 129) & 4) != 0 && _InterlockedIncrement(&KiHrTimerActiveCount) == 1 )
  {
    v29 = *(_QWORD *)(KiProcessorBlock[KiClockTimerOwner] + 25016);
    if ( v29 && (KiVelocityFlags & 0x40) != 0 && *(_BYTE *)(v29 + 27) != 1 )
    {
      *(_BYTE *)(v29 + 27) = 1;
      *v5 = 1;
      return v7;
    }
    *v5 = 0;
  }
  return v7;
}
