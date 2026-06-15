/*
 * XREFs of asm_GetApplicationSubmixes @ 0x1800AFFE0
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x180013D20 (MIDL_user_allocate.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_back@V?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@std@@@?$vector@V?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@std@@@2@@std@@QEAAX$$QEAV?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@1@@Z @ 0x1800AE8A0 (--$emplace_back@V-$unique_ptr@VCAppSubmixContext@@U-$default_delete@VCAppSubmixContext@@@std@@@s.c)
 *     ??$make_unique@VCAppSubmixContext@@PEAUIProcessSubmixProxy@@@std@@YA?AV?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@0@$$QEAPEAUIProcessSubmixProxy@@@Z @ 0x1800AEC9C (--$make_unique@VCAppSubmixContext@@PEAUIProcessSubmixProxy@@@std@@YA-AV-$unique_ptr@VCAppSubmixC.c)
 */

__int64 __fastcall asm_GetApplicationSubmixes(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _QWORD **v5; // rax
  __int64 *i; // rbx
  void *v7; // rdi
  __int64 *v8; // rbx
  signed __int64 v9; // rdi
  _BYTE *v10; // r8
  unsigned int v11; // r15d
  __int64 *j; // rax
  __int64 v13; // rcx
  __int64 **v14; // rdi
  __int64 *v15; // r14
  _QWORD **v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+38h] [rbp-28h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-20h] BYREF
  void *v20[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v21; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  void *v23; // [rsp+98h] [rbp+38h] BYREF

  (*(void (__fastcall **)(CProcessSubmixManager *, LPCRITICAL_SECTION *, __int64, _QWORD ***))(*(_QWORD *)g_ProcessSubmixManager
                                                                                             + 40LL))(
    g_ProcessSubmixManager,
    &lpCriticalSection,
    a1,
    &v17);
  v5 = v17;
  v21 = 0LL;
  *(_OWORD *)v20 = 0LL;
  for ( i = *v17; i != v5[1]; ++i )
  {
    v18 = *i;
    std::make_unique<CAppSubmixContext,IProcessSubmixProxy *>(&v23, &v18);
    std::vector<std::unique_ptr<CAppSubmixContext>>::emplace_back<std::unique_ptr<CAppSubmixContext>>(
      (unsigned __int64 *)v20,
      (__int64 *)&v23);
    v7 = v23;
    if ( v23 )
    {
      wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)v23);
      operator delete(v7, (const struct std::nothrow_t *)8);
    }
    v5 = v17;
  }
  v8 = (__int64 *)v20[0];
  v9 = ((char *)v20[1] - (char *)v20[0]) >> 3;
  v10 = MIDL_user_allocate(8 * v9);
  if ( v10 )
  {
    for ( j = v8; j != v20[1]; ++j )
    {
      v13 = *j;
      *j = 0LL;
      *(__int64 *)((char *)j + v10 - (_BYTE *)v8) = v13;
    }
    *a2 = v9;
    v11 = 0;
    *a3 = v10;
  }
  else
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA4,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      (const char *)0x8007000ELL);
  }
  if ( v8 )
  {
    v14 = (__int64 **)v8;
    if ( v8 != v20[1] )
    {
      do
      {
        v15 = *v14;
        if ( *v14 )
        {
          wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(*v14);
          operator delete(v15, (const struct std::nothrow_t *)8);
        }
        ++v14;
      }
      while ( v14 != v20[1] );
    }
    std::_Deallocate(v8, (v21 - (__int64)v8) >> 3, 8uLL);
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return v11;
}
