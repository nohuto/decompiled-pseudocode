/*
 * XREFs of ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180003228
 * Callers:
 *     ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x180004090 (-_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002B020 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x1800026B8 (-Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?SetEventCallback@CAnimationClock@@QEAAJPEAUIAnimationClockEventListener@@@Z @ 0x180002CBC (-SetEventCallback@CAnimationClock@@QEAAJPEAUIAnimationClockEventListener@@@Z.c)
 *     ?Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z @ 0x180003038 (-Initialize@CAnimationClock@@QEAAJU_GUID@@K@Z.c)
 *     ?GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x18000315C (-GetAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAVCAnimationClock@@@Z.c)
 *     ?_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ @ 0x180003548 (-_ClearExpiredAnimationClocks@CAnimationClockCoordinator@@AEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     ?Reset@CAnimationClock@@QEAAJK@Z @ 0x18009F3C4 (-Reset@CAnimationClock@@QEAAJK@Z.c)
 *     ?Remove@?$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z @ 0x18009F850 (-Remove@-$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z.c)
 *     McTemplateU0jq @ 0x18009F8A8 (McTemplateU0jq.c)
 */

__int64 __fastcall CAnimationClockCoordinator::OnCreateAnimationClock(
        CAnimationClockCoordinator *this,
        struct _GUID *a2,
        unsigned int a3)
{
  __int64 v5; // rdx
  int AnimationClock; // ebx
  struct _RTL_CRITICAL_SECTION *v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  CAnimationClock *v23; // [rsp+30h] [rbp-59h] BYREF
  char *v24; // [rsp+38h] [rbp-51h] BYREF
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+40h] [rbp-49h] BYREF
  struct _GUID v26; // [rsp+50h] [rbp-39h]
  struct _GUID v27; // [rsp+60h] [rbp-29h] BYREF
  struct _GUID v28; // [rsp+70h] [rbp-19h] BYREF
  struct _GUID v29; // [rsp+80h] [rbp-9h] BYREF
  __int128 v30; // [rsp+90h] [rbp+7h]
  __int128 v31; // [rsp+A0h] [rbp+17h]

  v23 = 0LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NULL.Data1;
  AnimationClock = -2147024809;
  if ( !v5 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( v5 )
  {
    v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
    v24 = (char *)this + 8;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
    v9 = 0LL;
    v26 = *a2;
    if ( !*((_DWORD *)this + 20) )
      goto LABEL_5;
    v18 = *((_QWORD *)this + 7);
    while ( 1 )
    {
      v19 = *(_QWORD *)(v18 + 8 * v9);
      v30 = *(_OWORD *)(v19 + 112);
      v20 = v30 - *(_QWORD *)&v26.Data1;
      if ( (_QWORD)v30 == *(_QWORD *)&v26.Data1 )
        v20 = *((_QWORD *)&v30 + 1) - *(_QWORD *)v26.Data4;
      if ( !v20 )
        break;
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= *((_DWORD *)this + 20) )
        goto LABEL_5;
    }
    if ( *(_DWORD *)(v19 + 80) == 7 )
    {
LABEL_5:
      AnimationClock = CAnimationClockCoordinator::_ClearExpiredAnimationClocks(this);
      if ( AnimationClock >= 0 )
      {
        v28 = *a2;
        AnimationClock = CAnimationClockFactory::Create(&v28, &v23);
        if ( AnimationClock >= 0 )
        {
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
            McTemplateU0jq(v11, v10, a2, a3);
          AnimationClock = CAnimationClock::SetEventCallback(v23, this);
          if ( AnimationClock >= 0 )
          {
            v12 = *((unsigned int *)this + 20);
            v13 = (unsigned int)v23;
            v14 = v12 + 1;
            if ( (int)v12 + 1 >= (unsigned int)v12 )
              v13 = v12 + 1;
            AnimationClock = v14 < (unsigned int)v12 ? 0x80070216 : 0;
            if ( v14 < (unsigned int)v12 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, AnimationClock, 0xB5u);
            }
            else if ( v13 > *((_DWORD *)this + 19) )
            {
              v17 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 56, 8LL, 1LL, &v23);
              AnimationClock = v17;
              if ( v17 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xC0u);
            }
            else
            {
              *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v12) = v23;
              *((_DWORD *)this + 20) = v13;
            }
            if ( AnimationClock >= 0 )
              _InterlockedIncrement((volatile signed __int32 *)v23 + 2);
          }
        }
      }
    }
    else
    {
      v27 = *a2;
      AnimationClock = CAnimationClockCoordinator::GetAnimationClock(this, &v27, &v23);
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v24);
    if ( AnimationClock >= 0 )
    {
      v31 = *((_OWORD *)v23 + 7);
      v15 = v31 - *(_QWORD *)&a2->Data1;
      if ( (_QWORD)v31 == *(_QWORD *)&a2->Data1 )
        v15 = *((_QWORD *)&v31 + 1) - *(_QWORD *)a2->Data4;
      if ( v15 )
      {
        v29 = *a2;
        AnimationClock = CAnimationClock::Initialize(v23, &v29, a3);
        if ( AnimationClock < 0 )
        {
          v25 = v8;
          EnterCriticalSection(v8);
          if ( (unsigned int)DynArray<CBitmapSource *,0>::Remove((char *)this + 56, &v23) )
            CBaseObject::Release(v23);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v25);
        }
      }
      else if ( (int)CAnimationClock::Reset(v23, a3) < 0 )
      {
        AnimationClock = -2147019886;
      }
      else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        McTemplateU0jq(v22, v21, a2, a3);
      }
    }
    if ( v23 )
      CBaseObject::Release(v23);
  }
  return (unsigned int)AnimationClock;
}
