/*
 * XREFs of ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x1800B72E4
 * Callers:
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x18007EBF0 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ @ 0x1800B6974 (-IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ.c)
 *     ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x1800B69A4 (-UpdateDesc@DXGIOutputInfo@@QEAAJXZ.c)
 *     ?Validate@DXGIOutputInfo@@QEBAJXZ @ 0x1800B69FC (-Validate@DXGIOutputInfo@@QEBAJXZ.c)
 *     ??0CDisplay@@AEAA@IIPEAVCDXGIAdapterLimited@@AEBUDXGIOutputInfo@@W4_QAI_DRIVERVERSION@@P6AJPEBGPEAUDXGI_MODE_DESC@@@Z@Z @ 0x1800B7C10 (--0CDisplay@@AEAA@IIPEAVCDXGIAdapterLimited@@AEBUDXGIOutputInfo@@W4_QAI_DRIVERVERSION@@P6AJPEBGP.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800C75BC (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDisplaySet::EnumerateOutputs(CDisplaySet *this)
{
  int v1; // ebx
  __int64 v2; // r14
  __int64 v3; // rbp
  unsigned int v5; // r13d
  unsigned int v6; // r12d
  __int64 v7; // r15
  DXGIOutputInfo *v9; // rsi
  int updated; // eax
  void *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // eax
  HMODULE LibraryW; // rax
  int v17; // eax
  int v18; // r9d
  unsigned int v19; // [rsp+20h] [rbp-58h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v21; // [rsp+80h] [rbp+8h]
  int v22; // [rsp+80h] [rbp+8h]
  __int64 v23; // [rsp+88h] [rbp+10h] BYREF

  v1 = 0;
  v2 = 0LL;
  v23 = 0LL;
  v3 = 0LL;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 88LL) )
  {
    v5 = v21;
    while ( 1 )
    {
      v6 = 0;
      v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 64LL) + 8 * v3);
      v22 = *(_DWORD *)(v7 + 344);
      if ( *(_DWORD *)(v7 + 392) )
        break;
LABEL_4:
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *(_DWORD *)(*((_QWORD *)this + 2) + 88LL) )
        goto LABEL_5;
    }
    while ( 1 )
    {
      v9 = (DXGIOutputInfo *)(*(_QWORD *)(v7 + 368) + 272LL * v6);
      updated = DXGIOutputInfo::UpdateDesc(v9);
      v1 = updated;
      if ( updated < 0 )
        break;
      if ( DXGIOutputInfo::IsAttachedToDesktop(v9) )
      {
        updated = DXGIOutputInfo::Validate(v9);
        v1 = updated;
        if ( updated < 0 )
        {
          v19 = 817;
          goto LABEL_38;
        }
        if ( (*((_BYTE *)v9 + 200) & 2) != 0 )
        {
          v2 = *((_QWORD *)this + 67);
          v1 = 0;
          if ( !v2 )
          {
            LibraryW = LoadLibraryW(L"rdsdwmdr.dll");
            *((_QWORD *)this + 66) = LibraryW;
            if ( LibraryW )
              *((_QWORD *)this + 67) = GetProcAddress(LibraryW, "DwmIndirectOutput");
            v2 = *((_QWORD *)this + 67);
            if ( !v2 )
              v1 = -2147467259;
          }
          if ( v1 < 0 )
          {
            v19 = 821;
LABEL_33:
            v18 = v1;
            goto LABEL_39;
          }
        }
        v11 = WPF::ProcessHeapImpl::AllocClear(0x130uLL);
        if ( !v11 )
        {
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
          __debugbreak();
        }
        v23 = CDisplay::CDisplay(v11, v12, v13, v7, v9, v22, v2);
        if ( !v23 )
        {
          v1 = -2147024882;
          v19 = 834;
          goto LABEL_33;
        }
        v14 = *((unsigned int *)this + 18);
        v15 = v14 + 1;
        if ( (int)v14 + 1 >= (unsigned int)v14 )
          v5 = v14 + 1;
        v1 = v15 < (unsigned int)v14 ? 0x80070216 : 0;
        if ( v15 < (unsigned int)v14 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0xB5u);
        }
        else if ( v5 > *((_DWORD *)this + 17) )
        {
          v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 48, 8u, 1, &v23);
          v1 = v17;
          if ( v17 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v14) = v23;
          *((_DWORD *)this + 18) = v5;
        }
        if ( v1 < 0 )
        {
          v19 = 836;
          goto LABEL_33;
        }
        v23 = 0LL;
      }
      if ( ++v6 >= *(_DWORD *)(v7 + 392) )
        goto LABEL_4;
    }
    v19 = 807;
LABEL_38:
    v18 = updated;
LABEL_39:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, v19);
  }
LABEL_5:
  ReleaseInterface<CDisplay>(&v23);
  return (unsigned int)v1;
}
