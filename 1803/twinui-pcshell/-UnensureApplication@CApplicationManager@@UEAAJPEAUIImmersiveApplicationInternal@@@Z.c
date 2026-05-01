/*
 * XREFs of ?UnensureApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18010E550
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800F79F0 (--0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x1800F8404 (--$GetAppPosition@VCImmersiveAppFinderByApplication@@@-$CActivationBasedCollection@V-$ComPtr@UII.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x18010F4CC (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::UnensureApplication(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2)
{
  unsigned int v4; // ebx
  char v5; // bp
  struct IImmersiveApplication **v6; // rax
  __int64 v7; // r8
  char v8; // si
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v5 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 192LL))(a2) )
  {
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 184LL))(a2);
    if ( (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 192LL))(a2)
      || (*(unsigned __int8 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 448LL))(a2)
      || (v6 = (struct IImmersiveApplication **)CImmersiveAppFinderByApplication::CImmersiveAppFinderByApplication(
                                                  (CImmersiveAppFinderByApplication *)&v10,
                                                  a2),
          v5 = 1,
          v8 = 1,
          (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
                 (__int64)this + 376,
                 v6,
                 v7,
                 &v11) < 0) )
    {
      v8 = 0;
    }
    if ( (v5 & 1) != 0 )
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    if ( v8 )
      CApplicationManager::_ForgetApplicationNoLock((char *)this - 240, a2, 2LL);
  }
  else
  {
    return (unsigned int)-2147019873;
  }
  return v4;
}
