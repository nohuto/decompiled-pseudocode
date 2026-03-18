/*
 * XREFs of ?_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C0072B60
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qdD @ 0x1C0012B38 (WPP_IFR_SF_qdD.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qddd @ 0x1C0066444 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dqd @ 0x1C006A28C (WPP_IFR_SF_dqd.c)
 *     WPP_IFR_SF_qdd @ 0x1C00701C4 (WPP_IFR_SF_qdd.c)
 *     ?GetInstanceReferenced@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z @ 0x1C00715C8 (-GetInstanceReferenced@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z.c)
 *     ?CompleteWmiRequest@FxWmiIrpHandler@@AEAAJPEAU_IRP@@JK@Z @ 0x1C007260C (-CompleteWmiRequest@FxWmiIrpHandler@@AEAAJPEAU_IRP@@JK@Z.c)
 */

__int64 __fastcall FxWmiIrpHandler::_QueryAllData(
        FxWmiIrpHandler *This,
        _IRP *Irp,
        FxWmiProvider *Provider,
        FxWmiInstance *Instance)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  unsigned int v7; // r14d
  unsigned int v8; // esi
  int _a3; // ebx
  unsigned __int8 v10; // r8
  unsigned int v11; // r8d
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rdi
  _FX_DRIVER_GLOBALS *v15; // rcx
  const void *v16; // rdx
  _NAMED_PIPE_CREATE_PARAMETERS *v17; // rdx
  int v18; // ecx
  unsigned __int64 v19; // rax
  unsigned int v20; // eax
  unsigned int v21; // ecx
  unsigned __int16 v22; // ax
  const void *_a2; // rdi
  unsigned int LowPart; // r11d
  unsigned int v25; // r11d
  unsigned int *p_OutboundQuota; // r15
  unsigned int m_MinInstanceBufferSize; // r10d
  unsigned __int64 v28; // rdx
  unsigned int v29; // ecx
  unsigned int v30; // r9d
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // r15d
  FxWmiInstance *InstanceReferenced; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  unsigned int v37; // r8d
  const void *v38; // rcx
  unsigned int *v39; // rax
  unsigned int v40; // edx
  unsigned int v41; // ecx
  int v42; // eax
  int v43; // edx
  const void *v44; // rcx
  unsigned int v45; // ecx
  unsigned int v46; // edx
  int v47; // eax
  bool v48; // cf
  const void *v49; // rcx
  unsigned int *v50; // rax
  const void *v51; // rcx
  _FX_DRIVER_GLOBALS *v52; // rcx
  unsigned __int16 v53; // ax
  const void *v54; // rdi
  const void *v56; // rcx
  char v57; // [rsp+50h] [rbp-78h]
  unsigned __int8 irql[3]; // [rsp+51h] [rbp-77h] BYREF
  unsigned int tmpSize; // [rsp+54h] [rbp-74h] BYREF
  unsigned int v60; // [rsp+58h] [rbp-70h]
  unsigned int v61; // [rsp+5Ch] [rbp-6Ch]
  unsigned int v62; // [rsp+60h] [rbp-68h]
  char *v63; // [rsp+68h] [rbp-60h]
  unsigned int *v64; // [rsp+70h] [rbp-58h]
  FxWmiInstance *v65; // [rsp+80h] [rbp-48h]
  unsigned int *v66; // [rsp+88h] [rbp-40h]
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // [rsp+90h] [rbp-38h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v48 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart < 0x48;
  v7 = 0;
  v61 = 0;
  v8 = 0;
  v57 = 0;
  if ( v48 )
  {
    _a3 = -1073741823;
    return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, _a3, v8);
  }
  FxNonPagedObject::Lock(This, irql, (unsigned __int8)Provider);
  tmpSize = Provider->m_NumInstances;
  FxNonPagedObject::Unlock(This, irql[0], v10);
  v11 = tmpSize;
  if ( !tmpSize )
  {
    _a3 = -1073741162;
    m_Globals = This->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      m_ObjectSize = Provider->m_ObjectSize;
      _a1 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qd(m_Globals, 5u, 0xCu, 0xFu, WPP_FxWmiIrpHandler_cpp_Traceguids, _a1, -1073741162);
    }
    v8 = 0;
    return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, _a3, v8);
  }
  v15 = This->m_Globals;
  if ( v15->FxVerboseOn )
  {
    v16 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !Provider->m_ObjectSize )
      v16 = 0LL;
    WPP_IFR_SF_qd(v15, 5u, 0xCu, 0x10u, WPP_FxWmiIrpHandler_cpp_Traceguids, v16, tmpSize);
    v11 = tmpSize;
  }
  v17 = Parameters;
  v18 = -1;
  v19 = 8LL * v11;
  Parameters[1].ReadMode &= ~0x10u;
  v17[1].MaximumInstances = v11;
  if ( v19 <= 0xFFFFFFFF )
    v18 = 8 * v11;
  _a3 = v19 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v19 <= 0xFFFFFFFF )
  {
    v20 = v18 + 60;
    v21 = -1;
    if ( v20 >= 0x3C )
      v21 = v20;
    _a3 = v20 < 0x3C ? 0xC0000095 : 0;
    if ( v20 >= 0x3C )
    {
      v7 = (v21 + 15) & 0xFFFFFFF0;
      if ( v7 < v21 )
        _a3 = -1073741675;
    }
  }
  if ( _a3 < 0 )
  {
    v22 = Provider->m_ObjectSize;
    _a2 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v22 )
      _a2 = 0LL;
    WPP_IFR_SF_dqd(This->m_Globals, 2u, 0xCu, 0x11u, WPP_FxWmiIrpHandler_cpp_Traceguids, v11, _a2, _a3);
    return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, _a3, v8);
  }
  v17[1].CompletionMode = v7;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( v7 > LowPart )
  {
    p_OutboundQuota = 0LL;
    v66 = 0LL;
    v63 = 0LL;
    v25 = 0;
    v60 = 0;
    _a3 = -1073741789;
    v57 = 1;
  }
  else
  {
    v25 = LowPart - v7;
    v60 = v25;
    p_OutboundQuota = &v17[1].OutboundQuota;
    v63 = (char *)v17 + v7;
    v66 = &v17[1].OutboundQuota;
  }
  if ( !v11 || (m_MinInstanceBufferSize = Provider->m_MinInstanceBufferSize) == 0 )
  {
LABEL_38:
    v32 = 0;
    v62 = 0;
    if ( v11 )
    {
      v64 = p_OutboundQuota;
      v33 = tmpSize;
      do
      {
        InstanceReferenced = FxWmiProvider::GetInstanceReferenced(Provider, v32, Irp);
        v65 = InstanceReferenced;
        if ( !InstanceReferenced )
          break;
        if ( ((unsigned __int8 (__fastcall *)(FxWmiInstance *, __int64, __int64, _QWORD))InstanceReferenced->IsQueryInstanceSupported)(
               InstanceReferenced,
               v35,
               v36,
               0LL) )
        {
          tmpSize = 0;
          _a3 = v65->QueryInstance(v65, v60, v63, &tmpSize);
          if ( (int)(_a3 + 0x80000000) < 0 || _a3 == -1073741789 )
          {
            v37 = (tmpSize + 15) & 0xFFFFFFF0;
            if ( v37 >= tmpSize )
            {
              v61 = v37 - tmpSize;
              if ( _a3 < 0 || v57 )
              {
                v57 = 1;
              }
              else
              {
                v39 = v64;
                v64[1] = tmpSize;
                *v39 = v7;
                v63 += v37;
              }
              v40 = v7;
              if ( v37 > v60 )
              {
                v41 = v60 + v7;
                v60 = 0;
              }
              else
              {
                v41 = v37 + v7;
                v60 -= v37;
              }
              v42 = -1;
              if ( v41 >= v7 )
                v42 = v41;
              v7 = v42;
              v43 = v41 < v40 ? 0xC0000095 : 0;
              if ( v43 >= 0 )
              {
                v45 = v37 + v8;
                v46 = v8;
                v47 = -1;
                if ( v37 + v8 >= v8 )
                  v47 = v37 + v8;
                v8 = v47;
                v48 = v45 < v46;
                if ( v45 < v46 )
                {
                  _a3 = v45 < v46 ? 0xC0000095 : 0;
                  v49 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
                  if ( !Provider->m_ObjectSize )
                    v49 = 0LL;
                  WPP_IFR_SF_qddd(
                    This->m_Globals,
                    v46,
                    0xCu,
                    0x14u,
                    WPP_FxWmiIrpHandler_cpp_Traceguids,
                    v49,
                    v47,
                    v37,
                    v48 ? 0xC0000095 : 0);
                }
              }
              else
              {
                _a3 = v43;
                v44 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
                if ( !Provider->m_ObjectSize )
                  v44 = 0LL;
                WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x13u, WPP_FxWmiIrpHandler_cpp_Traceguids, v44, v43);
              }
            }
            else
            {
              _a3 = -1073741675;
              v38 = (const void *)((unsigned __int64)v65 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !v65->m_ObjectSize )
                v38 = 0LL;
              WPP_IFR_SF_qdd(
                This->m_Globals,
                2u,
                0xCu,
                0x12u,
                WPP_FxWmiIrpHandler_cpp_Traceguids,
                v38,
                tmpSize,
                -1073741675);
            }
          }
        }
        else if ( v66 )
        {
          v50 = v64;
          v64[1] = 0;
          *v50 = v7;
        }
        v65->Release(v65, Irp, 1178, "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
        if ( (int)(_a3 + 0x80000000) >= 0 && _a3 != -1073741789 )
          goto LABEL_81;
        v64 += 2;
        v32 = v62 + 1;
        v62 = v32;
      }
      while ( v32 < v33 );
    }
    if ( _a3 != -1073741789 )
    {
LABEL_81:
      if ( _a3 < 0 )
      {
        v56 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !Provider->m_ObjectSize )
          v56 = 0LL;
        WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x16u, WPP_FxWmiIrpHandler_cpp_Traceguids, v56, _a3);
        v8 = 0;
        goto LABEL_76;
      }
      if ( !v57 )
      {
        v8 = v7 - Parameters[1].CompletionMode - v61;
LABEL_76:
        v52 = This->m_Globals;
        if ( v52->FxVerboseOn )
        {
          v53 = Provider->m_ObjectSize;
          v54 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v53 )
            v54 = 0LL;
          WPP_IFR_SF_qdD(v52, 5u, 0xCu, 0x17u, WPP_FxWmiIrpHandler_cpp_Traceguids, v54, _a3, v8);
        }
        return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, _a3, v8);
      }
    }
    v8 -= v61;
    _a3 = -1073741789;
    v51 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !Provider->m_ObjectSize )
      v51 = 0LL;
    WPP_IFR_SF_qdD(This->m_Globals, 4u, 0xCu, 0x15u, WPP_FxWmiIrpHandler_cpp_Traceguids, v51, -1073741789, v8);
    goto LABEL_76;
  }
  v28 = (v11 - 1) * (unsigned __int64)((m_MinInstanceBufferSize + 15) & 0xFFFFFFF0);
  v29 = -1;
  v30 = -1;
  if ( v28 <= 0xFFFFFFFF )
    v30 = (v11 - 1) * ((m_MinInstanceBufferSize + 15) & 0xFFFFFFF0);
  _a3 = v28 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v28 <= 0xFFFFFFFF )
  {
    v31 = m_MinInstanceBufferSize + v30;
    if ( m_MinInstanceBufferSize + v30 >= v30 )
      v29 = m_MinInstanceBufferSize + v30;
    _a3 = v31 < v30 ? 0xC0000095 : 0;
    if ( v31 >= v30 )
    {
      if ( v25 < v29 )
      {
        v8 = v29;
        _a3 = -1073741789;
        return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, _a3, v8);
      }
      goto LABEL_38;
    }
  }
  return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, _a3, v8);
}
