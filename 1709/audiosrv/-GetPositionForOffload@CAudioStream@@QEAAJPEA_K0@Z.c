/*
 * XREFs of ?GetPositionForOffload@CAudioStream@@QEAAJPEA_K0@Z @ 0x18007C994
 * Callers:
 *     ?GetPositionForOffload@CVADServer@@UEAAJPEA_K0@Z @ 0x18008B8C0 (-GetPositionForOffload@CVADServer@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::GetPositionForOffload(CAudioStream *this, unsigned __int64 *a2, unsigned __int64 *a3)
{
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 7);
  v10 = 0LL;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 80LL))(v5, &v10);
  v6 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, unsigned __int64 *))(*(_QWORD *)v10 + 176LL))(
         v10,
         a2,
         a3);
  v7 = v6;
  if ( v6 >= 0 )
    v7 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2DA,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v6);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10);
  return v7;
}
