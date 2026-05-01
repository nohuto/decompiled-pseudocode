/*
 * XREFs of ?GetProcessMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIProcessMemoryReport@23@@Z @ 0x18000B240
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRestrictedErrorInfo@@@WRL@Microsoft@@IEAAKXZ @ 0x1800018C8 (-InternalRelease@-$ComPtr@UIRestrictedErrorInfo@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800077B0 (__security_check_cookie.c)
 *     ??$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AEA_KAEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIProcessMemoryReport@System@Windows@@AEA_K1@Z @ 0x18000AC50 (--$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AEA_KAEA_K@D.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::GetProcessMemoryReport(
        Windows::System::CMemoryManager *this,
        struct Windows::System::IProcessMemoryReport **a2)
{
  int v3; // eax
  signed int v4; // eax
  int v5; // ebx
  struct Windows::System::IProcessMemoryReport *v6; // rcx
  struct Windows::System::IProcessMemoryReport *v8; // [rsp+30h] [rbp-98h] BYREF
  ULONG ReturnLength; // [rsp+38h] [rbp-90h] BYREF
  _BYTE ProcessInformation[32]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v11[8]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v12; // [rsp+A0h] [rbp-28h] BYREF

  v8 = 0LL;
  v3 = NtQueryInformationProcess(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         ProcessVmCounters,
         ProcessInformation,
         0x70u,
         &ReturnLength);
  if ( v3 >= 0 )
  {
    Microsoft::WRL::ComPtr<IRestrictedErrorInfo>::InternalRelease((__int64 *)&v8);
    v5 = Microsoft::WRL::Details::MakeAndInitialize<Windows::System::CProcessMemoryReport,Windows::System::IProcessMemoryReport,unsigned __int64 &,unsigned __int64 &>(
           &v8,
           &v12,
           v11);
    if ( v5 >= 0 )
    {
      v6 = v8;
      v8 = 0LL;
      *a2 = v6;
    }
  }
  else
  {
    v4 = RtlNtStatusToDosError(v3);
    v5 = v4;
    if ( v4 > 0 )
      v5 = (unsigned __int16)v4 | 0x80070000;
  }
  Microsoft::WRL::ComPtr<IRestrictedErrorInfo>::InternalRelease((__int64 *)&v8);
  return (unsigned int)v5;
}
