/*
 * XREFs of ?AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z @ 0x180094F28
 * Callers:
 *     ?QueryInterface@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A13D0 (-QueryInterface@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObjectNoLock@VCComClassFactory@ATL@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BFFD0 (-QueryInterface@-$CComObjectNoLock@VCComClassFactory@ATL@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180008C40 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z @ 0x180095614 (-InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::AtlInternalQueryInterface(
        char *a1,
        const struct ATL::_ATL_INTMAP_ENTRY *a2,
        const struct _GUID *a3,
        char **a4)
{
  const struct ATL::_ATL_INTMAP_ENTRY *v6; // rbx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  char *v11; // rbx
  __int64 (__fastcall *v12)(char *, const struct _GUID *, char **, _QWORD); // r10
  const struct _GUID *v13; // rsi

  v6 = a2;
  if ( !a1 || !a2 )
    return 2147942487LL;
  if ( !a4 )
    return 2147500035LL;
  *a4 = 0LL;
  if ( (unsigned int)ATL::InlineIsEqualUnknown(a3) )
  {
    v10 = *(_QWORD *)(v9 + 8);
    goto LABEL_7;
  }
  v12 = *(__int64 (__fastcall **)(char *, const struct _GUID *, char **, _QWORD))(v9 + 16);
  while ( 1 )
  {
    if ( !v12 )
      return 2147500034LL;
    v13 = *(const struct _GUID **)v6;
    if ( !*(_QWORD *)v6 || InlineIsEqualGUID(*(const struct _GUID **)v6, a3) )
      break;
LABEL_15:
    v12 = (__int64 (__fastcall *)(char *, const struct _GUID *, char **, _QWORD))*((_QWORD *)v6 + 5);
    v6 = (const struct ATL::_ATL_INTMAP_ENTRY *)((char *)v6 + 24);
  }
  if ( v12 != (__int64 (__fastcall *)(char *, const struct _GUID *, char **, _QWORD))1 )
  {
    result = v12(a1, a3, a4, *((_QWORD *)v6 + 1));
    if ( !(_DWORD)result || v13 && (int)result < 0 )
      return result;
    goto LABEL_15;
  }
  v10 = *((_QWORD *)v6 + 1);
LABEL_7:
  v11 = &a1[v10];
  (*(void (__fastcall **)(char *))(*(_QWORD *)v11 + 8LL))(v11);
  result = 0LL;
  *a4 = v11;
  return result;
}
