/*
 * XREFs of KiGroupSchedulingMoveThread @ 0x1400A9020
 * Callers:
 *     KiGroupSchedulingMoveThread @ 0x1400A9020 (KiGroupSchedulingMoveThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1400F7A90 (KiSearchForNewThreadOnProcessor.c)
 * Callees:
 *     KiPrcbInGroupAffinity @ 0x14003AF18 (KiPrcbInGroupAffinity.c)
 *     KiGroupSchedulingMoveThread @ 0x1400A9020 (KiGroupSchedulingMoveThread.c)
 *     KiRemoveThreadFromScbQueue @ 0x1400A91B0 (KiRemoveThreadFromScbQueue.c)
 */

__int64 __fastcall KiGroupSchedulingMoveThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 i; // rbx
  unsigned int v6; // r8d
  unsigned int v7; // r11d
  _QWORD *v8; // rsi
  _QWORD *v9; // r9
  __int64 v10; // rdi
  int v11; // r8d
  _QWORD *v12; // r9
  char v13; // r11
  __int64 v14; // rax
  __int64 result; // rax
  _QWORD **v16; // rax
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rcx

  v3 = *(_QWORD *)(a3 + 8);
  if ( (v3 & 1) != 0 )
  {
    if ( v3 == 1 )
      return 0LL;
    i = v3 ^ (a3 | 1);
  }
  else
  {
    i = *(_QWORD *)(a3 + 8);
  }
  if ( i )
  {
    while ( 1 )
    {
      v6 = *(unsigned __int16 *)(i + 26);
      if ( *(_WORD *)(i + 26) )
      {
        while ( 2 )
        {
          _BitScanReverse(&v7, v6);
          v8 = (_QWORD *)(16LL * v7 + i + 48);
          v9 = (_QWORD *)*v8;
          do
          {
            v10 = (__int64)(v9 - 27);
            if ( KiPrcbInGroupAffinity(a1, (__int64)(v9 + 45)) )
            {
              KiRemoveThreadFromScbQueue(a2, i - 88);
              result = v10;
              *(_DWORD *)(v10 + 536) = *(_DWORD *)(a1 + 36);
              return result;
            }
            v9 = (_QWORD *)*v12;
          }
          while ( v9 != v8 );
          v6 = v11 ^ (1 << v13);
          if ( v6 )
            continue;
          break;
        }
      }
      v14 = *(_QWORD *)(i + 304);
      if ( (*(_BYTE *)(i + 312) & 1) == 0 )
        goto LABEL_14;
      if ( v14 )
        break;
LABEL_16:
      v16 = *(_QWORD ***)(i + 8);
      v17 = i;
      if ( v16 )
      {
        v18 = *v16;
        for ( i = *(_QWORD *)(i + 8); v18; v18 = (_QWORD *)*v18 )
          i = (unsigned __int64)v18;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v17 )
            break;
          v17 = i;
        }
      }
      if ( !i )
        return 0LL;
    }
    v14 ^= i + 304;
LABEL_14:
    if ( v14 )
    {
      result = KiGroupSchedulingMoveThread(a1);
      if ( result )
        return result;
    }
    goto LABEL_16;
  }
  return 0LL;
}
