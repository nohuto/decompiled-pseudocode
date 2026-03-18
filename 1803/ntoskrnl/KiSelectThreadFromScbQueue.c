/*
 * XREFs of KiSelectThreadFromScbQueue @ 0x14024ABA4
 * Callers:
 *     KiChooseLowestRankedThread @ 0x1400A8E28 (KiChooseLowestRankedThread.c)
 *     KiSelectThreadFromScbQueue @ 0x14024ABA4 (KiSelectThreadFromScbQueue.c)
 * Callees:
 *     KiSelectThreadFromSchedulingGroup @ 0x1400A9160 (KiSelectThreadFromSchedulingGroup.c)
 *     KiSelectThreadFromScbQueue @ 0x14024ABA4 (KiSelectThreadFromScbQueue.c)
 */

__int64 __fastcall KiSelectThreadFromScbQueue(__int64 a1, __int64 a2, int a3, __int64 a4, _BYTE *a5)
{
  __int64 v5; // rax
  __int64 v7; // r10
  _QWORD *i; // rbx
  unsigned int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax
  _QWORD **v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  __int64 v18; // [rsp+68h] [rbp+20h]

  v18 = a4;
  v5 = *(_QWORD *)(a1 + 8);
  v7 = a2;
  if ( (v5 & 1) != 0 )
  {
    if ( v5 == 1 )
      return 0LL;
    i = (_QWORD *)(v5 ^ (a1 | 1));
  }
  else
  {
    i = *(_QWORD **)(a1 + 8);
  }
  if ( i )
  {
    v9 = 1 << a3;
    while ( 1 )
    {
      v10 = (__int64)(i - 11);
      if ( *((unsigned __int16 *)i + 13) >= v9 )
        return KiSelectThreadFromSchedulingGroup(v7, v10, a3);
      if ( v10 == a4 )
      {
        *a5 = 1;
        return 0LL;
      }
      v11 = v10 + 392;
      v12 = *(_QWORD *)(v10 + 392);
      if ( (*(_BYTE *)(v10 + 400) & 1) == 0 )
        goto LABEL_12;
      if ( v12 )
        break;
LABEL_15:
      if ( !*a5 )
      {
        v14 = (_QWORD **)i[1];
        v15 = i;
        if ( v14 )
        {
          v16 = *v14;
          for ( i = (_QWORD *)i[1]; v16; v16 = (_QWORD *)*v16 )
            i = v16;
        }
        else
        {
          while ( 1 )
          {
            i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !i || (_QWORD *)*i == v15 )
              break;
            v15 = i;
          }
        }
        if ( i )
          continue;
      }
      return 0LL;
    }
    v12 ^= v11;
LABEL_12:
    if ( v12 )
    {
      result = KiSelectThreadFromScbQueue(v11, v7, a3, a4, (__int64)a5);
      if ( result )
        return result;
      v7 = a2;
      a4 = v18;
    }
    goto LABEL_15;
  }
  return 0LL;
}
