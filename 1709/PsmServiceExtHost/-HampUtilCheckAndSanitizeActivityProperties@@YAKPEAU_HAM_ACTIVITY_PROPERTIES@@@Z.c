/*
 * XREFs of ?HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18001DA58
 * Callers:
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_KPEAE@Z @ 0x18001D708 (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180041E14 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampUtilCheckAndSanitizeActivityProperties(const wchar_t *a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)a1 < 0x800u
    && wcsnlen(a1 + 2, 0x40uLL) != 64
    && wcsnlen(a1 + 66, 0x40uLL) != 64
    && *((int *)a1 + 65) <= 4 )
  {
    return 1LL;
  }
  result = 0LL;
  *((_WORD *)a1 + 65) = 0;
  *((_WORD *)a1 + 129) = 0;
  return result;
}
