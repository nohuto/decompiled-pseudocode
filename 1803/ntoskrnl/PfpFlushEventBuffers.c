/*
 * XREFs of PfpFlushEventBuffers @ 0x1405292B0
 * Callers:
 *     PfpFlushBuffers @ 0x140529600 (PfpFlushBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x14007AB9C (PfFbBufferListInsertInFree.c)
 *     PfFbBufferListFlushStandby @ 0x14007AC44 (PfFbBufferListFlushStandby.c)
 *     PfTFullEventListAdd @ 0x14008E958 (PfTFullEventListAdd.c)
 *     RtlpInterlockedFlushSList @ 0x1401B2C50 (RtlpInterlockedFlushSList.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     PfpCopyEvent @ 0x1405293C0 (PfpCopyEvent.c)
 */

__int64 PfpFlushEventBuffers()
{
  _SLIST_ENTRY *v0; // rbx
  int v1; // esi
  PSLIST_ENTRY v2; // rcx
  _SLIST_ENTRY *v4; // rax
  _SLIST_ENTRY *v5; // rbp
  _SLIST_ENTRY *v6; // rdi
  _SLIST_ENTRY *v8; // rcx

  v0 = 0LL;
  v1 = 0;
  PfFbBufferListFlushStandby((_SLIST_ENTRY *)&stru_1403CD2E0);
  v2 = RtlpInterlockedFlushSList(&stru_1403CD360);
  if ( v2 )
  {
    do
    {
      v4 = v2;
      v2 = v2->Next;
      v4->Next = v0;
      v0 = v4;
    }
    while ( v2 );
    while ( 1 )
    {
      v5 = v0;
      v0 = v0->Next;
      v6 = v5 + 3;
      if ( *((_DWORD *)&v5[2].Next + 2) )
        break;
LABEL_7:
      if ( v1 < 0 )
        goto LABEL_10;
      PfFbBufferListInsertInFree(
        (_SLIST_ENTRY *)&stru_1403CD2E0,
        v5,
        LODWORD(v5[2].Next) - (_DWORD)v5,
        *((_DWORD *)&v5[2].Next + 3),
        1);
      if ( !v0 )
        return (unsigned int)v1;
    }
    while ( 1 )
    {
      v1 = PfpCopyEvent(v6);
      if ( v1 < 0 )
        break;
      v6 += (LODWORD(v6->Next) >> 2) & 0x3FF;
      if ( (*((_DWORD *)&v5[2].Next + 2))-- == 1 )
        goto LABEL_7;
    }
LABEL_10:
    memmove(&v5[3], v6, (unsigned int)(LODWORD(v5[2].Next) - (_DWORD)v6));
    PfTFullEventListAdd(v5);
    while ( v0 )
    {
      v8 = v0;
      v0 = v0->Next;
      PfTFullEventListAdd(v8);
    }
  }
  return (unsigned int)v1;
}
