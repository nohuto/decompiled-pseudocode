/*
 * XREFs of ?OnPositionChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18004C460
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?GetFrameByWindow@CApplicationFrameService@@UEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x18004C030 (-GetFrameByWindow@CApplicationFrameService@@UEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationFrameService::OnPositionChanged(
        CApplicationFrameService *this,
        struct IApplicationFrame *a2)
{
  int FrameByWindow; // eax
  struct IApplicationFrameProxy *v4; // rbx
  __int64 *v5; // rsi
  __int64 v6; // rdi
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  struct IApplicationFrameProxy *v11; // [rsp+70h] [rbp+18h] BYREF
  HWND v12; // [rsp+78h] [rbp+20h] BYREF

  if ( *((_DWORD *)this + 34)
    && (*(int (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)a2 + 24LL))(a2, &v12) >= 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v11 = 0LL;
    FrameByWindow = CApplicationFrameService::GetFrameByWindow(
                      (CApplicationFrameService *)((char *)this - 8),
                      v12,
                      &v11);
    v4 = v11;
    if ( FrameByWindow >= 0 )
    {
      v10 = 0LL;
      v5 = (__int64 *)*((_QWORD *)this + 14);
      v6 = *v5;
      v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v10);
      if ( (*(int (__fastcall **)(__int64 *, struct IApplicationFrameProxy *, GUID *, __int64 *))(v6 + 48))(
             v5,
             v4,
             &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
             v7) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 488LL))(v10);
      v8 = v10;
      if ( v10 )
      {
        v10 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v4 )
      (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return 0LL;
}
