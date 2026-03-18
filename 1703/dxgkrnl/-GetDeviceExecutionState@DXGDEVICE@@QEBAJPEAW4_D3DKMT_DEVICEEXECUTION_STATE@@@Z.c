/*
 * XREFs of ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1C00BF56C
 * Callers:
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00949F0 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0098158 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C00BFBD0 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C00FD820 (-DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_G.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICE::GetDeviceExecutionState(
        DXGDEVICE *this,
        enum _D3DKMT_DEVICEEXECUTION_STATE *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // edi
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rax
  unsigned int v17; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  if ( !a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v13 + 24) = 8985LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( *((_DWORD *)this + 102) != 1 )
  {
    if ( *((_DWORD *)this + 102) == 2 )
    {
      *a2 = D3DKMT_DEVICEEXECUTION_RESET;
      return v4;
    }
    if ( *((_DWORD *)this + 102) == 3 )
    {
LABEL_21:
      *a2 = D3DKMT_DEVICEEXECUTION_HUNG;
      return v4;
    }
    if ( *((_DWORD *)this + 102) != 4 )
    {
      v14 = WdLogNewEntry5_WdAssertion((unsigned int)(*((_DWORD *)this + 102) - 3), a2, a3, a4);
      *(_QWORD *)(v14 + 24) = 9082LL;
      WdLogEvent5_WdAssertion(v14);
      *a2 = D3DKMT_DEVICEEXECUTION_STOPPED;
      return (unsigned int)-1073741823;
    }
    goto LABEL_29;
  }
  if ( *((_BYTE *)this + 1821) )
  {
    *a2 = D3DKMT_DEVICEEXECUTION_ACTIVE;
    return v4;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 408LL) + 8LL)
                                                         + 192LL))(
         *((_QWORD *)this + 75),
         &v17);
  v10 = v17;
  LODWORD(v10) = v17 & 0x7FFFFFFF;
  v4 = v7;
  v11 = v17 & 0x80000000;
  v17 &= ~0x80000000;
  if ( v7 >= 0 )
  {
    if ( (int)v10 <= 10 )
    {
      if ( (int)v10 < 9 )
      {
        if ( !(_DWORD)v10 )
        {
          *a2 = ((_DWORD)v11 != 0) + 1;
          return v4;
        }
        v15 = v10 - 2;
        if ( v15 )
        {
          v10 = (unsigned int)(v15 - 4);
          if ( !(_DWORD)v10 )
          {
            *a2 = D3DKMT_DEVICEEXECUTION_ERROR_DMAFAULT;
            return v4;
          }
          if ( (_DWORD)v10 == 1 )
            goto LABEL_21;
          goto LABEL_27;
        }
LABEL_28:
        *a2 = D3DKMT_DEVICEEXECUTION_ERROR_OUTOFMEMORY;
        return v4;
      }
LABEL_11:
      *a2 = D3DKMT_DEVICEEXECUTION_ERROR_DMAPAGEFAULT;
      return v4;
    }
    if ( (int)v10 <= 13 )
      goto LABEL_28;
    if ( (_DWORD)v10 != 14 )
    {
      if ( (int)v10 <= 19 )
        goto LABEL_11;
      if ( (_DWORD)v10 != 22 )
      {
LABEL_27:
        v16 = WdLogNewEntry5_WdAssertion(v10, v11, v8, v9);
        *(_QWORD *)(v16 + 24) = 9069LL;
        WdLogEvent5_WdAssertion(v16);
        v4 = -1073741823;
        goto LABEL_28;
      }
    }
LABEL_29:
    *a2 = D3DKMT_DEVICEEXECUTION_STOPPED;
  }
  return v4;
}
