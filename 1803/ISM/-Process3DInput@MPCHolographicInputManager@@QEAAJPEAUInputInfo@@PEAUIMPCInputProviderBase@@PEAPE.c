/*
 * XREFs of ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004DF48
 * Callers:
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18003CC50 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800457C0 (-Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCHeadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180047DC0 (-Process3DInput@MPCHeadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180048350 (-Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180093860 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180097404 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAA@XZ @ 0x180040B4C (--1-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@QEAA@XZ.c)
 *     ?IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z @ 0x18004DEB4 (-IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z.c)
 *     ?UpdateGazeSensorData@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x18004E5A4 (-UpdateGazeSensorData@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateGazeCursor@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x18004E784 (-UpdateGazeCursor@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?TickAndUpdateCursorsForProviders@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x18004E850 (-TickAndUpdateCursorsForProviders@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x18004ED20 (-TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV-$ComPtr@UIMPCInputProviderBase@@.c)
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x18004F5D4 (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 *     ?TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z @ 0x18004F9B0 (-TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z.c)
 *     ?ProcessCapture@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004FB54 (-ProcessCapture@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ?ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV?$function@$$A6AXPEAUIMPCInputProviderBase@@@Z@std@@@Z @ 0x18004FF78 (-ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV-$function@$$A6AXPEAUIMPCInputProviderB.c)
 *     ?SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z @ 0x180050910 (-SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall MPCHolographicInputManager::Process3DInput(
        MPCHolographicInputManager *this,
        struct InputInfo *a2,
        struct IMPCInputProviderBase *a3,
        struct IInputTarget **a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  struct ISystemInputRouter *v12; // rax
  const char *v13; // r9
  unsigned __int64 v14; // rbx
  __int64 v15; // r15
  _QWORD *v16; // rax
  __int64 v17; // rbx
  const char *v18; // r9
  char *v19; // r15
  _OWORD *v20; // rax
  _OWORD *v21; // rcx
  __int64 v22; // rdx
  struct IInputTarget **v23; // rbx
  struct IInputTarget *v24; // rcx
  __int64 v25; // rcx
  unsigned int v26; // eax
  int v27; // eax
  wil::details::in1diag3 *v28; // rcx
  int v29; // eax
  const char *v30; // r9
  int v31; // ebx
  wil::details::in1diag3 *v32; // rcx
  __int64 v33; // rdx
  __int64 v35; // rbx
  _QWORD *v36; // rax
  __int64 v37; // rcx
  MPCHolographicInputManager *v38; // rcx
  __int128 v39; // [rsp+50h] [rbp-31h]
  __int128 v40; // [rsp+60h] [rbp-21h] BYREF
  __int64 v41; // [rsp+70h] [rbp-11h]
  __int64 (__fastcall **v42)(); // [rsp+78h] [rbp-9h] BYREF
  __int128 v43; // [rsp+80h] [rbp-1h]
  __int64 (__fastcall ***v44)(); // [rsp+B0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  __int64 v46; // [rsp+E8h] [rbp+67h] BYREF

  if ( !*((_BYTE *)this + 2008) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x14D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)a4);
    __debugbreak();
  }
  if ( !*((_QWORD *)this + 245) )
  {
    v8 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 256LL))(a3);
    v9 = v8;
    v10 = *((_QWORD *)this + 245);
    if ( v10 != v8 )
    {
      v11 = *((_QWORD *)this + 245);
      if ( v8 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, v11);
        v11 = *((_QWORD *)this + 245);
      }
      *((_QWORD *)this + 245) = v9;
      v10 = v9;
      if ( v11 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        v10 = *((_QWORD *)this + 245);
      }
    }
    v12 = (struct ISystemInputRouter *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 64LL))(v10);
    MPCHolographicInputManager::SetMPCInputRouter(this, v12);
  }
  if ( !*((_QWORD *)this + 243) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x156,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)a4);
    __debugbreak();
  }
  MPCHolographicInputManager::UpdateGazeSensorData(this, a2);
  if ( !*((_BYTE *)this + 2008) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      v13);
    __debugbreak();
  }
  v14 = 0LL;
  v15 = *((_QWORD *)this + 246);
  if ( (*((_QWORD *)this + 247) - v15) >> 3 )
  {
    while ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v15 + 8 * v14) + 24LL))(*(_QWORD *)(v15 + 8 * v14)) )
    {
      ++v14;
      v15 = *((_QWORD *)this + 246);
      if ( v14 >= (*((_QWORD *)this + 247) - v15) >> 3 )
        goto LABEL_28;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v15 + 8 * v14) + 72LL))(*(_QWORD *)(v15 + 8 * v14)) )
    {
      v16 = (_QWORD *)*((_QWORD *)this + 278);
      if ( *v16 == *((_QWORD *)this + 250) || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v16 + 72LL))(*v16) )
      {
        v17 = *(_QWORD *)(v15 + 8 * v14);
        v46 = v17;
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      }
      else
      {
        v17 = *((_QWORD *)this + 250);
        v46 = v17;
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      }
    }
    else
    {
      v17 = *(_QWORD *)(v15 + 8 * v14);
      v46 = v17;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    }
    MPCHolographicInputManager::TrySetProviderAsPrimary(this);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
LABEL_28:
  if ( !(*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 72LL))(a3) )
  {
    *((_DWORD *)a2 + 134) = *((_DWORD *)a2 + 1);
    *((_BYTE *)a2 + 672) = 0;
    v19 = (char *)a2 + 600;
    *((_BYTE *)a2 + 600) = 0;
    *((_DWORD *)a2 + 158) = 0;
    v29 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *, MPCHolographicInputManager *, struct InputInfo *))(*(_QWORD *)a3 + 56LL))(
            a3,
            this,
            a2);
    v31 = v29;
    v32 = retaddr;
    if ( v29 >= 0 )
    {
      if ( !*((_BYTE *)a2 + 500) )
      {
LABEL_58:
        wil::details::in1diag3::_FailFast_Unexpected(
          v32,
          (void *)0x3DF,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v30);
        JUMPOUT(0x18004E5A1LL);
      }
      (*(void (__fastcall **)(struct IMPCInputProviderBase *, struct InputInfo *))(*(_QWORD *)a3 + 144LL))(a3, a2);
      MPCHolographicInputManager::TransformRayToHeadFromWorld(this, (struct InputInfo *)((char *)a2 + 540));
      v31 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3DD,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v29);
    }
    if ( v31 >= 0 )
    {
      v35 = *((_QWORD *)this + 243);
      v36 = (_QWORD *)(*(__int64 (__fastcall **)(struct IMPCInputProviderBase *, __int64 *))(*(_QWORD *)a3 + 224LL))(
                        a3,
                        &v46);
      v31 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct InputInfo *, _QWORD, _QWORD, struct IInputTarget **))(*(_QWORD *)v35 + 56LL))(
              v35,
              0LL,
              a2,
              0LL,
              *v36,
              a4);
      v37 = v46;
      if ( v46 )
      {
        v46 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
      }
      if ( v31 >= 0 )
        goto LABEL_36;
      v33 = 370LL;
    }
    else
    {
      v33 = 362LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v33,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v31);
    return (unsigned int)v31;
  }
  if ( !*((_QWORD *)this + 250) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x160,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      v18);
LABEL_57:
    wil::details::in1diag3::FailFast_Hr(
      v28,
      (void *)0x19C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v27);
    goto LABEL_58;
  }
  v19 = (char *)a2 + 600;
  v20 = (_OWORD *)((char *)a2 + 600);
  v21 = (_OWORD *)((char *)this + 800);
  v22 = 2LL;
  do
  {
    *v20 = *v21;
    v20[1] = v21[1];
    v20[2] = v21[2];
    v20[3] = v21[3];
    v20[4] = v21[4];
    v20[5] = v21[5];
    v20[6] = v21[6];
    v20 += 8;
    *(v20 - 1) = v21[7];
    v21 += 8;
    --v22;
  }
  while ( v22 );
  *v20 = *v21;
  v20[1] = v21[1];
  v20[2] = v21[2];
  v20[3] = v21[3];
  v23 = (struct IInputTarget **)(*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64))(**((_QWORD **)this + 250) + 224LL))(
                                  *((_QWORD *)this + 250),
                                  &v46,
                                  128LL);
  v24 = *v23;
  if ( *v23 )
  {
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v24 + 8LL))(v24);
    v24 = *v23;
  }
  *a4 = v24;
  v25 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
LABEL_36:
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, char *))(*(_QWORD *)a3 + 216LL))(a3, v19);
  MPCHolographicInputManager::UpdateGazeCursor(this, a2);
  MPCHolographicInputManager::TickAndUpdateCursorsForProviders(this, a2);
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, MPCHolographicInputManager *, struct InputInfo *))(*(_QWORD *)a3 + 128LL))(
    a3,
    this,
    a2);
  if ( MPCHolographicInputManager::IsProviderPrimary(this, a3) )
  {
    *((_BYTE *)this + 1936) = *((_BYTE *)a2 + 896) != 0;
    if ( !*((_BYTE *)a2 + 1720) )
    {
      v26 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 320LL))(a3);
      MPCHolographicInputManager::ProcessCursorData(this, a3, v19, v26, (char *)a2 + 920);
    }
    v40 = 0LL;
    v41 = 0LL;
    *(_QWORD *)&v39 = this;
    *((_QWORD *)&v39 + 1) = &v40;
    v42 = off_1800EE830;
    v43 = v39;
    v44 = &v42;
    MPCHolographicInputManager::ForEachActiveProvider(this, &v42);
    v27 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 253) + 80LL))(
            *((_QWORD *)this + 253),
            (*((_QWORD *)&v40 + 1) - (_QWORD)v40) / 184LL);
    v28 = retaddr;
    if ( v27 >= 0 )
    {
      std::vector<PointData3D>::~vector<PointData3D>((unsigned __int64 *)&v40);
      goto LABEL_52;
    }
    goto LABEL_57;
  }
LABEL_52:
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD))(*(_QWORD *)a3 + 200LL))(a3, *a4);
  MPCHolographicInputManager::ProcessCapture(v38, a2, a3, a4);
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD))(*(_QWORD *)a3 + 208LL))(a3, *a4);
  return 0LL;
}
