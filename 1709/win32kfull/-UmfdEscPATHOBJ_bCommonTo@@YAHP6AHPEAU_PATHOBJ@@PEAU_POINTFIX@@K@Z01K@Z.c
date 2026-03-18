/*
 * XREFs of ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1C0133A00
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0036F60 (UmfdDispatchEscape.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C00B84AC (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall UmfdEscPATHOBJ_bCommonTo(
        int (*a1)(struct _PATHOBJ *, struct _POINTFIX *, unsigned int),
        struct _PATHOBJ *a2,
        struct _POINTFIX *a3,
        __int64 a4)
{
  unsigned int v4; // r15d
  size_t v7; // rbx
  struct UmfdTls *v8; // rax
  __int64 v9; // r14
  void *v10; // rsi
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8

  v4 = a4;
  v7 = 8LL * (unsigned int)a4;
  if ( !is_mul_ok((unsigned int)a4, 8uLL) )
    return 0LL;
  v8 = UmfdTls::EnsureTls((__int64)a1, ((unsigned int)a4 * (unsigned __int128)8uLL) >> 64, (__int64)a3, a4);
  if ( !v8 )
    return 0LL;
  v9 = *((_QWORD *)v8 + 5);
  if ( !v9 )
    return 0LL;
  v10 = PALLOCMEM2((unsigned int)v7, 1801733703LL, 0);
  if ( !v10 )
    return 0LL;
  if ( v7 )
  {
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a3[v7 / 8] > MmUserProbeAddress || &a3[v7 / 8] < a3 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v10, a3, v7);
  v11 = ((__int64 (__fastcall *)(__int64, void *, _QWORD))a1)(v9, v10, v4);
  Win32FreePool(v10, v12, v13);
  return v11;
}
