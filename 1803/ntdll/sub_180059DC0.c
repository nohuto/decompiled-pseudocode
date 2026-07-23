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

__int64 __fastcall sub_180059DC0(PRTL_CRITICAL_SECTION *HeapHandle)
{
  PRTL_CRITICAL_SECTION v3; // rax
  int v4; // edi
  __int64 v5; // r14
  char v7; // [rsp+20h] [rbp-28h]
  char v8; // [rsp+21h] [rbp-27h]

  v8 = 0;
  v7 = 0;
  if ( ((_DWORD)HeapHandle[14] & 0x75010F61) == 0
    && ((_BYTE)HeapHandle[14] & 2) != 0
    && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    RtlEnterCriticalSection(HeapHandle[44]);
    v7 = 1;
    if ( *((_BYTE *)HeapHandle + 386) == 2 )
      v3 = HeapHandle[47];
    else
      v3 = 0LL;
    if ( v3 )
    {
      v4 = 0;
    }
    else if ( *((_WORD *)HeapHandle + 192) )
    {
      v4 = -1073741794;
    }
    else
    {
      *((_WORD *)HeapHandle + 192) = 1;
      v8 = 1;
      v4 = sub_18005C9A4(HeapHandle);
      if ( v4 >= 0 )
      {
        sub_18005A9B0(HeapHandle);
        HeapHandle[47] = 0LL;
        *((_BYTE *)HeapHandle + 386) = 0;
        RtlLeaveCriticalSection(HeapHandle[44]);
        v5 = sub_180059FA8((int)HeapHandle);
        RtlEnterCriticalSection(HeapHandle[44]);
        if ( v5 )
        {
          HeapHandle[47] = (PRTL_CRITICAL_SECTION)v5;
          *((_WORD *)HeapHandle + 193) = 514;
          if ( (RtlGetSuiteMask() & 0x10000) == 0 )
            HeapHandle[22] = (PRTL_CRITICAL_SECTION)((unsigned __int64)qword_180159758 >> 4);
        }
        else
        {
          v4 = -1073741801;
        }
        --*((_WORD *)HeapHandle + 192);
        v8 = 0;
        v7 = 0;
        RtlLeaveCriticalSection(HeapHandle[44]);
      }
    }
  }
  else
  {
    v4 = -1073741811;
  }
  if ( v7 )
    RtlLeaveCriticalSection(HeapHandle[44]);
  if ( v8 )
    --*((_WORD *)HeapHandle + 192);
  return (unsigned int)v4;
}
