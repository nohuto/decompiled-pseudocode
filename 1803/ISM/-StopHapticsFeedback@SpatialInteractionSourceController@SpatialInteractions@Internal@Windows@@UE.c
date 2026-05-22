/*
 * XREFs of ?StopHapticsFeedback@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800D8C50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A4BB0 (-Instance@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?StopHapticsFeedback_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXKK@Z @ 0x1800D4234 (-StopHapticsFeedback_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXKK@Z.c)
 *     ?UpdateFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAXN_J@Z @ 0x1800D568C (-UpdateFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAXN_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::StopHapticsFeedback(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // ebx
  __int64 v4; // rdx
  _DWORD *v5; // rcx
  SpatialInteractionDevices::SpatialInteractionTraceContinuous *v6; // rcx
  __int64 v7; // rdi
  int v8; // eax
  _BYTE *v9; // rcx
  __int64 v10; // rdx
  char v11; // al
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+58h] [rbp+10h]
  __int64 v17; // [rsp+60h] [rbp+18h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 944);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 944));
  v16 = v2;
  if ( !*((_BYTE *)this + 102) )
  {
    v3 = -2147020579;
    v4 = 1423LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_21;
  }
  v5 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTraceContinuous::Instance() + 1);
  if ( v5 && *v5 )
  {
    SpatialInteractionDevices::SpatialInteractionTraceContinuous::Instance();
    SpatialInteractionDevices::SpatialInteractionTraceContinuous::StopHapticsFeedback_(
      v6,
      *((_DWORD *)this + 2),
      *((_DWORD *)this + 3));
  }
  v7 = *((_QWORD *)this + 123);
  if ( v7 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 72));
    v17 = v7 + 72;
    v15 = 0LL;
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v7 + 120) + 48LL))(*(_QWORD *)(v7 + 120), &v15);
    v3 = v8;
    if ( v8 >= 0 )
    {
      if ( !*(_BYTE *)(v7 + 229) )
      {
        v9 = *(_BYTE **)(v7 + 112);
        v10 = v15;
        v11 = v9[40];
        v9[40] = 0;
        if ( v11 )
        {
          v12 = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v9 + 16LL))(v9, v10);
          if ( v12 < 0 )
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x76,
              (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\hapticsengine.h",
              (const char *)(unsigned int)v12);
        }
      }
      *(_BYTE *)(v7 + 231) = 0;
      Windows::Internal::SpatialInteractions::HapticsEngine::UpdateFeedback(
        (Windows::Internal::SpatialInteractions::HapticsEngine *)v7,
        0.0,
        v15);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 120) + 72LL))(*(_QWORD *)(v7 + 120));
      if ( v7 != -72 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(v7 + 72));
      v3 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25F,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\hapticsengine.h",
        (const char *)(unsigned int)v8);
      if ( v7 != -72 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(v7 + 72));
    }
    if ( v3 < 0 )
    {
      v4 = 1427LL;
      goto LABEL_19;
    }
  }
  v3 = 0;
LABEL_21:
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v3;
}
