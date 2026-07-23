/*
 * XREFs of RtlSetProcessPreferredUILanguages @ 0x18006C0F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_180040BA0 @ 0x180040BA0 (sub_180040BA0.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180040DB0 (RtlpCreateProcessRegistryInfo.c)
 *     sub_180045810 @ 0x180045810 (sub_180045810.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_18006C8FC @ 0x18006C8FC (sub_18006C8FC.c)
 *     sub_18006C99C @ 0x18006C99C (sub_18006C99C.c)
 *     sub_18006E3A0 @ 0x18006E3A0 (sub_18006E3A0.c)
 */

__int64 __fastcall RtlSetProcessPreferredUILanguages(int a1, __int64 a2, _DWORD *a3)
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
      goto LABEL_28;
    if ( (int)sub_18006C99C(a2, (-(__int64)((v5 & 4) != 0) & 0xFFFFFFFFFFFFFFAFuLL) + 85) < 0 )
      DbgPrint(
        "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlSetProcessPreferredUILanguages is not a valid"
        " multi-string!\n");
    if ( (int)sub_18006C8FC(a2, v8, &v16) < 0 )
      return (unsigned int)-1073741811;
    if ( v16 < 2 || *(_WORD *)a2 || *(_WORD *)(a2 + 2) )
    {
      v7 = sub_180045810((__int64)qword_18015BF90, (const WCHAR *)a2, v16, v5 | 2u, 26, 5u, (__int64 *)&BaseAddress);
      if ( v7 < 0 )
      {
        v13 = BaseAddress;
LABEL_23:
        sub_180040BA0(v13);
        return (unsigned int)v7;
      }
      v9 = BaseAddress;
      if ( !BaseAddress || !*((_WORD *)BaseAddress + 2) )
      {
        sub_180040BA0(BaseAddress);
        return (unsigned int)-1073741823;
      }
      if ( a3 )
        *a3 = *((unsigned __int16 *)BaseAddress + 2);
    }
    else
    {
LABEL_28:
      v9 = BaseAddress;
    }
    sub_18006E3A0();
    RtlEnterCriticalSection(&stru_180159BA0);
    v10 = v15[0];
    v11 = *(void **)(v15[0] + 72LL);
    *(_QWORD *)(v15[0] + 72LL) = v9;
    ++*(_DWORD *)(v10 + 16);
    v12 = *(_QWORD *)(v10 + 96);
    if ( v12 )
      *(_DWORD *)(v12 + 40) |= 0x80u;
    RtlLeaveCriticalSection(&stru_180159BA0);
    if ( !v11 )
      return (unsigned int)v7;
    v13 = v11;
    goto LABEL_23;
  }
  return result;
}
