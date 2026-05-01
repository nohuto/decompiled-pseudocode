/*
 * XREFs of ?HandleDeactivation@CCharmsWindowManager@@UEAAXXZ @ 0x18003B7B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CCharmsWindowManager::HandleDeactivation(CCharmsWindowManager *this)
{
  HWND v2; // rax
  HWND v3; // rbp
  unsigned int PropW; // esi
  DWORD WindowThreadProcessId; // ebx
  unsigned int v6; // esi
  IUnknown *v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // rcx
  void (*v10)(void); // rax
  bool v11; // bl
  _QWORD v12[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = (HWND)(*(__int64 (__fastcall **)(CCharmsWindowManager *))(*(_QWORD *)this + 56LL))(this);
  v3 = v2;
  if ( v2 )
  {
    PropW = 0;
    WindowThreadProcessId = GetWindowThreadProcessId(v2, 0LL);
    if ( WindowThreadProcessId == GetCurrentThreadId() )
      PropW = (unsigned int)GetPropW(v3, L"CharmWindowVisibilityBehavior");
    RemovePropW(v3, L"CharmWindowVisibilityBehavior");
    if ( PropW )
    {
      v6 = PropW - 1;
      if ( v6 )
      {
        if ( v6 == 2 )
        {
          v13 = 0LL;
          v7 = (IUnknown *)*((_QWORD *)this - 2);
          v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v13);
          if ( IUnknown_QueryService(
                 v7,
                 &IID_IImmersiveApplicationManager,
                 &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
                 (void **)v8) >= 0
            && (*(int (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[19].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[19].Ptr) >= 0 )
          {
            (*(void (__fastcall **)(__int64, HWND))(*(_QWORD *)v13 + 32LL))(v13, v3);
            *((_DWORD *)this + 14) |= 8u;
          }
          v9 = v13;
          if ( v13 )
          {
            v13 = 0LL;
            v10 = *(void (**)(void))(*(_QWORD *)v9 + 16LL);
LABEL_18:
            v10();
          }
        }
      }
      else
      {
        *((_DWORD *)this + 14) |= 4u;
      }
    }
    else if ( (*((_BYTE *)this + 56) & 0xC) == 0 )
    {
      v12[0] = v3;
      v12[1] = 0LL;
      v11 = (*(int (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 8) + 56LL))(*((_QWORD *)this + 8), v12) >= 0;
      if ( (*(int (__fastcall **)(_QWORD))(***((_QWORD ***)this + 3) + 112LL))(**((_QWORD **)this + 3)) >= 0 )
        *((_DWORD *)this + 14) &= ~1u;
      if ( v11 )
      {
        v10 = *(void (**)(void))(**((_QWORD **)this + 8) + 64LL);
        goto LABEL_18;
      }
    }
  }
  *((_DWORD *)this + 14) &= ~2u;
}
