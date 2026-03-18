/*
 * XREFs of ?OnMessage@BamoDataProviderProxyImpl@BamoImpl@@UEAAJPEBXI@Z @ 0x18016C340
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154E44 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderProxyImpl::OnMessage(
        BamoImpl::BamoDataProviderProxyImpl *this,
        const void *a2,
        int a3)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  result = CoreUICallReceive(
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL) + 56LL),
             &IDataProviderProxy_Receive<BamoImpl::BamoDataProviderProxyImpl>::Type,
             &Microsoft::CoreUI::MessageCall::dataprovider_g_parameters_GRhanDMFCrrSi_M1Oer81arDMf8_BamoGroup$e5e227f4,
             51LL,
             this,
             a2,
             a3);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -2018375668 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x235,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
      (const char *)(unsigned int)result);
    __debugbreak();
  }
  return result;
}
