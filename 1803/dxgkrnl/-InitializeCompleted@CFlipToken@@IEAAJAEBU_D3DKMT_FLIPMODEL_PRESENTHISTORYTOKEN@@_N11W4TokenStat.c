/*
 * XREFs of ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N11W4TokenState@CTokenBase@@@Z @ 0x1C000F468
 * Callers:
 *     ?CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C000FAB0 (-CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z.c)
 *     ?CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C004B85C (-CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHIS.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z @ 0x1C00123A4 (-NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z.c)
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C0017B94 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0019EA0 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipToken::InitializeCompleted(__int64 a1, __int64 a2, char a3, char a4, char a5, unsigned int a6)
{
  unsigned __int64 v10; // rcx
  int v11; // ebp
  __int64 v12; // rdx
  unsigned int v13; // eax
  unsigned int i; // edi
  __int64 v15; // r15
  __int64 v16; // r12
  BOOL v17; // r14d
  int v18; // r13d
  int v19; // ebx
  void (__fastcall *v20)(__int64, _QWORD, _QWORD, _QWORD, int, int, BOOL, __int64, __int64); // rdi
  unsigned int v21; // eax
  _QWORD *v22; // rdi
  _QWORD *v23; // rcx
  __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // [rsp+50h] [rbp-38h]

  *(_DWORD *)(a1 + 24) = 2;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v25 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v25 + 24) = 1970LL;
    WdLogEvent5_WdAssertion(v25);
  }
  v11 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 219) + 8LL))(a1 + 80);
  v12 = 6LL;
  if ( v11 < 0 )
  {
    *(_DWORD *)(a1 + 24) = 6;
  }
  else
  {
    v11 = -1073741811;
    if ( ((*(_DWORD *)(a2 + 44) >> 7) & 3) != 2 )
      v11 = 0;
    if ( v11 >= 0 )
    {
      *(_QWORD *)(a1 + 96) = *(_QWORD *)a2;
      if ( *(_DWORD *)(a2 + 84) < *(_DWORD *)(a2 + 92) && *(_DWORD *)(a2 + 88) < *(_DWORD *)(a2 + 96) )
      {
        *(_DWORD *)(a1 + 52) = 1;
        *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 84);
        *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 100);
      }
      v10 = a1 + 188;
      *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 40);
      *(_DWORD *)(a1 + 108) = *(_DWORD *)(a2 + 108);
      *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 28);
      *(_DWORD *)(a1 + 212) = *(_DWORD *)(a2 + 788);
      *(_BYTE *)(a1 + 117) = (*(_DWORD *)(a2 + 44) & 2) != 0;
      *(_BYTE *)(a1 + 136) = (*(_DWORD *)(a2 + 44) & 8) != 0;
      *(_BYTE *)(a1 + 137) = (*(_DWORD *)(a2 + 44) & 0x10) != 0;
      *(_BYTE *)(a1 + 116) = (*(_DWORD *)(a2 + 44) & 0x20) != 0;
      *(_BYTE *)(a1 + 138) = (*(_DWORD *)(a2 + 44) & 0x40) != 0;
      *(_DWORD *)(a1 + 140) = (*(_DWORD *)(a2 + 44) >> 7) & 3;
      *(_DWORD *)(a1 + 120) = *(_DWORD *)(a2 + 112);
      *(_DWORD *)(a1 + 124) = *(_DWORD *)(a2 + 116);
      *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 120);
      *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 124);
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(a2 + 128);
      *(_OWORD *)(a1 + 148) = *(_OWORD *)(a2 + 724);
      *(_OWORD *)(a1 + 164) = *(_OWORD *)(a2 + 748);
      *(_DWORD *)(a1 + 180) = *(_DWORD *)(a2 + 740);
      *(_DWORD *)(a1 + 184) = *(_DWORD *)(a2 + 744);
      *(_BYTE *)(a1 + 556) = (*(_DWORD *)(a2 + 44) & 0x2000) != 0;
      *(_QWORD *)(a1 + 560) = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(a1 + 576) = *(_DWORD *)(a2 + 24);
      *(_DWORD *)(a1 + 216) = *(_DWORD *)(a2 + 800);
      *(_DWORD *)(a1 + 580) = *(_DWORD *)(a2 + 796);
      do
      {
        *(_DWORD *)v10 = *(_DWORD *)(a2 - a1 + v10 + 576);
        v10 += 4LL;
        --v12;
      }
      while ( v12 );
      if ( !*(_QWORD *)(a2 + 32) )
        *(_BYTE *)(a1 + 89) = 1;
      *(_BYTE *)(a1 + 559) = a3;
      if ( a4 )
      {
        *(_BYTE *)(a1 + 557) = 1;
        *(_QWORD *)(a1 + 568) = *(_QWORD *)(a2 + 64);
      }
      if ( a5 )
        *(_BYTE *)(a1 + 558) = 1;
      v13 = *(_DWORD *)(a2 + 804);
      if ( v13 )
      {
        if ( v13 > 0x10 )
        {
          v11 = -1073741811;
        }
        else
        {
          *(_DWORD *)(a1 + 296) = v13;
          for ( i = 0; i < *(_DWORD *)(a2 + 804); ++i )
          {
            *(_OWORD *)(16LL * i + a1 + 300) = *(_OWORD *)(16LL * i + a2 + 808);
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 40LL))(*(_QWORD *)(a1 + 80));
          }
        }
      }
      if ( *(_BYTE *)(a1 + 138) )
      {
        v26 = *(_DWORD *)(a2 + 144);
        *(_DWORD *)(a1 + 220) = v26;
        v10 = (unsigned int)(v26 - 1);
        if ( (_DWORD)v10 )
        {
          if ( (_DWORD)v10 == 1 )
          {
            *(_OWORD *)(a1 + 224) = *(_OWORD *)(a2 + 148);
            *(_OWORD *)(a1 + 240) = *(_OWORD *)(a2 + 164);
            *(_OWORD *)(a1 + 256) = *(_OWORD *)(a2 + 180);
            *(_OWORD *)(a1 + 272) = *(_OWORD *)(a2 + 196);
            *(_QWORD *)(a1 + 288) = *(_QWORD *)(a2 + 212);
          }
        }
        else
        {
          *(_OWORD *)(a1 + 224) = *(_OWORD *)(a2 + 148);
          *(_QWORD *)(a1 + 240) = *(_QWORD *)(a2 + 164);
          *(_DWORD *)(a1 + 248) = *(_DWORD *)(a2 + 172);
        }
      }
    }
  }
  v15 = *(_QWORD *)(a1 + 32);
  v16 = *(_QWORD *)(a1 + 40);
  v17 = *(_BYTE *)(a1 + 559) == 0;
  v18 = *(_DWORD *)(a1 + 24);
  v28 = *(_QWORD *)(v15 + 16);
  a6 = *(_DWORD *)(a1 + 104);
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v27 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v27 + 24) = 1970LL;
    WdLogEvent5_WdAssertion(v27);
  }
  v19 = *(unsigned __int8 *)(a1 + 556);
  v20 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, int, BOOL, __int64, __int64))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 219)
                                                                                                 + 80LL);
  v21 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 112LL))(a1, v12);
  v20(v15, a6, v21, *(_QWORD *)(a1 + 96), v18, v19, v17, v28, v16);
  if ( v11 >= 0 )
  {
    v22 = *(_QWORD **)(a1 + 32);
    v11 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v22[5])(v22 + 5) )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v22 + 6, 0LL);
      v22[7] = KeGetCurrentThread();
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v22[5])(v22 + 5) )
        goto LABEL_26;
      CPushLock::ReleaseLock((CPushLock *)(v22 + 5));
    }
    v11 = -1073741816;
LABEL_26:
    if ( v11 >= 0 )
    {
      v11 = CCompositionSurface::NotifyTokenCompleted((CCompositionSurface *)(v22 + 3), (const struct CFlipToken *)a1);
      v23 = v22 + 6;
      if ( KeGetCurrentThread() == (struct _KTHREAD *)v22[7] )
      {
        v22[7] = 0LL;
        ExReleasePushLockExclusiveEx(v23, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v23, 0LL);
      }
      KeLeaveCriticalRegion();
      if ( v11 >= 0 && !*(_BYTE *)(a1 + 559) )
      {
        *(_DWORD *)(a1 + 24) = 3;
        CFlipToken::TraceStateChanged((CFlipToken *)a1);
        return (unsigned int)CompositionSurfaceObject::NotifyTokenInFrame(
                               *(CompositionSurfaceObject **)(a1 + 32),
                               (const struct CToken *)a1,
                               (bool *)&a6);
      }
    }
  }
  return (unsigned int)v11;
}
