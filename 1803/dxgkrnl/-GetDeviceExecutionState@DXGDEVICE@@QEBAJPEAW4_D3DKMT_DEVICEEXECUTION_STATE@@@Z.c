/*
 * XREFs of ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1C00E8670
 * Callers:
 *     DxgkGetDeviceStateInternal @ 0x1C0097064 (DxgkGetDeviceStateInternal.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00CB390 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C00D3910 (-DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_G.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C00F2718 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010A57C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICE::GetDeviceExecutionState(DXGDEVICE *this, enum _D3DKMT_DEVICEEXECUTION_STATE *a2)
{
  unsigned int v2; // esi
  int v5; // ecx
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  unsigned int v9; // edx
  enum _D3DKMT_DEVICEEXECUTION_STATE v10; // eax
  __int64 result; // rax
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v14 + 24) = 9493LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v5 = *((_DWORD *)this + 106);
  if ( v5 != 1 )
  {
    v15 = v5 - 2;
    if ( v15 )
    {
      v16 = (unsigned int)(v15 - 1);
      if ( (_DWORD)v16 )
      {
        if ( (_DWORD)v16 == 1 )
        {
LABEL_22:
          *a2 = D3DKMT_DEVICEEXECUTION_STOPPED;
        }
        else
        {
          v17 = WdLogNewEntry5_WdAssertion(v16);
          *(_QWORD *)(v17 + 24) = 9588LL;
          WdLogEvent5_WdAssertion(v17);
          *a2 = D3DKMT_DEVICEEXECUTION_STOPPED;
          return (unsigned int)-1073741823;
        }
      }
      else
      {
LABEL_21:
        *a2 = D3DKMT_DEVICEEXECUTION_HUNG;
      }
      return v2;
    }
    goto LABEL_24;
  }
  if ( (*((_BYTE *)this + 1709) & 1) != 0 )
  {
    v6 = *(_DWORD *)(*((_QWORD *)this + 43) + 8LL);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 520LL) + 8LL)
                                                   + 192LL))(
            *((_QWORD *)this + 77),
            &v19);
    v6 = v19;
    v2 = v12;
  }
  v7 = v6;
  v8 = v6 & 0x7FFFFFFF;
  v9 = v7 & 0x80000000;
  v19 = v8;
  if ( (v2 & 0x80000000) != 0 )
    return v2;
  if ( !v8 )
  {
    if ( !v9 )
    {
      v10 = D3DKMT_DEVICEEXECUTION_ACTIVE;
LABEL_10:
      *a2 = v10;
      return v2;
    }
LABEL_24:
    v10 = D3DKMT_DEVICEEXECUTION_RESET;
    goto LABEL_10;
  }
  v13 = (unsigned int)(v8 - 2);
  switch ( (int)v13 )
  {
    case 0:
    case 9:
    case 10:
    case 11:
      *a2 = D3DKMT_DEVICEEXECUTION_ERROR_OUTOFMEMORY;
      return v2;
    case 4:
      result = v2;
      *a2 = D3DKMT_DEVICEEXECUTION_ERROR_DMAFAULT;
      break;
    case 5:
      goto LABEL_21;
    case 7:
    case 8:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 22:
      *a2 = D3DKMT_DEVICEEXECUTION_ERROR_DMAPAGEFAULT;
      return v2;
    case 12:
    case 20:
      goto LABEL_22;
    default:
      v18 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v18 + 24) = 9575LL;
      WdLogEvent5_WdAssertion(v18);
      v2 = -1073741823;
      *a2 = D3DKMT_DEVICEEXECUTION_ERROR_OUTOFMEMORY;
      return v2;
  }
  return result;
}
