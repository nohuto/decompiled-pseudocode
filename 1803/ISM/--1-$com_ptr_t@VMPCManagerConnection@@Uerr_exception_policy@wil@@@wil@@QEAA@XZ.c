/*
 * XREFs of ??1?$com_ptr_t@VMPCManagerConnection@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBF8
 * Callers:
 *     _InputSystemServerConnection::Create_::_1_::dtor$5 @ 0x1800E4244 (_InputSystemServerConnection--Create_--_1_--dtor$5.c)
 *     _MPCManagerClient::Create_::_1_::dtor$2 @ 0x1800E45DE (_MPCManagerClient--Create_--_1_--dtor$2.c)
 *     _MPCManagerClient::MPCManagerClient_::_1_::dtor$3 @ 0x1800E4670 (_MPCManagerClient--MPCManagerClient_--_1_--dtor$3.c)
 *     _Microsoft::Bamo::BamoConnection::CreateClient_MPCManagerClientConnection__::_1_::dtor$0 @ 0x1800E46D2 (_Microsoft--Bamo--BamoConnection--CreateClient_MPCManagerClientConnection__--_1_--dtor$0.c)
 *     __lambda_bf3949d951f60169eb17c52705c3d45b_::operator()_::_1_::dtor$1 @ 0x1800E6489 (__lambda_bf3949d951f60169eb17c52705c3d45b_--operator()_--_1_--dtor$1.c)
 *     _MPCManager::MPCManager_::_1_::dtor$1 @ 0x1800E64CA (_MPCManager--MPCManager_--_1_--dtor$1.c)
 *     _Microsoft::Bamo::BamoConnection::CreateServer_MPCManagerConnection__::_1_::dtor$0 @ 0x1800E64E6 (_Microsoft--Bamo--BamoConnection--CreateServer_MPCManagerConnection__--_1_--dtor$0.c)
 *     _AnimationDataProvider::AnimationDataProvider_::_1_::dtor$4 @ 0x1800E810E (_AnimationDataProvider--AnimationDataProvider_--_1_--dtor$4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::com_ptr_t<MPCManagerConnection,wil::err_exception_policy>::~com_ptr_t<MPCManagerConnection,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  void (__fastcall ***v2)(_QWORD); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 40LL))(v1);
    (**v2)(v2);
  }
}
