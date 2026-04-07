/*
 * XREFs of ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_N2PEAH3@Z @ 0x18004A868
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180049FF4 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020D08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180025258 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x180033D20 (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x180033ECC (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x1800342A0 (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     ?GetDcompTarget@CDWMDisplay@@QEAAPEAUIDCompositionRenderTargetPartner@@XZ @ 0x18003518C (-GetDcompTarget@CDWMDisplay@@QEAAPEAUIDCompositionRenderTargetPartner@@XZ.c)
 *     ?SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z @ 0x1800351BC (-SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z.c)
 *     ?IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z @ 0x18003930C (-IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?FailFastIfAccessDenied@@YAJJ@Z @ 0x1800396C4 (-FailFastIfAccessDenied@@YAJJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z @ 0x18006F7D8 (-CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z.c)
 *     ?GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z @ 0x18006F8E8 (-GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z.c)
 */

__int64 __fastcall CDesktopManager::GetDcompTargetsForNewGroup(
        CDesktopManager *this,
        __int64 a2,
        const struct CDWMDisplay **a3,
        char *a4,
        char *a5,
        int *a6,
        int *a7)
{
  struct CDWMDisplaySet *v7; // r15
  unsigned int v8; // r12d
  struct IDCompositionRenderTargetPartner *v9; // rdi
  char v12; // r14
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  int AllDisplaysNoRef; // eax
  int v17; // eax
  char v18; // dl
  unsigned int v19; // r14d
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // r14
  char v23; // cl
  CDWMDisplay *v24; // rbx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r9
  unsigned int v31; // r8d
  __int64 v32; // rdx
  int v33; // r12d
  unsigned int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  __int64 v38; // rsi
  unsigned int v39; // edi
  __int64 v40; // rcx
  unsigned int v41; // eax
  int v42; // eax
  int v43; // eax
  char v45; // [rsp+78h] [rbp-71h]
  char v46; // [rsp+79h] [rbp-70h]
  struct IDCompositionRenderTargetPartner *DcompTarget; // [rsp+80h] [rbp-69h] BYREF
  __int64 v48; // [rsp+88h] [rbp-61h] BYREF
  struct CDWMDisplaySet *v49; // [rsp+90h] [rbp-59h] BYREF
  int v50; // [rsp+98h] [rbp-51h] BYREF
  int v51; // [rsp+9Ch] [rbp-4Dh] BYREF
  __int64 v52; // [rsp+A0h] [rbp-49h] BYREF
  __int128 v53; // [rsp+A8h] [rbp-41h] BYREF
  __int64 v54; // [rsp+B8h] [rbp-31h]
  unsigned int v55; // [rsp+C0h] [rbp-29h]
  __int128 v56; // [rsp+C8h] [rbp-21h] BYREF
  __int64 v57; // [rsp+D8h] [rbp-11h]
  unsigned int v58; // [rsp+E0h] [rbp-9h]
  __int64 v59; // [rsp+E8h] [rbp-1h]

  v7 = 0LL;
  v49 = 0LL;
  v57 = 0LL;
  v8 = 0;
  v58 = 0;
  v9 = 0LL;
  v54 = 0LL;
  v55 = 0;
  v50 = 0;
  v51 = 0;
  v46 = 0;
  v12 = 1;
  v52 = 0LL;
  DcompTarget = 0LL;
  v48 = 0LL;
  v56 = 0LL;
  v45 = 1;
  v53 = 0LL;
  v13 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))CDesktopManager::s_pDesktopManagerInstance + 25))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25),
          &GUID_e5416f03_7e37_415e_aacb_83cb988a6bb4,
          &v52);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x3F8u);
    goto LABEL_77;
  }
  v15 = CDesktopManager::EnumerateMonitors(this, &v49);
  v14 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x3FAu);
    v7 = v49;
    goto LABEL_77;
  }
  v7 = v49;
  if ( v49 )
  {
    AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef((__int64)v49, (__int64)&v56);
    v14 = AllDisplaysNoRef;
    if ( AllDisplaysNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, AllDisplaysNoRef, 0x3FEu);
      goto LABEL_77;
    }
    v8 = v58;
  }
  v17 = CDWMDisplaySet::GetAllDisplaysNoRef(*((_QWORD *)this + 19), (__int64)&v53);
  v14 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x401u);
    goto LABEL_77;
  }
  if ( v7 && CDWMDisplaySet::IsEquivalentRotated(*((CDWMDisplaySet **)this + 19), v7) )
  {
    CDWMDisplaySet::GetPrimaryDisplay(*((CDWMDisplaySet **)this + 19), a3);
    CDWMDisplaySet::CalculateRotationAngles(v7, *((const struct CDWMDisplaySet **)this + 19), &v50, &v51);
    v18 = 0;
    v46 = 1;
    v45 = 0;
  }
  else
  {
    v18 = 1;
  }
  v19 = v55;
  v20 = 0LL;
  LODWORD(v49) = 0;
  if ( !v55 )
  {
LABEL_52:
    if ( v18 && (v38 = 0LL, v19) )
    {
      v39 = (unsigned int)a4;
      while ( 1 )
      {
        DcompTarget = CDWMDisplay::GetDcompTarget(*(CDWMDisplay **)(v53 + 8 * v38));
        v40 = *(unsigned int *)(a2 + 24);
        v41 = v40 + 1;
        if ( (int)v40 + 1 >= (unsigned int)v40 )
          v39 = v40 + 1;
        v14 = v41 < (unsigned int)v40 ? 0x80070216 : 0;
        if ( v41 >= (unsigned int)v40 )
        {
          if ( v39 > *(_DWORD *)(a2 + 20) )
          {
            v42 = DynArrayImpl<0>::AddMultipleAndSet(a2, 8, 1, &DcompTarget);
            v14 = v42;
            if ( v42 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0xC0u);
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)a2 + 8 * v40) = DcompTarget;
            *(_DWORD *)(a2 + 24) = v39;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xB5u);
        }
        if ( v14 < 0 )
          break;
        if ( DcompTarget )
        {
          (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)DcompTarget + 16LL))(DcompTarget);
          DcompTarget = 0LL;
        }
        v38 = (unsigned int)(v38 + 1);
        if ( (unsigned int)v38 >= v19 )
          goto LABEL_73;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x476u);
    }
    else
    {
LABEL_73:
      v43 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 25) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25));
      v14 = v43;
      if ( v43 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, 0x47Bu);
    }
    goto LABEL_75;
  }
  while ( 1 )
  {
    v21 = 0LL;
    v22 = *(_QWORD *)(v53 + 8 * v20);
    v23 = 0;
    if ( v8 )
    {
      while ( !v23 )
      {
        v24 = *(CDWMDisplay **)(v56 + 8 * v21);
        if ( *(_DWORD *)(v22 + 176) == *((_DWORD *)v24 + 44)
          && *(_DWORD *)(v22 + 196) == *((_DWORD *)v24 + 49)
          && *(_DWORD *)(v22 + 212) == *((_DWORD *)v24 + 53)
          && !*(_BYTE *)(v22 + 164) )
        {
          v9 = CDWMDisplay::GetDcompTarget(*(CDWMDisplay **)(v56 + 8 * v21));
          CDWMDisplay::SetDcompTarget((CDWMDisplay *)v22, v9);
          CDWMDisplay::SetDcompTarget(v24, 0LL);
          v25 = (**(__int64 (__fastcall ***)(struct IDCompositionRenderTargetPartner *, GUID *, __int64 *))v9)(
                  v9,
                  &GUID_4939a7d9_c3a5_4e8c_ada9_439818241f2e,
                  &v48);
          v14 = v25;
          if ( v25 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x429u);
            goto LABEL_76;
          }
          if ( (unsigned int)IsHDRDisplay(*(HMONITOR *)(*(_QWORD *)(v22 + 88) + 16LL)) )
          {
            v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 32LL))(v48);
            v14 = v26;
            if ( v26 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x42Du);
              goto LABEL_76;
            }
          }
          if ( !v46 || !*(_BYTE *)(v22 + 220) || !*(_BYTE *)(v22 + 221) )
          {
            v27 = (*(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *, __int64, __int64, _QWORD))(*(_QWORD *)v9 + 24LL))(
                    v9,
                    v22 + 56,
                    v22 + 40,
                    *(unsigned int *)(v22 + 208));
            v14 = v27;
            if ( v27 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x439u);
              goto LABEL_76;
            }
          }
          (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v9 + 16LL))(v9);
          if ( v48 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
            v48 = 0LL;
          }
          v23 = 1;
        }
        v21 = (unsigned int)(v21 + 1);
        if ( (unsigned int)v21 >= v8 )
          break;
      }
    }
    if ( *(_QWORD *)(v22 + 8) )
    {
      v18 = v45;
      goto LABEL_51;
    }
    v28 = *((_QWORD *)this + 18);
    v29 = 0LL;
    v30 = *(_QWORD *)(v22 + 168);
    v59 = v30;
    v31 = *(_DWORD *)(v28 + 80);
    if ( v31 )
    {
      while ( 1 )
      {
        v32 = *(_QWORD *)(*(_QWORD *)(v28 + 56) + 8 * v29);
        if ( __PAIR64__(HIDWORD(v59), v30) == *(_QWORD *)(v32 + 336)
          && *(_DWORD *)(v32 + 296) == 5140
          && *(_DWORD *)(v32 + 300) == 140 )
        {
          break;
        }
        v29 = (unsigned int)(v29 + 1);
        if ( (unsigned int)v29 >= v31 )
          goto LABEL_39;
      }
    }
    else
    {
LABEL_39:
      v33 = 3;
      if ( (unsigned int)(*((_DWORD *)this + 40) - 2) > 1 )
        goto LABEL_41;
    }
    v33 = 2;
