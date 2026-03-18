/*
 * XREFs of ?CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C000FAB0
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000FF30 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x1C000D45C (-SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C000D4EC (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N11W4TokenState@CTokenBase@@@Z @ 0x1C000F468 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N11W4TokenStat.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C0017B10 (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?SignalAnalogTokenEvent@CTokenManager@@IEAAJXZ @ 0x1C004AB38 (-SignalAnalogTokenEvent@CTokenManager@@IEAAJXZ.c)
 */

__int64 __fastcall CTokenManager::CreateFlipExToken(
        CTokenManager *this,
        unsigned __int64 a2,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        bool *a4)
{
  void *hCompSurf; // rax
  _QWORD *v5; // rsi
  CompositionSurfaceObject *v7; // r12
  CompositionSurfaceObject *v8; // rbp
  NTSTATUS v9; // eax
  _QWORD **v10; // rbx
  int v11; // edi
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F Value; // ecx
  _QWORD *v13; // r15
  int v14; // ebp
  __int64 v15; // r14
  bool v16; // r13
  char v17; // di
  _QWORD *PoolWithTag; // rax
  __int64 v19; // rbx
  char v20; // r8
  __int64 *v21; // r13
  unsigned __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rbx
  _QWORD *v26; // rax
  char v27; // r14
  __int64 v28; // rcx
  __int64 v29; // rcx
  char v30; // si
  _QWORD *v32; // rdx
  __int64 v33; // r8
  _QWORD *v34; // rax
  void *v35; // rcx
  __int64 v36; // rax
  char v37; // [rsp+20h] [rbp-78h]
  unsigned int v38; // [rsp+28h] [rbp-70h]
  bool v39; // [rsp+30h] [rbp-68h] BYREF
  char v40; // [rsp+31h] [rbp-67h]
  PVOID Object; // [rsp+38h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-58h]
  const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *PreviousState; // [rsp+B0h] [rbp+18h] BYREF
  bool *v46; // [rsp+B8h] [rbp+20h]

  v46 = a4;
  PreviousState = a3;
  hCompSurf = (void *)a3->hCompSurf;
  *a4 = 0;
  v5 = 0LL;
  Handle = hCompSurf;
  v7 = 0LL;
  v8 = 0LL;
  v9 = ObReferenceObjectByHandle(hCompSurf, 2u, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
  v10 = (_QWORD **)Object;
  v11 = v9;
  if ( v9 < 0 )
    goto LABEL_7;
  if ( !(***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 1))(*((_QWORD *)Object + 1)) )
  {
    v11 = -1073741816;
    goto LABEL_52;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v10[1] + 16LL))(v10[1]) != 1 )
  {
    v11 = -1073741788;
LABEL_52:
    ObfDereferenceObject(v10);
    goto LABEL_5;
  }
  v8 = (CompositionSurfaceObject *)v10;
LABEL_5:
  if ( v11 < 0 )
    return (unsigned int)v11;
  v7 = v8;
LABEL_7:
  if ( v11 < 0 )
    return (unsigned int)v11;
  Value = (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F)a3->Flags.Value;
  v13 = 0LL;
  v40 = 0;
  v14 = *(_WORD *)&Value & 0x2000;
  v15 = 0LL;
  v16 = 1;
  v39 = 1;
  if ( (*(_DWORD *)&Value & 0x42000) == 0x2000 )
  {
    CompositionSurfaceObject::GetIndependentFlipNotifyDwm(v7, a2, &v39);
    v16 = v39;
    Value = (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F)PreviousState->Flags.Value;
  }
  v17 = (*(_DWORD *)&Value & 0x100000) != 0;
  if ( (*(_DWORD *)&Value & 0x1000000) != 0 )
    v40 = 1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x6F744D54u);
  v19 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[3] = 6LL;
    *((_BYTE *)PoolWithTag + 48) = 0;
    *PoolWithTag = &CToken::`vftable';
    PoolWithTag[10] = 0LL;
    *((_DWORD *)PoolWithTag + 13) = 0;
    PoolWithTag[5] = a2;
    PoolWithTag[4] = v7;
    ObReferenceObjectByPointer(v7, 3u, g_pDxgkCompositionObjectType, 0);
    *(_WORD *)(v19 + 88) = 0;
    *(_QWORD *)v19 = &CFlipToken::`vftable';
    v20 = v16;
    v21 = (__int64 *)PreviousState;
    *(_QWORD *)(v19 + 96) = 0LL;
    *(_QWORD *)(v19 + 560) = 0LL;
    *(_QWORD *)(v19 + 568) = 0LL;
    *(_QWORD *)(v19 + 148) = 0LL;
    *(_QWORD *)(v19 + 156) = 0LL;
    *(_QWORD *)(v19 + 164) = 0LL;
    *(_QWORD *)(v19 + 172) = 0LL;
    *(_QWORD *)(v19 + 120) = 0LL;
    *(_QWORD *)(v19 + 128) = 0LL;
    *(_DWORD *)(v19 + 556) = 0x1000000;
    *(_DWORD *)(v19 + 196) = 0;
    *(_DWORD *)(v19 + 208) = 0;
    v37 = v40;
    *(_QWORD *)(v19 + 188) = 1065353216LL;
    *(_QWORD *)(v19 + 200) = 1065353216LL;
    v11 = CFlipToken::InitializeCompleted(v19, (__int64)v21, v20, v17, v37, v38);
    if ( v11 < 0 )
      (**(void (__fastcall ***)(__int64, __int64))v19)(v19, 1LL);
    else
      v15 = v19;
    if ( v11 >= 0 )
    {
      v13 = (_QWORD *)v15;
      v22 = a2;
      goto LABEL_17;
    }
  }
  else
  {
    v21 = (__int64 *)PreviousState;
    v11 = -1073741801;
  }
  v22 = a2;
  CompositionSurfaceObject::SignalGpuFence(v7, a2, *v21, 1);
  if ( v21[4] )
    CompositionSurfaceObject::SignalPresentLimitSemaphore(v7, a2);
