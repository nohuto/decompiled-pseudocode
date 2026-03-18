/*
 * XREFs of KiGroupSchedulingMoveThread @ 0x140114B7C
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x1400EBB90 (KiSearchForNewThreadOnProcessor.c)
 *     KiGroupSchedulingMoveThread @ 0x140114B7C (KiGroupSchedulingMoveThread.c)
 * Callees:
 *     KiPrcbInGroupAffinity @ 0x140113B68 (KiPrcbInGroupAffinity.c)
 *     KiGroupSchedulingMoveThread @ 0x140114B7C (KiGroupSchedulingMoveThread.c)
 *     KiRemoveThreadFromScbQueue @ 0x140114C6C (KiRemoveThreadFromScbQueue.c)
 */

__int64 __fastcall KiGroupSchedulingMoveThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 v5; // rbx
  __int64 result; // rax
  unsigned int v7; // r8d
  unsigned int v8; // r11d
  _QWORD *v9; // rsi
  _QWORD *v10; // r9
  __int64 v11; // rdi
  int v12; // r8d
  _QWORD *v13; // r9
  char v14; // r11
  _QWORD *v15; // rax
  unsigned __int64 v16; // rcx

  v3 = a2;
  v5 = *(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( !v5 )
    return 0LL;
  while ( 1 )
  {
    v7 = *(unsigned __int16 *)(v5 + 26);
    if ( *(_WORD *)(v5 + 26) )
    {
      do
      {
        _BitScanReverse(&v8, v7);
        v9 = (_QWORD *)(16LL * v8 + v5 + 48);
        v10 = (_QWORD *)*v9;
        do
        {
          v11 = (__int64)(v10 - 27);
          if ( KiPrcbInGroupAffinity(a1, (__int64)(v10 + 45)) )
          {
            KiRemoveThreadFromScbQueue(a2, v5 - 88);
            result = v11;
            *(_DWORD *)(v11 + 536) = *(_DWORD *)(a1 + 36);
            return result;
          }
          v10 = (_QWORD *)*v13;
        }
        while ( v10 != v9 );
        v7 = v12 ^ (1 << v14);
      }
      while ( v7 );
      v3 = a2;
    }
    if ( *(_QWORD *)(v5 + 304) )
    {
      result = KiGroupSchedulingMoveThread(a1, v3, v5 + 304);
      if ( result )
        break;
    }
    v15 = *(_QWORD **)(v5 + 8);
    v16 = v5;
    if ( v15 )
    {
      do
      {
        v5 = (unsigned __int64)v15;
        v15 = (_QWORD *)*v15;
      }
      while ( v15 );
    }
    else
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v5 || *(_QWORD *)v5 == v16 )
          break;
        v16 = v5;
      }
    }
    if ( !v5 )
      return 0LL;
    v3 = a2;
  }
  return result;
}
