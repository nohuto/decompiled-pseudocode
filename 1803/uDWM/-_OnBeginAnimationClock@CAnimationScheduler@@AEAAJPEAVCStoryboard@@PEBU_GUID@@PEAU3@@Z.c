/*
 * XREFs of ?_OnBeginAnimationClock@CAnimationScheduler@@AEAAJPEAVCStoryboard@@PEBU_GUID@@PEAU3@@Z @ 0x18000BECC
 * Callers:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x18000BCDC (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 * Callees:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18000D1F8 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18000D404 (-OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?GetAnimationDuration@@YAJHHPEAK@Z @ 0x180038CCC (-GetAnimationDuration@@YAJHHPEAK@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationScheduler::_OnBeginAnimationClock(
        CAnimationScheduler *this,
        struct CStoryboard *a2,
        const struct _GUID *a3,
        struct _GUID *a4)
{
  int v4; // r15d
  int v8; // edi
  unsigned int v9; // ecx
  _DWORD *v10; // r8
  HRESULT v11; // eax
  __int64 v12; // rdx
  GUID v13; // xmm0
  CDesktopManager *v14; // rax
  CAnimationClockCoordinator *v15; // rsi
  unsigned int v16; // eax
  int AnimationDuration; // eax
  unsigned int v18; // r8d
  GUID *p_pguid; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23[4]; // [rsp+20h] [rbp-50h] BYREF
  struct _GUID v24; // [rsp+30h] [rbp-40h] BYREF
  struct _GUID v25; // [rsp+40h] [rbp-30h] BYREF
  GUID pguid; // [rsp+50h] [rbp-20h] BYREF

  v4 = *((_DWORD *)a2 + 18);
  pguid = GUID_NULL;
  v8 = 1;
  v9 = 0;
  v10 = dword_1800C9320;
  do
  {
    if ( *v10 == v4 )
    {
      v12 = 5LL * v9;
      v21 = *(_QWORD *)&dword_1800C9320[10 * v9 + 1] - *(_QWORD *)&GUID_NULL.Data1;
      if ( !v21 )
        v21 = *(_QWORD *)&dword_1800C9320[10 * v9 + 3] - *(_QWORD *)GUID_NULL.Data4;
      if ( !v21 )
        goto LABEL_25;
      if ( a3 )
      {
        v22 = *(_QWORD *)&dword_1800C9320[10 * v9 + 1] - *(_QWORD *)&a3->Data1;
        if ( !v22 )
          v22 = *(_QWORD *)&dword_1800C9320[10 * v9 + 3] - *(_QWORD *)a3->Data4;
        if ( !v22 )
        {
LABEL_25:
          v13 = *(GUID *)&dword_1800C9320[10 * v9 + 5];
          v8 = dword_1800C9320[10 * v9 + 9];
          pguid = v13;
          goto LABEL_6;
        }
      }
    }
    ++v9;
    v10 += 10;
  }
  while ( v9 < 0xA );
  v11 = CoCreateGuid(&pguid);
  v12 = (unsigned int)v11;
  if ( v11 < 0 )
    goto LABEL_11;
  v13 = pguid;
LABEL_6:
  v14 = CDesktopManager::s_pDesktopManagerInstance;
  *((GUID *)a2 + 3) = v13;
  v24 = v13;
  v15 = (CAnimationClockCoordinator *)*((_QWORD *)v14 + 23);
  v16 = (*(__int64 (__fastcall **)(struct CStoryboard *, __int64))(*(_QWORD *)a2 + 24LL))(a2, v12);
  LODWORD(v12) = CAnimationClockCoordinator::OnCreateAnimationClock(v15, &v24, v16);
  if ( (int)(v12 + 0x80000000) < 0 || (_DWORD)v12 == -2147019886 )
  {
    v23[0] = 0;
    AnimationDuration = GetAnimationDuration(v4, v8, v23);
    v18 = v23[0];
    v25 = pguid;
    if ( AnimationDuration < 0 )
      v18 = 0;
    LODWORD(v12) = CAnimationClockCoordinator::OnBeginAnimationClock(v15, &v25, v18);
    if ( (_DWORD)v12 == -2147019873 )
      LODWORD(v12) = 0;
  }
LABEL_11:
  if ( a4 )
  {
    p_pguid = &pguid;
    if ( (int)v12 < 0 )
      p_pguid = &GUID_NULL;
    *a4 = *p_pguid;
  }
  return (unsigned int)v12;
}
