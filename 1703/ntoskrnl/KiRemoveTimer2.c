/*
 * XREFs of KiRemoveTimer2 @ 0x140047F00
 * Callers:
 *     KiTimer2Expiration @ 0x140047B60 (KiTimer2Expiration.c)
 *     KeSetTimer2 @ 0x140049180 (KeSetTimer2.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x140049B80 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KeCancelTimer2 @ 0x14012ACD0 (KeCancelTimer2.c)
 *     KeDisableTimer2 @ 0x14012ADA8 (KeDisableTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x140143E38 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140048460 (RtlRbRemoveNode.c)
 */

char __fastcall KiRemoveTimer2(__int64 a1)
{
  int v2; // r14d
  unsigned int v3; // ebp
  char *v4; // r15
  unsigned __int64 v5; // rbx
  __int64 v6; // r13
  char v7; // cl
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 *v10; // rcx
  __int64 v11; // rdx
  _RTL_RB_TREE *v13; // [rsp+58h] [rbp+10h]

  v2 = 0;
  v3 = 0;
  v4 = (char *)(a1 + 130);
  v5 = -1LL;
  v6 = 48LL;
  do
  {
    v7 = *v4;
    LOBYTE(v8) = ~*v4;
    if ( (v8 & 0x10) != 0 )
    {
      v9 = *((_QWORD *)&KiTimer2Collections + 3 * (v7 & 3) + 1);
      v13 = (_RTL_RB_TREE *)((char *)&KiTimer2Collections + 24 * (v7 & 3));
      LOBYTE(v8) = RtlRbRemoveNode(v13, (PRTL_BALANCED_NODE)(a1 + 24 * (v3 + 1LL)));
      if ( (v9 & 0xFFFFFFFFFFFFFFFEuLL) == a1 + 24 * (v3 + 1LL) )
      {
        v2 = 1;
        v8 = (unsigned __int64)v13->Min & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v8 )
        {
          v8 = *(_QWORD *)(v8 + v6);
          v13[1].Root = (_RTL_BALANCED_NODE *)v8;
        }
        else
        {
          v13[1].Root = (_RTL_BALANCED_NODE *)-1LL;
        }
      }
    }
    ++v3;
    ++v4;
    v6 -= 16LL;
  }
  while ( v3 < 2 );
  if ( v2 )
  {
    v8 = *(_QWORD *)(a1 + 72);
    if ( KiNextTimer2DueTime == v8 )
    {
      v10 = &qword_140356750;
      v11 = 4LL;
      do
      {
        if ( *v10 < v5 )
          v5 = *v10;
        v10 += 3;
        --v11;
      }
      while ( v11 );
      KiNextTimer2DueTime = v5;
    }
  }
  return v8;
}
