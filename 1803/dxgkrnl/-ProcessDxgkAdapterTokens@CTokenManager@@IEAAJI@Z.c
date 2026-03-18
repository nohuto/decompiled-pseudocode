/*
 * XREFs of ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000FF30
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C0010230 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     ?ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@@Z @ 0x1C000F9D8 (-ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@.c)
 *     ?CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C000FAB0 (-CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z @ 0x1C001714C (-Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z.c)
 *     ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C0017740 (-CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z.c)
 *     ?Grow@CLegacyTokenBuffer@@IEAAJXZ @ 0x1C0017A28 (-Grow@CLegacyTokenBuffer@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAJPEAX@Z @ 0x1C004A258 (-CompleteFlipManagerToken@CTokenManager@@IEAAJPEAX@Z.c)
 *     DxgkGetPresentHistory @ 0x1C00DF2D0 (DxgkGetPresentHistory.c)
 */

__int64 __fastcall CTokenManager::ProcessDxgkAdapterTokens(CTokenManager *this, unsigned int a2)
{
  char v2; // r13
  unsigned int v3; // ebp
  char *v4; // r12
  unsigned int v5; // r14d
  struct CLegacyTokenBuffer **v6; // r15
  int v8; // ebx
  struct CLegacyTokenBuffer *v9; // rsi
  int PresentHistory; // eax
  CTokenManager *v11; // rcx
  LONG v12; // ebp
  unsigned int *v13; // rsi
  unsigned int v14; // r14d
  char *v15; // r13
  __int64 v16; // r12
  unsigned int v17; // ebx
  int v18; // ebp
  int v19; // r15d
  unsigned int v20; // eax
  __int64 v21; // rax
  struct CLegacyTokenBuffer *v22; // rcx
  void *v23; // rcx
  _QWORD *v25; // rcx
  CTokenManager *v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v30; // rax
  struct DXGGLOBAL *v31; // rax
  char v32; // [rsp+20h] [rbp-898h]
  bool v33; // [rsp+21h] [rbp-897h] BYREF
  int v34; // [rsp+24h] [rbp-894h]
  int v35; // [rsp+28h] [rbp-890h]
  int v36; // [rsp+2Ch] [rbp-88Ch]
  unsigned int v37; // [rsp+30h] [rbp-888h]
  LONG PreviousState; // [rsp+34h] [rbp-884h] BYREF
  int v39; // [rsp+38h] [rbp-880h]
  void *v40; // [rsp+40h] [rbp-878h]
  _DWORD v41[2]; // [rsp+48h] [rbp-870h] BYREF
  unsigned int v42; // [rsp+50h] [rbp-868h]
  _BYTE *v43; // [rsp+58h] [rbp-860h]
  unsigned int v44; // [rsp+60h] [rbp-858h]
  _BYTE Src[2048]; // [rsp+70h] [rbp-848h] BYREF

  v2 = 1;
  v37 = a2;
  v3 = 640;
  v32 = 1;
  v36 = 640;
  v4 = (char *)this + 88;
  v5 = a2;
  v6 = (struct CLegacyTokenBuffer **)((char *)this + 184);
  do
  {
    ExAcquirePushLockExclusiveEx(v4, 0LL);
    v8 = 0;
    *((_QWORD *)this + 12) = KeGetCurrentThread();
    if ( !*v6 )
    {
      v25 = (_QWORD *)((char *)this + 160);
      v26 = (CTokenManager *)*((_QWORD *)this + 20);
      if ( v26 != (CTokenManager *)((char *)this + 160) )
      {
        if ( *((_QWORD **)v26 + 1) != v25 || (v27 = *(_QWORD *)v26, *(CTokenManager **)(*(_QWORD *)v26 + 8LL) != v26) )
          __fastfail(3u);
        *v25 = v27;
        *(_QWORD *)(v27 + 8) = v25;
        --*((_DWORD *)this + 44);
        *v6 = v26;
        goto LABEL_4;
      }
      v8 = CLegacyTokenBuffer::Create(v6);
    }
    if ( v8 < 0 )
      goto LABEL_21;
LABEL_4:
    v9 = *v6;
    v8 = 0;
    if ( v3 > *((_DWORD *)*v6 + 526) )
      v8 = CLegacyTokenBuffer::Grow(*v6);
    v40 = (void *)*((_QWORD *)v9 + 262);
    if ( v8 >= 0 )
    {
      v41[1] = *((_DWORD *)v9 + 526);
      v41[0] = v5;
      v43 = Src;
      PresentHistory = DxgkGetPresentHistory(v41, 0LL);
      v39 = PresentHistory;
      v8 = PresentHistory;
      switch ( PresentHistory )
      {
        case 0:
          v2 = 0;
          v32 = 0;
LABEL_9:
          v12 = v44;
          v13 = (unsigned int *)Src;
          PreviousState = v44;
          v35 = 0;
          v14 = 0;
          v34 = 0;
          if ( v44 )
          {
            v15 = (char *)v40;
            v16 = v44;
            v17 = v37;
            v18 = 0;
            v19 = 0;
            do
            {
              v20 = *v13;
              if ( *v13 == 7 )
              {
                CTokenManager::ResolveCompositionHandleToken(
                  this,
                  (const struct _D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN *)v13 + 2);
              }
              else
              {
                switch ( v20 )
                {
                  case 8u:
                    Global = DXGGLOBAL::GetGlobal();
                    (*(void (**)(void))(*((_QWORD *)Global + 219) + 96LL))();
                    v30 = DXGGLOBAL::GetGlobal();
                    (**((void (__fastcall ***)(_QWORD))v30 + 219))(*((_QWORD *)v13 + 2));
                    v31 = DXGGLOBAL::GetGlobal();
                    (*(void (**)(void))(*((_QWORD *)v31 + 219) + 136LL))();
                    break;
                  case 2u:
                    if ( (v13[15] & 0x2000) != 0 && (v13[15] & 0xC000) == 0x4000 )
                    {
                      CTokenManager::CompleteIndendentFlipToken(
                        this,
                        *((_QWORD *)v13 + 1),
                        (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)(v13 + 4),
                        v17);
                      ++v18;
                    }
                    else
                    {
                      v28 = *((_QWORD *)v13 + 1);
                      v33 = 0;
                      CTokenManager::CreateFlipExToken(
                        this,
                        v28,
                        (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)(v13 + 4),
                        &v33);
                      if ( v33 )
                        ++v18;
                    }
                    break;
                  case 9u:
                    CTokenManager::CompleteFlipManagerToken(v11, *((void **)v13 + 2));
                    break;
                  default:
                    memmove(v15, v13, v13[1]);
                    v21 = v13[1];
                    ++v19;
                    v14 += v21;
                    v15 += v21;
                    break;
                }
              }
              v13 = (unsigned int *)((char *)v13 + v13[1]);
              --v16;
            }
            while ( v16 );
            v8 = v39;
            v4 = (char *)this + 88;
            v2 = v32;
            v34 = v18;
            v12 = PreviousState;
            v35 = v19;
            v6 = (struct CLegacyTokenBuffer **)((char *)this + 184);
          }
          v22 = *v6;
          *(_DWORD *)(*((_QWORD *)*v6 + 261) + 16LL) += v35;
          *(_DWORD *)(*((_QWORD *)v22 + 261) + 2068LL) += v14;
          *((_DWORD *)v22 + 526) -= v14;
          *((_QWORD *)v22 + 262) += v14;
          if ( v12 != v34 )
          {
            v23 = (void *)*((_QWORD *)this + 7);
            PreviousState = 0;
            ZwSetEvent(v23, &PreviousState);
          }
          v5 = v37;
          v3 = v36;
          break;
        case 261:
          goto LABEL_9;
        case -1073741789:
          v3 = 640;
          if ( v42 > 0x280 )
            v3 = v42;
          v8 = 0;
          v36 = v3;
          break;
        default:
          v2 = 0;
          v32 = 0;
          break;
      }
    }
LABEL_21:
    *((_QWORD *)this + 12) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
  }
  while ( v8 >= 0 && v2 );
  return (unsigned int)v8;
}
