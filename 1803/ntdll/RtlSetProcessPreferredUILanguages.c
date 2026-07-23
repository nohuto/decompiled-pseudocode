/*
 * XREFs of RtlSetProcessPreferredUILanguages @ 0x180087CA0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_180031068 @ 0x180031068 (sub_180031068.c)
 *     sub_1800310D8 @ 0x1800310D8 (sub_1800310D8.c)
 *     sub_180031FD4 @ 0x180031FD4 (sub_180031FD4.c)
 *     sub_180032CEC @ 0x180032CEC (sub_180032CEC.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180034D10 (RtlpCreateProcessRegistryInfo.c)
 *     sub_180035E90 @ 0x180035E90 (sub_180035E90.c)
 */

__int64 __fastcall RtlSetProcessPreferredUILanguages(int a1, __int16 *a2, _DWORD *a3)
{
  int v5; // edi
  __int64 result; // rax
  int v7; // ebx
  __int64 v8; // rdx
  PVOID v9; // rdi
  __int64 v10; // rax
  void *v11; // rsi
  __int64 v12; // rdx
  PVOID v13; // rcx
  PVOID BaseAddress; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v15[4]; // [rsp+48h] [rbp-20h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+20h] BYREF

  v15[0] = 0LL;
  BaseAddress = 0LL;
  v5 = a1;
  if ( NtCurrentTeb()->IsImpersonating )
    return 3221225741LL;
  if ( a1 )
  {
    if ( (a1 & 0xFFFFFFF3) != 0 || (a1 & 0xC) == 12 )
      return 3221225485LL;
  }
  else
  {
    v5 = 8;
  }
  result = RtlpCreateProcessRegistryInfo(v15);
  v7 = result;
  if ( (int)result >= 0 )
  {
    if ( !a2 )
      goto LABEL_27;
    if ( (int)sub_180031068(a2, (-(__int64)((v5 & 4) != 0) & 0xFFFFFFFFFFFFFFAFuLL) + 85) < 0 )
      DbgPrint(
        "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlSetProcessPreferredUILanguages is not a valid"
        " multi-string!\n");
    if ( (int)sub_1800310D8(a2, v8, &v16) < 0 )
      return (unsigned int)-1073741811;
    if ( v16 < 2 || *a2 || a2[1] )
    {
      v7 = sub_180035E90((__int64)qword_18015D000, (const WCHAR *)a2, v16, v5 | 2u, 26, 5u, (__int64 *)&BaseAddress);
      if ( v7 < 0 )
      {
        v13 = BaseAddress;
LABEL_29:
        sub_180032CEC(v13);
        return (unsigned int)v7;
      }
      v9 = BaseAddress;
      if ( !BaseAddress || !*((_WORD *)BaseAddress + 2) )
      {
        sub_180032CEC(BaseAddress);
        return (unsigned int)-1073741823;
      }
      if ( a3 )
        *a3 = *((unsigned __int16 *)BaseAddress + 2);
    }
    else
    {
LABEL_27:
      v9 = BaseAddress;
    }
    sub_180031FD4();
    RtlEnterCriticalSection(&stru_18015ABE0);
    v10 = v15[0];
    v11 = *(void **)(v15[0] + 72LL);
    *(_QWORD *)(v15[0] + 72LL) = v9;
    ++*(_DWORD *)(v10 + 16);
    v12 = *(_QWORD *)(v10 + 96);
    if ( v12 )
      *(_DWORD *)(v12 + 40) |= 0x80u;
    RtlLeaveCriticalSection(&stru_18015ABE0);
    if ( !v11 )
      return (unsigned int)v7;
    v13 = v11;
    goto LABEL_29;
  }
  return result;
}
