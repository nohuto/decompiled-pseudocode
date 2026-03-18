/*
 * XREFs of ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x18001A6C0
 * Callers:
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x1800AB6B0 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z @ 0x18001A438 (-GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18001D1C0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?Flush@CD3DDeviceLevel1@@QEAAXXZ @ 0x1800216F4 (-Flush@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ??_ECD3DDeviceLevel1@@MEAAPEAXI@Z @ 0x180021D00 (--_ECD3DDeviceLevel1@@MEAAPEAXI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x180076BDC (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x1800810C0 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x18008D360 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x1800BA920 (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 *     ?DetermineIdealAtlasSize@CAtlasManager@@CAII@Z @ 0x1800BC530 (-DetermineIdealAtlasSize@CAtlasManager@@CAII@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800BE2A8 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?Create@CAtlasTexture@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z @ 0x1800C0B88 (-Create@CAtlasTexture@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x18011B56C (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x18011DBD8 (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 *     ?TempDisableHardwareProtection@CD3DDeviceManager@@SAXXZ @ 0x1801A5DB0 (-TempDisableHardwareProtection@CD3DDeviceManager@@SAXXZ.c)
 *     ??_GCD3DResourceSourceReference@@QEAAPEAXI@Z @ 0x1801ABD14 (--_GCD3DResourceSourceReference@@QEAAPEAXI@Z.c)
 *     ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x1801AE740 (-MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z.c)
 *     ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x1801B3844 (-CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x1801B3A14 (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 *     ?PurgeAndNotify@CAtlasTexture@@QEAAXXZ @ 0x1801B3B48 (-PurgeAndNotify@CAtlasTexture@@QEAAXXZ.c)
 */

