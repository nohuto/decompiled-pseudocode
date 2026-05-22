/*
 * XREFs of ?OnMessage@BamoEdgyControllerServerPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z @ 0x1800670F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoEdgyControllerServerPrincipalImpl::OnMessage(
        BamoImpl::BamoEdgyControllerServerPrincipalImpl *this,
        const void *a2,
        int a3)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  result = CoreUICallReceive(
             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 56LL),
             &IEdgyControllerServerPrincipal_Receive<BamoImpl::BamoEdgyControllerServerPrincipalImpl>::Type,
             &Microsoft::CoreUI::MessageCall::ISMBamos_g_parameters_jksxHZtrc6wMaeXIMuhxle7o0U8_BamoGroup$8f28419c,
             129LL,
             this,
             a2,
             a3);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -2018375668 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1506,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\bamo\\ismbamos.bamo.details.inl",
      (const char *)(unsigned int)result);
    JUMPOUT(0x18006715DLL);
  }
  return result;
}
