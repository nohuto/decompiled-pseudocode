/*
 * XREFs of VfSuspectDriversParseRegistryString @ 0x1408E1A64
 * Callers:
 *     VfInitBootDriversLoaded @ 0x1408AD198 (VfInitBootDriversLoaded.c)
 * Callees:
 *     VfDriverLock @ 0x14080F570 (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140815EE8 (VfDriverUnlock.c)
 *     VfSuspectDriversAllocateEntry @ 0x14082A740 (VfSuspectDriversAllocateEntry.c)
 *     VfSuspectDriversInsert @ 0x14082A9B8 (VfSuspectDriversInsert.c)
 *     VfSuspectExcludedDriversAllocateEntry @ 0x14082AF68 (VfSuspectExcludedDriversAllocateEntry.c)
 */

int VfSuspectDriversParseRegistryString()
{
  __int64 *v0; // rcx
  unsigned __int64 Entry; // rax
  BOOL v2; // ebp
  __int64 *v3; // rsi
  __int64 v4; // r8
  unsigned __int16 v5; // dx
  __int64 *v6; // rbx
  __int16 v7; // dx
  __int64 *v8; // r8
  unsigned __int16 v9; // dx
  int v10; // edx
  _QWORD *v11; // rdi
  _QWORD *v12; // rdi
  _QWORD *v13; // rax
  const void *v15[5]; // [rsp+20h] [rbp-28h] BYREF

  v0 = MmVerifyDriverBuffer;
  Entry = ((unsigned __int64)(unsigned int)MmVerifyDriverBufferLength - 2) >> 1;
  v2 = (VfOptionFlags & 1) == 0;
  v3 = (__int64 *)((char *)MmVerifyDriverBuffer + 2 * Entry);
  if ( MmVerifyDriverBuffer < v3 )
  {
    v4 = 0x100002601LL;
    do
    {
      v5 = *(_WORD *)v0;
      if ( *(_WORD *)v0 <= 0x20u && (LODWORD(Entry) = v5, _bittest64(&v4, v5)) || v5 == 12288 )
      {
        v6 = v0;
        goto LABEL_32;
      }
      if ( v5 == 42 && v2 )
      {
        ViVerifyAllDrivers = 1;
        return Entry;
      }
      v6 = (__int64 *)((char *)v0 + 2);
      if ( v5 == 34 )
      {
        Entry = (unsigned __int64)v0 + 4;
        v0 = (__int64 *)((char *)v0 + 2);
        if ( (__int64 *)((char *)v6 + 2) >= v3 )
          return Entry;
        do
        {
          v7 = *(_WORD *)Entry;
          v8 = (__int64 *)Entry;
          if ( *(_WORD *)Entry == 34 )
            break;
          Entry += 2LL;
        }
        while ( Entry < (unsigned __int64)v3 );
        v6 = (__int64 *)((char *)v8 + 2);
        if ( v7 == 34 )
          v6 = v8;
        if ( v6 >= v3 )
          return Entry;
      }
      else
      {
        while ( v6 < v3 )
        {
          v9 = *(_WORD *)v6;
          if ( *(_WORD *)v6 <= 0x20u )
          {
            LODWORD(Entry) = v9;
            if ( _bittest64(&v4, v9) )
              break;
          }
          if ( v9 == 12288 )
            break;
          v6 = (__int64 *)((char *)v6 + 2);
        }
      }
      v10 = 2 * (((char *)v6 - (char *)v0) >> 1);
      if ( v10 )
      {
        LODWORD(Entry) = v10 + 2;
        LOWORD(v15[0]) = 2 * (((char *)v6 - (char *)v0) >> 1);
        WORD1(v15[0]) = v10 + 2;
        if ( (unsigned __int16)(v10 + 2) < (unsigned __int16)v10 )
          return Entry;
        v15[1] = v0;
        if ( v2 )
        {
          Entry = (unsigned __int64)VfSuspectDriversAllocateEntry(v15);
          v11 = (_QWORD *)Entry;
          if ( Entry )
          {
            VfDriverLock();
            VfSuspectDriversInsert(v11);
LABEL_29:
            LODWORD(Entry) = VfDriverUnlock();
          }
        }
        else
        {
          Entry = (unsigned __int64)VfSuspectExcludedDriversAllocateEntry((unsigned __int16 *)v15, 0x44456656u);
          v12 = (_QWORD *)Entry;
          if ( Entry )
          {
            VfDriverLock();
            v13 = (_QWORD *)qword_1403A5168;
            if ( *(__int64 **)qword_1403A5168 != &VfExcludedDriversList )
              __fastfail(3u);
            *v12 = &VfExcludedDriversList;
            v12[1] = v13;
            *v13 = v12;
            qword_1403A5168 = (__int64)v12;
            goto LABEL_29;
          }
        }
      }
      v4 = 0x100002601LL;
LABEL_32:
      v0 = (__int64 *)((char *)v6 + 2);
    }
    while ( (__int64 *)((char *)v6 + 2) < v3 );
  }
  return Entry;
}
