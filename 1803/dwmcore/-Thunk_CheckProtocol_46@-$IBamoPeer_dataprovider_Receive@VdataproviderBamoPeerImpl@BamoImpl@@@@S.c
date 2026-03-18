/*
 * XREFs of ?Thunk_CheckProtocol_46@?$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180154B40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall IBamoPeer_dataprovider_Receive<BamoImpl::dataproviderBamoPeerImpl>::Thunk_CheckProtocol_46(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a2;
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) + 16LL);
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  v5 = *v4 - *v2;
  if ( *v4 == *v2 )
    v5 = v4[1] - v2[1];
  v6 = 0;
  if ( v5 )
  {
    v6 = -2018375668;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA37,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
      (const char *)0x87B2080CLL);
  }
  return v6;
}
