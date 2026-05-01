/*
 * XREFs of ?_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication@@IQEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x1800F0A40
 * Callers:
 *     ?_WindowServiceAvailabilityChanged@CApplicationManager@@AEAAXPEAUHWND__@@AEBU_GUID@@H@Z @ 0x1800F0B70 (-_WindowServiceAvailabilityChanged@CApplicationManager@@AEAAXPEAUHWND__@@AEBU_GUID@@H@Z.c)
 *     _lambda_c784fe341da5436104ad3e4e13eefb9b_::operator() @ 0x180104F28 (_lambda_c784fe341da5436104ad3e4e13eefb9b_--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18004E770 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ??0SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@PEAUIImmersiveApplication@@PEAUIObjectArray@@IPEAU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x1800899E4 (--0SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@PEAUIImmersiveApplication@@PEAUIObjectArray@@IPEAU_GU.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@XZ @ 0x1800F81FC (--1SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@XZ.c)
 *     ??$CreateRefCountedObj@USERVICE_AVAILABILITY_CHANGED_DATA@@U1@@@YA?AV?$ComPtr@V?$CRefCountedObject@USERVICE_AVAILABILITY_CHANGED_DATA@@@@@WRL@Microsoft@@$$QEAUSERVICE_AVAILABILITY_CHANGED_DATA@@@Z @ 0x180102158 (--$CreateRefCountedObj@USERVICE_AVAILABILITY_CHANGED_DATA@@U1@@@YA-AV-$ComPtr@V-$CRefCountedObje.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d190757c23000f52f2ae5d43357c90b2___ @ 0x180102CBC (Windows--Internal--ComTaskPool--QueueTask__lambda_d190757c23000f52f2ae5d43357c90b2___.c)
 */

// Hidden C++ exception states: #wind=4
unsigned int __fastcall CApplicationManager::_SendServiceAvailabilityChangedNotification(
        RTL_SRWLOCK *a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        int a5)
{
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v15[40]; // [rsp+48h] [rbp-28h] BYREF
  struct IObjectArray *v16; // [rsp+90h] [rbp+20h] BYREF

  v14[1] = -2LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v16);
  if ( (int)AgileRegistrationList::GetCallbackArray(a1 + 54, &v16) >= 0 )
  {
    SERVICE_AVAILABILITY_CHANGED_DATA::SERVICE_AVAILABILITY_CHANGED_DATA((__int64)v15, a2, (__int64)v16, a3, a4, a5);
    CreateRefCountedObj<SERVICE_AVAILABILITY_CHANGED_DATA,SERVICE_AVAILABILITY_CHANGED_DATA>(v14, v15);
    v9 = v14[0];
    if ( v14[0] )
    {
      v13 = v14[0];
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v13);
      Windows::Internal::ComTaskPool::QueueTask__lambda_d190757c23000f52f2ae5d43357c90b2___(
        v11,
        v10,
        LODWORD(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr),
        &v13);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    SERVICE_AVAILABILITY_CHANGED_DATA::~SERVICE_AVAILABILITY_CHANGED_DATA((SERVICE_AVAILABILITY_CHANGED_DATA *)v15);
  }
  return Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v16);
}
