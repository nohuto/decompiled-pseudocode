/*
 * XREFs of MiIterateOverPartitions @ 0x14021F6A8
 * Callers:
 *     MiResumeFromHibernate @ 0x14021872C (MiResumeFromHibernate.c)
 *     MiLockAllMemoryLists @ 0x14022AE90 (MiLockAllMemoryLists.c)
 *     MiUnlockAllMemoryLists @ 0x14022B660 (MiUnlockAllMemoryLists.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiIterateOverPartitions(void (__fastcall *a1)(__int64, __int64), __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // r9d
  unsigned int v6; // edx
  int v7; // r10d
  char *v8; // r11
  unsigned int v9; // esi
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  __int64 v12; // r8
  char *v13; // rcx
  __int64 i; // rax
  unsigned int SizeOfBitMap; // edx
  __int64 result; // rax
  __int64 v17; // rcx

  v2 = 0;
  while ( 1 )
  {
    v5 = v2 < qword_140388AD0->SizeOfBitMap ? v2 : 0;
    v6 = qword_140388AD0->SizeOfBitMap - 1;
    v7 = ((__int64)qword_140388AD0->Buffer & 4) != 0LL ? 0x20 : 0;
    v8 = (char *)qword_140388AD0->Buffer - (((__int64)qword_140388AD0->Buffer & 4) != 0 ? 4 : 0);
    while ( 1 )
    {
      v9 = v7 + v6;
      v10 = v7 + v5;
      if ( v6 - v5 == -1 )
        goto LABEL_4;
      v12 = (1LL << (v10 & 0x3F)) - 1;
      v13 = &v8[8 * ((unsigned __int64)v10 >> 6)];
      for ( i = v12 | ~*(_QWORD *)v13; i == -1; i = ~*(_QWORD *)v13 )
      {
        v13 += 8;
        if ( v13 > &v8[8 * ((unsigned __int64)v9 >> 6)] )
          goto LABEL_4;
      }
      _BitScanForward64((unsigned __int64 *)&i, ~i);
      v11 = i + ((unsigned int)((v13 - v8) >> 3) << 6);
      if ( v11 > v9 )
      {
LABEL_4:
        v11 = -1;
      }
      else if ( v11 != -1 )
      {
        break;
      }
      if ( !v5 )
        break;
      SizeOfBitMap = v2 + 1;
      if ( v2 + 1 > qword_140388AD0->SizeOfBitMap )
        SizeOfBitMap = qword_140388AD0->SizeOfBitMap;
      v6 = SizeOfBitMap - 1;
      v5 = 0;
    }
    result = v11 - v7;
    if ( v11 == -1 )
      result = 0xFFFFFFFFLL;
    if ( (unsigned int)result < v2 || (_DWORD)result == -1 )
      return result;
    v2 = result + 1;
    v17 = *(_QWORD *)(qword_140388AF0 + 8LL * (unsigned int)result);
    if ( (*(_DWORD *)(v17 + 4) & 2) != 0 )
      a1(v17, a2);
  }
}
