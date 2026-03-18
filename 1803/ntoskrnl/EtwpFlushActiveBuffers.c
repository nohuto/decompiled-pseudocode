/*
 * XREFs of EtwpFlushActiveBuffers @ 0x140591300
 * Callers:
 *     EtwpLogger @ 0x14058EB20 (EtwpLogger.c)
 * Callees:
 *     EtwpLockUnlockBufferList @ 0x1400D3E98 (EtwpLockUnlockBufferList.c)
 *     EtwpRequestFlushTimer @ 0x1400D3EF8 (EtwpRequestFlushTimer.c)
 *     EtwpQueryUsedProcessorCount @ 0x1400D4558 (EtwpQueryUsedProcessorCount.c)
 *     EtwpPrepareDirtyBuffer @ 0x1400D4574 (EtwpPrepareDirtyBuffer.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x14058998C (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpCompleteBuffer @ 0x14058EF70 (EtwpCompleteBuffer.c)
 *     EtwpAdjustFreeBuffers @ 0x14058F250 (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushBuffer @ 0x140591F1C (EtwpFlushBuffer.c)
 *     EtwpWaitForBufferReferenceCount @ 0x140592060 (EtwpWaitForBufferReferenceCount.c)
 */

__int64 __fastcall EtwpFlushActiveBuffers(unsigned int *a1, int a2)
{
  __int64 *v4; // r14
  int v5; // ebp
  int v6; // eax
  signed __int64 v7; // r9
  __int64 v8; // r15
  unsigned __int64 *v9; // rdi
  __int64 v10; // r12
  _QWORD *v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  _QWORD **v14; // rdi
  __int64 v15; // rbx
  __int64 *v16; // r15
  int v17; // r10d
  int v18; // r11d
  __int64 v19; // r8
  __int64 j; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // eax
  unsigned __int16 v28; // r15
  unsigned int v29; // ebp
  _QWORD *v30; // rbx
  unsigned __int16 v31; // ax
  __int64 v32; // rdi
  unsigned __int32 v34; // eax
  signed __int64 i; // rcx
  signed __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  char v40; // [rsp+20h] [rbp-148h]
  char v41; // [rsp+30h] [rbp-138h] BYREF

  if ( *((_QWORD *)a1 + 102) || *((_QWORD *)a1 + 47) )
  {
    v4 = (__int64 *)&v41;
    v40 = 0;
    v5 = 0;
    if ( *((_QWORD *)a1 + 130) )
      v4 = (__int64 *)*((_QWORD *)a1 + 130);
    if ( (a1[3] & 0x40000) != 0 )
    {
      v38 = _InterlockedExchange64((volatile __int64 *)a1 + 18, 0LL);
      if ( v38 )
      {
        *v4 = v38;
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
            v11 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 139) + 4112LL) + v10) + 8LL * *a1);
          v12 = *v11 & 0xFFFFFFFFFFFFFFF0uLL;
          if ( !v12 )
            goto LABEL_13;
          if ( a2 )
            break;
          v13 = *(_QWORD *)((*v11 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20);
          if ( v13 )
          {
            *v9 = v13;
            *(_QWORD *)(v12 + 32) = v7;
LABEL_50:
            ++v5;
            ++v9;
          }
LABEL_13:
          v10 -= 64LL;
          if ( --v8 < 0 )
            goto LABEL_14;
        }
        v34 = _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 8), a1[1]);
        if ( v34 <= a1[1] )
          *(_DWORD *)(v12 + 4) = v34;
        _m_prefetchw(v11);
        for ( i = *v11; (v12 ^ i) <= 0xF; i = v36 )
        {
          v36 = _InterlockedCompareExchange64(v11, v7, i);
          if ( i == v36 )
            break;
        }
        v37 = i & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == v12 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 12), -(i & 0xF));
          EtwpPrepareDirtyBuffer((__int64)a1, v37);
          v7 = 0LL;
        }
        else
        {
          if ( v37 )
          {
            do
            {
              v39 = *(_QWORD *)(v37 + 32);
              if ( v39 == v12 )
                break;
              v37 = *(_QWORD *)(v37 + 32);
            }
            while ( v39 );
          }
          *(_QWORD *)(v37 + 32) = v7;
          v40 = 1;
        }
        *v9 = v12;
        goto LABEL_50;
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
        v17 = 1;
        v18 = 0;
        v19 = 0LL;
        for ( j = 1LL; j < v15; ++j )
        {
          v21 = *(_QWORD *)(v4[j] + 16);
          v22 = *(_QWORD *)(v4[v19] + 16);
          v23 = j;
          if ( v21 <= v22 )
            v23 = v19;
          v19 = v23;
          v24 = v17;
          if ( v21 <= v22 )
            v24 = v18;
          ++v17;
          v18 = v24;
        }
        v25 = v4[v19];
        v26 = *(_QWORD *)(v25 + 32);
        v4[v19] = v26;
        if ( !v26 )
        {
          --v15;
          v4[v19] = *v16--;
        }
        if ( *(int *)(v25 + 12) <= 0
          && (v27 = *(_DWORD *)(v25 + 4), v27 <= 0x48)
          && (v27 || *(_DWORD *)(v25 + 8) <= 0x48u) )
        {
          EtwpCompleteBuffer((__int64)a1, v25, 0);
        }
        else
        {
          *(_QWORD *)(v25 + 32) = v14;
          v14 = (_QWORD **)(v25 + 32);
        }
      }
      while ( v15 > 0 );
    }
    v28 = 0;
    v29 = 0;
    if ( v14 )
    {
      v30 = *v14;
      do
      {
        v31 = a2 != 0;
        if ( v30 )
          v31 = v28;
        v32 = (__int64)(v14 - 4);
        v28 = v31;
        EtwpAdjustFreeBuffers((__int64)a1);
        EtwpWaitForBufferReferenceCount(v32);
        v29 = EtwpFlushBuffer(a1, v32, v28);
        EtwpCompleteBuffer((__int64)a1, v32, v29);
        v14 = (_QWORD **)v30;
        if ( v30 )
          v30 = (_QWORD *)*v30;
      }
      while ( v14 );
      if ( a1[56] && a2 && ((a1[3] & 0x10000000) == 0 || v40) )
        EtwpRequestFlushTimer((__int64)a1, 0);
    }
    else if ( a2 && (a1[208] & 8) != 0 && !a1[110] && a1[90] )
    {
      EtwpRealtimeSendEmptyMarker((__int16 *)a1);
    }
    return v29;
  }
  else
  {
    if ( a1[56] )
      EtwpRequestFlushTimer((__int64)a1, 0);
    return 259LL;
  }
}
