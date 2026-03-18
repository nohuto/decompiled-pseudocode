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

unsigned __int64 __fastcall KiRemoveTimer2(__int64 a1)
{
  unsigned __int8 *v2; // r14
  int v3; // r15d
  unsigned int v4; // ebp
  unsigned __int64 v5; // rbx
  __int64 v6; // r12
  unsigned __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 *v10; // rcx
  __int64 v11; // rdx
  char *v12; // [rsp+58h] [rbp+10h]

  v2 = (unsigned __int8 *)(a1 + 130);
  v3 = 0;
  v4 = 0;
  v5 = -1LL;
  v6 = 48LL;
  do
  {
    result = *v2;
    if ( (result & 0x10) == 0 )
    {
      v8 = 3 * (result & 3);
      v9 = *((_QWORD *)&KiTimer2Collections + v8 + 1);
      v12 = (char *)&KiTimer2Collections + 8 * v8;
      result = RtlRbRemoveNode(v12, a1 + 24 * (v4 + 1LL));
      if ( (v9 & 0xFFFFFFFFFFFFFFFEuLL) == a1 + 24 * (v4 + 1LL) )
      {
        v3 = 1;
        result = *((_QWORD *)v12 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
        if ( result )
        {
          result = *(_QWORD *)(v6 + result);
          *((_QWORD *)v12 + 2) = result;
        }
        else
        {
          *((_QWORD *)v12 + 2) = -1LL;
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
    result = *(_QWORD *)(a1 + 72);
    if ( KiNextTimer2DueTime == result )
    {
      v10 = &qword_140371250;
      v11 = 4LL;
      do
      {
        result = *v10;
        v10 += 3;
        if ( result < v5 )
          v5 = result;
        --v11;
      }
      while ( v11 );
      KiNextTimer2DueTime = v5;
    }
  }
  return result;
}
