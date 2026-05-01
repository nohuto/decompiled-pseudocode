/*
 * XREFs of ??$GetAppPosition@VCImmersiveAppFinderByAppId@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByAppId@@_KPEA_K@Z @ 0x1800193C4
 * Callers:
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x180015400 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByAppId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByAppId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180018094 (--$_FindFirstApplication@VCImmersiveAppFinderByAppId@@@CApplicationManager@@AEAAJAEBVCImmersiveA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByAppId>(
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
  __int64 v13; // [rsp+80h] [rbp+8h] BYREF
  __int64 v14; // [rsp+90h] [rbp+18h] BYREF
  __int64 v15; // [rsp+98h] [rbp+20h]

  v14 = a3;
  v7 = 0;
  v15 = 0LL;
  *a4 = 0LL;
  v8 = 0LL;
  if ( *(_QWORD *)(a1 + 16) )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v8);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v10 = -1;
      v13 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v9)(
             v9,
             &GUID_8b14e88b_5663_4caf_b196_c31479262831,
             &v13) >= 0 )
      {
        (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 88LL))(v13, *a2, &v14);
        v10 = ((_DWORD)v14 != 0) - 1;
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
