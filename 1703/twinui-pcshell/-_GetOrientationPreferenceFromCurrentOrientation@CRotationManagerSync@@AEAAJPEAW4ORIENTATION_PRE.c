/*
 * XREFs of ?_GetOrientationPreferenceFromCurrentOrientation@CRotationManagerSync@@AEAAJPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x180039E30
 * Callers:
 *     ?LockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x1800399C0 (-LockAutoRotation@CRotationManagerSync@@UEAAJXZ.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CRotationManagerSync::_GetOrientationPreferenceFromCurrentOrientation(
        CRotationManagerSync *this,
        enum ORIENTATION_PREFERENCE *a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rbx
  __int64 *v5; // rax
  int v6; // ebx
  __int64 v7; // rcx
  enum ORIENTATION_PREFERENCE v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  *a2 = ORIENTATION_PREFERENCE_NONE;
  v10 = 0LL;
  v3 = (__int64 *)*((_QWORD *)this + 15);
  v4 = *v3;
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v10);
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, GUID *, __int64 *))(v4 + 72))(
         v3,
         0LL,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         v5);
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, enum ORIENTATION_PREFERENCE *))(*(_QWORD *)v10 + 80LL))(v10, &v9);
    if ( v6 >= 0 )
      *a2 = v9;
  }
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)v6;
}
