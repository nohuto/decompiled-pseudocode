/*
 * XREFs of KiGroupSchedulingMoveThread @ 0x14006BE40
 * Callers:
 *     KiGroupSchedulingMoveThread @ 0x14006BE40 (KiGroupSchedulingMoveThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x14006EE10 (KiSearchForNewThreadOnProcessor.c)
 * Callees:
 *     KiGroupSchedulingMoveThread @ 0x14006BE40 (KiGroupSchedulingMoveThread.c)
 *     KiPrcbInGroupAffinity @ 0x1400A88C0 (KiPrcbInGroupAffinity.c)
 *     KiRemoveThreadFromScbQueue @ 0x1400D29C0 (KiRemoveThreadFromScbQueue.c)
 */

__int64 __fastcall KiGroupSchedulingMoveThread(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 k; // rbx
  __int64 result; // rax
  unsigned int v7; // r8d
  unsigned __int64 i; // r10
  unsigned int v9; // r9d
  _QWORD *v10; // rax
  __int64 v11; // rbp
  int v12; // r8d
  char v13; // r9
  _QWORD *v14; // r11
  _QWORD **v15; // rax
  unsigned __int64 v16; // rcx
  _QWORD *j; // rax
  _QWORD *v18; // [rsp+58h] [rbp+20h]

  k = *(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( !k )
    return 0LL;
  while ( 1 )
  {
    v7 = *(unsigned __int16 *)(k + 26);
    for ( i = k - 88; v7; v7 = v12 ^ (1 << v13) )
    {
      _BitScanReverse(&v9, v7);
      v10 = *(_QWORD **)(i + 16LL * v9 + 136);
      v18 = v10;
      do
      {
        v11 = (__int64)(v10 - 27);
        if ( (unsigned int)KiPrcbInGroupAffinity(a1, v10 + 45) )
        {
          KiRemoveThreadFromScbQueue(a2, i, v11);
          result = v11;
          *(_DWORD *)(v11 + 536) = *(_DWORD *)(a1 + 36);
          return result;
        }
        v10 = (_QWORD *)*v18;
        v18 = v10;
      }
      while ( v10 != v14 );
    }
    if ( *(_QWORD *)(i + 392) )
    {
      result = KiGroupSchedulingMoveThread(a1, a2);
      if ( result )
        break;
    }
    v15 = *(_QWORD ***)(k + 8);
    v16 = k;
    if ( v15 )
    {
      k = *(_QWORD *)(k + 8);
      for ( j = *v15; j; j = (_QWORD *)*j )
        k = (unsigned __int64)j;
    }
    else
    {
      for ( k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL; k; k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)k == v16 )
          break;
        v16 = k;
      }
    }
    if ( !k )
      return 0LL;
  }
  return result;
}
