/*
 * XREFs of ?HandleDestruction@CImmersiveWindowManager@@UEAA?AW4WINDOW_DESTROYED_RESULT@@PEAUIImmersiveApplicationInternal@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x180030150
 * Callers:
 *     <none>
 * Callees:
 *     ?PositionAppAtEnd@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x1800180EC (-PositionAppAtEnd@-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Mi.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x1800197FC (--$GetAppPosition@VCImmersiveAppFinderByApplication@@@-$CActivationBasedCollection@V-$ComPtr@UII.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveWindowManager::HandleDestruction(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  bool v8; // r14
  unsigned int v9; // eax
  unsigned int v10; // edi
  void (__fastcall **v11)(__int64, GUID *, __int64 *); // rbx
  __int64 *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v17[3]; // [rsp+28h] [rbp-A0h] BYREF
  _BYTE v18[80]; // [rsp+40h] [rbp-88h] BYREF

  v17[1] = -2LL;
  *a4 = 0LL;
  v8 = ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 280LL))(a2) & 2) != 0;
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 344LL))(a2, v18);
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)a2 + 80LL))(a2, a3, a4);
  v10 = v9;
  if ( v9 == 2 || v9 == 4 )
  {
    *(_BYTE *)(a1 + 88) = 0;
  }
  else if ( v9 == 5 )
  {
    v17[0] = 0LL;
    v16 = 0LL;
    v11 = *(void (__fastcall ***)(__int64, GUID *, __int64 *))a2;
    v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v16);
    (*v11)(a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831, v12);
    CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
      a1 + 48,
      &v16,
      v13,
      v17);
    v14 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v16 = a2;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::PositionAppAtEnd(
      (__int64 *)(a1 + 48),
      &v16,
      v17[0]);
    if ( v8 )
      *(_BYTE *)(a1 + 88) = 0;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  }
  return v10;
}
