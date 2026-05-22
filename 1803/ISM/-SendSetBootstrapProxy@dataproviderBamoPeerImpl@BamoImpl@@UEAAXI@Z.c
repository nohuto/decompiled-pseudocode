/*
 * XREFs of ?SendSetBootstrapProxy@dataproviderBamoPeerImpl@BamoImpl@@UEAAXI@Z @ 0x18008EBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::dataproviderBamoPeerImpl::SendSetBootstrapProxy(
        BamoImpl::dataproviderBamoPeerImpl *this,
        int a2)
{
  __int64 v2; // r8
  __int64 v3; // r10
  int v4; // eax
  __int16 v5; // [rsp+20h] [rbp-38h]
  _QWORD v6[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  v6[0] = *((unsigned int *)this + 9);
  v3 = *(_QWORD *)(v2 + 48);
  v6[1] = *((unsigned int *)this + 10);
  v5 = 8;
  v4 = CoreUICallSend(v3, v6, 2LL, 6LL, v5, &unk_1800FE145, a2);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xAB3,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x18008EC35LL);
  }
}
