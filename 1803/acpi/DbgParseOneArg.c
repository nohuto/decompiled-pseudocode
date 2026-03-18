/*
 * XREFs of DbgParseOneArg @ 0x1C0054040
 * Callers:
 *     DbgParseArgs @ 0x1C0053FC8 (DbgParseArgs.c)
 *     DbgParseOneArg @ 0x1C0054040 (DbgParseOneArg.c)
 * Callees:
 *     _strtoui64_0 @ 0x1C0003FC2 (_strtoui64_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     ConPrintf @ 0x1C0048620 (ConPrintf.c)
 *     DbgMatchArg @ 0x1C0053EF8 (DbgMatchArg.c)
 *     DbgParseOneArg @ 0x1C0054040 (DbgParseOneArg.c)
 */

__int64 __fastcall DbgParseOneArg(__int64 a1, char *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v6; // ebx
  __int64 matched; // rax
  __int64 v8; // rdi
  unsigned int v9; // edx
  unsigned int v11; // ecx
  volatile signed __int32 *v12; // rax
  unsigned int (__fastcall *v13)(__int64, char *, _QWORD, _QWORD); // rax
  char *v14; // rsi
  char *v15; // rsi
  unsigned int (__fastcall *v16)(__int64, char *, _QWORD, _QWORD); // rax
  char *EndPtr; // [rsp+30h] [rbp-28h] BYREF
  char *String; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v21; // [rsp+70h] [rbp+18h]

  v21 = a3;
  String = a2;
  v6 = 0;
  matched = DbgMatchArg(a1, (const char **)&String, a4);
  v8 = matched;
  if ( !matched )
  {
    ConPrintf("AMLI_ARGERR: ");
    ConPrintf("invalid command argument - %s", String);
    ConPrintf("\n");
    return (unsigned int)-3;
  }
  v9 = *(_DWORD *)(matched + 8);
  if ( !v9 )
    goto LABEL_26;
  if ( v9 <= 2 )
  {
    v15 = String;
    if ( (*(_DWORD *)(matched + 12) & 2) != 0 )
    {
      if ( !*String || !strchr("=:", *String) )
      {
        ConPrintf("AMLI_ARGERR: ");
        ConPrintf("argument missing option separator - %s", v15);
        ConPrintf("\n");
        return (unsigned int)-1;
      }
      v9 = *(_DWORD *)(v8 + 8);
      ++v15;
    }
    if ( v9 == 1 )
    {
      **(_QWORD **)(v8 + 16) = v15;
    }
    else
    {
      **(_DWORD **)(v8 + 16) = strtoui64_0(v15, &EndPtr, *(_DWORD *)(v8 + 24));
      if ( v15 == EndPtr )
      {
        ConPrintf("AMLI_ARGERR: ");
        ConPrintf("invalid numeric argument - %s", v15);
        ConPrintf("\n");
        return (unsigned int)-2;
      }
    }
    v16 = *(unsigned int (__fastcall **)(__int64, char *, _QWORD, _QWORD))(v8 + 32);
    if ( v16 )
      return v16(v8, v15, v21, (unsigned int)*a4);
  }
  else
  {
    if ( v9 > 4 )
    {
      if ( v9 == 5 )
        return (unsigned int)(*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD))(matched + 32))(
                               matched,
                               String,
                               a3,
                               (unsigned int)*a4);
LABEL_26:
      ConPrintf("AMLI_ARGERR: ");
      ConPrintf("invalid argument table");
      ConPrintf("\n");
      return (unsigned int)-4;
    }
    v11 = *(_DWORD *)(matched + 24);
    v12 = *(volatile signed __int32 **)(matched + 16);
    if ( v9 == 3 )
      _InterlockedOr(v12, v11);
    else
      _InterlockedAnd(v12, ~v11);
    v13 = *(unsigned int (__fastcall **)(__int64, char *, _QWORD, _QWORD))(v8 + 32);
    v14 = String;
    if ( (!v13 || !v13(v8, String, v21, (unsigned int)*a4)) && *v14 )
      return (unsigned int)DbgParseOneArg(a1, v14, v21, a4);
  }
  return v6;
}
