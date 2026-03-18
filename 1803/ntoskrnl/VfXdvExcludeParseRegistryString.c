/*
 * XREFs of VfXdvExcludeParseRegistryString @ 0x1408E1C34
 * Callers:
 *     VfInitBootDriversLoaded @ 0x1408AD198 (VfInitBootDriversLoaded.c)
 * Callees:
 *     VfDriverLock @ 0x14080F570 (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140815EE8 (VfDriverUnlock.c)
 *     VfSuspectExcludedDriversAllocateEntry @ 0x14082AF68 (VfSuspectExcludedDriversAllocateEntry.c)
 */

int VfXdvExcludeParseRegistryString()
{
  unsigned __int64 Entry; // rax
  __int64 *v1; // rcx
  __int64 *v2; // rsi
  __int64 v3; // r12
  unsigned __int16 v4; // dx
  __int64 *v5; // rbx
  __int16 v6; // dx
  __int64 *v7; // r8
  unsigned __int16 v8; // dx
  int v9; // edx
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  unsigned __int16 v13[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v14; // [rsp+28h] [rbp-20h]

  LODWORD(Entry) = VfXdvSuppressDriversBufferLength;
  if ( VfXdvSuppressDriversBufferLength == -1 )
  {
    VfXdvSuppressDriversBufferLength = 0;
  }
  else
  {
    v1 = VfXdvSuppressDriversBuffer;
    Entry = ((unsigned __int64)(unsigned int)VfXdvSuppressDriversBufferLength - 2) >> 1;
    v2 = (__int64 *)((char *)VfXdvSuppressDriversBuffer + 2 * Entry);
    if ( VfXdvSuppressDriversBuffer < v2 )
    {
      v3 = 0x100002601LL;
      do
      {
        v4 = *(_WORD *)v1;
        if ( *(_WORD *)v1 <= 0x20u && (LODWORD(Entry) = v4, _bittest64(&v3, v4)) || v4 == 12288 )
        {
          v5 = v1;
        }
        else
        {
          v5 = (__int64 *)((char *)v1 + 2);
          if ( v4 == 34 )
          {
            Entry = (unsigned __int64)v1 + 4;
            v1 = (__int64 *)((char *)v1 + 2);
            if ( (__int64 *)((char *)v5 + 2) >= v2 )
              return Entry;
            do
            {
              v6 = *(_WORD *)Entry;
              v7 = (__int64 *)Entry;
              if ( *(_WORD *)Entry == 34 )
                break;
              Entry += 2LL;
            }
            while ( Entry < (unsigned __int64)v2 );
            v5 = (__int64 *)((char *)v7 + 2);
            if ( v6 == 34 )
              v5 = v7;
            if ( v5 >= v2 )
              return Entry;
          }
          else
          {
            while ( v5 < v2 )
            {
              v8 = *(_WORD *)v5;
              if ( *(_WORD *)v5 <= 0x20u )
              {
                LODWORD(Entry) = v8;
                if ( _bittest64(&v3, v8) )
                  break;
              }
              if ( v8 == 12288 )
                break;
              v5 = (__int64 *)((char *)v5 + 2);
            }
          }
          v9 = 2 * (((char *)v5 - (char *)v1) >> 1);
          if ( v9 )
          {
            LODWORD(Entry) = v9 + 2;
            v13[0] = 2 * (((char *)v5 - (char *)v1) >> 1);
            v13[1] = v9 + 2;
            if ( (unsigned __int16)(v9 + 2) < (unsigned __int16)v9 )
              return Entry;
            v14 = v1;
            Entry = (unsigned __int64)VfSuspectExcludedDriversAllocateEntry(v13, 0x45586656u);
            v10 = (_QWORD *)Entry;
            if ( Entry )
            {
              VfDriverLock();
              v11 = (_QWORD *)qword_1403A5188;
              if ( *(__int64 **)qword_1403A5188 != &VfXdvExcludedDriversList )
                __fastfail(3u);
              *v10 = &VfXdvExcludedDriversList;
              v10[1] = v11;
              *v11 = v10;
              qword_1403A5188 = (__int64)v10;
              LODWORD(Entry) = VfDriverUnlock();
            }
          }
        }
        v1 = (__int64 *)((char *)v5 + 2);
      }
      while ( (__int64 *)((char *)v5 + 2) < v2 );
    }
  }
  return Entry;
}
