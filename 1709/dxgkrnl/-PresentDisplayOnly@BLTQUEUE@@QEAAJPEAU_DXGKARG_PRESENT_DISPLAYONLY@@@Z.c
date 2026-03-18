/*
 * XREFs of ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C007EA24
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C007D550 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?Blt@BLTENTRY@@QEAAJXZ @ 0x1C007E158 (-Blt@BLTENTRY@@QEAAJXZ.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C011DBF4 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C01AD6FC (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C00011F4 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001224 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiPresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C00AA18C (-DdiPresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00ADA40 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?TdrIsDodPresentTimeoutForcedFlip@@YA_NXZ @ 0x1C01A7620 (-TdrIsDodPresentTimeoutForcedFlip@@YA_NXZ.c)
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1C01CEC94 (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 */

__int64 __fastcall BLTQUEUE::PresentDisplayOnly(BLTQUEUE *this, struct _DXGKARG_PRESENT_DISPLAYONLY *a2)
{
  struct DXGPROCESS *Current; // rax
  DXGDODPRESENT *v5; // rax
  unsigned __int8 v6; // bp
  int v7; // edi
  int v8; // edx
  struct DXGADAPTER *Adapter; // rsi
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // r14
  NTSTATUS v15; // eax
  _QWORD *v16; // rax
  _BYTE v17[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v18[32]; // [rsp+40h] [rbp-38h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+80h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (BLTQUEUE *)((char *)this + 632));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  Current = DXGPROCESS::GetCurrent();
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v18, Current);
  if ( *(_DWORD *)(*(_QWORD *)this + 132LL) )
  {
    v7 = -1073741823;
  }
  else
  {
    KeClearEvent((PRKEVENT)((char *)this + 536));
    a2->pfnPresentDisplayOnlyProgress = (DXGKCB_PRESENT_DISPLAYONLY_PROGRESS)((unsigned __int64)DxgPresentDisplayOnlyProgressCB & -(__int64)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this) + 24) + 64LL) + 40LL) + 28LL) < 0x3007u));
    v5 = *(DXGDODPRESENT **)this;
    *((_DWORD *)this + 156) = 1;
    v6 = 0;
    v7 = ADAPTER_DISPLAY::DdiPresentDisplayOnly(*((ADAPTER_DISPLAY **)v5 + 11), a2);
    v8 = 259;
    if ( v7 >= 0 )
    {
      if ( g_TdrForceDodPresentTimeout && TdrIsDodPresentTimeoutForcedFlip() )
      {
        v6 = 1;
        v7 = v8;
      }
      else
      {
        v6 = 0;
      }
    }
    if ( v7 == v8 )
    {
      v7 = 258;
      v14 = 10000000LL * (unsigned int)dword_1C0060D68;
      Timeout.QuadPart = -10000000LL * (unsigned int)dword_1C0060D68;
      while ( 1 )
      {
        v15 = KeWaitForSingleObject((char *)this + 536, Executive, 0, 0, &Timeout);
        *((_DWORD *)this + 156) = 0;
        if ( !v6
          && !*(_DWORD *)(*(_QWORD *)this + 132LL)
          && (v15 != 258 || KeReadStateEvent((PRKEVENT)((char *)this + 536))) )
        {
          break;
        }
        if ( (unsigned int)DXGDODPRESENT::TriggerDisplayOnlyTdr(
                             *(_QWORD *)this,
                             (v6 ^ 1u) + 4,
                             *((unsigned int *)this + 24),
                             v14) != 1 )
          goto LABEL_6;
      }
      v7 = 0;
    }
    else
    {
LABEL_6:
      KeSetEvent((PRKEVENT)((char *)this + 536), 0, 0);
    }
  }
  if ( _InterlockedExchange((volatile __int32 *)this + 214, 0) )
  {
    Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
    v11 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
            *((ADAPTER_DISPLAY **)Adapter + 288),
            *((_DWORD *)this + 24),
            1u,
            0x4000u,
            0);
    v13 = v11;
    if ( v11 < 0 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v16[3] = *((unsigned int *)this + 24);
      v16[4] = Adapter;
      v16[5] = v13;
      WdLogEvent5_WdError(v16);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  return (unsigned int)v7;
}
