/*
 * XREFs of MiGetPrototypePteRanges @ 0x1400BFCB4
 * Callers:
 *     MiReplacePageOfProtoPool @ 0x1400BF848 (MiReplacePageOfProtoPool.c)
 * Callees:
 *     RtlSetBits @ 0x14000A290 (RtlSetBits.c)
 *     MiObtainProtoBaseFromNode @ 0x14004B468 (MiObtainProtoBaseFromNode.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

__int64 __fastcall MiGetPrototypePteRanges(unsigned __int64 a1, _RTL_BITMAP *a2)
{
  unsigned __int64 v3; // r15
  unsigned int v5; // r14d
  KIRQL v6; // al
  _QWORD *v7; // rdi
  KIRQL v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  __int64 v15; // rsi
  unsigned __int64 j; // rbx
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rsi
  _QWORD **v25; // rax
  unsigned __int64 v26; // rcx
  __int64 i; // rbx
  _QWORD *v28; // rcx
  __int64 NumberToSet; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1 + 4096;
  v5 = 1;
  v6 = ExAcquireSpinLockShared(&dword_1403CB420);
  v7 = (_QWORD *)qword_1403CB418;
  v8 = v6;
  if ( qword_1403CB418 )
  {
    do
    {
      v9 = MiObtainProtoBaseFromNode(v7, &NumberToSet);
      if ( v10 < v9 )
      {
        v7 = (_QWORD *)*v7;
      }
      else
      {
        if ( a1 < v9 + 8 * NumberToSet )
          break;
        v7 = (_QWORD *)v7[1];
      }
    }
    while ( v7 );
  }
  v11 = (unsigned __int64)v7;
  if ( v7 )
  {
    while ( 1 )
    {
      v12 = MiObtainProtoBaseFromNode((_QWORD *)v11, &NumberToSet);
      v13 = NumberToSet;
      v14 = v12;
      if ( v12 < a1 )
      {
        if ( v12 + 8 * NumberToSet > a1 )
        {
          v14 = a1;
          v13 = NumberToSet - ((__int64)(a1 - v12) >> 3);
          NumberToSet = v13;
        }
        if ( v14 < a1 )
          break;
      }
      if ( v14 >= v3 )
        break;
      if ( (*(_BYTE *)(v11 + 24) & 7) == 4 )
      {
        v5 = 0;
        break;
      }
      v15 = (__int64)(v14 - a1) >> 3;
      if ( v13 + (unsigned __int64)(unsigned int)v15 > 0x200 )
      {
        LODWORD(v13) = 512 - v15;
        NumberToSet = (unsigned int)(512 - v15);
      }
      RtlSetBits(a2, v15, v13);
      if ( (_DWORD)v15 )
      {
        v20 = *(_QWORD *)v11;
        v21 = v11;
        if ( *(_QWORD *)v11 )
        {
          do
          {
            v11 = v20;
            v20 = *(_QWORD *)(v20 + 8);
          }
          while ( v20 );
        }
        else
        {
          while ( 1 )
          {
            v11 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v11 || *(_QWORD *)(v11 + 8) == v21 )
              break;
            v21 = v11;
          }
        }
        if ( v11 )
          continue;
      }
      break;
    }
    j = v7[1];
    if ( j )
    {
      v17 = *(_QWORD **)j;
      if ( *(_QWORD *)j )
      {
        do
        {
          j = (unsigned __int64)v17;
          v17 = (_QWORD *)*v17;
        }
        while ( v17 );
      }
    }
    else
    {
      for ( i = v7[2]; ; i = *(_QWORD *)(j + 16) )
      {
        j = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !j || *(_QWORD **)j == v7 )
          break;
        v7 = (_QWORD *)j;
      }
    }
    while ( j )
    {
      v18 = MiObtainProtoBaseFromNode((_QWORD *)j, &NumberToSet);
      if ( v18 >= v3 || v18 < a1 )
        break;
      if ( (*(_BYTE *)(j + 24) & 7) == 4 )
      {
        v5 = 0;
        break;
      }
      v22 = NumberToSet;
      v23 = (__int64)(v18 - a1) >> 3;
      v24 = (unsigned int)v23;
      if ( (unsigned __int64)(unsigned int)v23 + NumberToSet > 0x200 )
      {
        v22 = (unsigned int)(512 - v23);
        NumberToSet = v22;
      }
      RtlSetBits(a2, v23, v22);
      if ( v24 + v22 == 512 )
        break;
      v25 = *(_QWORD ***)(j + 8);
      v26 = j;
      if ( v25 )
      {
        v28 = *v25;
        for ( j = *(_QWORD *)(j + 8); v28; v28 = (_QWORD *)*v28 )
          j = (unsigned __int64)v28;
      }
      else
      {
        while ( 1 )
        {
          j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !j || *(_QWORD *)j == v26 )
            break;
          v26 = j;
        }
      }
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_1403CB420);
  __writecr8(v8);
  return v5;
}
