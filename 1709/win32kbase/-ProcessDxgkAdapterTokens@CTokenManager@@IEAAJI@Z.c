/*
 * XREFs of ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C00358DC
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C0035C30 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 * Callees:
 *     ?ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@@Z @ 0x1C0035758 (-ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@.c)
 *     ?CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C0035810 (-CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z.c)
 *     ?EnsureCurrentLegacyTokenBuffer@CTokenManager@@IEAAJXZ @ 0x1C0035DF4 (-EnsureCurrentLegacyTokenBuffer@CTokenManager@@IEAAJXZ.c)
 *     GreLockDwmState @ 0x1C003CA30 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C003CA70 (GreUnlockDwmState.c)
 *     UserReferenceDwmApiPort @ 0x1C00748B0 (UserReferenceDwmApiPort.c)
 *     ?Grow@CLegacyTokenBuffer@@IEAAJXZ @ 0x1C00A265C (-Grow@CLegacyTokenBuffer@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C0153714 (-CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z.c)
 */

__int64 __fastcall CTokenManager::ProcessDxgkAdapterTokens(CTokenManager *this, unsigned int a2)
{
  char v2; // r13
  unsigned int v3; // r15d
  char *v4; // rax
  unsigned int v5; // r14d
  int v7; // ebx
  __int64 v8; // rdi
  int v9; // eax
  LONG v10; // r8d
  const struct _D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN *v11; // rdi
  unsigned int v12; // edx
  int v13; // r14d
  unsigned int v14; // r12d
  char *v15; // r15
  unsigned int v16; // r13d
  int hPrivateData; // eax
  __int64 hPrivateData_high; // rax
  __int64 v19; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  char v23; // [rsp+20h] [rbp-E0h]
  bool v24; // [rsp+21h] [rbp-DFh] BYREF
  unsigned int v25; // [rsp+24h] [rbp-DCh]
  LONG PreviousState; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v27; // [rsp+2Ch] [rbp-D4h]
  int v28; // [rsp+30h] [rbp-D0h]
  _DWORD v29[2]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v30; // [rsp+40h] [rbp-C0h]
  _BYTE *v31; // [rsp+48h] [rbp-B8h]
  unsigned int v32; // [rsp+50h] [rbp-B0h]
  void *v33; // [rsp+58h] [rbp-A8h]
  _BYTE Src[2048]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = 1;
  v27 = a2;
  v3 = 640;
  v23 = 1;
  v28 = 640;
  v4 = (char *)this + 64;
  v5 = a2;
  do
  {
    ExAcquirePushLockExclusiveEx(v4, 0LL);
    *((_QWORD *)this + 9) = KeGetCurrentThread();
    v7 = CTokenManager::EnsureCurrentLegacyTokenBuffer(this);
    if ( v7 < 0 )
      goto LABEL_20;
    v8 = *((_QWORD *)this + 16);
    v7 = 0;
    if ( v3 > *(_DWORD *)(v8 + 2104) )
      v7 = CLegacyTokenBuffer::Grow(*((CLegacyTokenBuffer **)this + 16));
    v33 = *(void **)(v8 + 2096);
    if ( v7 < 0 )
      goto LABEL_20;
    v29[1] = *(_DWORD *)(v8 + 2104);
    v29[0] = v5;
    v31 = Src;
    v9 = ((__int64 (__fastcall *)(_DWORD *, _QWORD))qword_1C0190560)(v29, 0LL);
    v7 = v9;
    if ( v9 == -1073741789 )
    {
      v3 = 640;
      if ( v30 > 0x280 )
        v3 = v30;
      v7 = 0;
      v28 = v3;
      goto LABEL_20;
    }
    if ( v9 )
    {
      if ( v9 != 261 )
      {
        v2 = 0;
        v23 = 0;
        goto LABEL_20;
      }
    }
    else
    {
      v2 = 0;
      v23 = 0;
    }
    v10 = 0;
    v11 = (const struct _D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN *)Src;
    v12 = 0;
    PreviousState = 0;
    v13 = 0;
    v25 = 0;
    v14 = 0;
    if ( !v32 )
      goto LABEL_17;
    v15 = (char *)v33;
    v16 = v27;
    do
    {
      hPrivateData = v11->hPrivateData;
      if ( LODWORD(v11->hPrivateData) == 7 )
      {
        CTokenManager::ResolveCompositionHandleToken(this, v11 + 2);
      }
      else
      {
        if ( hPrivateData == 8 )
        {
          GreLockDwmState();
          v22 = UserReferenceDwmApiPort();
          DwmAsyncProcessSurfaceComplete(v22, v11[2].hPrivateData);
          GreUnlockDwmState();
          goto LABEL_25;
        }
        if ( hPrivateData != 2 )
        {
          memmove(v15, v11, HIDWORD(v11->hPrivateData));
          hPrivateData_high = HIDWORD(v11->hPrivateData);
          ++PreviousState;
          v12 = hPrivateData_high + v25;
          v25 += hPrivateData_high;
          v15 += hPrivateData_high;
          goto LABEL_15;
        }
        if ( (v11[7].hPrivateData & 0x200000000000LL) != 0 && (HIDWORD(v11[7].hPrivateData) & 0xC000) == 0x4000 )
        {
          CTokenManager::CompleteIndendentFlipToken(
            this,
            v11[1].hPrivateData,
            (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)&v11[2],
            v16);
LABEL_27:
          ++v13;
          goto LABEL_25;
        }
        v21 = v11[1].hPrivateData;
        v24 = 0;
        CTokenManager::CreateFlipExToken(this, v21, (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)&v11[2], &v24);
        if ( v24 )
          goto LABEL_27;
      }
LABEL_25:
      v12 = v25;
LABEL_15:
      ++v14;
      v11 = (const struct _D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN *)((char *)v11 + HIDWORD(v11->hPrivateData));
    }
    while ( v14 < v32 );
    v3 = v28;
    v2 = v23;
    v10 = PreviousState;
LABEL_17:
    v19 = *((_QWORD *)this + 16);
    *(_DWORD *)(*(_QWORD *)(v19 + 2088) + 16LL) += v10;
    *(_DWORD *)(*(_QWORD *)(v19 + 2088) + 2068LL) += v12;
    *(_DWORD *)(v19 + 2104) -= v12;
    *(_QWORD *)(v19 + 2096) += v12;
    if ( v32 != v13 )
    {
      PreviousState = 0;
      ZwSetEvent(*((HANDLE *)this + 5), &PreviousState);
    }
    v5 = v27;
LABEL_20:
    *((_QWORD *)this + 9) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 64, 0LL);
    if ( v7 < 0 )
      break;
    v4 = (char *)this + 64;
  }
  while ( v2 );
  return (unsigned int)v7;
}
