/*
 * XREFs of EtwpBufferingModeFlush @ 0x14074AF90
 * Callers:
 *     EtwpFlushTrace @ 0x1405959E0 (EtwpFlushTrace.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x1400E08AC (EtwpQueryUsedProcessorCount.c)
 *     EtwpPrepareDirtyBuffer @ 0x1400E08C8 (EtwpPrepareDirtyBuffer.c)
 *     EtwpLockUnlockBufferList @ 0x1400E091C (EtwpLockUnlockBufferList.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     EtwpBufferingModeCompressionFlush @ 0x140280E6C (EtwpBufferingModeCompressionFlush.c)
 *     EtwpWaitForBufferReferenceCount @ 0x140532700 (EtwpWaitForBufferReferenceCount.c)
 *     EtwpPrepareHeader @ 0x140532734 (EtwpPrepareHeader.c)
 *     EtwpFlushBufferToLogfile @ 0x1405330A4 (EtwpFlushBufferToLogfile.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     EtwpFinalizeHeader @ 0x1405776D0 (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x140577D70 (EtwpCreateLogFile.c)
 *     EtwpFindAndLockBufferForFlushing @ 0x14074B2F4 (EtwpFindAndLockBufferForFlushing.c)
 */

__int64 __fastcall EtwpBufferingModeFlush(unsigned int *a1)
{
  __int64 v1; // rsi
  unsigned int v2; // ebp
  int LogFile; // r14d
  __int64 v4; // r15
  __int64 v6; // rcx
  __int64 UsedProcessorCount; // rdi
  _QWORD *v8; // r8
  unsigned __int64 v9; // rdx
  unsigned __int32 v10; // eax
  signed __int64 i; // rcx
  signed __int64 v12; // rax
  __int64 v13; // rbp
  _QWORD *v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rax
  signed __int32 v19; // r15d
  signed __int32 v20; // esi
  __int64 v21; // rsi
  unsigned __int64 v22; // rcx
  __int64 j; // rdx
  __int64 v24; // rax
  unsigned int *v25; // rdx
  signed __int32 v26; // eax
  __int64 v27; // rsi
  __int64 k; // rdi
  void *v29; // rcx

  v1 = 0LL;
  v2 = a1[1];
  LogFile = 0;
  v4 = *a1;
  UsedProcessorCount = (unsigned int)EtwpQueryUsedProcessorCount((__int64)a1);
  if ( EtwpFileSystemReady )
    _InterlockedOr((volatile signed __int32 *)(v6 + 832), 4u);
  if ( *(_QWORD *)(v6 + 208) )
  {
    LogFile = EtwpCreateLogFile(v6, 0);
    if ( LogFile >= 0 )
    {
      if ( (_DWORD)UsedProcessorCount )
      {
        do
        {
          if ( (a1[3] & 0x10000000) != 0 )
            v8 = a1 + 36;
          else
            v8 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 282) + 4104LL) + v1) + 8 * v4);
          v9 = *v8 & 0xFFFFFFFFFFFFFFF0uLL;
          if ( v9 )
          {
            v10 = _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), v2);
            if ( v10 <= v2 )
              *(_DWORD *)(v9 + 4) = v10;
            _m_prefetchw(v8);
            for ( i = *v8; (v9 ^ i) <= 0xF; i = v12 )
            {
              v12 = _InterlockedCompareExchange64(v8, 0LL, i);
              if ( i == v12 )
                break;
            }
            if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == v9 )
            {
              _InterlockedExchangeAdd((volatile signed __int32 *)((i & 0xFFFFFFFFFFFFFFF0uLL) + 12), -(i & 0xF));
              EtwpPrepareDirtyBuffer((__int64)a1, v9);
            }
          }
          v1 += 64LL;
          --UsedProcessorCount;
        }
        while ( UsedProcessorCount );
      }
      EtwpLockUnlockBufferList((__int64)a1);
      if ( (a1[3] & 0x4000000) != 0 )
      {
        EtwpBufferingModeCompressionFlush((__int64)a1);
        v13 = *((_QWORD *)a1 + 103) + 1LL;
        if ( v13 >= 0 )
        {
          v14 = a1 + 24;
          do
          {
            --v13;
            v15 = 0LL;
            if ( (_QWORD *)*v14 == v14 )
              v16 = 0LL;
            else
              v16 = *v14 - 56LL;
            if ( !v16 )
              break;
            while ( 1 )
            {
              v17 = *(_QWORD *)(v16 + 24);
              if ( v17 == v13 )
                break;
              if ( v17 < v13 && (!v15 || v17 > *(_QWORD *)(v15 + 24)) )
                v15 = v16;
              v18 = *(_QWORD **)(v16 + 56);
              v16 = (__int64)(v18 - 7);
              if ( v18 == v14 )
                v16 = 0LL;
              if ( !v16 )
                goto LABEL_36;
            }
            v15 = v16;
LABEL_36:
            if ( !v15 )
              break;
            v19 = *(_DWORD *)(v15 + 44);
            if ( (unsigned int)(v19 - 4) <= 1 )
            {
              v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 44), 3, v19);
              if ( v19 == v20 )
              {
                if ( *(_QWORD *)(v15 + 24) == v13 )
                {
                  EtwpWaitForBufferReferenceCount(v15);
                  if ( v20 == 5 )
                  {
                    if ( *(_DWORD *)(v15 + 8) != 72 )
                    {
                      v21 = v15 + 72;
                      v22 = v15 + *(unsigned int *)(v15 + 8);
                      *(_QWORD *)(v15 + 104) = 0LL;
                      for ( j = *(unsigned int *)(v15 + 72); ; j = *v25 )
                      {
                        v25 = (unsigned int *)(v21 + j);
                        if ( (unsigned __int64)v25 >= v22 )
                          break;
                        v24 = v21;
                        v21 = (__int64)v25;
                        *((_QWORD *)v25 + 4) = v24;
                      }
                      do
                      {
                        if ( (unsigned int)EtwpPrepareHeader((__int64)a1, v21, 64) != -2147483614 )
                          LogFile = EtwpFlushBufferToLogfile((__int64)a1, (unsigned int *)v21);
                        v21 = *(_QWORD *)(v21 + 32);
                      }
                      while ( v21 );
                      v14 = a1 + 24;
                      v26 = 5;
                      goto LABEL_56;
                    }
                    _InterlockedExchange((volatile __int32 *)(v15 + 44), 0);
                  }
                  else if ( v20 == 4 )
                  {
                    if ( (unsigned int)EtwpPrepareHeader((__int64)a1, v15, 0) != -2147483614 )
                      LogFile = EtwpFlushBufferToLogfile((__int64)a1, (unsigned int *)v15);
                    v26 = 4;
LABEL_56:
                    _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 44), v19, v26);
                    if ( LogFile < 0 )
                      break;
                  }
                }
                else
                {
                  _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 44), v19, 3);
                }
              }
            }
          }
          while ( v13 >= 0 );
        }
      }
      else
      {
        v27 = *((_QWORD *)a1 + 103);
        for ( k = EtwpFindAndLockBufferForFlushing(a1, v27); k; k = EtwpFindAndLockBufferForFlushing(a1, --v27) )
        {
          EtwpWaitForBufferReferenceCount(k);
          if ( (unsigned int)EtwpPrepareHeader((__int64)a1, k, 0) != -2147483614 )
            LogFile = EtwpFlushBufferToLogfile((__int64)a1, (unsigned int *)k);
          _InterlockedExchange((volatile __int32 *)(k + 44), 0);
          if ( LogFile < 0 )
            break;
        }
      }
      EtwpFinalizeHeader((__int64)a1, *((void **)a1 + 102), 0);
      a1[66] = 0;
    }
    v29 = (void *)*((_QWORD *)a1 + 102);
    if ( v29 )
    {
      ZwClose(v29);
      *((_QWORD *)a1 + 102) = 0LL;
    }
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 42));
  }
  return (unsigned int)LogFile;
}
