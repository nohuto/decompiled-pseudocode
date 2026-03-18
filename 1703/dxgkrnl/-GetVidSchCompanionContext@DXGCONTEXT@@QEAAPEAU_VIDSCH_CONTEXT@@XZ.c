/*
 * XREFs of ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0183C14
 * Callers:
 *     DxgkUpdateGpuVirtualAddress @ 0x1C01812F0 (DxgkUpdateGpuVirtualAddress.c)
 *     ?GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ @ 0x1C0183BA8 (-GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

struct _VIDSCH_CONTEXT *__fastcall DXGCONTEXT::GetVidSchCompanionContext(DXGCONTEXT *this)
{
  int v2; // eax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+30h] [rbp-18h]

  if ( !*((_QWORD *)this + 30) )
  {
    v4 = 0LL;
    v5 = 0LL;
    v6 = 0LL;
    v2 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 276LL);
    v4 = 64LL;
    LODWORD(v6) = v2;
    HIDWORD(v4) = *((_DWORD *)this + 55);
    LODWORD(v5) = *((_DWORD *)this + 86);
    *((_QWORD *)this + 30) = (*(__int64 (__fastcall **)(DXGCONTEXT *, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL)
                                                                                            + 8LL)
                                                                                + 216LL))(
                               this,
                               &v4);
  }
  return (struct _VIDSCH_CONTEXT *)*((_QWORD *)this + 30);
}
