/*
 * XREFs of sub_180059DC0 @ 0x180059DC0
 * Callers:
 *     sub_180059D74 @ 0x180059D74 (sub_180059D74.c)
 *     sub_1800ED0C0 @ 0x1800ED0C0 (sub_1800ED0C0.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_180059FA8 @ 0x180059FA8 (sub_180059FA8.c)
 *     RtlGetSuiteMask @ 0x18005A990 (RtlGetSuiteMask.c)
 *     sub_18005A9B0 @ 0x18005A9B0 (sub_18005A9B0.c)
 *     sub_18005C9A4 @ 0x18005C9A4 (sub_18005C9A4.c)
 */

__int64 __fastcall sub_180059DC0(__int64 a1)
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
      v4 = (unsigned __int64)qword_180159758 >> 4;
      LOWORD(v4) = ((unsigned __int64)qword_180159758 >> 4) + 2;
      v5 = sub_18005C9A4(a1, v4);
      if ( v5 >= 0 )
      {
        sub_18005A9B0(a1, *(_QWORD *)(a1 + 312));
        *(_QWORD *)(a1 + 376) = 0LL;
        *(_BYTE *)(a1 + 386) = 0;
        RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
        v6 = sub_180059FA8(a1);
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        if ( v6 )
        {
          *(_QWORD *)(a1 + 376) = v6;
          *(_WORD *)(a1 + 386) = 514;
          if ( (RtlGetSuiteMask(v7) & 0x10000) == 0 )
            *(_QWORD *)(a1 + 176) = (unsigned __int64)qword_180159758 >> 4;
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
