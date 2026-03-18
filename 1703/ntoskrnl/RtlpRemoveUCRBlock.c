/*
 * XREFs of RtlpRemoveUCRBlock @ 0x140010918
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x14000E878 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1400105BC (RtlpFindAndCommitPages.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x14017D77C (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpRemoveUCRBlock(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // r8
  __int64 result; // rax
  __int64 *v5; // rcx
  __int64 v6; // r9
  __int64 *v7; // rcx
  __int64 v8; // r9

  v2 = a2 + 2;
  result = a2[2];
  v5 = (__int64 *)a2[3];
  v6 = *(_QWORD *)(result + 8);
  if ( *v5 == v6 && (_QWORD *)*v5 == v2 )
  {
    *v5 = result;
    *(_QWORD *)(result + 8) = v5;
  }
  else
  {
    result = RtlpLogHeapFailure(12, 0, (_DWORD)v2, v6, *v5);
  }
  if ( a2[5] )
  {
    result = *a2;
    v7 = (__int64 *)a2[1];
    v8 = *(_QWORD *)(*a2 + 8);
    if ( *v7 == v8 && (__int64 *)*v7 == a2 )
    {
      *v7 = result;
      *(_QWORD *)(result + 8) = v7;
    }
    else
    {
      return RtlpLogHeapFailure(12, 0, (_DWORD)a2, v8, *v7);
    }
  }
  return result;
}
