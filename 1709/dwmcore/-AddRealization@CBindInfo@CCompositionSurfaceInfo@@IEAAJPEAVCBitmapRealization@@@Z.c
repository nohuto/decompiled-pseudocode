/*
 * XREFs of ?AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z @ 0x18007615C
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1800763B4 (-CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@.c)
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180076594 (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetAdapterLuid@CBitmapRealization@@QEBA?AU_LUID@@XZ @ 0x18002B46C (-GetAdapterLuid@CBitmapRealization@@QEBA-AU_LUID@@XZ.c)
 *     ?AddResourceNotifier@CBitmapRealization@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x18002B4A0 (-AddResourceNotifier@CBitmapRealization@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::CBindInfo::AddRealization(
        CCompositionSurfaceInfo::CBindInfo *this,
        struct CBitmapRealization *a2)
{
  __int64 v2; // rax
  char v3; // si
  CBitmapRealization *v5; // rcx
  struct IDeviceResourceNotify *v6; // r9
  __int64 (__fastcall *v7)(CBitmapRealization *, struct IDeviceResourceNotify *); // rax
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rcx
  unsigned int v11; // edx
  unsigned int v12; // eax
  void (*v13)(void); // rax
  int v15; // eax
  struct _LUID v16; // [rsp+40h] [rbp+8h] BYREF
  CBitmapRealization *v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = a2;
  v2 = *(_QWORD *)this;
  v3 = 0;
  v5 = (struct CBitmapRealization *)((char *)a2 + 88);
  v6 = (struct IDeviceResourceNotify *)((v2 + 16) & -(__int64)(v2 != 0));
  v7 = *(__int64 (__fastcall **)(CBitmapRealization *, struct IDeviceResourceNotify *))(*((_QWORD *)a2 + 11) + 24LL);
  if ( v7 == CBitmapRealization::AddResourceNotifier )
    v8 = CBitmapRealization::AddResourceNotifier(v5, v6);
  else
    v8 = v7(v5, v6);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x663u);
  }
  else
  {
    v10 = *((unsigned int *)this + 14);
    v3 = 1;
    v11 = (unsigned int)v17;
    v12 = v10 + 1;
    if ( (int)v10 + 1 >= (unsigned int)v10 )
      v11 = v10 + 1;
    v9 = v12 < (unsigned int)v10 ? 0x80070216 : 0;
    if ( v12 < (unsigned int)v10 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB5u);
    }
    else if ( v11 > *((_DWORD *)this + 13) )
    {
      v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 32, 8u, 1, &v17);
      v9 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v10) = v17;
      *((_DWORD *)this + 14) = v11;
    }
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x666u);
    }
    else
    {
      v13 = *(void (**)(void))(*(_QWORD *)v17 + 8LL);
      if ( (char *)v13 == (char *)CMILCOMBase::InternalAddRef )
        CMILCOMBase::InternalAddRef(v17);
      else
        v13();
      if ( *((_DWORD *)this + 14) == 1 )
        *((_QWORD *)this + 16) = **(_QWORD **)&CBitmapRealization::GetAdapterLuid(v17, &v16);
    }
  }
  if ( v9 < 0 && v3 )
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)v17 + 11) + 32LL))(
      (char *)v17 + 88,
      (*(_QWORD *)this + 16LL) & -(__int64)(*(_QWORD *)this != 0LL));
  return (unsigned int)v9;
}
