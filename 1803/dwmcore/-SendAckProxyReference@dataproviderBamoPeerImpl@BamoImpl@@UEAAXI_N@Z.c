/*
 * XREFs of ?SendAckProxyReference@dataproviderBamoPeerImpl@BamoImpl@@UEAAXI_N@Z @ 0x1801547A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154E44 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::dataproviderBamoPeerImpl::SendAckProxyReference(BamoImpl::dataproviderBamoPeerImpl *this)
{
  __int64 v1; // r9
  __int64 v2; // r10
  int v3; // eax
  int v4; // [rsp+20h] [rbp-38h]
  _QWORD v5[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  v5[0] = *((unsigned int *)this + 9);
  v2 = *(_QWORD *)(v1 + 48);
  v5[1] = *((unsigned int *)this + 10);
  v3 = CoreUICallSend(v2, v5, 2LL, 6LL, 5, &unk_180277D38);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0xAC1,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
      (const char *)(unsigned int)v3,
      v4);
    __debugbreak();
  }
}