LABEL_17:
  if ( v11 >= 0 )
    v5 = v13;
  if ( !v14 )
    ObCloseHandle(Handle, 1);
  ObfDereferenceObject(v7);
  if ( v11 < 0 )
    return (unsigned int)v11;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v5 + 136LL))(v5)
    && !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v5 + 144LL))(v5) )
  {
    v32 = (_QWORD *)((char *)this + 288);
    v33 = *((_QWORD *)this + 36);
    *v46 = 1;
    v34 = v5 + 1;
    if ( *(CTokenManager **)(v33 + 8) != (CTokenManager *)((char *)this + 288) )
      __fastfail(3u);
    *v34 = v33;
    v5[2] = v32;
    *(_QWORD *)(v33 + 8) = v34;
    *v32 = v34;
LABEL_48:
    if ( v11 < 0 )
      return (unsigned int)v11;
    goto LABEL_24;
  }
  v11 = (*(__int64 (__fastcall **)(CTokenManager *, _QWORD *))(*(_QWORD *)this + 168LL))(this, v5);
  if ( v11 < 0 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v5)(v5, 1LL);
    goto LABEL_48;
  }
LABEL_24:
  v24 = v5[4];
  if ( v24 )
  {
    v25 = v24 + 40;
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v24 + 40))(v24 + 40) )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v24 + 48, 0LL);
      if ( (**(unsigned __int8 (__fastcall ***)(__int64))v25)(v24 + 40) )
      {
        if ( !*(_DWORD *)(v24 + 112) || (v26 = *(_QWORD **)(v24 + 96), v26 == (_QWORD *)(v24 + 96)) )
        {
LABEL_61:
          v27 = 0;
        }
        else
        {
          while ( *(v26 - 1) != v22 )
          {
            v26 = (_QWORD *)*v26;
            if ( v26 == (_QWORD *)(v24 + 96) )
              goto LABEL_61;
          }
          v27 = (*(__int64 (__fastcall **)(_QWORD *))(*(v26 - 3) + 32LL))(v26 - 3);
        }
        v28 = v24 + 48;
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v24 + 56) )
        {
          *(_QWORD *)(v24 + 56) = 0LL;
          ExReleasePushLockExclusiveEx(v28, 0LL);
        }
        else
        {
          ExReleasePushLockSharedEx(v28, 0LL);
        }
        KeLeaveCriticalRegion();
        if ( v27 )
        {
          v35 = (void *)*((_QWORD *)this + 8);
          LODWORD(PreviousState) = 0;
          ZwSetEvent(v35, (PLONG)&PreviousState);
        }
      }
      else
      {
        CPushLock::ReleaseLock((CPushLock *)(v24 + 40));
      }
    }
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))v25)(v24 + 40) )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v24 + 48, 0LL);
      if ( (**(unsigned __int8 (__fastcall ***)(__int64))v25)(v24 + 40) )
      {
        v29 = v24 + 48;
        v30 = *(_BYTE *)(v24 + 120);
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v25 + 16) )
        {
          *(_QWORD *)(v25 + 16) = 0LL;
          ExReleasePushLockExclusiveEx(v29, 0LL);
        }
        else
        {
          ExReleasePushLockSharedEx(v29, 0LL);
        }
        KeLeaveCriticalRegion();
        if ( v30 )
          CTokenManager::SignalAnalogTokenEvent(this);
      }
      else
      {
        CPushLock::ReleaseLock((CPushLock *)(v24 + 40));
      }
    }
  }
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v36 = WdLogNewEntry5_WdAssertion(v23);
    *(_QWORD *)(v36 + 24) = 1970LL;
    WdLogEvent5_WdAssertion(v36);
  }
  (*(void (__fastcall **)(__int64 *, __int64))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 219) + 32LL))(v21, 1LL);
  return (unsigned int)v11;
}
