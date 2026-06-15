/*
 * XREFs of ?UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ @ 0x18002BD7C
 * Callers:
 *     ?OnProcessSubmixStopped@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x18002BD40 (-OnProcessSubmixStopped@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z.c)
 *     ?OnProcessSubmixStarted@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x18002BD60 (-OnProcessSubmixStarted@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z.c)
 *     ?AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@PEBG@Z @ 0x1800A51E0 (-AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@PEBG@Z.c)
 *     ?StartStream@CSharedStreamGroupProxy@@UEAAJ_K@Z @ 0x1800A7210 (-StartStream@CSharedStreamGroupProxy@@UEAAJ_K@Z.c)
 *     ?StopStream@CSharedStreamGroupProxy@@UEAAJ_K@Z @ 0x1800A72C0 (-StopStream@CSharedStreamGroupProxy@@UEAAJ_K@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800029E4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSharedStreamGroupProxy::UpdateAuxiliaryStreamState(CSharedStreamGroupProxy *this)
{
  struct IUnknown *v2; // rbx
  struct IUnknown *v3; // rdx
  struct IUnknown *v4; // [rsp+40h] [rbp+8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_QWORD *)this + 44) )
  {
    Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 256, (__int64)&lpCriticalSection);
    v2 = 0LL;
    v4 = 0LL;
    v3 = (struct IUnknown *)*((_QWORD *)this + 46);
    if ( v3 )
    {
      ATL::AtlComPtrAssign(&v4, v3);
      v2 = v4;
    }
    if ( *((_DWORD *)this + 62) )
    {
      if ( !*((_BYTE *)this + 296) )
      {
        ((void (__fastcall *)(struct IUnknown *, _QWORD))v2->lpVtbl[1].Release)(v2, *((_QWORD *)this + 44));
        *((_BYTE *)this + 296) = 1;
      }
    }
    else if ( *((_BYTE *)this + 296) )
    {
      ((void (__fastcall *)(struct IUnknown *, _QWORD))v2->lpVtbl[2].QueryInterface)(v2, *((_QWORD *)this + 44));
      *((_BYTE *)this + 296) = 0;
    }
    if ( v2 )
      ((void (__fastcall *)(struct IUnknown *))v2->lpVtbl->Release)(v2);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
  }
}
