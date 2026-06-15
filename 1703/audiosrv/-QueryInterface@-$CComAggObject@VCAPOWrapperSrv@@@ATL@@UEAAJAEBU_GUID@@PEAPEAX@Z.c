/*
 * XREFs of ?QueryInterface@?$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BFD90
 * Callers:
 *     <none>
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180008C40 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z @ 0x180095614 (-InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::CComAggObject<CAPOWrapperSrv>::QueryInterface(char *a1, const struct _GUID *a2, char **a3)
{
  unsigned int v7; // edi
  const struct _GUID *v8; // rcx
  char **v9; // r8
  GUID **v10; // rbx
  char *v11; // r14
  const struct _GUID *v12; // rbp
  GUID *v13; // rax
  int v14; // eax
  char *v15; // rbx

  if ( !a3 )
    return 2147500035LL;
  v7 = 0;
  *a3 = 0LL;
  if ( ATL::InlineIsEqualUnknown(a2) )
  {
    *v9 = a1;
    (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
    return v7;
  }
  v10 = &`CAPOWrapperSrv::_GetEntries'::`2'::_entries;
  v11 = a1 + 24;
  if ( v11 )
  {
    *v9 = 0LL;
    if ( ATL::InlineIsEqualUnknown(v8) )
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)v11 + 8LL))(v11);
      *a3 = v11;
      return v7;
    }
    while ( 1 )
    {
      v12 = *v10;
      if ( !*v10 || InlineIsEqualGUID(*v10, a2) )
      {
        v13 = v10[2];
        if ( v13 == (GUID *)1 )
        {
          v15 = (char *)v10[1] + (_QWORD)v11;
          (*(void (__fastcall **)(char *))(*(_QWORD *)v15 + 8LL))(v15);
          *a3 = v15;
          return v7;
        }
        v14 = ((__int64 (__fastcall *)(char *, const struct _GUID *, char **, GUID *))v13)(v11, a2, a3, v10[1]);
        if ( !v14 || v12 && v14 < 0 )
          return (unsigned int)v14;
      }
      v10 += 3;
      if ( !v10[2] )
        return (unsigned int)-2147467262;
    }
  }
  return (unsigned int)-2147024809;
}
