/*
 * XREFs of ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x180056D64
 * Callers:
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180037730 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18004AB4C (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18004E770 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180052A90 (-Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800544B0 (-Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAA@XZ @ 0x180039B94 (--1-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@QEAA@XZ.c)
 *     ?IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z @ 0x180056CD0 (-IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z.c)
 *     ?UpdateGazeSensorData@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x1800573A0 (-UpdateGazeSensorData@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateGazeCursor@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x180057580 (-UpdateGazeCursor@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?TickAndUpdateCursorsForProviders@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x180057634 (-TickAndUpdateCursorsForProviders@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x180057AF0 (-TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV-$ComPtr@UIMPCInputProviderBase@@.c)
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x180058234 (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 *     ?TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z @ 0x180058578 (-TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z.c)
 *     ?ProcessCapture@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18005871C (-ProcessCapture@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ?ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV?$function@$$A6AXPEAUIMPCInputProviderBase@@@Z@std@@@Z @ 0x180058BA8 (-ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV-$function@$$A6AXPEAUIMPCInputProviderB.c)
 *     ?SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z @ 0x1800595F4 (-SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall MPCHolographicInputManager::Process3DInput(
        MPCHolographicInputManager *this,
        struct IInputDisplay *a2,
        struct InputInfo *a3,
        struct IMPCInputProviderBase *a4,
        struct IInputTarget **a5)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  struct ISystemInputRouter *v12; // rax
  const char *v13; // r9
  __int64 v14; // rbx
  __int64 v15; // r15
  _QWORD *v16; // rax
  __int64 v17; // rbx
  const char *v18; // r9
  char *v19; // r12
  _OWORD *v20; // rax
  _OWORD *v21; // rcx
  __int64 v22; // rdx
  _QWORD *v23; // rbx
  struct IInputTarget **v24; // r15
  __int64 v25; // rcx
  int v26; // eax
  const char *v27; // r9
  int v28; // ebx
  __int64 v29; // rdx
  __int64 v31; // rbx
  _QWORD *v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // eax
  int v35; // eax
  MPCHolographicInputManager *v36; // rcx
  __int128 v37; // [rsp+50h] [rbp-39h]
  __int128 v38; // [rsp+60h] [rbp-29h] BYREF
  __int64 v39; // [rsp+70h] [rbp-19h]
  __int64 (__fastcall **v40)(); // [rsp+78h] [rbp-11h] BYREF
  __int128 v41; // [rsp+80h] [rbp-9h]
  __int64 (__fastcall ***v42)(); // [rsp+B0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+57h]
  __int64 v44; // [rsp+E8h] [rbp+5Fh] BYREF

  if ( !*((_BYTE *)this + 3128) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x14C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)a4);
    __debugbreak();
  }
  if ( !*((_QWORD *)this + 384) )
  {
    v9 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a4 + 248LL))(a4);
    v10 = v9;
    if ( *((_QWORD *)this + 384) != v9 )
    {
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v11 = *((_QWORD *)this + 384);
      *((_QWORD *)this + 384) = v10;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = (struct ISystemInputRouter *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 384) + 64LL))(*((_QWORD *)this + 384));
    MPCHolographicInputManager::SetMPCInputRouter(this, v12);
  }
  if ( !*((_QWORD *)this + 382) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x155,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)a4);
    __debugbreak();
  }
  MPCHolographicInputManager::UpdateGazeSensorData(this, a3);
  if ( !*((_BYTE *)this + 3128) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x210,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      v13);
    __debugbreak();
  }
  v14 = 0LL;
  if ( (__int64)(*((_QWORD *)this + 386) - *((_QWORD *)this + 385)) >> 3 )
  {
    while ( 1 )
    {
      v15 = *((_QWORD *)this + 385);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v15 + 8 * v14) + 24LL))(*(_QWORD *)(v15 + 8 * v14)) )
        break;
      if ( ++v14 >= (unsigned __int64)((__int64)(*((_QWORD *)this + 386) - *((_QWORD *)this + 385)) >> 3) )
        goto LABEL_31;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v15 + 8 * v14) + 72LL))(*(_QWORD *)(v15 + 8 * v14)) )
    {
      v16 = (_QWORD *)*((_QWORD *)this + 417);
      if ( *v16 == *((_QWORD *)this + 390) || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v16 + 72LL))(*v16) )
      {
        v17 = *(_QWORD *)(v15 + 8 * v14);
        v44 = v17;
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      }
      else
      {
        v17 = *((_QWORD *)this + 390);
        v44 = v17;
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      }
    }
    else
    {
      v17 = *(_QWORD *)(v15 + 8 * v14);
      v44 = v17;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    }
    MPCHolographicInputManager::TrySetProviderAsPrimary(this);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
LABEL_31:
  if ( !(*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a4 + 72LL))(a4) )
  {
    *((_DWORD *)a3 + 178) = *((_DWORD *)a3 + 1);
    *((_BYTE *)a3 + 848) = 0;
    v19 = (char *)a3 + 776;
    *((_BYTE *)a3 + 776) = 0;
    *((_DWORD *)a3 + 202) = 0;
    v26 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *, MPCHolographicInputManager *, struct InputInfo *))(*(_QWORD *)a4 + 56LL))(
            a4,
            this,
            a3);
    v28 = v26;
    if ( v26 >= 0 )
    {
      if ( !*((_BYTE *)a3 + 676) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x3B1,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v27);
        __debugbreak();
      }
      (*(void (__fastcall **)(struct IMPCInputProviderBase *, struct InputInfo *))(*(_QWORD *)a4 + 144LL))(a4, a3);
      MPCHolographicInputManager::TransformRayToHeadFromWorld(this, (struct InputInfo *)((char *)a3 + 716));
      v28 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x3AF,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v26);
    }
    if ( v28 >= 0 )
    {
      v31 = *((_QWORD *)this + 382);
      v32 = (_QWORD *)(*(__int64 (__fastcall **)(struct IMPCInputProviderBase *, __int64 *))(*(_QWORD *)a4 + 224LL))(
                        a4,
                        &v44);
      v24 = a5;
      v28 = (*(__int64 (__fastcall **)(__int64, struct IInputDisplay *, struct InputInfo *, _QWORD, _QWORD, struct IInputTarget **))(*(_QWORD *)v31 + 56LL))(
              v31,
              a2,
              a3,
              0LL,
              *v32,
              a5);
      v33 = v44;
      if ( v44 )
      {
        v44 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      }
      if ( v28 >= 0 )
        goto LABEL_52;
      v29 = 369LL;
    }
    else
    {
      v29 = 361LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v29,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v28);
    return (unsigned int)v28;
  }
  if ( !*((_QWORD *)this + 390) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x15F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      v18);
    __debugbreak();
  }
  v19 = (char *)a3 + 776;
  v20 = (_OWORD *)((char *)a3 + 776);
  v21 = (_OWORD *)((char *)this + 976);
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
  v23 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64))(**((_QWORD **)this + 390) + 224LL))(
                    *((_QWORD *)this + 390),
                    &v44,
                    128LL);
  if ( *v23 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v23 + 8LL))(*v23);
  v24 = a5;
  *a5 = (struct IInputTarget *)*v23;
  v25 = v44;
  if ( v44 )
  {
    v44 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
LABEL_52:
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, char *))(*(_QWORD *)a4 + 216LL))(a4, v19);
  MPCHolographicInputManager::UpdateGazeCursor(this, a3);
  MPCHolographicInputManager::TickAndUpdateCursorsForProviders(this, a3);
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, MPCHolographicInputManager *, struct InputInfo *))(*(_QWORD *)a4 + 128LL))(
    a4,
    this,
    a3);
  if ( MPCHolographicInputManager::IsProviderPrimary(this, a4) )
  {
    *((_BYTE *)this + 3048) = *((_BYTE *)a3 + 1072) != 0;
    v34 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a4 + 312LL))(a4);
    MPCHolographicInputManager::ProcessCursorData(this, a4, v19, v34, (char *)a3 + 1096);
    v38 = 0LL;
    v39 = 0LL;
    *(_QWORD *)&v37 = this;
    *((_QWORD *)&v37 + 1) = &v38;
    v40 = off_1800D63B8;
    v41 = v37;
    v42 = &v40;
    MPCHolographicInputManager::ForEachActiveProvider(this, &v40);
    v35 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 393) + 72LL))(
            *((_QWORD *)this + 393),
            (*((_QWORD *)&v38 + 1) - (_QWORD)v38) / 184LL);
    if ( v35 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x198,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v35);
    std::vector<PointData3D>::~vector<PointData3D>((unsigned __int64 *)&v38);
  }
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, struct IInputTarget *))(*(_QWORD *)a4 + 200LL))(a4, *v24);
  MPCHolographicInputManager::ProcessCapture(v36, a3, a4, v24);
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, struct IInputTarget *))(*(_QWORD *)a4 + 208LL))(a4, *v24);
  return 0LL;
}