__int64 __fastcall CD3DDeviceManager::HandleAdvanceFrame(CD3DDeviceManager *this, __int64 a2, char a3)
{
  int v3; // r14d
  char v4; // r13
  __int64 v5; // r15
  __int64 v6; // rcx
  __int64 v7; // rsi
  char v8; // di
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // edi
  int v16; // r11d
  __int64 v17; // rax
  _QWORD *v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // r14
  __int64 v21; // rsi
  __int64 *v22; // rax
  __int64 *v23; // r8
  _QWORD *v24; // r14
  PSLIST_ENTRY j; // rax
  __int64 v26; // rax
  int v27; // r9d
  const struct CAtlasTexture **v28; // r15
  unsigned int v29; // r9d
  __int64 *v30; // r8
  unsigned int v31; // r10d
  __int64 *k; // rax
  int v33; // edx
  __int64 v34; // rbx
  unsigned int v35; // ebx
  __int64 v37; // r9
  int v38; // edx
  __int64 v39; // rsi
  unsigned int v40; // edi
  int v41; // r11d
  int v42; // eax
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdi
  int v49; // esi
  char v50; // r14
  unsigned int v51; // eax
  unsigned int v52; // r8d
  __int64 v53; // r15
  struct _SLIST_ENTRY *Next; // rdi
  __int64 i; // r10
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // r15
  int v59; // eax
  __int64 v60; // r14
  int v61; // eax
  __int64 v62; // r8
  _QWORD *v63; // rdx
  _QWORD *v64; // r12
  struct CAtlasTexture *v65; // r13
  struct CAtlasTexture *v66; // r15
  CAtlasTexture *v67; // rcx
  const struct CAtlasTexture *v68; // rdx
  const struct CAtlasTexture *v69; // rcx
  void *v70; // r15
  __int64 v71; // rax
  int v72; // [rsp+30h] [rbp-49h]
  void *lpMem; // [rsp+38h] [rbp-41h] BYREF
  unsigned int v74[2]; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v75; // [rsp+48h] [rbp-31h] BYREF
  unsigned int v76; // [rsp+4Ch] [rbp-2Dh] BYREF
  __int64 v77; // [rsp+50h] [rbp-29h]
  void **p_lpMem; // [rsp+58h] [rbp-21h]
  struct CAtlasTexture *v79; // [rsp+60h] [rbp-19h] BYREF
  char v80; // [rsp+68h] [rbp-11h]
  _QWORD v81[12]; // [rsp+70h] [rbp-9h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+5Fh]
  CD3DDeviceManager *v83; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v84; // [rsp+E8h] [rbp+6Fh]
  char v85; // [rsp+F0h] [rbp+77h]
  int v86; // [rsp+F8h] [rbp+7Fh]

  v85 = a3;
  v84 = a2;
  v83 = this;
  v3 = 0;
  v86 = 0;
  v4 = a3;
  v5 = a2;
  EnterCriticalSection(&CriticalSection);
  LODWORD(v7) = qword_18026EFB0;
  if ( (_DWORD)qword_18026EFB0 )
  {
    while ( 1 )
    {
      v7 = (unsigned int)(v7 - 1);
      v8 = 0;
      v72 = v7;
      v9 = 1LL;
      v6 = 3 * v7;
      v10 = 24 * v7;
      v11 = *(_QWORD *)(24 * v7 + qword_18026EF60);
      v77 = 24 * v7;
      if ( *(_QWORD *)(v11 + 1024) == v5 )
        goto LABEL_31;
      v12 = *(_QWORD *)(v11 + 624);
      v13 = *(_QWORD *)(v11 + 608);
      *(_BYTE *)(v11 + 1041) = 1;
      v81[1] = v12;
      *(_QWORD *)(v11 + 1024) = v5;
      v81[0] = 0LL;
      v81[2] = v5;
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v13 + 32LL))(v13, v81, 1LL);
      v15 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xE20u);
      if ( !*(_DWORD *)(v11 + 888) && (v15 == -2005532292 || v15 == -2147024882 || v15 == -2005270523) )
      {
        if ( (unsigned int)CD3DDeviceManager::GetAdapterHwProtectedEntityCount(
                             (CD3DDeviceManager *)&g_D3DDeviceManager,
                             *(struct _LUID *)(v11 + 728)) )
        {
          if ( v15 != -2005270523
            || (v57 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 648) + 312LL))(*(_QWORD *)(v11 + 648)),
                *(_DWORD *)(v11 + 888) = -2003304307,
                (v6 = v57 == -2005270480) != 0) )
          {
            CD3DDeviceManager::TempDisableHardwareProtection();
          }
        }
      }
      if ( !*(_DWORD *)(v11 + 888) )
      {
        if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext(v15, 0LL, &v75) )
          v15 = v75;
        if ( v15 == v16 )
          *(_DWORD *)(v11 + 888) = v16;
      }
      v17 = 0LL;
      v18 = (_QWORD *)(v11 + 536);
      LODWORD(v19) = *(_DWORD *)(v11 + 560);
      if ( v11 != -536 )
        v17 = v11;
      v20 = *(_QWORD *)(v17 + 1024);
      while ( (_DWORD)v19 )
      {
        v19 = (unsigned int)(v19 - 1);
        v53 = *(_QWORD *)(*v18 + 8 * v19);
        if ( (unsigned __int64)(v20 - *(_QWORD *)(v53 + 264)) >= 0x20 )
        {
          DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt(v11 + 536, (unsigned int)v19);
          *(_BYTE *)(v53 + 272) = 0;
          CScratchRenderTargetBitmap::Release((CScratchRenderTargetBitmap *)v53);
        }
      }
      LODWORD(v21) = *(_DWORD *)(v11 + 560);
      while ( (_DWORD)v21 )
      {
        if ( *(_DWORD *)(v11 + 560) <= 0x20u )
          break;
        v21 = (unsigned int)(v21 - 1);
        v58 = *(_QWORD *)(*v18 + 8 * v21);
        if ( v20 != *(_QWORD *)(v58 + 264) )
        {
          DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt(v11 + 536, (unsigned int)v21);
          *(_BYTE *)(v58 + 272) = 0;
          CScratchRenderTargetBitmap::Release((CScratchRenderTargetBitmap *)v58);
        }
      }
      v22 = *(__int64 **)(v11 + 584);
      v23 = *(__int64 **)(v11 + 592);
      while ( v22 != v23 )
      {
        v37 = *v22;
        if ( *(_DWORD *)(*v22 + 32) )
        {
          for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v37 + 24); i = (unsigned int)(i + 1) )
          {
            v56 = *(_QWORD *)(v37 + 16);
            if ( *(_QWORD *)(v56 + 8 * i) == -1LL )
              *(_QWORD *)(v56 + 8 * i) = 0LL;
          }
          v6 = *(unsigned int *)(v37 + 32);
          *(_DWORD *)(v37 + 28) += v6;
          *(_DWORD *)(v37 + 32) = 0;
        }
        ++v22;
      }
      if ( v4 )
      {
        v39 = *(unsigned int *)(v11 + 1016);
        v40 = 0;
        if ( (_DWORD)v39 )
        {
          v59 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v11 + 608) + 56LL))(
                  *(_QWORD *)(v11 + 608),
                  *(_QWORD *)(v11 + 992),
                  (unsigned int)v39);
          v40 = v59;
          if ( v59 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, 0xF81u);
          v60 = 0LL;
          do
          {
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v60 + *(_QWORD *)(v11 + 992)) + 16LL))(*(_QWORD *)(v60 + *(_QWORD *)(v11 + 992)));
            v60 += 8LL;
            --v39;
          }
          while ( v39 );
          *(_DWORD *)(v11 + 1016) = 0;
          DynArrayImpl<0>::ShrinkToSize(v11 + 992, 8LL);
        }
        if ( !*(_DWORD *)(v11 + 888) && (v40 == -2005532292 || v40 == -2147024882 || v40 == -2005270523) )
        {
          if ( (unsigned int)CD3DDeviceManager::GetAdapterHwProtectedEntityCount(
                               (CD3DDeviceManager *)&g_D3DDeviceManager,
                               *(struct _LUID *)(v11 + 728)) )
          {
            if ( v40 != -2005270523
              || (v61 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 648) + 312LL))(*(_QWORD *)(v11 + 648)),
                  *(_DWORD *)(v11 + 888) = -2003304307,
                  (v6 = v61 == -2005270480) != 0) )
            {
              CD3DDeviceManager::TempDisableHardwareProtection();
            }
          }
        }
        if ( !*(_DWORD *)(v11 + 888) )
        {
          if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext(v40, 0LL, &v76) )
            v40 = v76;
          if ( v40 == v41 )
            *(_DWORD *)(v11 + 888) = v41;
        }
      }
      v24 = *(_QWORD **)(v11 + 952);
      while ( v24 != (_QWORD *)(v11 + 952) )
      {
        v6 = (__int64)(v24 - 2);
        v24 = (_QWORD *)*v24;
        if ( (int)--*(_DWORD *)(v6 + 8) <= 0 )
        {
          v62 = *(_QWORD *)(v6 + 16);
          if ( *(_QWORD *)(v62 + 8) != v6 + 16 || (v63 = *(_QWORD **)(v6 + 24), *v63 != v6 + 16) )
            __fastfail(3u);
          *v63 = v62;
          *(_QWORD *)(v62 + 8) = v63;
          CD3DResourceSourceReference::`scalar deleting destructor'(
            (CD3DResourceSourceReference *)v6,
            (unsigned int)v63);
        }
      }
      if ( *(_QWORD *)(v11 + 648) )
      {
        for ( j = InterlockedFlushSList((PSLIST_HEADER)(v11 + 912));
              j;
              j = InterlockedFlushSList((PSLIST_HEADER)(v11 + 912)) )
        {
          do
          {
            Next = j->Next;
            CD3DResourceManager::DestroyResource((CD3DResourceManager *)(v11 + 896), (struct CD3DResource *)&j[-3]);
            j = Next;
          }
          while ( Next );
        }
      }
      v26 = 0LL;
      v8 = 1;
      if ( v11 != -584 )
        v26 = v11;
      v27 = *(_DWORD *)(v26 + 888);
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x44u);
      }
      else
      {
        v28 = *(const struct CAtlasTexture ***)(v11 + 584);
        v29 = 0;
        v30 = *(__int64 **)(v11 + 592);
        v31 = 0;
        *(_QWORD *)v74 = v28;
        for ( k = (__int64 *)v28; k != v30; ++k )
        {
          v6 = *k;
          v38 = *(_DWORD *)(*k + 24);
          v29 += v38;
          v31 += v38 - *(_DWORD *)(*k + 28);
        }
        v9 = v29 / 3;
        if ( v31 < (unsigned int)v9 )
        {
          LOBYTE(v83) = 0;
          if ( (((char *)v30 - (char *)v28) & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
          {
            v49 = 0;
            v50 = 0;
            v51 = CAtlasManager::DetermineIdealAtlasSize(*((_DWORD *)*v28 + 6) - *((_DWORD *)*v28 + 7));
            if ( v51 < v52 )
            {
              lpMem = 0LL;
              p_lpMem = &lpMem;
              v79 = 0LL;
              v80 = 1;
              v49 = CAtlasTexture::Create((struct CD3DDeviceLevel1 *)v11, v51, &v79);
              if ( v80 )
              {
                v64 = p_lpMem;
                v65 = v79;
                v66 = (struct CAtlasTexture *)*p_lpMem;
                if ( v79 != *p_lpMem )
                {
                  if ( v66 )
                  {
                    v67 = (CAtlasTexture *)*p_lpMem;
                    *(_QWORD *)v66 = &CAtlasTexture::`vftable';
                    CAtlasTexture::DestroyResources(v67);
                    WPF::ProcessHeapImpl::Free(*((void **)v66 + 2));
                    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v66 + 1);
                    WPF::ProcessHeapImpl::Free(v66);
                  }
                  *v64 = v65;
                }
                v4 = v85;
                v28 = *(const struct CAtlasTexture ***)v74;
              }
              if ( v49 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x7Bu);
                v70 = lpMem;
                if ( !lpMem )
                  goto LABEL_70;
              }
              else
              {
                v68 = *v28;
                v74[0] = 0;
                CAtlasTexture::CopyFrom((CAtlasTexture *)lpMem, v68, v74);
                v69 = *v28;
                v50 = 1;
                *v28 = (const struct CAtlasTexture *)lpMem;
                lpMem = v69;
                CAtlasTexture::PurgeAndNotify(v69);
                v70 = lpMem;
                if ( !lpMem )
                  goto LABEL_70;
              }
              *(_QWORD *)v70 = &CAtlasTexture::`vftable';
              CAtlasTexture::DestroyResources((CAtlasTexture *)v70);
              WPF::ProcessHeapImpl::Free(*((void **)v70 + 2));
              Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v70 + 1);
              WPF::ProcessHeapImpl::Free(v70);
            }
LABEL_70:
            if ( v49 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x54u);
          }
          else
          {
            CAtlasManager::MergeAtlases((CAtlasManager *)(v11 + 584), (bool *)&v83);
            v50 = (char)v83;
          }
          if ( v50 && *(int *)(v11 + 888) >= 0 )
            *(_BYTE *)(v11 + 1044) = 1;
        }
      }
      LODWORD(v7) = v72;
      v3 = v86;
      v10 = v77;
LABEL_31:
      if ( *(_BYTE *)(v11 + 1044) )
        CD3DDeviceLevel1::Flush((CD3DDeviceLevel1 *)v11);
      if ( v8
        && (*(int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v11 + 648) + 312LL))(*(_QWORD *)(v11 + 648), v9) < 0 )
      {
        if ( *(int *)(v11 + 888) >= 0 )
          *(_DWORD *)(v11 + 888) = -2003304307;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304307, 0x159u);
        if ( v3 >= 0 )
          v3 = -2003304307;
        v86 = v3;
      }
      if ( *(int *)(v11 + 888) < 0 )
      {
        CD3DDeviceLevel1::ProcessDeviceLost((CD3DDeviceLevel1 *)v11);
      }
      else
      {
        v33 = dword_18026EF78;
        v34 = *(_QWORD *)(v10 + qword_18026EF60);
        if ( !*(_DWORD *)(v34 + 480)
          && (*(int *)(v34 + 888) < 0
           || !*(_DWORD *)(*(_QWORD *)(v34 + 144) + 16LL)
           && !*(_DWORD *)(v34 + 968)
           && GetCurrentFrameId() >= *(_QWORD *)(v34 + 1032)) )
        {
          v42 = qword_18026EFB0;
          v43 = (unsigned int)(v33 - 1);
          if ( (unsigned int)v7 >= (unsigned int)qword_18026EFB0 )
          {
            v71 = qword_18026EF60;
            *(_OWORD *)(v10 + qword_18026EF60) = *(_OWORD *)(qword_18026EF60 + 24 * v43);
            *(_QWORD *)(v10 + v71 + 16) = *(_QWORD *)(v71 + 24 * v43 + 16);
          }
          else
          {
            LODWORD(qword_18026EFB0) = qword_18026EFB0 - 1;
            v44 = 3LL * (unsigned int)(v42 - 1);
            v45 = qword_18026EF60;
            *(_OWORD *)(v10 + qword_18026EF60) = *(_OWORD *)(qword_18026EF60 + 8 * v44);
            *(_QWORD *)(v10 + v45 + 16) = *(_QWORD *)(v45 + 8 * v44 + 16);
            v46 = 3LL * (unsigned int)qword_18026EFB0;
            v47 = qword_18026EF60;
            *(_OWORD *)(qword_18026EF60 + 8 * v46) = *(_OWORD *)(qword_18026EF60 + 24 * v43);
            *(_QWORD *)(v47 + 8 * v46 + 16) = *(_QWORD *)(v47 + 24 * v43 + 16);
          }
          dword_18026EF78 = v33 - 1;
          if ( v33 == 1 )
            DynArrayImpl<0>::ShrinkToSize(&qword_18026EF60, 24LL);
          v48 = *(_QWORD *)(v34 + 648);
          if ( v48 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v48 + 8LL))(*(_QWORD *)(v34 + 648));
          CD3DDeviceLevel1::`vector deleting destructor'((CD3DDeviceLevel1 *)v34, 1u);
          if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48) )
            ModuleFailFastForHRESULT(2147549183LL, retaddr);
          v6 = (__int64)qword_18026EF20;
          if ( qword_18026EF20 )
            CSurfaceManager::ResetTokenThread(qword_18026EF20);
        }
      }
      if ( !(_DWORD)v7 )
        break;
      v5 = v84;
    }
  }
  v35 = dword_18026EF78;
  if ( dword_18026EF78 )
  {
    do
    {
      if ( v35 <= (unsigned int)qword_18026EFB0 )
        break;
      CD3DDeviceManager::DeleteUnusedDevice((CD3DDeviceManager *)v6, --v35);
    }
    while ( v35 );
  }
  LeaveCriticalSection(&CriticalSection);
  return (unsigned int)v3;
}
