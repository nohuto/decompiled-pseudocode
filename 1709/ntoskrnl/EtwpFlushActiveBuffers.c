/*
 * XREFs of EtwpFlushActiveBuffers @ 0x1405322C8
 * Callers:
 *     EtwpLogger @ 0x140531E30 (EtwpLogger.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x1400E08AC (EtwpQueryUsedProcessorCount.c)
 *     EtwpPrepareDirtyBuffer @ 0x1400E08C8 (EtwpPrepareDirtyBuffer.c)
 *     EtwpLockUnlockBufferList @ 0x1400E091C (EtwpLockUnlockBufferList.c)
 *     EtwpRequestFlushTimer @ 0x1400E0C64 (EtwpRequestFlushTimer.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     EtwpAdjustFreeBuffers @ 0x140532278 (EtwpAdjustFreeBuffers.c)
 *     EtwpCompleteBuffer @ 0x140532618 (EtwpCompleteBuffer.c)
 *     EtwpFlushBuffer @ 0x140532644 (EtwpFlushBuffer.c)
 *     EtwpWaitForBufferReferenceCount @ 0x140532700 (EtwpWaitForBufferReferenceCount.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x140577670 (EtwpRealtimeSendEmptyMarker.c)
 */

__int64 __fastcall EtwpFlushActiveBuffers(unsigned int *a1, __int64 a2)
{
  int v2; // r13d
  __int64 *v4; // r14
  int v5; // ebp
  int v6; // eax
  signed __int64 v7; // r8
  __int64 v8; // r15
  unsigned __int64 *v9; // rdi
  __int64 v10; // r12
  _QWORD *v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  _QWORD **v14; // rdi
  __int64 v15; // rbx
  __int64 *v16; // r15
  __int64 v17; // r11
  __int64 v18; // r10
  __int64 v19; // rax
  unsigned int v20; // eax
  unsigned __int16 v21; // r15
  __int64 v22; // rbp
  _QWORD *v23; // rbx
  unsigned __int16 v24; // ax
  _QWORD **v25; // rdi
  unsigned __int32 v27; // eax
  signed __int64 i; // rcx
  signed __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // r12
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  char v38; // [rsp+20h] [rbp-148h]
  char v39; // [rsp+30h] [rbp-138h] BYREF

  v2 = a2;
  if ( *((_QWORD *)a1 + 102) || *((_QWORD *)a1 + 47) )
  {
    v4 = (__int64 *)&v39;
    v38 = 0;
    v5 = 0;
    if ( *((_QWORD *)a1 + 273) )
      v4 = (__int64 *)*((_QWORD *)a1 + 273);
    if ( (a1[3] & 0x40000) != 0 )
    {
      v36 = _InterlockedExchange64((volatile __int64 *)a1 + 18, 0LL);
      if ( v36 )
      {
        *v4 = v36;
        v5 = 1;
      }
    }
    else
    {
      v6 = EtwpQueryUsedProcessorCount((__int64)a1) - 1;
      v8 = v6;
      if ( v6 >= 0 )
      {
        v9 = (unsigned __int64 *)v4;
        v10 = (__int64)v6 << 6;
        while ( 1 )
        {
          if ( (a1[3] & 0x10000000) != 0 )
            v11 = a1 + 36;
          else
            v11 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 282) + 4104LL) + v10) + 8LL * *a1);
          v12 = *v11 & 0xFFFFFFFFFFFFFFF0uLL;
          if ( !v12 )
            goto LABEL_13;
          if ( v2 )
            break;
          v13 = *(_QWORD *)((*v11 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20);
          if ( v13 )
          {
            *v9 = v13;
            *(_QWORD *)(v12 + 32) = v7;
LABEL_37:
            ++v5;
            ++v9;
          }
LABEL_13:
          v10 -= 64LL;
          if ( --v8 < 0 )
            goto LABEL_14;
        }
        v27 = _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 8), a1[1]);
        if ( v27 <= a1[1] )
          *(_DWORD *)(v12 + 4) = v27;
        _m_prefetchw(v11);
        for ( i = *v11; (v12 ^ i) <= 0xF; i = v29 )
        {
          v29 = _InterlockedCompareExchange64(v11, v7, i);
          if ( i == v29 )
            break;
        }
        v30 = i & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == v12 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)(v30 + 12), -(i & 0xF));
          EtwpPrepareDirtyBuffer((__int64)a1, v30);
          v7 = 0LL;
        }
        else
        {
          if ( v30 )
          {
            do
            {
              v37 = *(_QWORD *)(v30 + 32);
              if ( v37 == v12 )
                break;
              v30 = *(_QWORD *)(v30 + 32);
            }
            while ( v37 );
          }
          *(_QWORD *)(v30 + 32) = v7;
          v38 = 1;
        }
        *v9 = v12;
        goto LABEL_37;
      }
LABEL_14:
      EtwpLockUnlockBufferList((__int64)a1);
    }
    v14 = 0LL;
    if ( v5 > 0 )
    {
      v15 = v5;
      v16 = &v4[v5 - 1];
      do
      {
        v17 = 1LL;
        v18 = 0LL;
        if ( v15 > 1 )
        {
          v31 = 0LL;
          do
          {
            v32 = v31;
            v33 = *(_QWORD *)(v4[v17] + 16);
            v34 = *(__int64 *)((char *)v4 + v31);
            v31 = 8 * v17;
            v35 = *(_QWORD *)(v34 + 16);
            if ( v33 > v35 )
              v18 = v17;
            ++v17;
            if ( v33 <= v35 )
              v31 = v32;
          }
          while ( v17 < v15 );
        }
        a2 = v4[v18];
        v19 = *(_QWORD *)(a2 + 32);
        v4[v18] = v19;
        if ( !v19 )
        {
          --v15;
          v4[v18] = *v16--;
        }
        if ( *(int *)(a2 + 12) <= 0 && (v20 = *(_DWORD *)(a2 + 4), v20 <= 0x48) && (v20 || *(_DWORD *)(a2 + 8) <= 0x48u) )
        {
          EtwpCompleteBuffer(a1, a2, 0LL);
        }
        else
        {
          *(_QWORD *)(a2 + 32) = v14;
          v14 = (_QWORD **)(a2 + 32);
        }
      }
      while ( v15 > 0 );
    }
    v21 = 0;
    LODWORD(v22) = 0;
    if ( v14 )
    {
      v23 = *v14;
      do
      {
        v24 = v2 != 0;
        if ( v23 )
          v24 = v21;
        v25 = v14 - 4;
        v21 = v24;
        EtwpAdjustFreeBuffers((__int64)a1);
        EtwpWaitForBufferReferenceCount(v25);
        v22 = (unsigned int)EtwpFlushBuffer(a1, v25, v21);
        EtwpCompleteBuffer(a1, v25, v22);
        v14 = (_QWORD **)v23;
        if ( v23 )
          v23 = (_QWORD *)*v23;
      }
      while ( v14 );
      if ( a1[56] && v2 && ((a1[3] & 0x10000000) == 0 || v38) )
        EtwpRequestFlushTimer((__int64)a1, 0);
    }
    else if ( v2 && (a1[208] & 8) != 0 && !a1[110] && a1[90] )
    {
      EtwpRealtimeSendEmptyMarker(a1, a2, 0LL);
    }
    return (unsigned int)v22;
  }
  else
  {
    if ( a1[56] )
      EtwpRequestFlushTimer((__int64)a1, 0);
    return 259LL;
  }
}
