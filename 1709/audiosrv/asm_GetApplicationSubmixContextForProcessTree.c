/*
 * XREFs of asm_GetApplicationSubmixContextForProcessTree @ 0x1800A0750
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall asm_GetApplicationSubmixContextForProcessTree(__int64 a1, unsigned int a2, _QWORD *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v9[6]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         0LL,
         &v11);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *(_QWORD *)v9 = 0LL;
    v5 = (*(__int64 (__fastcall **)(CProcessSubmixManager *, _QWORD, __int64, __int64, int *))(*(_QWORD *)g_ProcessSubmixManager
                                                                                             + 24LL))(
           g_ProcessSubmixManager,
           a2,
           2LL,
           v11,
           v9);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v6 = 0;
      *a3 = *(_QWORD *)v9;
      goto LABEL_7;
    }
    v7 = 163LL;
  }
  else
  {
    v7 = 160LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v7,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
    (const char *)(unsigned int)v5);
LABEL_7:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
  return v6;
}
