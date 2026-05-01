/*
 * XREFs of CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_5bb90e6a151c33247b74534399ffbb84___ @ 0x18005DA40
 * Callers:
 *     ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x180055D00 (-GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@P.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1800675E8 (-CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_5bb90e6a151c33247b74534399ffbb84___(
        __int64 a1,
        __int64 a2)
{
  char result; // al
  unsigned __int64 v5; // r15
  __int64 v6; // rbp
  __int64 v7; // rsi
  char v8; // r14
  _QWORD *v9; // rcx
  __int64 *v10; // rbx
  __int64 v11; // rcx
  __int64 *v12; // rbx
  HWND v13; // rax
  const struct _GUID *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  result = 1;
  v5 = *(_QWORD *)(a1 + 160);
  v6 = 0LL;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( !result )
        return result;
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 8 * v6);
      v8 = 1;
      if ( *(_DWORD *)a2 )
      {
        if ( (unsigned int)(*(_DWORD *)a2 - 1) >= 2 )
          break;
      }
      v9 = *(_QWORD **)(a2 + 24);
      if ( *v9 == *(_QWORD *)&GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data1
        && v9[1] == *(_QWORD *)GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee.Data4 )
      {
        v10 = *(__int64 **)(a2 + 32);
        if ( *v10 != v7 )
        {
          if ( v7 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*(_QWORD *)(*(_QWORD *)(a1 + 152) + 8 * v6));
          v11 = *v10;
          *v10 = v7;
          if ( v11 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        goto LABEL_24;
      }
      v19 = 0LL;
      v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v19);
      v13 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
      **(_DWORD **)(a2 + 40) = CImmersiveApplicationWindow_CreateInstance(v13, v14, (void **)v12);
      if ( **(int **)(a2 + 40) >= 0 )
      {
        v15 = **(_QWORD **)(a2 + 8);
        if ( v15 )
        {
          **(_DWORD **)(a2 + 40) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 40LL))(v15, v19);
        }
        else
        {
          v16 = v19;
          v19 = 0LL;
          v17 = *(__int64 **)(a2 + 16);
          if ( *v17 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)*v17 + 16LL))(*v17);
          *v17 = v16;
          v8 = 0;
        }
      }
      v18 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      if ( !v8 || **(int **)(a2 + 40) < 0 )
        goto LABEL_24;
      result = 1;
LABEL_25:
      if ( ++v6 >= v5 )
        return result;
    }
    **(_DWORD **)(a2 + 40) = -2147418113;
LABEL_24:
    result = 0;
    goto LABEL_25;
  }
  return result;
}
