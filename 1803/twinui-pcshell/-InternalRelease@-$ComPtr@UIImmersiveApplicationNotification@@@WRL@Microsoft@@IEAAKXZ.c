/*
 * XREFs of ?InternalRelease@?$ComPtr@UIImmersiveApplicationNotification@@@WRL@Microsoft@@IEAAKXZ @ 0x180087710
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d190757c23000f52f2ae5d43357c90b2___::Run @ 0x18001DAB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d190757c23000f52f2ae5d43357c90b2___--Run.c)
 *     ??1?$ComPtr@UIImmersiveApplicationNotification@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F895C (--1-$ComPtr@UIImmersiveApplicationNotification@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _lambda_497cdd3be1990e13318bbe793e150545_::operator() @ 0x1801158C4 (_lambda_497cdd3be1990e13318bbe793e150545_--operator().c)
 *     ?ApplicationChanged@CDropFeedback@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x1802EDEC0 (-ApplicationChanged@CDropFeedback@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IImmersiveApplicationNotification>::InternalRelease(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( !v2 )
    return 0LL;
  *a1 = 0LL;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
