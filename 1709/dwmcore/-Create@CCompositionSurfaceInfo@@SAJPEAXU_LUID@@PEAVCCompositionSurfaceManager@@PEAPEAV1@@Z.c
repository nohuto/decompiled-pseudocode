/*
 * XREFs of ?Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z @ 0x1800BA0CC
 * Callers:
 *     ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800B9F78 (-GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfa.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::Create(
        void *a1,
        struct _LUID a2,
        struct CCompositionSurfaceManager *a3,
        struct CCompositionSurfaceInfo **a4)
{
  unsigned int v4; // esi
  _QWORD *v9; // rax
  struct CCompositionSurfaceInfo *v10; // rdi
  struct _RTL_GENERIC_TABLE *v11; // rcx
  _QWORD Buffer[5]; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int8 NewElement; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  *a4 = 0LL;
  v9 = WPF::ProcessHeapImpl::AllocClear(0x188uLL);
  v10 = (struct CCompositionSurfaceInfo *)v9;
  if ( !v9 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *((_DWORD *)v9 + 2) = 0;
  v9[3] = a3;
  *v9 = &CCompositionSurfaceInfo::`vftable'{for `CMILCOMBase'};
  v9[2] = &CCompositionSurfaceInfo::`vftable'{for `IDeviceResourceNotify'};
  v9[5] = a2;
  v9[6] = v9;
  v9[10] = v9 + 14;
  v9[11] = v9 + 14;
  *((_DWORD *)v9 + 24) = 1;
  *(_QWORD *)((char *)v9 + 100) = 1LL;
  *((_DWORD *)v9 + 34) = 2;
  *((_DWORD *)v9 + 90) = 1;
  *(_QWORD *)((char *)v9 + 364) = 1LL;
  v9[43] = v9 + 47;
  v9[44] = v9 + 47;
  *((_BYTE *)v9 + 384) = 0;
  CMILCOMBase::InternalAddRef((CMILCOMBase *)v9);
  v11 = (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)v10 + 3) + 8LL);
  Buffer[0] = *((_QWORD *)v10 + 5);
  Buffer[1] = v10;
  if ( RtlInsertElementGenericTable(v11, Buffer, 0x10u, &NewElement) )
  {
    *((_QWORD *)v10 + 4) = a1;
    *a4 = v10;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x8Cu);
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x3Au);
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x1Du);
    CMILCOMBase::InternalRelease(v10);
  }
  return v4;
}
