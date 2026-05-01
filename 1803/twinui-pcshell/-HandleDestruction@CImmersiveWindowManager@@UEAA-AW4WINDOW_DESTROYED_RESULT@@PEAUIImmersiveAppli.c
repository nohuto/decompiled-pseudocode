/*
 * XREFs of ?HandleDestruction@CImmersiveWindowManager@@UEAA?AW4WINDOW_DESTROYED_RESULT@@PEAUIImmersiveApplicationInternal@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x180115EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800F79F0 (--0CImmersiveAppFinderByApplication@@QEAA@PEAUIImmersiveApplicationInternal@@@Z.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x1800F8404 (--$GetAppPosition@VCImmersiveAppFinderByApplication@@@-$CActivationBasedCollection@V-$ComPtr@UII.c)
 *     ?PositionAppAtEnd@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x180109788 (-PositionAppAtEnd@-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Mi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveWindowManager::HandleDestruction(
        __int64 a1,
        struct IImmersiveApplicationInternal *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v8; // rbp
  unsigned int v9; // edi
  struct IImmersiveApplication **v10; // rax
  __int64 v11; // r8
  struct IImmersiveApplicationInternal *v13; // [rsp+20h] [rbp-A8h] BYREF
  IMalloc *v14[3]; // [rsp+28h] [rbp-A0h] BYREF
  _BYTE v15[80]; // [rsp+40h] [rbp-88h] BYREF

  v14[1] = (IMalloc *)-2LL;
  *a4 = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 280LL))(a2) & 2;
  (*(void (__fastcall **)(struct IImmersiveApplicationInternal *, _BYTE *))(*(_QWORD *)a2 + 344LL))(a2, v15);
  v9 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, __int64, _QWORD *))(*(_QWORD *)a2 + 80LL))(
         a2,
         a3,
         a4);
  if ( v9 == 2 || v9 == 4 )
  {
    *(_BYTE *)(a1 + 88) = 0;
  }
  else if ( v9 == 5 )
  {
    v14[0] = 0LL;
    v10 = (struct IImmersiveApplication **)CImmersiveAppFinderByApplication::CImmersiveAppFinderByApplication(
                                             (CImmersiveAppFinderByApplication *)&v13,
                                             a2);
    CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
      a1 + 48,
      v10,
      v11,
      v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    v13 = a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v13);
    CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::PositionAppAtEnd(
      (_QWORD *)(a1 + 48),
      (__int64 *)&v13,
      v14[0]);
    if ( (_DWORD)v8 )
      *(_BYTE *)(a1 + 88) = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  }
  return v9;
}
