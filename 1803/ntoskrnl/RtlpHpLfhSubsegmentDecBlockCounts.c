/*
 * XREFs of RtlpHpLfhSubsegmentDecBlockCounts @ 0x14029BBD4
 * Callers:
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x14029B504 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x14029BC78 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x14029C288 (RtlpHpLfhSubsegmentFreeBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentDecBlockCounts(__int64 a1, unsigned int a2, int a3, int a4, _DWORD *a5)
{
  __int64 v5; // rax
  char v7; // cl
  __int64 v8; // r11
  __int64 v9; // rbx
  char *v10; // r9
  int v11; // edx
  char *v12; // r8
  signed __int16 v13; // ax

  v5 = a1;
  v7 = *(_BYTE *)(a1 + 44);
  v8 = a2 >> v7;
  v9 = 2 * v8;
  v10 = (char *)(2 * v8 + v5 + *(unsigned __int16 *)(v5 + 46));
  _m_prefetchw(v10);
  LODWORD(v5) = a2 + a3 - 1;
  v11 = 0;
  LODWORD(v5) = (unsigned int)v5 >> v7;
  LODWORD(a1) = -1;
  v12 = &v10[2 * (unsigned int)(v5 - v8 + 1)];
  if ( v10 < v12 )
  {
    while ( 1 )
    {
      v13 = _InterlockedDecrement16((volatile signed __int16 *)v10);
      if ( a4 )
        goto LABEL_5;
      if ( !v13 )
        break;
LABEL_8:
      v10 += 2;
      v9 += 2LL;
      if ( v10 >= v12 )
        goto LABEL_9;
    }
    ++v11;
LABEL_5:
    if ( !v13 && (_DWORD)a1 == -1 )
      a1 = v9 >> 1;
    goto LABEL_8;
  }
LABEL_9:
  if ( a5 )
    *a5 = v11;
  return (unsigned int)a1;
}
