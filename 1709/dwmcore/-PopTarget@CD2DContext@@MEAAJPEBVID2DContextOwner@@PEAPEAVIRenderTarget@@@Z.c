/*
 * XREFs of ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x180045150
 * Callers:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800426F0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18001D1C0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180043FB4 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180081B24 (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x180081B90 (--_GCD2DTarget@@QEAAPEAXI@Z.c)
 *     ?Optimize@?$ShrinkableReferenceArray@PEAVCHWCallbackRenderer@@@@QEAAXI@Z @ 0x1800BEA24 (-Optimize@-$ShrinkableReferenceArray@PEAVCHWCallbackRenderer@@@@QEAAXI@Z.c)
 *     ?Optimize@?$ShrinkableReferenceArray@PEAVCDrawListEntry@@@@QEAAXI@Z @ 0x1800BF574 (-Optimize@-$ShrinkableReferenceArray@PEAVCDrawListEntry@@@@QEAAXI@Z.c)
 *     ?Optimize@?$ShrinkableReferenceArray@PEAVCWARPCallbackRenderer@@@@QEAAXI@Z @ 0x1800BFF78 (-Optimize@-$ShrinkableReferenceArray@PEAVCWARPCallbackRenderer@@@@QEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x180125258 (McTemplateU0qq.c)
 */

__int64 __fastcall CD2DContext::PopTarget(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        struct IRenderTarget **a3)
{
  unsigned int v5; // edx
  int v6; // r14d
  CD2DTarget *v7; // rsi
  int v8; // eax
  int v10; // eax
  CD2DTarget *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned int v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  CD2DContext::FlushDrawList(this);
  v5 = *((_DWORD *)this + 86);
  v6 = 0;
  v7 = 0LL;
  v15 = 0;
  if ( v5 )
    v7 = *(CD2DTarget **)(*((_QWORD *)this + 40) + 8LL * (v5 - 1));
  *((_DWORD *)this + 86) = v5 - 1;
  if ( a3 )
    *a3 = 0LL;
  if ( *((_DWORD *)this + 86) )
  {
    v10 = *((_DWORD *)this + 86);
    v11 = 0LL;
    if ( v10 )
      v11 = *(CD2DTarget **)(*((_QWORD *)this + 40) + 8LL * (unsigned int)(v10 - 1));
    if ( a3 )
    {
      (*(void (__fastcall **)(_QWORD *))(**((_QWORD **)v11 + 3) + 8LL))(*((_QWORD **)v11 + 3));
      *a3 = (struct IRenderTarget *)*((_QWORD *)v11 + 3);
    }
    if ( *((_BYTE *)this + 464) )
      CD2DTarget::ApplyState(v11, this);
  }
  else
  {
    if ( *((_BYTE *)this + 464) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Start, 17LL, 0LL);
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 22) + 392LL))(
             *((_QWORD *)this + 22),
             0LL,
             0LL);
      v15 = v8;
      v6 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x3D7u);
      *((_WORD *)this + 232) = 0;
      if ( !*((_DWORD *)this + 29) )
      {
        v12 = *((unsigned int *)this + 30);
        *((_DWORD *)this + 29) = 512;
        ShrinkableReferenceArray<CDrawListEntry *>::Optimize((char *)this + 8, v12);
        v13 = *((unsigned int *)this + 32);
        *((_DWORD *)this + 30) = 0;
        ShrinkableReferenceArray<CHWCallbackRenderer *>::Optimize((char *)this + 40, v13);
        v14 = *((unsigned int *)this + 34);
        *(_QWORD *)((char *)this + 124) = *((unsigned int *)this + 16);
        ShrinkableReferenceArray<CWARPCallbackRenderer *>::Optimize((char *)this + 72, v14);
        *(_QWORD *)((char *)this + 132) = *((unsigned int *)this + 24);
      }
      --*((_DWORD *)this + 29);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 17LL, 0LL);
    }
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))v7 + 3))(
           *((_QWORD *)v7 + 3),
           &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
           &v16) >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      *((_QWORD *)this + 52) = v7;
      goto LABEL_17;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 23) + 56LL))(*((_QWORD *)this + 23), 0LL, 0LL);
  }
  if ( v7 )
    CD2DTarget::`scalar deleting destructor'(v7, v5);
LABEL_17:
  TranslateDXGIorD3DErrorInContext(v6, 0, &v15);
  return v15;
}
