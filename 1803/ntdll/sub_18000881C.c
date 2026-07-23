/*
 * XREFs of sub_18000881C @ 0x18000881C
 * Callers:
 *     sub_180007D50 @ 0x180007D50 (sub_180007D50.c)
 * Callees:
 *     sub_180006360 @ 0x180006360 (sub_180006360.c)
 *     sub_180008978 @ 0x180008978 (sub_180008978.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     RtlSleepConditionVariableCS @ 0x180075E10 (RtlSleepConditionVariableCS.c)
 *     ZwSetEvent @ 0x18009AC80 (ZwSetEvent.c)
 */

char __fastcall sub_18000881C(__int64 a1, __int64 a2, unsigned int a3)
{
  _RTL_CRITICAL_SECTION *v3; // r13
  __int64 v4; // rbx
  char v6; // r12
  char v8; // bp
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rbx
  _QWORD *v12; // rcx
  int v14; // [rsp+60h] [rbp+18h]

  v3 = (_RTL_CRITICAL_SECTION *)(a1 + 88);
  v4 = a3;
  v14 = *(_DWORD *)(a1 + 324) & 0x400;
  v6 = 0;
  v8 = 1;
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 88));
  v9 = *(_QWORD *)(a1 + 8 * v4 + 560);
  v10 = (unsigned int)v4;
  while ( !v9 || a2 == v9 )
  {
    v11 = sub_180008978(a1);
    if ( v11 )
      goto LABEL_5;
    if ( (*(_DWORD *)(a1 + 324) & 0x400) == 0 )
    {
      do
      {
        if ( (unsigned int)sub_180006360(a1, 1u) != 1 )
          break;
        v11 = sub_180008978(a1);
      }
      while ( !v11 );
      if ( v11 )
      {
LABEL_5:
        *(_WORD *)(v11 + 40) = *(_WORD *)(*(_QWORD *)(a1 + 536) + 4 * v10 + 2);
        *(_WORD *)(v11 + 42) = *(_WORD *)(*(_QWORD *)(a1 + 536) + 4 * v10);
        *(_QWORD *)(a1 + 8 * v10 + 560) = v11;
        if ( a2 && a2 == v9 )
        {
          v12 = (_QWORD *)(a2 + 32);
          if ( v14 )
          {
            *(_DWORD *)(a2 + 44) = 0;
            *v12 = 0LL;
            *(_QWORD *)(a2 + 24) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 416));
            **(_QWORD **)(a1 + 256) = v12;
            *(_QWORD *)(a1 + 256) = v12;
            _InterlockedAdd((volatile signed __int32 *)(a1 + 228), 1u);
          }
          else
          {
            *(_DWORD *)(a2 + 44) = 3;
            v6 = 1;
            **(_QWORD **)(a1 + 280) = v12;
            *(_QWORD *)(a1 + 280) = v12;
          }
        }
        break;
      }
    }
    if ( (*(_DWORD *)(a1 + 324) & 0x20000000) == 0 || !*(_DWORD *)(a1 + 328) )
    {
      v8 = 0;
      break;
    }
    RtlSleepConditionVariableCS((PRTL_CONDITION_VARIABLE)(a1 + 80), v3, 0LL);
    v9 = *(_QWORD *)(a1 + 8 * v10 + 560);
  }
  RtlLeaveCriticalSection(v3);
  if ( a2 )
    _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
  if ( v6
    && (!*(_DWORD *)(a1 + 368)
     || (unsigned int)(*(_DWORD *)(a1 + 224) - *(_DWORD *)(a1 + 204) - *(_DWORD *)(a1 + 228)) >= *(_DWORD *)(a1 + 368)) )
  {
    ZwSetEvent(*(HANDLE *)(a1 + 128), 0LL);
  }
  return v8;
}
