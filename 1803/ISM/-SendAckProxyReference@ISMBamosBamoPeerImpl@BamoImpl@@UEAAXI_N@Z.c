/*
 * XREFs of ?SendAckProxyReference@ISMBamosBamoPeerImpl@BamoImpl@@UEAAXI_N@Z @ 0x18001E590
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::ISMBamosBamoPeerImpl::SendAckProxyReference(BamoImpl::ISMBamosBamoPeerImpl *this, int a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  int v4; // eax
  __int16 v5; // [rsp+20h] [rbp-38h]
  _QWORD v6[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  v6[0] = *((unsigned int *)this + 9);
  v3 = *(_QWORD *)(v2 + 48);
  v6[1] = *((unsigned int *)this + 10);
  v5 = 21;
  v4 = CoreUICallSend(v3, v6, 2LL, 26LL, v5, &unk_1800F96DD, a2);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x29FB,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ismbamos.bamo.details.inl",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x18001E60DLL);
  }
}
