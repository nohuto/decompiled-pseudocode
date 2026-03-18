/*
 * XREFs of EtwpBufferingModeFlush @ 0x14070F288
 * Callers:
 *     EtwpFlushTrace @ 0x140451AD4 (EtwpFlushTrace.c)
 * Callees:
 *     EtwpLockUnlockBufferList @ 0x140010988 (EtwpLockUnlockBufferList.c)
 *     EtwpQueryUsedProcessorCount @ 0x140087D60 (EtwpQueryUsedProcessorCount.c)
 *     EtwpPrepareDirtyBuffer @ 0x140087D7C (EtwpPrepareDirtyBuffer.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     EtwpBufferingModeCompressionFlush @ 0x14025741C (EtwpBufferingModeCompressionFlush.c)
 *     EtwpWaitForBufferReferenceCount @ 0x14044D160 (EtwpWaitForBufferReferenceCount.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     EtwpFinalizeHeader @ 0x14054E348 (EtwpFinalizeHeader.c)
 *     EtwpPrepareHeader @ 0x140550264 (EtwpPrepareHeader.c)
 *     EtwpFlushBufferToLogfile @ 0x140550754 (EtwpFlushBufferToLogfile.c)
 *     EtwpCreateLogFile @ 0x14055808C (EtwpCreateLogFile.c)
 *     EtwpFindAndLockBufferForFlushing @ 0x14070F5F0 (EtwpFindAndLockBufferForFlushing.c)
 */

