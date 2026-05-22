/*
 * XREFs of _lambda_21afebd74e54e2939f016acf53012d19_::operator() @ 0x180040648
 * Callers:
 *     ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x18003FCC8 (-UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ.c)
 * Callees:
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180044D50 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18004BB24 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?ChangeConstantForDeviceType@MPCConstantManager@@QEAAXAEBU_GUID@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@4@@Z @ 0x18004BD48 (-ChangeConstantForDeviceType@MPCConstantManager@@QEAAXAEBU_GUID@@AEBV-$basic_string@DU-$char_tra.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_21afebd74e54e2939f016acf53012d19_::operator()(__int64 a1, const WCHAR *a2, void *a3)
{
  struct MPCConstantManager *Instance; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp-28h]

  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\ISM\\6dof",
          a2,
          0x10u,
          0LL,
          *(PVOID *)a1,
          *(LPDWORD *)(a1 + 8)) )
  {
    *(float *)&v7 = (float)**(int **)a1 / 1000.0;
    BYTE4(v7) = 2;
    Instance = MPCConstantManager::GetInstance();
    MPCConstantManager::ChangeConstantForDeviceType(Instance, v6, a3, v7);
  }
  std::string::~string(a3);
}
