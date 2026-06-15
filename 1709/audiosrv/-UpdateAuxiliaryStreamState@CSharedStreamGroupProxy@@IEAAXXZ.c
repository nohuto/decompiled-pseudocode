/*
 * XREFs of ?UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ @ 0x180029F8C
 * Callers:
 *     ?OnProcessSubmixStopped@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x180029F50 (-OnProcessSubmixStopped@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z.c)
 *     ?OnProcessSubmixStarted@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z @ 0x180029F70 (-OnProcessSubmixStarted@CSharedStreamGroupProxy@@UEAAJPEAUIProcessSubmixProxy@@@Z.c)
 *     ?AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@PEBG@Z @ 0x180092930 (-AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@PEBG@Z.c)
 *     ?StartStream@CSharedStreamGroupProxy@@UEAAJ_K@Z @ 0x180094E80 (-StartStream@CSharedStreamGroupProxy@@UEAAJ_K@Z.c)
 *     ?StopStream@CSharedStreamGroupProxy@@UEAAJ_K@Z @ 0x180094F30 (-StopStream@CSharedStreamGroupProxy@@UEAAJ_K@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180030BA4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSharedStreamGroupProxy::UpdateAuxiliaryStreamState(CSharedStreamGroupProxy *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  struct IUnknown *v3; // rbx
  struct IUnknown *v4; // rdx
  struct IUnknown *v5; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+48h] [rbp+10h]

  if ( *((_QWORD *)this + 48) )
  {
    v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 288);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 288));
    v6 = v2;
    v3 = 0LL;
    v5 = 0LL;
    v4 = (struct IUnknown *)*((_QWORD *)this + 50);
    if ( v4 )
    {
      ATL::AtlComPtrAssign(&v5, v4);
      v3 = v5;
    }
    if ( *((_DWORD *)this + 70) )
    {
      if ( !*((_BYTE *)this + 328) )
      {
        ((void (__fastcall *)(struct IUnknown *, _QWORD))v3->lpVtbl[1].Release)(v3, *((_QWORD *)this + 48));
        *((_BYTE *)this + 328) = 1;
      }
    }
    else if ( *((_BYTE *)this + 328) )
    {
      ((void (__fastcall *)(struct IUnknown *, _QWORD))v3->lpVtbl[2].QueryInterface)(v3, *((_QWORD *)this + 48));
      *((_BYTE *)this + 328) = 0;
    }
    if ( v3 )
      ((void (__fastcall *)(struct IUnknown *))v3->lpVtbl->Release)(v3);
    if ( v2 )
      LeaveCriticalSection(v2);
  }
}
