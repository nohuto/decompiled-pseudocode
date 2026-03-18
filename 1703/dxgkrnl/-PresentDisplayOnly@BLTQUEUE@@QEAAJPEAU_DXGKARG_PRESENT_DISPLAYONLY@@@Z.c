/*
 * XREFs of ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C01B5A70
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C008A630 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C011D764 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C019789C (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?Blt@BLTENTRY@@QEAAJXZ @ 0x1C01B4004 (-Blt@BLTENTRY@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001EF4 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C0002744 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00E8438 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?DdiPresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C0177398 (-DdiPresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?TdrIsDodPresentTimeoutForcedFlip@@YA_NXZ @ 0x1C0192B10 (-TdrIsDodPresentTimeoutForcedFlip@@YA_NXZ.c)
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1C01B6930 (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 */

__int64 __fastcall BLTQUEUE::PresentDisplayOnly(
        BLTQUEUE *this,
        struct _DXGKARG_PRESENT_DISPLAYONLY *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rax
  int v8; // edi
  DXGDODPRESENT *v9; // rax
  __int64 v10; // r8
  char v11; // bp
  int v12; // edx
  __int64 v13; // r14
  NTSTATUS v14; // eax
  struct DXGADAPTER *Adapter; // rax
  __int64 v16; // r8
  struct DXGADAPTER *v17; // rsi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbp
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  _BYTE v27[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v28[32]; // [rsp+40h] [rbp-38h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+80h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (BLTQUEUE *)((char *)this + 632), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
  Current = DXGPROCESS::GetCurrent(v6);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v28, Current);
  if ( *(_DWORD *)(*(_QWORD *)this + 132LL) )
  {
    v8 = -1073741823;
  }
  else
  {
    KeClearEvent((PRKEVENT)((char *)this + 536));
    a2->pfnPresentDisplayOnlyProgress = (DXGKCB_PRESENT_DISPLAYONLY_PROGRESS)((unsigned __int64)DxgPresentDisplayOnlyProgressCB & -(__int64)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this) + 24) + 64LL) + 40LL) + 28LL) < 0x3007u));
    v9 = *(DXGDODPRESENT **)this;
    *((_DWORD *)this + 156) = 1;
    v11 = 0;
    v8 = ADAPTER_DISPLAY::DdiPresentDisplayOnly(*((ADAPTER_DISPLAY **)v9 + 11), a2, v10);
    v12 = 259;
    if ( v8 >= 0 )
    {
      if ( g_TdrForceDodPresentTimeout && TdrIsDodPresentTimeoutForcedFlip() )
      {
        v11 = 1;
        v8 = v12;
      }
      else
      {
        v11 = 0;
      }
    }
    if ( v8 == v12 )
    {
      v8 = 258;
      v13 = 10000000LL * (unsigned int)dword_1C006FEE8;
      Timeout.QuadPart = -10000000LL * (unsigned int)dword_1C006FEE8;
      while ( 1 )
      {
        v14 = KeWaitForSingleObject((char *)this + 536, Executive, 0, 0, &Timeout);
        *((_DWORD *)this + 156) = 0;
        if ( !v11
          && !*(_DWORD *)(*(_QWORD *)this + 132LL)
          && (v14 != 258 || KeReadStateEvent((PRKEVENT)((char *)this + 536))) )
        {
          break;
        }
        if ( (unsigned int)DXGDODPRESENT::TriggerDisplayOnlyTdr(
                             *(_QWORD *)this,
                             5 - (unsigned int)(v11 != 0),
                             *((unsigned int *)this + 24),
                             v13) != 1 )
          goto LABEL_15;
      }
      v8 = 0;
    }
    else
    {
LABEL_15:
      KeSetEvent((PRKEVENT)((char *)this + 536), 0, 0);
    }
  }
  if ( _InterlockedExchange((volatile __int32 *)this + 214, 0) )
  {
    Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
    LOBYTE(v16) = 1;
    v17 = Adapter;
    v18 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
            *((ADAPTER_DISPLAY **)Adapter + 285),
            *((unsigned int *)this + 24),
            v16,
            0x4000LL,
            0);
    v21 = v18;
    if ( v18 < 0 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19);
      v22[3] = *((unsigned int *)this + 24);
      v22[4] = v17;
      v22[5] = v21;
      WdLogEvent5_WdError(v22);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
  if ( v27[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27, v23, v24, v25);
  return (unsigned int)v8;
}
