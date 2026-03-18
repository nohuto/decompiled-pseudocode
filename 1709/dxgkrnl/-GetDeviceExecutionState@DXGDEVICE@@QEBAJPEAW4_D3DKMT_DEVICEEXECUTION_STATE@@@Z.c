/*
 * XREFs of ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1C00941C8
 * Callers:
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C0092A34 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C00BAF80 (-DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_G.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00CE6D0 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E795C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICE::GetDeviceExecutionState(DXGDEVICE *this, enum _D3DKMT_DEVICEEXECUTION_STATE *a2)
{
  unsigned int v2; // edi
  unsigned int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 9029LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( *((_DWORD *)this + 102) != 1 )
  {
    if ( *((_DWORD *)this + 102) == 2 )
    {
      *a2 = D3DKMT_DEVICEEXECUTION_RESET;
      return v2;
    }
    if ( *((_DWORD *)this + 102) == 3 )
      goto LABEL_24;
    if ( *((_DWORD *)this + 102) != 4 )
    {
      v10 = WdLogNewEntry5_WdAssertion((unsigned int)(*((_DWORD *)this + 102) - 3));
      *(_QWORD *)(v10 + 24) = 9127LL;
      WdLogEvent5_WdAssertion(v10);
      v2 = -1073741823;
    }
    goto LABEL_15;
  }
  if ( *((_BYTE *)this + 1693) )
  {
    *a2 = D3DKMT_DEVICEEXECUTION_ACTIVE;
    return v2;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 504LL) + 8LL)
                                                         + 192LL))(
         *((_QWORD *)this + 75),
         &v12);
  v6 = v12;
  v2 = v5;
  LODWORD(v6) = v12 & 0x7FFFFFFF;
  v7 = v12 & 0x80000000;
  v12 &= ~0x80000000;
  if ( (v2 & 0x80000000) == 0 )
  {
    if ( (int)v6 <= 13 )
    {
      if ( (int)v6 >= 11 )
        goto LABEL_23;
      switch ( (_DWORD)v6 )
      {
        case 0:
          *a2 = (v7 != 0) + 1;
          return v2;
        case 2:
LABEL_23:
          *a2 = D3DKMT_DEVICEEXECUTION_ERROR_OUTOFMEMORY;
          return v2;
        case 6:
          *a2 = D3DKMT_DEVICEEXECUTION_ERROR_DMAFAULT;
          return v2;
      }
      if ( (_DWORD)v6 != 7 )
      {
        if ( (int)v6 <= 8 )
        {
LABEL_22:
          v11 = WdLogNewEntry5_WdAssertion(v6);
          *(_QWORD *)(v11 + 24) = 9114LL;
          WdLogEvent5_WdAssertion(v11);
          v2 = -1073741823;
          goto LABEL_23;
        }
LABEL_30:
        *a2 = D3DKMT_DEVICEEXECUTION_ERROR_DMAPAGEFAULT;
        return v2;
      }
LABEL_24:
      *a2 = D3DKMT_DEVICEEXECUTION_HUNG;
      return v2;
    }
    if ( (_DWORD)v6 != 14 )
    {
      if ( (int)v6 <= 19 )
        goto LABEL_30;
      if ( (_DWORD)v6 != 22 )
      {
        if ( (_DWORD)v6 != 24 )
          goto LABEL_22;
        goto LABEL_30;
      }
    }
LABEL_15:
    *a2 = D3DKMT_DEVICEEXECUTION_STOPPED;
  }
  return v2;
}
