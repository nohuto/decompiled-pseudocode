/*
 * XREFs of ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180089290
 * Callers:
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x18002E2A8 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 * Callees:
 *     ?DetermineIdealAtlasSize@CAtlasManager@@CAII@Z @ 0x18001184C (-DetermineIdealAtlasSize@CAtlasManager@@CAII@Z.c)
 *     ?Create@CAtlasTexture@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z @ 0x180013648 (-Create@CAtlasTexture@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x18001A40C (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x18002030C (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x180021C3C (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180059E10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x180076548 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?Flush@CD3DDeviceLevel1@@QEAAXXZ @ 0x180076570 (-Flush@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z @ 0x180088F48 (-GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z.c)
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800B9DF0 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800C6690 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??_ECD3DDeviceLevel1@@MEAAPEAXI@Z @ 0x1800D82A0 (--_ECD3DDeviceLevel1@@MEAAPEAXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x1801407A8 (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 *     ?TempDisableHardwareProtection@CD3DDeviceManager@@SAXXZ @ 0x1801DE8D0 (-TempDisableHardwareProtection@CD3DDeviceManager@@SAXXZ.c)
 *     ??_GCD3DResourceSourceReference@@QEAAPEAXI@Z @ 0x1801E5CA4 (--_GCD3DResourceSourceReference@@QEAAPEAXI@Z.c)
 *     ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x1801E77FC (-MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z.c)
 *     ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x1801EBE80 (-CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z.c)
 *     ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x1801EC04C (-DestroyResources@CAtlasTexture@@AEAAXXZ.c)
 *     ?PurgeAndNotify@CAtlasTexture@@QEAAXXZ @ 0x1801EC1C8 (-PurgeAndNotify@CAtlasTexture@@QEAAXXZ.c)
 */

