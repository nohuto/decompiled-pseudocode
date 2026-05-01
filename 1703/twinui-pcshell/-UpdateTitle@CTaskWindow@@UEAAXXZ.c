/*
 * XREFs of ?UpdateTitle@CTaskWindow@@UEAAXXZ @ 0x180063D30
 * Callers:
 *     <none>
 * Callees:
 *     Template_dz @ 0x1800657EC (Template_dz.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180175B80 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?GetFirstApplicationViewTitleProperty@@YAJPEAUHWND__@@_KPEAGPEA_K@Z @ 0x18017C6E8 (-GetFirstApplicationViewTitleProperty@@YAJPEAUHWND__@@_KPEAGPEA_K@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTaskWindow::UpdateTitle(CTaskWindow *this)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  HWND v4; // rbp
  _QWORD *v5; // rbx
  void *v6; // rcx
  __int64 v7; // rdi
  unsigned __int16 *v8; // r8
  unsigned __int64 v9; // [rsp+30h] [rbp-238h] BYREF
  unsigned __int16 v10[256]; // [rsp+40h] [rbp-228h] BYREF

  v4 = (HWND)(*(__int64 (__fastcall **)(CTaskWindow *))(*(_QWORD *)this + 32LL))(this);
  if ( v4 )
  {
    v5 = (_QWORD *)((char *)this + 64);
    v6 = (void *)*((_QWORD *)this + 8);
    if ( v6 )
    {
      CoTaskMemFree(v6);
      *v5 = 0LL;
    }
    v7 = -1LL;
    *v5 = 0LL;
    *((_QWORD *)this + 9) = -1LL;
    *((_QWORD *)this + 10) = -1LL;
    if ( (int)GetFirstApplicationViewTitleProperty(v4, v2, v10, &v9) >= 0 )
    {
      v8 = &v10[v9];
      do
        ++v7;
      while ( v8[v7] );
      _AllocStringWorker<CTCoAllocPolicy>(v3, v2, v8, v7);
    }
  }
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    Template_dz(v3, v2, (unsigned int)v4, *((_QWORD *)this + 8));
}
