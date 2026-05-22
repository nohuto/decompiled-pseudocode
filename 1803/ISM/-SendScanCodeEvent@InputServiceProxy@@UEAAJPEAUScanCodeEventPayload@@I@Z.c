/*
 * XREFs of ?SendScanCodeEvent@InputServiceProxy@@UEAAJPEAUScanCodeEventPayload@@I@Z @ 0x180025CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputServiceProxy::SendScanCodeEvent(
        InputServiceProxy *this,
        struct ScanCodeEventPayload *a2,
        int a3)
{
  __int64 v3; // rcx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, int))(*(_QWORD *)v3 + 232LL))(
           v3,
           *(unsigned __int16 *)a2,
           *((unsigned __int16 *)a2 + 1),
           *((unsigned __int16 *)a2 + 2),
           *((_DWORD *)a2 + 2),
           a3);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x5E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
        (const char *)(unsigned int)v4);
      JUMPOUT(0x180025D1CLL);
    }
  }
  return 0LL;
}
