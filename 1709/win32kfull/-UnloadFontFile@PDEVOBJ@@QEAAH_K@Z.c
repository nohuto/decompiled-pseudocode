/*
 * XREFs of ?UnloadFontFile@PDEVOBJ@@QEAAH_K@Z @ 0x1C003DF5C
 * Callers:
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C0041A18 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     GreMakeFontDir @ 0x1C0293AF0 (GreMakeFontDir.c)
 * Callees:
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0039370 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ?Initialize@ATTACHOBJ@@QEAAXPEAVPDEVOBJ@@@Z @ 0x1C00393A4 (-Initialize@ATTACHOBJ@@QEAAXPEAVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::UnloadFontFile(struct PDEV **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall *v5)(__int64); // rbx
  unsigned int v6; // ebx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-68h] BYREF
  __int64 v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+60h] [rbp-28h]
  char v11; // [rsp+64h] [rbp-24h]

  v5 = (__int64 (__fastcall *)(__int64))*((_QWORD *)*this + 384);
  if ( !gpepCSRSS )
    return 0xFFFFFFFFLL;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  ATTACHOBJ::Initialize(&ApcState, this, a3, a4);
  v6 = v5(a2);
  ATTACHOBJ::~ATTACHOBJ(&ApcState);
  return v6;
}
