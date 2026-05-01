/*
 * XREFs of ?InternalRelease@?$ComPtr@UIPrivilegedSizeConstraintsOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x180092220
 * Callers:
 *     ?QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ @ 0x18002A6D0 (-QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ.c)
 *     _lambda_b8642ff14e560df3dcd31f4e91e1514d_::operator() @ 0x1800921C0 (_lambda_b8642ff14e560df3dcd31f4e91e1514d_--operator().c)
 *     ??1?$ComPtr@UIPrivilegedSizeConstraintsOperations@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F9A70 (--1-$ComPtr@UIPrivilegedSizeConstraintsOperations@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1CApplicationViewManager@@EEAA@XZ @ 0x18013A470 (--1CApplicationViewManager@@EEAA@XZ.c)
 *     ?InitializePrivilegedOperations@CApplicationViewManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x18013BD00 (-InitializePrivilegedOperations@CApplicationViewManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IPrivilegedSizeConstraintsOperations>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 (*v4)(void); // rax

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( v4 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release )
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release();
    else
      return v4();
  }
  return result;
}
