/*
 * XREFs of sub_18000C298 @ 0x18000C298
 * Callers:
 *     sub_18000C24C @ 0x18000C24C (sub_18000C24C.c)
 *     sub_1800F0CC0 @ 0x1800F0CC0 (sub_1800F0CC0.c)
 * Callees:
 *     sub_18000C480 @ 0x18000C480 (sub_18000C480.c)
 *     sub_18000C540 @ 0x18000C540 (sub_18000C540.c)
 *     RtlGetSuiteMask @ 0x18000FC90 (RtlGetSuiteMask.c)
 *     sub_18000FCB0 @ 0x18000FCB0 (sub_18000FCB0.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 */

__int64 __fastcall sub_18000C298(__int64 a1)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  int v5; // edi
  __int64 v6; // r14
  __int64 v7; // rcx
  char v9; // [rsp+20h] [rbp-28h]
  char v10; // [rsp+21h] [rbp-27h]

  v10 = 0;
  v9 = 0;
  if ( (*(_DWORD *)(a1 + 112) & 0x75010F61) == 0
    && (*(_BYTE *)(a1 + 112) & 2) != 0
    && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
    v9 = 1;
    if ( *(_BYTE *)(a1 + 386) == 2 )
      v3 = *(_QWORD *)(a1 + 376);
    else
      v3 = 0LL;
    if ( v3 )
    {
      v5 = 0;
    }
    else if ( *(_WORD *)(a1 + 384) )
    {
      v5 = -1073741794;
    }
    else
    {
      *(_WORD *)(a1 + 384) = 1;
      v10 = 1;
      v4 = (unsigned __int64)qword_180158678 >> 4;
      LOWORD(v4) = ((unsigned __int64)qword_180158678 >> 4) + 2;
      v5 = sub_18000FCB0(a1, v4);
      if ( v5 >= 0 )
      {
        sub_18000C480(a1, *(_QWORD *)(a1 + 312));
        *(_QWORD *)(a1 + 376) = 0LL;
        *(_BYTE *)(a1 + 386) = 0;
        RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
        v6 = sub_18000C540(a1);
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        if ( v6 )
        {
          *(_QWORD *)(a1 + 376) = v6;
          *(_WORD *)(a1 + 386) = 514;
          if ( (RtlGetSuiteMask(v7) & 0x10000) == 0 )
            *(_QWORD *)(a1 + 176) = (unsigned __int64)qword_180158678 >> 4;
        }
        else
        {
          v5 = -1073741801;
        }
        --*(_WORD *)(a1 + 384);
        v10 = 0;
        v9 = 0;
        RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      }
    }
  }
  else
  {
    v5 = -1073741811;
  }
  if ( v9 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  if ( v10 )
    --*(_WORD *)(a1 + 384);
  return (unsigned int)v5;
}
