/*
 * XREFs of sub_18001BB44 @ 0x18001BB44
 * Callers:
 *     sub_180038B4C @ 0x180038B4C (sub_180038B4C.c)
 *     sub_18008350C @ 0x18008350C (sub_18008350C.c)
 * Callees:
 *     sub_18001BD90 @ 0x18001BD90 (sub_18001BD90.c)
 *     RtlRbInsertNodeEx @ 0x18001E790 (RtlRbInsertNodeEx.c)
 *     sub_180030384 @ 0x180030384 (sub_180030384.c)
 */

BOOLEAN __fastcall sub_18001BB44(__int64 a1, __int64 a2)
{
  BOOLEAN v2; // bl
  int v4; // eax
  PRTL_BALANCED_NODE Root; // rdi
  int v6; // esi
  __int64 v7; // r8
  _RTL_BALANCED_NODE *v8; // rax
  PRTL_BALANCED_NODE v9; // rdi
  int v10; // esi
  _RTL_BALANCED_NODE *v11; // rax
  BOOLEAN result; // al
  int v13; // [rsp+30h] [rbp+8h] BYREF
  int v14; // [rsp+34h] [rbp+Ch]

  v7 = *(unsigned int *)(a2 + 8);
  v2 = 0;
  *(_DWORD *)(a1 + 128) = v7;
  v4 = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 64) = v4;
  Root = Tree.Root;
  v6 = (__int64)Tree.Min & 1;
  v13 = v7;
  LOBYTE(v7) = 0;
  v14 = v4;
  if ( Tree.Root )
  {
    while ( 1 )
    {
      if ( (int)sub_18001BD90(&v13, Root, v7) < 0 )
      {
        v8 = Root->Children[0];
        if ( v6 )
        {
          if ( !v8 )
          {
LABEL_8:
            LOBYTE(v7) = 0;
            break;
          }
          v8 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v8);
        }
        if ( !v8 )
          goto LABEL_8;
      }
      else
      {
        v8 = Root->Children[1];
        if ( v6 )
        {
          if ( !v8 )
          {
LABEL_9:
            LOBYTE(v7) = 1;
            break;
          }
          v8 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v8);
        }
        if ( !v8 )
          goto LABEL_9;
      }
      Root = v8;
    }
  }
  RtlRbInsertNodeEx(&Tree, Root, v7, (PRTL_BALANCED_NODE)(a1 + 224));
  v9 = stru_18015C208.Root;
  v10 = (__int64)stru_18015C208.Min & 1;
  if ( stru_18015C208.Root )
  {
    while ( 1 )
    {
      if ( (int)sub_180030384(*(_QWORD *)(a1 + 48), v9) >= 0 )
      {
        v11 = v9->Children[1];
        if ( v10 )
        {
          if ( !v11 )
          {
LABEL_17:
            v2 = 1;
            break;
          }
          v11 = (_RTL_BALANCED_NODE *)((unsigned __int64)v9 ^ (unsigned __int64)v11);
        }
        if ( !v11 )
          goto LABEL_17;
      }
      else
      {
        v11 = v9->Children[0];
        if ( v10 )
        {
          if ( !v11 )
            break;
          v11 = (_RTL_BALANCED_NODE *)((unsigned __int64)v9 ^ (unsigned __int64)v11);
        }
        if ( !v11 )
          break;
      }
      v9 = v11;
    }
  }
  result = RtlRbInsertNodeEx(&stru_18015C208, v9, v2, (PRTL_BALANCED_NODE)(a1 + 200));
  *(_DWORD *)(a1 + 104) |= 0x80u;
  return result;
}
