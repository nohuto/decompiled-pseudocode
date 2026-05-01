/*
 * XREFs of ?v_PrepareAppRects@CAppArrangementSingleTransitionTarget@@EEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1802B02D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?MatchRectPillarBoxState@@YAXPEBUtagRECT@@00PEAU1@1@Z @ 0x1802AEF4C (-MatchRectPillarBoxState@@YAXPEBUtagRECT@@00PEAU1@1@Z.c)
 *     ?v_PrepareAppRects@CAppTransitionTargetBase@@MEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1802B0410 (-v_PrepareAppRects@CAppTransitionTargetBase@@MEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryApp.c)
 */

void __fastcall CAppArrangementSingleTransitionTarget::v_PrepareAppRects(
        CAppArrangementSingleTransitionTarget *this,
        struct IAppLayoutOperationItem *a2,
        struct ITemporaryAppVisual *a3,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a4)
{
  __int64 v7; // rax
  struct tagRECT *v8; // rdi
  unsigned __int8 (__fastcall *v9)(CAppArrangementSingleTransitionTarget *); // rax
  _DWORD v10[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+38h] [rbp-18h]
  struct tagRECT v12; // [rsp+40h] [rbp-10h] BYREF
  CWinRTApplicationView *v13; // [rsp+78h] [rbp+28h] BYREF

  CAppTransitionTargetBase::v_PrepareAppRects(this, a2, a3, a4);
  v7 = *(_QWORD *)a2;
  v13 = 0LL;
  if ( !(*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(v7 + 80))(a2) )
  {
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v13);
    if ( (*(int (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, CWinRTApplicationView **))(*(_QWORD *)a2 + 32LL))(
           a2,
           &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
           &v13) >= 0 )
    {
      if ( IsIconic(*((HWND *)this + 7))
        && (int)DwmpQueryWindowThumbnailSourceSize(*((_QWORD *)this + 7), 0LL, v10) >= 0 )
      {
        v8 = (struct tagRECT *)((char *)this + 204);
        v12.left = 0;
        v11 = 0LL;
        v12.top = 0;
        v12.right = v10[0];
        v12.bottom = v10[1];
        *(struct tagRECT *)((char *)this + 204) = v12;
      }
      else
      {
        v8 = (struct tagRECT *)((char *)this + 204);
        GetWindowRect(*((HWND *)this + 7), (LPRECT)((char *)this + 204));
      }
      v9 = *(unsigned __int8 (__fastcall **)(CAppArrangementSingleTransitionTarget *))(*(_QWORD *)this + 72LL);
      *(struct tagRECT *)((char *)this + 172) = *v8;
      if ( v9(this) && a3 )
      {
        v12 = *v8;
        MatchRectPillarBoxState(
          &v12,
          (const struct tagRECT *)((char *)this + 236),
          (const struct tagRECT *)((char *)this + 252),
          (struct tagRECT *)((char *)this + 172),
          v8);
      }
    }
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v13);
}
