/*
 * XREFs of ?GetColorizationParameters@CWindowList@@AEAAXPEAUMILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETERS@@@Z @ 0x18007B500
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002B020 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 */

void __fastcall CWindowList::GetColorizationParameters(
        CWindowList *this,
        struct MILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETERS *a2)
{
  __m128i v3; // xmm0
  int v4; // ecx
  unsigned __int64 v5; // rax
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp-20h]

  v6 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = *(__m128i *)((char *)CDesktopManager::s_pDesktopManagerInstance + 500);
  v4 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 131);
  v7 = *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 516);
  *((_DWORD *)a2 + 1) = _mm_cvtsi128_si32(v3);
  *((_DWORD *)a2 + 2) = v3.m128i_i32[1];
  *((_DWORD *)a2 + 4) = _mm_srli_si128(v3, 8).m128i_i32[1];
  *((_DWORD *)a2 + 5) = v7;
  v5 = HIDWORD(v7);
  *((_DWORD *)a2 + 7) = v4;
  *((_DWORD *)a2 + 6) = v5;
  *((_DWORD *)a2 + 3) = _mm_cvtsi128_si32(_mm_srli_si128(v3, 8));
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
}
