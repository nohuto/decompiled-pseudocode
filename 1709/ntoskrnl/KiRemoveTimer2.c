/*
 * XREFs of KiRemoveTimer2 @ 0x14005DBF0
 * Callers:
 *     KiInsertTimer2WithCollectionLockHeld @ 0x14005DD20 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KeSetTimer2 @ 0x1400605A0 (KeSetTimer2.c)
 *     KiTimer2Expiration @ 0x140092BD0 (KiTimer2Expiration.c)
 *     KeDisableTimer2 @ 0x1400E36A0 (KeDisableTimer2.c)
 *     KeCancelTimer2 @ 0x1400E3990 (KeCancelTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x14014A20C (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14005EF60 (RtlRbRemoveNode.c)
 */

char __fastcall KiRemoveTimer2(__int64 a1)
{
  _BYTE *v2; // r14
  int v3; // r15d
  unsigned int v4; // ebp
  unsigned __int64 v5; // rbx
  __int64 v6; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  __int64 *v9; // rcx
  __int64 v10; // rdx
  _RTL_RB_TREE *v12; // [rsp+58h] [rbp+10h]

  v2 = (_BYTE *)(a1 + 130);
  v3 = 0;
  v4 = 0;
  v5 = -1LL;
  v6 = 48LL;
  do
  {
    LOBYTE(v7) = *v2;
    if ( (*v2 & 0x10) == 0 )
    {
      v8 = *((_QWORD *)&KiTimer2Collections + 3 * (*v2 & 3) + 1);
      v12 = (_RTL_RB_TREE *)((char *)&KiTimer2Collections + 24 * (*v2 & 3));
      LOBYTE(v7) = RtlRbRemoveNode(v12, (PRTL_BALANCED_NODE)(a1 + 24 * (v4 + 1LL)));
      if ( (v8 & 0xFFFFFFFFFFFFFFFEuLL) == a1 + 24 * (v4 + 1LL) )
      {
        v3 = 1;
        v7 = (unsigned __int64)v12->Min & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v7 )
        {
          v7 = *(_QWORD *)(v6 + v7);
          v12[1].Root = (_RTL_BALANCED_NODE *)v7;
        }
        else
        {
          v12[1].Root = (_RTL_BALANCED_NODE *)-1LL;
        }
      }
    }
    ++v4;
    ++v2;
    v6 -= 16LL;
  }
  while ( v4 < 2 );
  if ( v3 )
  {
    v7 = *(_QWORD *)(a1 + 72);
    if ( KiNextTimer2DueTime == v7 )
    {
      v9 = &qword_140371250;
      v10 = 4LL;
      do
      {
        v7 = *v9;
        v9 += 3;
        if ( v7 < v5 )
          v5 = v7;
        --v10;
      }
      while ( v10 );
      KiNextTimer2DueTime = v5;
    }
  }
  return v7;
}
