/*
 * XREFs of ?QueryInterface@?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B98A0
 * Callers:
 *     ?QueryInterface@?$CComObject@VCAPOWrapperSrv@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037240 (-QueryInterface@-$CComObject@VCAPOWrapperSrv@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037250 (-QueryInterface@-$CComObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037260 (-QueryInterface@-$CComObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18000D0D4 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z @ 0x18007C040 (-InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::CComObject<CAPOWrapperSrv>::QueryInterface(char *a1, const struct _GUID *a2, char **a3)
{
  GUID **v3; // rbx
  __int64 result; // rax
  const struct _GUID *v8; // rbp
  GUID *v9; // rax
  char *v10; // rbx

  v3 = &`CAPOWrapperSrv::_GetEntries'::`2'::_entries;
  if ( a1 )
  {
    if ( !a3 )
      return 2147500035LL;
    *a3 = 0LL;
    if ( ATL::InlineIsEqualUnknown(a2) )
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
      result = 0LL;
      *a3 = a1;
      return result;
    }
    while ( 1 )
    {
      v8 = *v3;
      if ( !*v3 || InlineIsEqualGUID(*v3, a2) )
      {
        v9 = v3[2];
        if ( v9 == (GUID *)1 )
        {
          v10 = (char *)v3[1] + (_QWORD)a1;
          (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 8LL))(v10);
          result = 0LL;
          *a3 = v10;
          return result;
        }
        result = ((__int64 (__fastcall *)(char *, const struct _GUID *, char **, GUID *))v9)(a1, a2, a3, v3[1]);
        if ( !(_DWORD)result || v8 && (int)result < 0 )
          return result;
      }
      v3 += 3;
      if ( !v3[2] )
        return 2147500034LL;
    }
  }
  return 2147942487LL;
}
