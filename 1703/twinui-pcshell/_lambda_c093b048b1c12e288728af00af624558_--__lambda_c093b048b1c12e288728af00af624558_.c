/*
 * XREFs of _lambda_c093b048b1c12e288728af00af624558_::__lambda_c093b048b1c12e288728af00af624558_ @ 0x180180DE0
 * Callers:
 *     _CSingleViewShellExperience::Launch_::_1_::dtor$4 @ 0x1801A549D (_CSingleViewShellExperience--Launch_--_1_--dtor$4.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18018B014 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18018B440 (--1-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

HRESULT __fastcall lambda_c093b048b1c12e288728af00af624558_::__lambda_c093b048b1c12e288728af00af624558_(__int64 *a1)
{
  __int64 *v1; // rbx
  HRESULT result; // eax
  __int64 v4; // rcx

  v1 = a1 + 4;
  a1[4] = (__int64)&SingleViewExperienceTelemetry::Launch::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(a1 + 4);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v1);
  result = WindowsDeleteString((HSTRING)a1[2]);
  a1[2] = 0LL;
  v4 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
