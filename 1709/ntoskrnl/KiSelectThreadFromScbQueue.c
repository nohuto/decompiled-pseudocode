/*
 * XREFs of KiSelectThreadFromScbQueue @ 0x14020C8C0
 * Callers:
 *     KiChooseLowestRankedThread @ 0x1400AB7D4 (KiChooseLowestRankedThread.c)
 *     KiSelectThreadFromScbQueue @ 0x14020C8C0 (KiSelectThreadFromScbQueue.c)
 * Callees:
 *     KiSelectThreadFromSchedulingGroup @ 0x1400D2970 (KiSelectThreadFromSchedulingGroup.c)
 *     KiSelectThreadFromScbQueue @ 0x14020C8C0 (KiSelectThreadFromScbQueue.c)
 */

__int64 __fastcall KiSelectThreadFromScbQueue(__int64 a1, __int64 a2, int a3, __int64 a4, _BYTE *a5)
{
  __int64 v6; // r10
  _QWORD *v7; // rbx
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 result; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  __int64 v14; // [rsp+68h] [rbp+20h]

  v14 = a4;
  v6 = a2;
  v7 = (_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFFEuLL);
  if ( !v7 )
    return 0LL;
  v8 = 1 << a3;
  while ( 1 )
  {
    v9 = (__int64)(v7 - 11);
    if ( *((unsigned __int16 *)v7 + 13) >= v8 )
      break;
    if ( v9 == a4 )
    {
      *a5 = 1;
      return 0LL;
    }
    if ( *(_QWORD *)(v9 + 392) )
    {
      result = KiSelectThreadFromScbQueue((int)v9 + 392, v6, a3, a4, (__int64)a5);
      if ( result )
        return result;
      v6 = a2;
      a4 = v14;
    }
    if ( !*a5 )
    {
      v11 = (_QWORD *)v7[1];
      v12 = v7;
      if ( v11 )
      {
        do
        {
          v7 = v11;
          v11 = (_QWORD *)*v11;
        }
        while ( v11 );
      }
      else
      {
        while ( 1 )
        {
          v7 = (_QWORD *)(v7[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v7 || (_QWORD *)*v7 == v12 )
            break;
          v12 = v7;
        }
      }
      if ( v7 )
        continue;
    }
    return 0LL;
  }
  return KiSelectThreadFromSchedulingGroup(v6, v9, a3);
}
