/*
 * XREFs of ?DesktopRenderTargetUpdateMonitorRotation@CChannel@@UEAAJIAEBUtagRECT@@0W4DXGI_MODE_ROTATION@@@Z @ 0x180144170
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180087984 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall CChannel::DesktopRenderTargetUpdateMonitorRotation(
        CChannel *this,
        int a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        enum DXGI_MODE_ROTATION a5)
{
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  unsigned int v11; // ebx
  int v13; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+24h] [rbp-34h] BYREF
  __int128 v15; // [rsp+28h] [rbp-30h]
  __int128 v16; // [rsp+38h] [rbp-20h]
  enum DXGI_MODE_ROTATION v17; // [rsp+48h] [rbp-10h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+60h] [rbp+8h] BYREF

  v18 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v13 = 143;
  memset_0(&v14, 0, 0x28uLL);
  v9 = (__int128)*a3;
  v10 = (__int128)*a4;
  v14 = a2;
  v17 = a5;
  v15 = v9;
  v16 = v10;
  v11 = CChannel::SendCommand(this, &v13, 0x2Cu);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v18);
  return v11;
}
