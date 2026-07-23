/*
 * XREFs of EtwpFindGuidEntry @ 0x180036B44
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180036244 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwpCheckForPrivatePreEnable @ 0x1800369D8 (EtwpCheckForPrivatePreEnable.c)
 *     EtwDeliverDataBlock @ 0x180063BC0 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     EtwpReferenceUmGuidEntry @ 0x18006419C (EtwpReferenceUmGuidEntry.c)
 *     memcmp @ 0x180094960 (memcmp.c)
 */

_QWORD *__fastcall EtwpFindGuidEntry(_QWORD *Buf1)
{
  unsigned __int64 Root; // rdi
  int v3; // esi
  _QWORD *v4; // rbx
  int v6; // eax
  unsigned __int64 v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rax

  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  Root = (unsigned __int64)EtwpGuidEntryTable.Root;
  v3 = *(_BYTE *)&EtwpGuidEntryTable.0 & 1;
  v4 = 0LL;
  while ( Root )
  {
    v6 = memcmp(Buf1, (const void *)(Root + 24), 0x10uLL);
    if ( v6 < 0 )
      goto LABEL_7;
    if ( v6 <= 0 )
    {
      v4 = (_QWORD *)Root;
LABEL_7:
      v7 = *(_QWORD *)Root;
      goto LABEL_8;
    }
    v7 = *(_QWORD *)(Root + 8);
LABEL_8:
    if ( v3 && v7 )
      Root ^= v7;
    else
      Root = v7;
  }
  if ( v4 )
  {
    while ( !(unsigned __int8)EtwpReferenceUmGuidEntry(v4) )
    {
      v9 = (_QWORD *)v4[1];
      if ( v9 )
      {
        do
        {
          v4 = v9;
          v9 = (_QWORD *)*v9;
        }
        while ( v9 );
      }
      else
      {
        while ( 1 )
        {
          v4 = (_QWORD *)(v4[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v4 || (_QWORD *)*v4 == v8 )
            break;
          v8 = v4;
        }
      }
      if ( v4 )
      {
        v10 = *Buf1 - v4[3];
        if ( *Buf1 == v4[3] )
          v10 = Buf1[1] - v4[4];
        if ( !v10 )
          continue;
      }
      goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v4 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  return v4;
}
