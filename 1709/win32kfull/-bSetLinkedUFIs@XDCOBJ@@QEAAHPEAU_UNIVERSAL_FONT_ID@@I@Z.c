/*
 * XREFs of ?bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z @ 0x1C02888BC
 * Callers:
 *     NtGdiSetLinkedUFIs @ 0x1C0257F80 (NtGdiSetLinkedUFIs.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall XDCOBJ::bSetLinkedUFIs(XDCOBJ *this, struct _UNIVERSAL_FONT_ID *a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 result; // rax

  v3 = a3;
  *(_DWORD *)(*(_QWORD *)this + 324LL) = a3 == 0;
  v6 = *(_QWORD *)this;
  v7 = *(_QWORD *)(v6 + 312);
  if ( v7 )
  {
    if ( (unsigned int)v3 <= *(_DWORD *)(v6 + 320) )
    {
LABEL_7:
      memmove(*(void **)(*(_QWORD *)this + 312LL), a2, 8 * v3);
      result = 1LL;
      *(_DWORD *)(*(_QWORD *)this + 320LL) = v3;
      return result;
    }
    if ( v7 != v6 + 276 )
    {
      Win32FreePool(*(_QWORD *)(v6 + 312), a2);
      *(_QWORD *)(*(_QWORD *)this + 312LL) = 0LL;
    }
  }
  if ( (unsigned int)v3 <= 4 )
  {
    *(_QWORD *)(*(_QWORD *)this + 312LL) = *(_QWORD *)this + 276LL;
    goto LABEL_7;
  }
  *(_QWORD *)(*(_QWORD *)this + 312LL) = PALLOCMEM2((unsigned int)(8 * v3), 1684300103LL, 1);
  if ( *(_QWORD *)(*(_QWORD *)this + 312LL) )
    goto LABEL_7;
  *(_DWORD *)(*(_QWORD *)this + 320LL) = 0;
  return 0LL;
}