LABEL_41:
    v34 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, __int64, __int64, _DWORD, int, struct IDCompositionRenderTargetPartner **))(*(_QWORD *)v52 + 624LL))(
            v52,
            74776LL,
            *(_QWORD *)(*(_QWORD *)(v22 + 88) + 16LL),
            *(_QWORD *)(v22 + 168),
            *(_DWORD *)(v22 + 176),
            *(_DWORD *)(v22 + 196),
            *(_DWORD *)(v22 + 212),
            v22 + 56,
            v22 + 40,
            *(_DWORD *)(v22 + 208),
            v33,
            &DcompTarget);
    v35 = FailFastIfAccessDenied(v34);
    v14 = v35;
    if ( v35 < 0 )
      break;
    v36 = (**(__int64 (__fastcall ***)(struct IDCompositionRenderTargetPartner *, GUID *, __int64 *))DcompTarget)(
            DcompTarget,
            &GUID_4939a7d9_c3a5_4e8c_ada9_439818241f2e,
            &v48);
    v14 = v36;
    if ( v36 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x461u);
      goto LABEL_75;
    }
    if ( (unsigned int)IsHDRDisplay(*(HMONITOR *)(*(_QWORD *)(v22 + 88) + 16LL)) )
    {
      v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 32LL))(v48);
      v14 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x465u);
        goto LABEL_75;
      }
    }
    CDWMDisplay::SetDcompTarget((CDWMDisplay *)v22, DcompTarget);
    if ( DcompTarget )
    {
      (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)DcompTarget + 16LL))(DcompTarget);
      DcompTarget = 0LL;
    }
    if ( v48 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
      v48 = 0LL;
    }
    v8 = v58;
    v18 = 1;
    v45 = 1;
LABEL_51:
    v19 = v55;
    v20 = (unsigned int)((_DWORD)v49 + 1);
    LODWORD(v49) = v20;
    if ( (unsigned int)v20 >= v55 )
      goto LABEL_52;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x45Fu);
LABEL_75:
  v9 = 0LL;
LABEL_76:
  v12 = v45;
LABEL_77:
  *a6 = v50;
  *a7 = v51;
  *a5 = v46;
  *a4 = v12;
  if ( v9 )
    (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v48 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
  if ( v7 )
    CDWMDisplaySet::Release(v7);
  if ( DcompTarget )
    (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)DcompTarget + 16LL))(DcompTarget);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v53);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v56);
  return (unsigned int)v14;
}