__int64 __fastcall CD3DDeviceManager::HandleAdvanceFrame(CD3DDeviceManager *this, char a2)
{
  int v2; // ebp
  char v3; // r14
  __int64 v4; // r13
  char v5; // r15
  int v6; // edi
  __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // eax
  int v14; // r11d
  __int64 v15; // rax
  _QWORD *v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rbp
  const struct CAtlasTexture ***v19; // rsi
  __int64 *v20; // r8
  __int64 *i; // rdx
  __int64 v22; // rbp
  int v23; // edi
  _QWORD *v24; // r14
  PSLIST_ENTRY k; // rax
  __int64 v26; // rax
  unsigned int v27; // r8d
  int v28; // r9d
  const struct CAtlasTexture **v29; // rdi
  unsigned int v30; // r9d
  char *v31; // r10
  const struct CAtlasTexture **m; // rdx
  int v33; // edx
  __int64 v34; // rbx
  unsigned int v35; // ebx
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v45; // r9
  __int64 v46; // rax
  int v47; // ecx
  int v48; // esi
  char v49; // bp
  unsigned int v50; // eax
  unsigned int v51; // r8d
  __int64 v52; // r14
  __int64 v53; // rdi
  struct _SLIST_ENTRY *Next; // rdi
  __int64 j; // r10
  __int64 v56; // rax
  int v57; // eax
  bool v58; // cl
  int v59; // eax
  __int64 v60; // r14
  int v61; // eax
  __int64 v62; // r14
  bool v63; // cl
  int v64; // eax
  CD3DResourceSourceReference *v65; // rcx
  _QWORD *v66; // rax
  __int64 v67; // r8
  _QWORD *v68; // rdx
  __int64 *v69; // r14
  void *v70; // rcx
  const struct CAtlasTexture *v71; // rdx
  const struct CAtlasTexture *v72; // rcx
  __int64 *v73; // rdi
  CAtlasTexture *v74; // rcx
  void *v75; // rcx
  CAtlasTexture *v76; // rcx
  __int64 v77; // rax
  int v78; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v79; // [rsp+34h] [rbp-74h] BYREF
  void *lpMem; // [rsp+38h] [rbp-70h] BYREF
  void **p_lpMem; // [rsp+40h] [rbp-68h]
  struct CAtlasTexture *v82; // [rsp+48h] [rbp-60h] BYREF
  char v83; // [rsp+50h] [rbp-58h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  CD3DDeviceManager *v85; // [rsp+B0h] [rbp+8h] BYREF
  char v86; // [rsp+B8h] [rbp+10h]
  int v87; // [rsp+C0h] [rbp+18h]
  int v88; // [rsp+C8h] [rbp+20h] BYREF

  v86 = a2;
  v85 = this;
  v2 = 0;
  v87 = 0;
  v3 = a2;
  EnterCriticalSection(&stru_1802D6738);
  LODWORD(v4) = qword_1802D67F0;
  if ( (_DWORD)qword_1802D67F0 )
  {
    while ( 1 )
    {
      v4 = (unsigned int)(v4 - 1);
      v5 = 0;
      v6 = 0;
      v7 = *((_QWORD *)g_pComposition + 48);
      v8 = 24 * v4;
      v9 = *(_QWORD *)(24 * v4 + qword_1802D67A0);
      if ( v7 != *(_QWORD *)(v9 + 1040) )
      {
        v10 = *(_QWORD *)(v9 + 184);
        v11 = *((_QWORD *)g_pComposition + 48);
        v12 = *(_QWORD *)(v9 + 624);
        *(_BYTE *)(v9 + 1052) = 0;
        v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v10 + 152LL))(v10, v12, v11);
        v6 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xEBBu);
        *(_QWORD *)(v9 + 1040) = v7;
      }
      if ( !*(_DWORD *)(v9 + 888) )
      {
        if ( v6 != -2005532292 && v6 != -2147024882 && v6 != -2005270523
          || !(unsigned int)CD3DDeviceManager::GetAdapterHwProtectedEntityCount(
                              (CD3DDeviceManager *)&g_D3DDeviceManager,
                              *(struct _LUID *)(v9 + 728)) )
        {
          goto LABEL_148;
        }
        if ( v6 == -2005270523 )
        {
          v57 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 648) + 312LL))(*(_QWORD *)(v9 + 648));
          *(_DWORD *)(v9 + 888) = -2003304307;
          v58 = v57 == -2005270480;
          v59 = -2003304307;
        }
        else
        {
          v58 = 1;
          v59 = 0;
        }
        if ( v58 )
        {
          CD3DDeviceManager::TempDisableHardwareProtection();
          v59 = *(_DWORD *)(v9 + 888);
        }
        if ( !v59 )
        {
LABEL_148:
          if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext(v6, 0, &v88) )
            v6 = v88;
          if ( v6 == v14 )
            *(_DWORD *)(v9 + 888) = v14;
        }
      }
      if ( *(_QWORD *)(v9 + 1024) == v7 )
        goto LABEL_38;
      *(_QWORD *)(v9 + 1024) = v7;
      v15 = 0LL;
      v16 = (_QWORD *)(v9 + 536);
      *(_BYTE *)(v9 + 1049) = 1;
      LODWORD(v17) = *(_DWORD *)(v9 + 560);
      if ( v9 != -536 )
        v15 = v9;
      v18 = *(_QWORD *)(v15 + 1024);
      if ( (_DWORD)v17 )
      {
        do
        {
          v17 = (unsigned int)(v17 - 1);
          v52 = *(_QWORD *)(*v16 + 8 * v17);
          if ( (unsigned __int64)(v18 - *(_QWORD *)(v52 + 288)) >= 0x20 )
          {
            DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt((__int64 *)(v9 + 536), v17);
            *(_BYTE *)(v52 + 296) = 0;
            CScratchRenderTargetBitmap::Release((CScratchRenderTargetBitmap *)v52);
          }
        }
        while ( (_DWORD)v17 );
        LODWORD(v53) = *(_DWORD *)(v9 + 560);
        v3 = v86;
        if ( (_DWORD)v53 )
        {
          do
          {
            if ( *(_DWORD *)(v9 + 560) <= 0x20u )
              break;
            v53 = (unsigned int)(v53 - 1);
            v60 = *(_QWORD *)(*v16 + 8 * v53);
            if ( v18 != *(_QWORD *)(v60 + 288) )
            {
              DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt((__int64 *)(v9 + 536), v53);
              *(_BYTE *)(v60 + 296) = 0;
              CScratchRenderTargetBitmap::Release((CScratchRenderTargetBitmap *)v60);
            }
          }
          while ( (_DWORD)v53 );
          v3 = v86;
        }
      }
      v19 = (const struct CAtlasTexture ***)(v9 + 584);
      v20 = *(__int64 **)(v9 + 592);
      for ( i = *(__int64 **)(v9 + 584); i != v20; ++i )
      {
        v45 = *i;
        if ( *(_DWORD *)(*i + 32) )
        {
          for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v45 + 24); j = (unsigned int)(j + 1) )
          {
            v56 = *(_QWORD *)(v45 + 16);
            if ( *(_QWORD *)(v56 + 8 * j) == -1LL )
              *(_QWORD *)(v56 + 8 * j) = 0LL;
          }
          *(_DWORD *)(v45 + 28) += *(_DWORD *)(v45 + 32);
          *(_DWORD *)(v45 + 32) = 0;
        }
      }
      if ( v3 )
      {
        v22 = *(unsigned int *)(v9 + 1016);
        v23 = 0;
        if ( (_DWORD)v22 )
        {
          v61 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v9 + 608) + 32LL))(
                  *(_QWORD *)(v9 + 608),
                  *(_QWORD *)(v9 + 992),
                  (unsigned int)v22);
          v23 = v61;
          if ( v61 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v61, 0x1019u);
          v62 = 0LL;
          do
          {
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v62 + *(_QWORD *)(v9 + 992)) + 16LL))(*(_QWORD *)(v62 + *(_QWORD *)(v9 + 992)));
            v62 += 8LL;
            --v22;
          }
          while ( v22 );
          *(_DWORD *)(v9 + 1016) = 0;
          DynArrayImpl<0>::ShrinkToSize(v9 + 992, 8u);
        }
        if ( !*(_DWORD *)(v9 + 888) )
        {
          if ( v23 != -2005532292 && v23 != -2147024882 && v23 != -2005270523
            || !(unsigned int)CD3DDeviceManager::GetAdapterHwProtectedEntityCount(
                                (CD3DDeviceManager *)&g_D3DDeviceManager,
                                *(struct _LUID *)(v9 + 728)) )
          {
            goto LABEL_149;
          }
          if ( v23 == -2005270523 )
          {
            v63 = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 648) + 312LL))(*(_QWORD *)(v9 + 648)) == -2005270480;
            v64 = -2003304307;
            *(_DWORD *)(v9 + 888) = -2003304307;
          }
          else
          {
            v63 = 1;
            v64 = 0;
          }
          if ( v63 )
          {
            CD3DDeviceManager::TempDisableHardwareProtection();
            v64 = *(_DWORD *)(v9 + 888);
          }
          if ( !v64 )
          {
LABEL_149:
            if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext(v23, 0, &v78) )
              v23 = v78;
            if ( v23 == -2003304307 )
              *(_DWORD *)(v9 + 888) = -2003304307;
          }
        }
      }
      v24 = *(_QWORD **)(v9 + 952);
      while ( v24 != (_QWORD *)(v9 + 952) )
      {
        v65 = (CD3DResourceSourceReference *)(v24 - 2);
        v66 = v24;
        v24 = (_QWORD *)*v24;
        if ( (int)--*((_DWORD *)v65 + 2) <= 0 )
        {
          v67 = *v66;
          if ( *(_QWORD **)(*v66 + 8LL) != v66 || (v68 = (_QWORD *)v66[1], (_QWORD *)*v68 != v66) )
            __fastfail(3u);
          *v68 = v67;
          *(_QWORD *)(v67 + 8) = v68;
          CD3DResourceSourceReference::`scalar deleting destructor'(v65, (unsigned int)v68);
        }
      }
      if ( *(_QWORD *)(v9 + 648) )
      {
        for ( k = InterlockedFlushSList((PSLIST_HEADER)(v9 + 912)); k; k = InterlockedFlushSList((PSLIST_HEADER)(v9 + 912)) )
        {
          do
          {
            Next = k->Next;
            CD3DResourceManager::DestroyResource((CD3DResourceManager *)(v9 + 896), (struct CD3DResource ***)&k[-3]);
            k = Next;
          }
          while ( Next );
        }
      }
      v26 = 0LL;
      v5 = 1;
      if ( v9 != -584 )
        v26 = v9;
      v27 = 0;
      v28 = *(_DWORD *)(v26 + 888);
      if ( v28 >= 0 )
        break;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x44u);
LABEL_37:
      v3 = v86;
      v2 = v87;
LABEL_38:
      if ( *(_BYTE *)(v9 + 1052) )
        CD3DDeviceLevel1::Flush((CD3DDeviceLevel1 *)v9);
      if ( v5 && (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 648) + 312LL))(*(_QWORD *)(v9 + 648)) < 0 )
      {
        if ( *(int *)(v9 + 888) >= 0 )
          *(_DWORD *)(v9 + 888) = -2003304307;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304307, 0x157u);
        if ( v2 >= 0 )
          v2 = -2003304307;
        v87 = v2;
      }
      if ( *(int *)(v9 + 888) < 0 )
      {
        CD3DDeviceLevel1::ProcessDeviceLost((CD3DDeviceLevel1 *)v9);
      }
      else
      {
        v33 = dword_1802D67B8;
        v34 = *(_QWORD *)(v8 + qword_1802D67A0);
        if ( !*(_DWORD *)(v34 + 480)
          && (*(int *)(v34 + 888) < 0
           || !*(_DWORD *)(*(_QWORD *)(v34 + 144) + 16LL)
           && !*(_DWORD *)(v34 + 968)
           && GetCurrentFrameId() >= *(_QWORD *)(v34 + 1032)) )
        {
          v37 = qword_1802D67F0;
          v38 = (unsigned int)(v33 - 1);
          v39 = 24 * v38;
          if ( (unsigned int)v4 >= (unsigned int)qword_1802D67F0 )
          {
            v77 = qword_1802D67A0;
            *(_OWORD *)(v8 + qword_1802D67A0) = *(_OWORD *)(v39 + qword_1802D67A0);
            *(_QWORD *)(v8 + v77 + 16) = *(_QWORD *)(v39 + v77 + 16);
          }
          else
          {
            LODWORD(qword_1802D67F0) = qword_1802D67F0 - 1;
            v40 = 3LL * (unsigned int)(v37 - 1);
            v41 = qword_1802D67A0;
            *(_OWORD *)(v8 + qword_1802D67A0) = *(_OWORD *)(qword_1802D67A0 + 8 * v40);
            *(_QWORD *)(v8 + v41 + 16) = *(_QWORD *)(v41 + 8 * v40 + 16);
            v42 = 3LL * (unsigned int)qword_1802D67F0;
            v43 = qword_1802D67A0;
            *(_OWORD *)(qword_1802D67A0 + 8 * v42) = *(_OWORD *)(v39 + qword_1802D67A0);
            *(_QWORD *)(v43 + 8 * v42 + 16) = *(_QWORD *)(v39 + v43 + 16);
          }
          dword_1802D67B8 = v38;
          if ( !(_DWORD)v38 )
            DynArrayImpl<0>::ShrinkToSize((__int64)&qword_1802D67A0, 0x18u);
          v44 = *(_QWORD *)(v34 + 648);
          if ( v44 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v44 + 8LL))(*(_QWORD *)(v34 + 648));
          CD3DDeviceLevel1::`vector deleting destructor'((CD3DDeviceLevel1 *)v34, 1u);
          if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44) )
            ModuleFailFastForHRESULT(2147549183LL, retaddr);
          if ( qword_1802D6760 )
            CSurfaceManager::ResetTokenThread(qword_1802D6760);
        }
      }
      if ( !(_DWORD)v4 )
        goto LABEL_45;
    }
    v29 = *v19;
    v30 = 0;
    v31 = *(char **)(v9 + 592);
    for ( m = *v19; m != (const struct CAtlasTexture **)v31; v30 += v47 - *(_DWORD *)(v46 + 28) )
    {
      v46 = (__int64)*m++;
      v47 = *(_DWORD *)(v46 + 24);
      v27 += v47;
    }
    if ( v30 >= v27 / 3 )
      goto LABEL_37;
    LOBYTE(v85) = 0;
    if ( ((v31 - (char *)v29) & 0xFFFFFFFFFFFFFFF8uLL) != 8 )
    {
      CAtlasManager::MergeAtlases((CAtlasManager *)(v9 + 584), (bool *)&v85);
      v49 = (char)v85;
LABEL_70:
      if ( v49 && *(int *)(v9 + 888) >= 0 )
        *(_BYTE *)(v9 + 1052) = 1;
      goto LABEL_37;
    }
    v48 = 0;
    v49 = 0;
    v50 = CAtlasManager::DetermineIdealAtlasSize(*((_DWORD *)*v29 + 6) - *((_DWORD *)*v29 + 7));
    if ( v50 >= v51 )
    {
LABEL_68:
      if ( v48 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x54u);
      goto LABEL_70;
    }
    lpMem = 0LL;
    p_lpMem = &lpMem;
    v82 = 0LL;
    v83 = 1;
    v48 = CAtlasTexture::Create((struct CD3DDeviceLevel1 *)v9, v50, &v82);
    if ( v83 )
    {
      v69 = (__int64 *)*p_lpMem;
      *p_lpMem = v82;
      if ( v69 )
      {
        *v69 = (__int64)&CAtlasTexture::`vftable';
        CAtlasTexture::DestroyResources((CAtlasTexture *)v69);
        v70 = (void *)v69[2];
        if ( v70 )
          operator delete(v70);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v69 + 1);
        operator delete(v69);
      }
    }
    if ( v48 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x7Bu);
      v73 = (__int64 *)lpMem;
      if ( !lpMem )
        goto LABEL_68;
      v76 = (CAtlasTexture *)lpMem;
      *(_QWORD *)lpMem = &CAtlasTexture::`vftable';
      CAtlasTexture::DestroyResources(v76);
      v75 = (void *)v73[2];
      if ( !v75 )
        goto LABEL_130;
    }
    else
    {
      v71 = *v29;
      v79 = 0;
      CAtlasTexture::CopyFrom((CAtlasTexture *)lpMem, v71, &v79);
      v72 = *v29;
      v49 = 1;
      *v29 = (const struct CAtlasTexture *)lpMem;
      lpMem = v72;
      CAtlasTexture::PurgeAndNotify(v72);
      v73 = (__int64 *)lpMem;
      if ( !lpMem )
        goto LABEL_68;
      v74 = (CAtlasTexture *)lpMem;
      *(_QWORD *)lpMem = &CAtlasTexture::`vftable';
      CAtlasTexture::DestroyResources(v74);
      v75 = (void *)v73[2];
      if ( !v75 )
        goto LABEL_130;
    }
    operator delete(v75);
LABEL_130:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v73 + 1);
    operator delete(v73);
    goto LABEL_68;
  }
LABEL_45:
  v35 = dword_1802D67B8;
  if ( dword_1802D67B8 )
  {
    do
    {
      if ( v35 <= (unsigned int)qword_1802D67F0 )
        break;
      CD3DDeviceManager::DeleteUnusedDevice((CD3DDeviceManager *)&g_D3DDeviceManager, --v35);
    }
    while ( v35 );
  }
  LeaveCriticalSection(&stru_1802D6738);
  return (unsigned int)v2;
}
