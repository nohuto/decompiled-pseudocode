/*
 * XREFs of RtlGetProcessPreferredUILanguages @ 0x1800EBAB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180040DB0 (RtlpCreateProcessRegistryInfo.c)
 *     sub_180040E28 @ 0x180040E28 (sub_180040E28.c)
 *     sub_18006E3A0 @ 0x18006E3A0 (sub_18006E3A0.c)
 */

__int64 __fastcall RtlGetProcessPreferredUILanguages(int a1, int *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned __int8 v7; // bl
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  unsigned int v14; // ebx
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0LL;
  v7 = a1;
  if ( !a4 || !a2 || !a3 && *a4 )
    return 3221225485LL;
  if ( !a1 )
  {
    v7 = 8;
    goto LABEL_8;
  }
  if ( (a1 & 0xFFFFFFF3) != 0 || (a1 & 0xC) == 12 )
    return 3221225485LL;
LABEL_8:
  result = RtlpCreateProcessRegistryInfo(&v15);
  if ( (int)result >= 0 )
  {
    v13 = v15;
    if ( *(_QWORD *)(v15 + 72) )
    {
      sub_18006E3A0(v10, v9, v11, v12);
      RtlEnterCriticalSection((__int64)&unk_180159BA0);
      v14 = sub_180040E28(*(_QWORD *)(v13 + 72), v13, a3, a4, v7, 0, a2);
      RtlLeaveCriticalSection((__int64)&unk_180159BA0);
    }
    else
    {
      return (unsigned int)sub_180040E28(0LL, v15, a3, a4, v7, 0, a2);
    }
    return v14;
  }
  return result;
}
