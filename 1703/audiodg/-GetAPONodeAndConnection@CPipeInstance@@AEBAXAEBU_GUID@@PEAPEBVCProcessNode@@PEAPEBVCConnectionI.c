/*
 * XREFs of ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@@Z @ 0x140030948
 * Callers:
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x14000B350 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000CC90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z @ 0x140030BBC (-GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z.c)
 *     ?GetSpatialAudioStreamProcessor@CPipeInstance@@QEBAJPEAPEAUISpatialAudioStreamProcessor@@@Z @ 0x140030C50 (-GetSpatialAudioStreamProcessor@CPipeInstance@@QEBAJPEAPEAUISpatialAudioStreamProcessor@@@Z.c)
 *     ?GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ @ 0x14003F8C4 (-GetLoopbackConnection@CPipeInstance@@QEBAPEBVCConnectionInstance@@XZ.c)
 *     ?GetBridgeDestinationApo@CStreamGroup@@UEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x1400441E0 (-GetBridgeDestinationApo@CStreamGroup@@UEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?CopyTo@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x1400307A4 (-CopyTo@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPipeInstance::GetAPONodeAndConnection(
        CPipeInstance *this,
        const struct _GUID *a2,
        const struct CProcessNode **a3,
        const struct CConnectionInstance **a4,
        struct IAudioProcessingObject **a5)
{
  __int64 v8; // rsi
  __int64 v9; // r15
  __int64 v10; // rbp
  const struct CConnectionInstance *v11; // r12
  int v12; // eax
  struct IAudioProcessingObject *v13; // rbx
  struct IAudioProcessingObject *v14; // rax
  struct IAudioProcessingObject *v15; // [rsp+70h] [rbp+8h] BYREF
  __int64 v16; // [rsp+80h] [rbp+18h] BYREF

  v8 = *((_QWORD *)this + 3);
  v9 = *((_QWORD *)this + 9);
  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  while ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 16);
    v8 = *(_QWORD *)(v8 + 8);
    v11 = *(const struct CConnectionInstance **)(v9 + 16);
    v9 = *(_QWORD *)(v9 + 8);
    if ( *(_DWORD *)(v10 + 40) == 2 )
    {
      v15 = 0LL;
      v12 = ATL::CComPtrBase<IAudioProcessingObject>::CopyTo((_QWORD *)(*(_QWORD *)(v10 + 32) + 40LL), &v15);
      v13 = v15;
      if ( v12 >= 0 )
      {
        v16 = 0LL;
        if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, const struct _GUID *, __int64 *))v15->lpVtbl->QueryInterface)(
               v15,
               a2,
               &v16) >= 0 )
        {
          if ( a3 )
            *a3 = (const struct CProcessNode *)v10;
          if ( a4 )
            *a4 = v11;
          if ( a5 )
          {
            v14 = v13;
            v13 = 0LL;
            v15 = 0LL;
            *a5 = v14;
          }
          if ( v16 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          if ( v13 )
            ((void (__fastcall *)(struct IAudioProcessingObject *))v13->lpVtbl->Release)(v13);
          return;
        }
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      if ( v13 )
        ((void (__fastcall *)(struct IAudioProcessingObject *))v13->lpVtbl->Release)(v13);
    }
  }
}
