/*
 * XREFs of ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C01D6024
 * Callers:
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@_KI@Z @ 0x1C016FA54 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@_KI@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0170610 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C01A75CC (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?Blt@BLTENTRY@@QEAAJXZ @ 0x1C01D4398 (-Blt@BLTENTRY@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000254C (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C0036A1C (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C010D5A4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?DdiPresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C0160620 (-DdiPresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?TdrIsDodPresentTimeoutForcedFlip@@YA_NXZ @ 0x1C019A288 (-TdrIsDodPresentTimeoutForcedFlip@@YA_NXZ.c)
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1C01D73C4 (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 */

__int64 __fastcall BLTQUEUE::PresentDisplayOnly(BLTQUEUE *this, struct _DXGKARG_PRESENT_DISPLAYONLY *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  int v7; // edi
  DXGDODPRESENT *v8; // rax
  __int64 v9; // r8
  unsigned __int8 v10; // bp
  int v11; // edx
  __int64 v12; // r14
  NTSTATUS v13; // eax
  struct DXGADAPTER *Adapter; // rsi
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbp
  _QWORD *v18; // rax
  _BYTE v20[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v21[32]; // [rsp+40h] [rbp-38h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+80h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (BLTQUEUE *)((char *)this + 632), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v21, Current);
  if ( *(_DWORD *)(*(_QWORD *)this + 132LL) )
  {
    v7 = -1073741823;
  }
  else
  {
    KeClearEvent((PRKEVENT)((char *)this + 536));
    a2->pfnPresentDisplayOnlyProgress = (DXGKCB_PRESENT_DISPLAYONLY_PROGRESS)((unsigned __int64)DxgPresentDisplayOnlyProgressCB & -(__int64)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this) + 24) + 64LL) + 40LL) + 28LL) < 0x3007u));
    v8 = *(DXGDODPRESENT **)this;
    *((_DWORD *)this + 156) = 1;
    v10 = 0;
    v7 = ADAPTER_DISPLAY::DdiPresentDisplayOnly(*((ADAPTER_DISPLAY **)v8 + 11), a2, v9);
    v11 = 259;
    if ( v7 >= 0 )
    {
      if ( g_TdrForceDodPresentTimeout && TdrIsDodPresentTimeoutForcedFlip() )
      {
        v10 = 1;
        v7 = v11;
      }
      else
      {
        v10 = 0;
      }
    }
    if ( v7 == v11 )
    {
      v7 = 258;
      v12 = 10000000LL * (unsigned int)dword_1C007BD30;
      Timeout.QuadPart = -10000000LL * (unsigned int)dword_1C007BD30;
      while ( 1 )
      {
        v13 = KeWaitForSingleObject((char *)this + 536, Executive, 0, 0, &Timeout);
        *((_DWORD *)this + 156) = 0;
        if ( !v10
          && !*(_DWORD *)(*(_QWORD *)this + 132LL)
          && (v13 != 258 || KeReadStateEvent((PRKEVENT)((char *)this + 536))) )
        {
          break;
        }
        if ( (unsigned int)DXGDODPRESENT::TriggerDisplayOnlyTdr(
                             *(_QWORD *)this,
                             (v10 ^ 1u) + 4,
                             *((unsigned int *)this + 24),
                             v12) != 1 )
          goto LABEL_15;
      }
      v7 = 0;
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
    v15 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
            *((ADAPTER_DISPLAY **)Adapter + 307),
            *((_DWORD *)this + 24),
            1u,
            0x4000u,
            0);
    v17 = v15;
    if ( v15 < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      v18[3] = *((unsigned int *)this + 24);
      v18[4] = Adapter;
      v18[5] = v17;
      WdLogEvent5_WdError(v18);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  if ( v20[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
  return (unsigned int)v7;
}
