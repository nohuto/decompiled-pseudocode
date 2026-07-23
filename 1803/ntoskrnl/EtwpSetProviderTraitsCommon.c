/*
 * XREFs of EtwpSetProviderTraitsCommon @ 0x140591004
 * Callers:
 *     EtwpSetProviderTraitsUm @ 0x140590E6C (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsKm @ 0x140603DF4 (EtwpSetProviderTraitsKm.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1400E9770 (RtlRbRemoveNode.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     strnlen @ 0x14018A290 (strnlen.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     EtwpAddRegEntryToGroup @ 0x14058F4F0 (EtwpAddRegEntryToGroup.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140590B80 (EtwpReleaseProviderTraitsReference.c)
 *     TraitsCompare @ 0x140591264 (TraitsCompare.c)
 *     EtwpGetProviderGroupFromTraits @ 0x1405912A4 (EtwpGetProviderGroupFromTraits.c)
 *     AddDecodeGuidToSessions @ 0x1407B2F50 (AddDecodeGuidToSessions.c)
 */

__int64 __fastcall EtwpSetProviderTraitsCommon(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        __int64 a4,
        PRTL_BALANCED_NODE Node,
        unsigned int a6,
        PFAST_MUTEX FastMutex,
        PRTL_RB_TREE Tree)
{
  PRTL_BALANCED_NODE v8; // rdi
  __int16 v10; // r13
  unsigned int v11; // ebx
  __int64 v12; // rdx
  bool v13; // zf
  PRTL_BALANCED_NODE v14; // r14
  _RTL_BALANCED_NODE *Root; // rbx
  unsigned __int64 v16; // rax
  BOOLEAN v17; // bp
  char v18; // r15
  int v19; // eax
  _RTL_BALANCED_NODE *v20; // rax
  __int128 *ProviderGroupFromTraits; // rax
  PRTL_BALANCED_NODE P; // [rsp+38h] [rbp-70h]
  __int128 v27; // [rsp+58h] [rbp-50h] BYREF

  v8 = Node;
  v10 = 0;
  P = Node;
  if ( a6 < 3 )
    goto LABEL_2;
  if ( WORD2(Node[1].Left) != a6 )
    goto LABEL_2;
  v12 = (unsigned int)strnlen((const char *)&Node[1].Left + 6, a6 - 2) + 3;
  v13 = (_DWORD)v12 == a6;
  if ( (unsigned int)v12 > a6 )
    goto LABEL_2;
  if ( (unsigned int)v12 < a6 )
  {
    while ( (int)v12 + 2 <= a6 )
    {
      LODWORD(v12) = *(unsigned __int16 *)((char *)&Node[1].Left + v12 + 4) + (_DWORD)v12;
      v13 = (_DWORD)v12 == a6;
      if ( (unsigned int)v12 >= a6 )
        goto LABEL_8;
    }
LABEL_2:
    v11 = -1073741566;
    goto LABEL_39;
  }
LABEL_8:
  if ( !v13 )
    goto LABEL_2;
  v14 = Node + 1;
  Node->0 = 0uLL;
  Node->ParentValue = 0LL;
  LODWORD(Node[1].Children[0]) = 1;
  ExAcquireFastMutex(FastMutex);
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
  {
    Root = Tree->Root;
    if ( !Tree->Root )
    {
LABEL_14:
      Root = 0LL;
      v17 = 0;
      v18 = 0;
LABEL_15:
      RtlRbInsertNodeEx(Tree, Root, v17, Node);
      P = 0LL;
      goto LABEL_16;
    }
    v16 = (unsigned __int64)Tree ^ (unsigned __int64)Root;
  }
  else
  {
    v16 = (unsigned __int64)Tree->Root;
    Root = Tree->Root;
  }
  if ( !v16 )
    goto LABEL_14;
  v17 = 0;
  v18 = 0;
  if ( !Root )
    goto LABEL_28;
  while ( 1 )
  {
    v19 = TraitsCompare(Node, Root);
    if ( v19 > 0 )
    {
      v20 = Root->Children[1];
      if ( !v20 )
      {
        v17 = 1;
        goto LABEL_15;
      }
      goto LABEL_25;
    }
    if ( v19 >= 0 )
      break;
    v20 = Root->Children[0];
    if ( !Root->Children[0] )
    {
      v17 = 0;
      goto LABEL_15;
    }
LABEL_25:
    Root = v20;
  }
  v18 = 1;
LABEL_28:
  if ( !v18 )
    goto LABEL_15;
  v14 = Root + 1;
  v8 = Root;
  ++LODWORD(Root[1].Children[0]);
LABEL_16:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 104), (signed __int64)v8, 0LL) )
  {
    if ( v18 )
    {
      --LODWORD(v14->Children[0]);
    }
    else
    {
      RtlRbRemoveNode(Tree, v8);
      P = v8;
    }
    v11 = -1073741823;
  }
  else
  {
    v11 = 0;
  }
  KeReleaseGuardedMutex(FastMutex);
  if ( !v11 )
  {
    if ( WORD2(v8[1].Left) == 22 && *(_DWORD *)((char *)&v8[1].Left + 6) == 33559296 )
    {
      if ( (unsigned __int8)AddDecodeGuidToSessions(a4) )
        v10 = 1024;
LABEL_38:
      _InterlockedOr16((volatile signed __int16 *)(a4 + 98), v10 | 0x200);
    }
    else
    {
      if ( *(_QWORD *)(a4 + 40) )
        goto LABEL_38;
      ProviderGroupFromTraits = (__int128 *)EtwpGetProviderGroupFromTraits();
      if ( !ProviderGroupFromTraits )
        goto LABEL_38;
      v27 = *ProviderGroupFromTraits;
      v11 = EtwpAddRegEntryToGroup(a4, &v27, a1, a2, a3);
      if ( !v11 )
        goto LABEL_38;
      EtwpReleaseProviderTraitsReference(a4);
    }
  }
LABEL_39:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v11;
}
