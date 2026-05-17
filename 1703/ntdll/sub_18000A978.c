/*
 * XREFs of sub_18000A978 @ 0x18000A978
 * Callers:
 *     RtlWakeAddressAll @ 0x18000A910 (RtlWakeAddressAll.c)
 *     RtlpUnWaitCriticalSection @ 0x18000A930 (RtlpUnWaitCriticalSection.c)
 *     sub_18000FF10 @ 0x18000FF10 (sub_18000FF10.c)
 *     sub_180013820 @ 0x180013820 (sub_180013820.c)
 *     sub_1800A4BC0 @ 0x1800A4BC0 (sub_1800A4BC0.c)
 *     RtlBarrier_0 @ 0x1800EB020 (RtlBarrier_0.c)
 *     RtlWakeAddressAllNoFence @ 0x1800F9FB0 (RtlWakeAddressAllNoFence.c)
 *     RtlWakeAddressSingle @ 0x1800F9FC0 (RtlWakeAddressSingle.c)
 *     RtlWakeAddressSingleNoFence @ 0x1800F9FE0 (RtlWakeAddressSingleNoFence.c)
 * Callees:
 *     sub_18000AB78 @ 0x18000AB78 (sub_18000AB78.c)
 *     ZwAlertThreadByThreadId @ 0x1800A60D0 (ZwAlertThreadByThreadId.c)
 */

signed __int64 __fastcall sub_18000A978(unsigned __int64 a1, char a2)
{
  bool v2; // bp
  __int64 v3; // rdi
  __int64 v6; // r10
  struct _PEB *ProcessEnvironmentBlock; // rsi
  signed __int64 result; // rax
  signed __int64 v9; // rdx
  signed __int64 v10; // rtt
  unsigned __int64 v11; // r9
  _QWORD *v12; // r8
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbx
  char v18; // dl
  unsigned __int64 v19; // rcx
  signed __int64 v20; // rtt
  signed __int64 v21; // rcx
  __int64 v22; // r11
  signed __int64 v23; // rtt

  v2 = 0;
  v3 = (a1 >> 5) & 0x7F;
  v6 = 0LL;
  ProcessEnvironmentBlock = NtCurrentTeb()->ProcessEnvironmentBlock;
  result = *((_QWORD *)&ProcessEnvironmentBlock[1].ProcessParameters + v3);
  while ( result && (result & 1) == 0 )
  {
    if ( (result & 2) != 0 )
    {
      v23 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&ProcessEnvironmentBlock[1].ProcessParameters + v3,
                 result | 1,
                 result);
      if ( v23 == result )
        return result;
    }
    else
    {
      v9 = result | 2;
      v10 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&ProcessEnvironmentBlock[1].ProcessParameters + v3,
                 result | 2,
                 result);
      if ( v10 == result )
      {
LABEL_6:
        v11 = v9 & 0xFFFFFFFFFFFFFFFCuLL;
        v12 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !*(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFFCuLL) + 32) )
        {
          do
          {
            result = (signed __int64)v12;
            v12 = (_QWORD *)v12[2];
            v12[3] = result;
          }
          while ( !v12[4] );
        }
        v13 = v12[4];
        *(_QWORD *)(v11 + 32) = v13;
        while ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 24);
          if ( *(_QWORD *)v13 == a1 )
          {
            if ( v13 == v11 )
            {
              v21 = *(_QWORD *)(v13 + 16);
              if ( v21 )
                v21 = ((unsigned __int8)v9 ^ (unsigned __int8)v21) & 3 ^ (unsigned __int64)v21;
              result = _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&ProcessEnvironmentBlock[1].ProcessParameters + v3,
                         v21,
                         v9);
              if ( v9 != result )
              {
                v9 = result;
                goto LABEL_6;
              }
              v22 = *(_QWORD *)(v13 + 16);
              v2 = v21 == 0;
              if ( v22 )
              {
                *(_QWORD *)(v22 + 24) = 0LL;
                *(_QWORD *)(v22 + 32) = *(_QWORD *)(v13 + 32);
              }
            }
            else
            {
              *(_QWORD *)(v14 + 16) = *(_QWORD *)(v13 + 16);
              v15 = *(_QWORD *)(v13 + 16);
              v16 = *(_QWORD *)(v13 + 24);
              if ( v15 )
              {
                *(_QWORD *)(v15 + 24) = v16;
              }
              else
              {
                *(_QWORD *)(v11 + 32) = v16;
                *(_QWORD *)(*(_QWORD *)(v13 + 24) + 32LL) = *(_QWORD *)(v13 + 24);
              }
            }
            result = (unsigned int)_InterlockedExchange((volatile __int32 *)(v13 + 40), 2);
            if ( (_DWORD)result != 2 )
            {
              if ( !(_DWORD)result )
              {
                *(_QWORD *)(v13 + 16) = v6;
                v6 = v13;
              }
              if ( !a2 )
                break;
            }
          }
          v13 = v14;
        }
        if ( v6 )
        {
          do
          {
            v17 = *(_QWORD *)(v6 + 16);
            result = ZwAlertThreadByThreadId(*(_QWORD *)(v6 + 8));
            v6 = v17;
          }
          while ( v17 );
        }
        if ( !v2 )
        {
          result = *((_QWORD *)&ProcessEnvironmentBlock[1].ProcessParameters + v3);
          do
          {
            if ( (result & 1) != 0 )
            {
              v18 = 1;
              v19 = 0LL;
            }
            else
            {
              v18 = 0;
              v19 = result & 0xFFFFFFFFFFFFFFFCuLL;
            }
            v20 = result;
            result = _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&ProcessEnvironmentBlock[1].ProcessParameters + v3,
                       v19,
                       result);
          }
          while ( v20 != result );
          if ( v18 )
            return sub_18000AB78(result);
        }
        return result;
      }
    }
  }
  return result;
}
