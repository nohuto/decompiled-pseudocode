/*
 * XREFs of EtwpFlushActiveBuffers @ 0x1404F1E3C
 * Callers:
 *     EtwpLogger @ 0x14054F910 (EtwpLogger.c)
 * Callees:
 *     EtwpLockUnlockBufferList @ 0x140010988 (EtwpLockUnlockBufferList.c)
 *     EtwpRequestFlushTimer @ 0x14002AE2C (EtwpRequestFlushTimer.c)
 *     EtwpQueryUsedProcessorCount @ 0x140087D60 (EtwpQueryUsedProcessorCount.c)
 *     EtwpPrepareDirtyBuffer @ 0x140087D7C (EtwpPrepareDirtyBuffer.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     EtwpCompleteBuffer @ 0x14044A230 (EtwpCompleteBuffer.c)
 *     EtwpWaitForBufferReferenceCount @ 0x14044D160 (EtwpWaitForBufferReferenceCount.c)
 *     EtwpAdjustFreeBuffers @ 0x1404F1DEC (EtwpAdjustFreeBuffers.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x140550164 (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpFlushBuffer @ 0x1405501C4 (EtwpFlushBuffer.c)
 */

__int64 __fastcall EtwpFlushActiveBuffers(unsigned int *a1, int a2)
{
  __int64 *v4; // r15
  int v5; // edi
  int v6; // ebp
  signed __int64 v7; // r11
  unsigned __int64 *v8; // r14
  __int64 v9; // r12
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rbx
  _QWORD **v12; // r14
  __int64 v13; // rbx
  __int64 *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // eax
  unsigned __int16 v20; // r12
  unsigned int v21; // ebp
  _QWORD *v22; // rbx
  unsigned __int16 v23; // ax
  unsigned __int64 v25; // rax
  unsigned __int32 v26; // eax
  signed __int64 i; // rcx
  signed __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rcx
  char v33; // [rsp+20h] [rbp-148h]
  char v34; // [rsp+30h] [rbp-138h] BYREF

  if ( *((_QWORD *)a1 + 100) || *((_QWORD *)a1 + 45) )
  {
    v4 = (__int64 *)&v34;
    v33 = 0;
    v5 = 0;
    if ( *((_QWORD *)a1 + 109) )
      v4 = (__int64 *)*((_QWORD *)a1 + 109);
    if ( (a1[3] & 0x40000) != 0 )
    {
      v31 = _InterlockedExchange64((volatile __int64 *)a1 + 16, 0LL);
      if ( v31 )
      {
        *v4 = v31;
        v5 = 1;
      }
    }
    else
    {
      v6 = EtwpQueryUsedProcessorCount((__int64)a1) - 1;
      if ( v6 >= 0 )
      {
        v8 = (unsigned __int64 *)v4;
        v9 = (__int64)v6 << 7;
        while ( 1 )
        {
          if ( (a1[3] & 0x10000000) != 0 )
            v10 = a1 + 32;
          else
            v10 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 118) + 5104LL) + 8 * (v9 + *a1));
          v11 = *v10 & 0xFFFFFFFFFFFFFFF0uLL;
          if ( !v11 )
            goto LABEL_11;
          if ( a2 )
            break;
          v25 = *(_QWORD *)((*v10 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20);
          if ( v25 )
          {
            *v8 = v25;
            *(_QWORD *)(v11 + 32) = v7;
LABEL_45:
            ++v5;
            ++v8;
          }
LABEL_11:
          v9 -= 128LL;
          if ( --v6 < 0 )
            goto LABEL_12;
        }
        v26 = _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), a1[1]);
        if ( v26 <= a1[1] )
          *(_DWORD *)(v11 + 4) = v26;
        _m_prefetchw(v10);
        for ( i = *v10; (v11 ^ i) <= 0xF; i = v28 )
        {
          v28 = _InterlockedCompareExchange64(v10, v7, i);
          if ( i == v28 )
            break;
        }
        v29 = i & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == v11 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 12), -(i & 0xF));
          EtwpPrepareDirtyBuffer((__int64)a1, v29);
          v7 = 0LL;
        }
        else
        {
          if ( v29 )
          {
            do
            {
              v32 = *(_QWORD *)(v29 + 32);
              if ( v32 == v11 )
                break;
              v29 = *(_QWORD *)(v29 + 32);
            }
            while ( v32 );
          }
          *(_QWORD *)(v29 + 32) = v7;
          v33 = 1;
        }
        *v8 = v11;
        goto LABEL_45;
      }
LABEL_12:
      EtwpLockUnlockBufferList((__int64)a1);
    }
    v12 = 0LL;
    if ( v5 > 0 )
    {
      v13 = v5;
      v14 = &v4[v5 - 1];
      do
      {
        v15 = 1LL;
        v16 = 0LL;
        if ( v13 > 1 )
        {
          v30 = 0LL;
          do
          {
            if ( *(_QWORD *)(v4[v15] + 16) > *(_QWORD *)(v4[v30] + 16) )
            {
              v16 = v15;
              v30 = v15;
            }
            ++v15;
          }
          while ( v15 < v13 );
        }
        v17 = v4[v16];
        v18 = *(_QWORD *)(v17 + 32);
        v4[v16] = v18;
        if ( !v18 )
        {
          --v13;
          v4[v16] = *v14--;
        }
        if ( *(int *)(v17 + 12) <= 0
          && (v19 = *(_DWORD *)(v17 + 4), v19 <= 0x48)
          && (v19 || *(_DWORD *)(v17 + 8) <= 0x48u) )
        {
          EtwpCompleteBuffer((__int64)a1, v17, 0);
        }
        else
        {
          *(_QWORD *)(v17 + 32) = v12;
          v12 = (_QWORD **)(v17 + 32);
        }
      }
      while ( v13 > 0 );
    }
    v20 = 0;
    v21 = 0;
    if ( v12 )
    {
      v22 = *v12;
      do
      {
        v23 = a2 != 0;
        if ( v22 )
          v23 = v20;
        v20 = v23;
        EtwpAdjustFreeBuffers((__int64)a1);
        EtwpWaitForBufferReferenceCount((__int64)(v12 - 4));
        v21 = EtwpFlushBuffer(a1, v12 - 4, v20);
        EtwpCompleteBuffer((__int64)a1, (__int64)(v12 - 4), v21);
        v12 = (_QWORD **)v22;
        if ( v22 )
          v22 = (_QWORD *)*v22;
      }
      while ( v12 );
      if ( a1[52] && a2 && ((a1[3] & 0x10000000) == 0 || v33) )
        EtwpRequestFlushTimer((__int64)a1, 0);
    }
    else if ( a2 && (a1[204] & 8) != 0 && !a1[106] && a1[86] )
    {
      EtwpRealtimeSendEmptyMarker(a1);
    }
    return v21;
  }
  else
  {
    if ( a1[52] )
      EtwpRequestFlushTimer((__int64)a1, 0);
    return 259LL;
  }
}
