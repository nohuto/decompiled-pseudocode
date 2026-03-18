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

char __fastcall KiRemoveTimer2(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r14d
  unsigned int v5; // ebp
  char *v6; // r15
  unsigned __int64 v7; // rbx
  __int64 v8; // r13
  char v9; // cl
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  __int64 *v12; // rcx
  __int64 v13; // rdx
  char *v15; // [rsp+58h] [rbp+10h]

  v4 = 0;
  v5 = 0;
  v6 = (char *)(a1 + 130);
  v7 = -1LL;
  v8 = 48LL;
  do
  {
    v9 = *v6;
    LOBYTE(v10) = ~*v6;
    if ( (v10 & 0x10) != 0 )
    {
      v11 = *((_QWORD *)&KiTimer2Collections + 3 * (v9 & 3) + 1);
      v15 = (char *)&KiTimer2Collections + 24 * (v9 & 3);
      LOBYTE(v10) = RtlRbRemoveNode(v15, a1 + 24 * (v5 + 1LL), a3);
      if ( (v11 & 0xFFFFFFFFFFFFFFFEuLL) == a1 + 24 * (v5 + 1LL) )
      {
        v4 = 1;
        v10 = *((_QWORD *)v15 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v10 )
        {
          v10 = *(_QWORD *)(v10 + v8);
          *((_QWORD *)v15 + 2) = v10;
        }
        else
        {
          *((_QWORD *)v15 + 2) = -1LL;
        }
      }
    }
    ++v5;
    ++v6;
    v8 -= 16LL;
  }
  while ( v5 < 2 );
  if ( v4 )
  {
    v10 = *(_QWORD *)(a1 + 72);
    if ( KiNextTimer2DueTime == v10 )
    {
      v12 = &qword_140356750;
      v13 = 4LL;
      do
      {
        if ( *v12 < v7 )
          v7 = *v12;
        v12 += 3;
        --v13;
      }
      while ( v13 );
      KiNextTimer2DueTime = v7;
    }
  }
  return v10;
}
