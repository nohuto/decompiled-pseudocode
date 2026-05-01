/*
 * XREFs of ?EnablePlaceModeDropFeedback@WindowArrangementView@@AEAAJW4EnablePlaceModeDropFeedbackMode@1@PEBUPlaceModeFeedbackTarget@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802DAB80
 * Callers:
 *     ?CancelPlacement@WindowArrangementView@@UEAAJXZ @ 0x1802DA8D0 (-CancelPlacement@WindowArrangementView@@UEAAJXZ.c)
 *     ?MovePlacement@WindowArrangementView@@UEAAXW4PlaceModeKey@@@Z @ 0x1802DBD40 (-MovePlacement@WindowArrangementView@@UEAAXW4PlaceModeKey@@@Z.c)
 *     ?ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z @ 0x1802DCD20 (-ShowPlaceModeFeedback@WindowArrangementView@@UEAAJW4PlaceModeFeedbackType@@PEAUtagPOINT@@_N@Z.c)
 *     ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1802DCEB0 (-ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 *     ?TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ @ 0x1802DDB40 (-TickPlaceModeIdleAnimation@WindowArrangementView@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetTargetViewFromLayout@WindowArrangementView@@AEAA?AV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@W4DropLocation@WindowArrangementViewDragData@@@Z @ 0x1802DB33C (-GetTargetViewFromLayout@WindowArrangementView@@AEAA-AV-$ComPtr@UIApplicationView@@@WRL@Microsof.c)
 *     ?CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802ED08C (-CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall WindowArrangementView::EnablePlaceModeDropFeedback(__int64 a1, int a2, _DWORD *a3, __int64 a4)
{
  const struct _GUID *v8; // rcx
  int v9; // ebx
  const struct _GUID *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // r8
  unsigned int v15; // r12d
  bool v16; // di
  __int64 v17; // r9
  void *v19; // [rsp+30h] [rbp-49h] BYREF
  void *v20; // [rsp+38h] [rbp-41h] BYREF
  __int64 v21; // [rsp+40h] [rbp-39h] BYREF
  struct IUnknown *v22; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v23[16]; // [rsp+50h] [rbp-29h] BYREF
  struct IUnknown *v24; // [rsp+60h] [rbp-19h]
  _BYTE v25[40]; // [rsp+68h] [rbp-11h] BYREF

  v20 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  v9 = CDropFeedbackList_CreateInstance(v8, &v20);
  if ( v9 >= 0 )
  {
    v19 = 0LL;
    if ( a2 == 1 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
      v9 = CDropFeedbackList_CreateInstance(v10, &v19);
    }
    if ( v9 >= 0 )
    {
      if ( a3 )
        v11 = (unsigned int)a3[1];
      else
        v11 = 0xFFFFFFFFLL;
      if ( a3 )
        LODWORD(a3) = *a3;
      v21 = 0LL;
      WindowArrangementView::GetTargetViewFromLayout(a1, &v22, v11);
      v12 = *(_QWORD *)(a1 + 120);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 128LL))(v12, &v21);
      if ( v9 >= 0 )
      {
        v13 = (int)a3;
        while ( 1 )
        {
          if ( (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v21 + 24LL))(v21, 1LL, v23) < 0 )
          {
LABEL_33:
            if ( v9 >= 0 )
            {
              (*(void (__fastcall **)(_QWORD, void *, __int64))(**(_QWORD **)(a1 + 72) + 32LL))(
                *(_QWORD *)(a1 + 72),
                v20,
                a4);
              if ( v19 )
                (*(void (__fastcall **)(_QWORD, void *, __int64))(**(_QWORD **)(a1 + 72) + 32LL))(
                  *(_QWORD *)(a1 + 72),
                  v19,
                  a4);
              (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 72) + 88LL))(*(_QWORD *)(a1 + 72), 0LL);
            }
            goto LABEL_37;
          }
          v15 = (unsigned int)v24;
          v16 = v22 && (unsigned int)SHIsSameObject(v22, v24);
          v17 = 2LL;
          if ( a2 == 1 )
          {
            v9 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64, __int64))(*(_QWORD *)v19 + 104LL))(
                   v19,
                   v15,
                   v14,
                   512LL);
            v17 = 0x800000LL;
          }
          else if ( v16 )
          {
            v17 = 1024LL;
            if ( v13 == 2 )
              v17 = 2048LL;
          }
          if ( v9 < 0 )
            goto LABEL_37;
          if ( a2 == 3 )
            break;
          LODWORD(v17) = v17 | 0x200;
          if ( a2 != 1 )
          {
            if ( a2 != 2 )
              goto LABEL_25;
            LODWORD(v17) = v17 | 0x400000;
          }
LABEL_32:
          v9 = (*(__int64 (__fastcall **)(void *, _QWORD, _BYTE *, __int64))(*(_QWORD *)v20 + 80LL))(v20, v15, v25, v17);
          if ( v9 < 0 )
            goto LABEL_33;
        }
        v17 = 1LL;
LABEL_25:
        if ( v16 && v13 == 3 )
          LODWORD(v17) = v17 | 0x200000;
        else
          v17 = (unsigned int)v17 | 0x10;
        goto LABEL_32;
      }
LABEL_37:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v22);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  return (unsigned int)v9;
}