__int64 __fastcall EtwpBufferingModeFlush(unsigned int *a1)
{
  unsigned int v1; // ebp
  int LogFile; // r15d
  __int64 v3; // r14
  __int64 v5; // rcx
  unsigned int UsedProcessorCount; // esi
  unsigned int i; // edi
  _QWORD *v8; // r8
  unsigned __int64 v9; // rdx
  unsigned __int32 v10; // eax
  signed __int64 j; // rcx
  signed __int64 v12; // rax
  unsigned int *v13; // rcx
  __int64 v14; // rbp
  _QWORD *v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rax
  signed __int32 v20; // r14d
  signed __int32 v21; // esi
  __int64 v22; // rsi
  unsigned __int64 v23; // rcx
  __int64 k; // rdx
  __int64 v25; // rax
  unsigned int *v26; // rdx
  void *v27; // rcx
  __int64 m; // rsi
  __int64 v30; // rax
  __int64 v31; // rdi

  v1 = a1[1];
  LogFile = 0;
  v3 = *a1;
  UsedProcessorCount = EtwpQueryUsedProcessorCount((__int64)a1);
  if ( EtwpFileSystemReady )
    _InterlockedOr((volatile signed __int32 *)(v5 + 816), 4u);
  if ( *(_QWORD *)(v5 + 192) )
  {
    LogFile = EtwpCreateLogFile(v5, 0);
    if ( LogFile >= 0 )
    {
      for ( i = 0; i < UsedProcessorCount; ++i )
      {
        if ( (a1[3] & 0x10000000) != 0 )
          v8 = a1 + 32;
        else
          v8 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 118) + 5104LL) + 8 * (v3 + ((unsigned __int64)i << 7)));
        v9 = *v8 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v9 )
        {
          v10 = _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), v1);
          if ( v10 <= v1 )
            *(_DWORD *)(v9 + 4) = v10;
          _m_prefetchw(v8);
          for ( j = *v8; (v9 ^ j) <= 0xF; j = v12 )
          {
            v12 = _InterlockedCompareExchange64(v8, 0LL, j);
            if ( j == v12 )
              break;
          }
          if ( (j & 0xFFFFFFFFFFFFFFF0uLL) == v9 )
          {
            _InterlockedExchangeAdd((volatile signed __int32 *)((j & 0xFFFFFFFFFFFFFFF0uLL) + 12), -(j & 0xF));
            EtwpPrepareDirtyBuffer((__int64)a1, v9);
          }
        }
      }
      EtwpLockUnlockBufferList((__int64)a1);
      v13 = a1;
      if ( (a1[3] & 0x4000000) != 0 )
      {
        EtwpBufferingModeCompressionFlush((__int64)a1);
        v14 = *((_QWORD *)a1 + 101) + 1LL;
        if ( v14 >= 0 )
        {
          v15 = a1 + 24;
          do
          {
            --v14;
            v16 = 0LL;
            if ( (_QWORD *)*v15 == v15 )
              v17 = 0LL;
            else
              v17 = *v15 - 56LL;
            if ( !v17 )
              break;
            while ( 1 )
            {
              v18 = *(_QWORD *)(v17 + 24);
              if ( v18 == v14 )
                break;
              if ( v18 < v14 && (!v16 || v18 > *(_QWORD *)(v16 + 24)) )
                v16 = v17;
              v19 = *(_QWORD **)(v17 + 56);
              v17 = (__int64)(v19 - 7);
              if ( v19 == v15 )
                v17 = 0LL;
              if ( !v17 )
                goto LABEL_36;
            }
            v16 = v17;
LABEL_36:
            if ( !v16 )
              break;
            v20 = *(_DWORD *)(v16 + 44);
            if ( (unsigned int)(v20 - 4) <= 1 )
            {
              v21 = _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 44), 3, v20);
              if ( v20 == v21 )
              {
                if ( *(_QWORD *)(v16 + 24) == v14 )
                {
                  EtwpWaitForBufferReferenceCount(v16);
                  if ( v21 == 5 )
                  {
                    if ( *(_DWORD *)(v16 + 8) != 72 )
                    {
                      v22 = v16 + 72;
                      v23 = v16 + *(unsigned int *)(v16 + 8);
                      *(_QWORD *)(v16 + 104) = 0LL;
                      for ( k = *(unsigned int *)(v16 + 72); ; k = *v26 )
                      {
                        v26 = (unsigned int *)(v22 + k);
                        if ( (unsigned __int64)v26 >= v23 )
                          break;
                        v25 = v22;
                        v22 = (__int64)v26;
                        *((_QWORD *)v26 + 4) = v25;
                      }
                      do
                      {
                        if ( (unsigned int)EtwpPrepareHeader((__int64)a1, v22, 64) != -2147483614 )
                          LogFile = EtwpFlushBufferToLogfile((__int64)a1, (unsigned int *)v22);
                        v22 = *(_QWORD *)(v22 + 32);
                      }
                      while ( v22 );
                      _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 44), v20, 5);
                      goto LABEL_55;
                    }
                    _InterlockedExchange((volatile __int32 *)(v16 + 44), 0);
                  }
                  else if ( v21 == 4 )
                  {
                    if ( (unsigned int)EtwpPrepareHeader((__int64)a1, v16, 0) != -2147483614 )
                      LogFile = EtwpFlushBufferToLogfile((__int64)a1, (unsigned int *)v16);
                    _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 44), v20, 4);
LABEL_55:
                    if ( LogFile < 0 )
                      break;
                  }
                }
                else
                {
                  _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 44), v20, 3);
                }
              }
            }
          }
          while ( v14 >= 0 );
        }
      }
      else
      {
        for ( m = *((_QWORD *)a1 + 101); ; --m )
        {
          v30 = EtwpFindAndLockBufferForFlushing(v13, m);
          v31 = v30;
          if ( !v30 )
            break;
          EtwpWaitForBufferReferenceCount(v30);
          if ( (unsigned int)EtwpPrepareHeader((__int64)a1, v31, 0) != -2147483614 )
            LogFile = EtwpFlushBufferToLogfile((__int64)a1, (unsigned int *)v31);
          _InterlockedExchange((volatile __int32 *)(v31 + 44), 0);
          if ( LogFile < 0 )
            break;
          v13 = a1;
        }
      }
      EtwpFinalizeHeader((__int64)a1, *((void **)a1 + 100), 0);
      a1[62] = 0;
    }
    v27 = (void *)*((_QWORD *)a1 + 100);
    if ( v27 )
    {
      ZwClose(v27);
      *((_QWORD *)a1 + 100) = 0LL;
    }
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 38));
  }
  return (unsigned int)LogFile;
}
