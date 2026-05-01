/*
 * XREFs of ?v_OnAfterSetAppWindow@CImmersiveWindowFactory@@EEAAXXZ @ 0x1801E01E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?GetCallingProcessId@CallerIdentity@@YAJPEAK@Z @ 0x1801C19C4 (-GetCallingProcessId@CallerIdentity@@YAJPEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveWindowFactory::v_OnAfterSetAppWindow(CImmersiveWindowFactory *this, unsigned int *a2)
{
  __int64 *ppv; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  DWORD dwProcessId; // [rsp+40h] [rbp+10h] BYREF
  __int64 v7; // [rsp+48h] [rbp+18h] BYREF
  __int64 v8; // [rsp+50h] [rbp+20h] BYREF

  if ( !*((_DWORD *)this + 39)
    && (int)CallerIdentity::GetCallingProcessId((CallerIdentity *)&v7, a2) >= 0
    && GetWindowThreadProcessId(*((HWND *)this + 15), &dwProcessId)
    && (_DWORD)v7 == dwProcessId )
  {
    v8 = 0LL;
    ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v8);
    if ( CoCreateInstance(
           &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
           0LL,
           0x404u,
           &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
           (LPVOID *)ppv) >= 0 )
    {
      v7 = 0LL;
      if ( (*(int (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v8 + 24LL))(
             v8,
             &GUID_203e0af6_3e82_4224_9e81_1cd9a6fe638b,
             &GUID_203e0af6_3e82_4224_9e81_1cd9a6fe638b,
             &v7) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 40LL))(v7, *((_QWORD *)this + 15));
      v4 = v7;
      if ( v7 )
      {
        v7 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
    }
    v5 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
}
