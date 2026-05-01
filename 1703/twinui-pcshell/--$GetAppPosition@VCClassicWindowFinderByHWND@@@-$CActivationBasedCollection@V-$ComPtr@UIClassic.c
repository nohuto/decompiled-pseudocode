/*
 * XREFs of ??$GetAppPosition@VCClassicWindowFinderByHWND@@@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEBAJAEBVCClassicWindowFinderByHWND@@_KPEA_K@Z @ 0x180038420
 * Callers:
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x180034A10 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOptions@1@@Z @ 0x1800354E8 (-_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOpti.c)
 *     ?AttachApplicationId@CClassicWindowManager@@UEAAXPEAUHWND__@@PEAG@Z @ 0x180036200 (-AttachApplicationId@CClassicWindowManager@@UEAAXPEAUHWND__@@PEAG@Z.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x1800371F8 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::GetAppPosition<CClassicWindowFinderByHWND>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  unsigned int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // rbx
  int v10; // r14d
  __int64 v11; // rcx
  __int64 v13; // [rsp+80h] [rbp+18h] BYREF
  __int64 v14; // [rsp+88h] [rbp+20h]

  v13 = a3;
  v7 = 0;
  *a4 = 0LL;
  v8 = 0LL;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v14 = 0LL;
    while ( 1 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v8);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v13 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v9)(
             v9,
             &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
             &v13) >= 0
        && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 192LL))(v13, *a2) )
      {
        v10 = 0;
      }
      else
      {
        v10 = -1;
      }
      v11 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      if ( !v10 )
        break;
      if ( (unsigned __int64)++v8 >= *(_QWORD *)(a1 + 16) )
        return (unsigned int)-2147319765;
    }
    *a4 = v8;
  }
  else
  {
    return (unsigned int)-2147319765;
  }
  return v7;
}
