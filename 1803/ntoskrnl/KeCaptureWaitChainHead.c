/*
 * XREFs of KeCaptureWaitChainHead @ 0x1401598E8
 * Callers:
 *     ExpPrepareToWakeResourceShared @ 0x14015857C (ExpPrepareToWakeResourceShared.c)
 *     ExpPrepareToWakeResourceExclusive @ 0x14015986C (ExpPrepareToWakeResourceExclusive.c)
 * Callees:
 *     RtlInsertHeadCircularList @ 0x1400CCA08 (RtlInsertHeadCircularList.c)
 */

__int64 __fastcall KeCaptureWaitChainHead(_QWORD **a1, __int64 *a2)
{
  __int64 result; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // rax

  result = 0LL;
  *a2 = 0LL;
  v4 = *a1;
  if ( *a1 )
  {
    if ( (_QWORD *)*v4 == v4 )
    {
      *a1 = 0LL;
    }
    else
    {
      *a1 = (_QWORD *)*v4;
      v5 = (_QWORD *)*v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
        __fastfail(3u);
      *v6 = v5;
      v5[1] = v6;
    }
    return RtlInsertHeadCircularList(a2, v4);
  }
  return result;
}
