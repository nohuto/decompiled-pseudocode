/*
 * XREFs of ?SyncIndirectSwapchainRenderTargetCreate@CChannel@@UEAAJIPEAXU_LUID@@I@Z @ 0x1801231A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@I@Z @ 0x18000EFAC (-SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@I@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::SyncIndirectSwapchainRenderTargetCreate(
        CChannel *this,
        int a2,
        void *a3,
        struct _LUID a4,
        unsigned int a5)
{
  signed int v9; // eax
  unsigned int v10; // ebx
  _DWORD v12[2]; // [rsp+30h] [rbp-40h] BYREF
  void *v13; // [rsp+38h] [rbp-38h]
  struct _LUID v14; // [rsp+40h] [rbp-30h]
  unsigned int v15; // [rsp+48h] [rbp-28h]
  _BYTE v16[8]; // [rsp+50h] [rbp-20h] BYREF
  signed int v17; // [rsp+58h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+90h] [rbp+20h] BYREF

  v18 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v12[0] = 171;
  v15 = a5;
  v12[1] = a2;
  v13 = a3;
  v14 = a4;
  v9 = CChannel::SendSyncCommand(this, v12, 0x1Cu, (struct MIL_MESSAGE *)v16);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x872u);
  }
  else
  {
    v10 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0x874u);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v18);
  return v10;
}
