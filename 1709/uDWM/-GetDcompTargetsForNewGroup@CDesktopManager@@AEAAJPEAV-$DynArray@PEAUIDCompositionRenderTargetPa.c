/*
 * XREFs of ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_NPEAH3@Z @ 0x180017828
 * Callers:
 *     ?CreateRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180017690 (-CreateRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180017D30 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020A08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x1800328D0 (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x180032A98 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x180032E30 (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     ?GetDcompTarget@CDWMDisplay@@QEAAPEAUIDCompositionRenderTargetPartner@@XZ @ 0x180033D78 (-GetDcompTarget@CDWMDisplay@@QEAAPEAUIDCompositionRenderTargetPartner@@XZ.c)
 *     ?SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z @ 0x180033DA4 (-SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z.c)
 *     ?FailFastIfAccessDenied@@YAJJ@Z @ 0x180036A68 (-FailFastIfAccessDenied@@YAJJ@Z.c)
 *     ?IsWarpAdapterLuid@CDWMDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x180044CB4 (-IsWarpAdapterLuid@CDWMDXGIEnumeration@@QEBA_NU_LUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z @ 0x180068B70 (-CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z.c)
 *     ?GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z @ 0x180068C80 (-GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z.c)
 */

__int64 __fastcall CDesktopManager::GetDcompTargetsForNewGroup(
        CDWMDXGIEnumeration **this,
        __int64 a2,
        const struct CDWMDisplay **a3,
        char *a4,
        int *a5,
        int *a6)
{
  CDWMDisplaySet *v6; // r15
  struct IDCompositionRenderTargetPartner *DcompTarget; // rdi
  char v10; // r12
  int AllDisplaysNoRef; // eax
  int v12; // ebx
  int v13; // eax
  unsigned int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r14
  char v18; // cl
  CDWMDisplay *v19; // rbx
  __int64 v20; // rdi
  unsigned int v21; // esi
  __int64 v22; // rdx
  unsigned int v23; // ecx
  unsigned int v24; // eax
  int v25; // eax
  int v26; // eax
  int v28; // r12d
  int v29; // eax
  int v30; // r9d
  unsigned int v31; // [rsp+28h] [rbp-A9h]
  unsigned int v32; // [rsp+28h] [rbp-A9h]
  char v33; // [rsp+78h] [rbp-59h]
  struct IDCompositionRenderTargetPartner *v34; // [rsp+80h] [rbp-51h] BYREF
  __int64 v35; // [rsp+88h] [rbp-49h] BYREF
  CDWMDisplaySet *v36; // [rsp+90h] [rbp-41h] BYREF
  int v37; // [rsp+98h] [rbp-39h] BYREF
  int v38; // [rsp+9Ch] [rbp-35h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-31h] BYREF
  __int128 v40; // [rsp+A8h] [rbp-29h] BYREF
  __int64 v41; // [rsp+B8h] [rbp-19h]
  unsigned int v42; // [rsp+C0h] [rbp-11h]
  __int128 v43; // [rsp+C8h] [rbp-9h] BYREF
  __int64 v44; // [rsp+D8h] [rbp+7h]
  unsigned int v45; // [rsp+E0h] [rbp+Fh]

  v6 = 0LL;
  v36 = 0LL;
  v44 = 0LL;
  DcompTarget = 0LL;
  v45 = 0;
  v41 = 0LL;
  v42 = 0;
  v37 = 0;
  v38 = 0;
  v10 = 1;
  v33 = 0;
  v39 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v43 = 0LL;
  v40 = 0LL;
  AllDisplaysNoRef = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))CDesktopManager::s_pDesktopManagerInstance
                        + 25))(
                       *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25),
                       &GUID_e5416f03_7e37_415e_aacb_83cb988a6bb4,
                       &v39);
  v12 = AllDisplaysNoRef;
  if ( AllDisplaysNoRef < 0 )
  {
    v31 = 960;
    goto LABEL_62;
  }
  v13 = CDesktopManager::EnumerateMonitors((CDesktopManager *)this, &v36);
  v12 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x3C2u);
    v6 = v36;
    goto LABEL_41;
  }
  v6 = v36;
  if ( v36 )
  {
    AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(v36, &v43);
    v12 = AllDisplaysNoRef;
    if ( AllDisplaysNoRef < 0 )
    {
      v31 = 966;
      goto LABEL_62;
    }
  }
  AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(this[19], &v40);
  v12 = AllDisplaysNoRef;
  if ( AllDisplaysNoRef < 0 )
  {
    v31 = 969;
LABEL_62:
    v30 = AllDisplaysNoRef;
LABEL_64:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, v31);
    goto LABEL_41;
  }
  if ( v6 && CDWMDisplaySet::IsEquivalentRotated(this[19], v6) )
  {
    CDWMDisplaySet::GetPrimaryDisplay(this[19], a3);
    CDWMDisplaySet::CalculateRotationAngles(v6, this[19], &v37, &v38);
    v10 = 0;
    v33 = 1;
  }
  v14 = v42;
  v15 = 0LL;
  LODWORD(v36) = 0;
  while ( (unsigned int)v15 < v42 )
  {
    v16 = 0LL;
    v17 = *(_QWORD *)(v40 + 8 * v15);
    v18 = 0;
    if ( v45 )
    {
      while ( !v18 )
      {
        v19 = *(CDWMDisplay **)(v43 + 8 * v16);
        if ( *(_DWORD *)(v17 + 176) == *((_DWORD *)v19 + 44)
          && *(_DWORD *)(v17 + 196) == *((_DWORD *)v19 + 49)
          && *(_DWORD *)(v17 + 212) == *((_DWORD *)v19 + 53)
          && !*(_BYTE *)(v17 + 164) )
        {
          DcompTarget = CDWMDisplay::GetDcompTarget(*(CDWMDisplay **)(v43 + 8 * v16));
          CDWMDisplay::SetDcompTarget((CDWMDisplay *)v17, DcompTarget);
          CDWMDisplay::SetDcompTarget(v19, 0LL);
          AllDisplaysNoRef = (**(__int64 (__fastcall ***)(struct IDCompositionRenderTargetPartner *, GUID *, __int64 *))DcompTarget)(
                               DcompTarget,
                               &GUID_4939a7d9_c3a5_4e8c_ada9_439818241f2e,
                               &v35);
          v12 = AllDisplaysNoRef;
          if ( AllDisplaysNoRef < 0 )
          {
            v31 = 1009;
            goto LABEL_62;
          }
          v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 32LL))(v35);
          if ( v12 < 0 )
          {
            v31 = 1010;
            v30 = v12;
            goto LABEL_64;
          }
          if ( !v33 || !*(_BYTE *)(v17 + 220) || !*(_BYTE *)(v17 + 221) )
          {
            AllDisplaysNoRef = (*(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *, __int64, __int64, _QWORD))(*(_QWORD *)DcompTarget + 24LL))(
                                 DcompTarget,
                                 v17 + 56,
                                 v17 + 40,
                                 *(unsigned int *)(v17 + 208));
            v12 = AllDisplaysNoRef;
            if ( AllDisplaysNoRef < 0 )
            {
              v31 = 1021;
              goto LABEL_62;
            }
          }
          (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)DcompTarget + 16LL))(DcompTarget);
          if ( v35 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
            v35 = 0LL;
          }
          v18 = 1;
        }
        v16 = (unsigned int)(v16 + 1);
        if ( (unsigned int)v16 >= v45 )
          break;
      }
    }
    if ( !*(_QWORD *)(v17 + 8) )
    {
      if ( CDWMDXGIEnumeration::IsWarpAdapterLuid(this[18], *(struct _LUID *)(v17 + 168))
        || (v28 = 3, (unsigned int)(*((_DWORD *)this + 40) - 2) <= 1) )
      {
        v28 = 2;
      }
      v29 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, __int64, __int64, _DWORD, int, struct IDCompositionRenderTargetPartner **))(*(_QWORD *)v39 + 624LL))(
              v39,
              74776LL,
              *(_QWORD *)(*(_QWORD *)(v17 + 88) + 16LL),
              *(_QWORD *)(v17 + 168),
              *(_DWORD *)(v17 + 176),
              *(_DWORD *)(v17 + 196),
              *(_DWORD *)(v17 + 212),
              v17 + 56,
              v17 + 40,
              *(_DWORD *)(v17 + 208),
              v28,
              &v34);
      v26 = FailFastIfAccessDenied(v29);
      v12 = v26;
      if ( v26 < 0 )
      {
        v32 = 1059;
        goto LABEL_80;
      }
      v26 = (**(__int64 (__fastcall ***)(struct IDCompositionRenderTargetPartner *, GUID *, __int64 *))v34)(
              v34,
              &GUID_4939a7d9_c3a5_4e8c_ada9_439818241f2e,
              &v35);
      v12 = v26;
      if ( v26 < 0 )
      {
        v32 = 1061;
        goto LABEL_80;
      }
      v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 32LL))(v35);
      v12 = v26;
      if ( v26 < 0 )
      {
        v32 = 1062;
        goto LABEL_80;
      }
      CDWMDisplay::SetDcompTarget((CDWMDisplay *)v17, v34);
      if ( v34 )
      {
        (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v34 + 16LL))(v34);
        v34 = 0LL;
      }
      if ( v35 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
        v35 = 0LL;
      }
      v10 = 1;
    }
    v14 = v42;
    v15 = (unsigned int)((_DWORD)v36 + 1);
    LODWORD(v36) = v15;
  }
  if ( v10 && (v20 = 0LL, v14) )
  {
    v21 = (unsigned int)a4;
    while ( 1 )
    {
      v34 = CDWMDisplay::GetDcompTarget(*(CDWMDisplay **)(v40 + 8 * v20));
      v22 = *(unsigned int *)(a2 + 24);
      v23 = v22 + 1;
      v24 = v22 + 1;
      if ( (int)v22 + 1 < (unsigned int)v22 )
        v24 = v21;
      v12 = v23 < (unsigned int)v22 ? 0x80070216 : 0;
      v21 = v24;
      if ( v23 < (unsigned int)v22 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xB5u);
      }
      else if ( v24 <= *(_DWORD *)(a2 + 20) )
      {
        *(_QWORD *)(*(_QWORD *)a2 + 8 * v22) = v34;
        *(_DWORD *)(a2 + 24) = v24;
      }
      else
      {
        v25 = DynArrayImpl<0>::AddMultipleAndSet(a2, 8LL, 1LL, &v34);
        v12 = v25;
        if ( v25 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xC0u);
      }
      if ( v12 < 0 )
        break;
      if ( v34 )
      {
        (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v34 + 16LL))(v34);
        v34 = 0LL;
      }
      v20 = (unsigned int)(v20 + 1);
      if ( (unsigned int)v20 >= v14 )
        goto LABEL_39;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x436u);
  }
  else
  {
LABEL_39:
    v26 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 25) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25));
    v12 = v26;
    if ( v26 < 0 )
    {
      v32 = 1083;
LABEL_80:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, v32);
    }
  }
  DcompTarget = 0LL;
LABEL_41:
  *a5 = v37;
  *a6 = v38;
  *a4 = v33;
  if ( DcompTarget )
    (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)DcompTarget + 16LL))(DcompTarget);
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  if ( v6 )
    CDWMDisplaySet::Release(v6);
  if ( v34 )
    (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v34 + 16LL))(v34);
  DynArrayImpl<0>::~DynArrayImpl<0>(&v40);
  DynArrayImpl<0>::~DynArrayImpl<0>(&v43);
  return (unsigned int)v12;
}
