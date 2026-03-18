/*
 * XREFs of ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x18009863C
 * Callers:
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x180010940 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ @ 0x180076EB8 (-IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ.c)
 *     ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x180076EE8 (-UpdateDesc@DXGIOutputInfo@@QEAAJXZ.c)
 *     ?Validate@DXGIOutputInfo@@QEBAJXZ @ 0x180076F40 (-Validate@DXGIOutputInfo@@QEBAJXZ.c)
 *     ??0CDisplay@@AEAA@IIPEAVCDXGIAdapterLimited@@AEBUDXGIOutputInfo@@W4_QAI_DRIVERVERSION@@P6AJPEBGPEAUDXGI_MODE_DESC@@@Z@Z @ 0x1800779B4 (--0CDisplay@@AEAA@IIPEAVCDXGIAdapterLimited@@AEBUDXGIOutputInfo@@W4_QAI_DRIVERVERSION@@P6AJPEBGP.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800B7818 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDisplaySet::EnumerateOutputs(CDisplaySet *this)
{
  signed int v1; // ebx
  __int64 v2; // r15
  __int64 v3; // rbp
  unsigned int v5; // r14d
  unsigned int v6; // r12d
  __int64 v7; // r13
  DXGIOutputInfo *v8; // rsi
  int updated; // eax
  void *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned int v14; // eax
  HMODULE LibraryW; // rax
  signed int v17; // eax
  DWORD v18; // r9d
  unsigned int v19; // [rsp+20h] [rbp-58h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v21; // [rsp+80h] [rbp+8h]
  int v22; // [rsp+80h] [rbp+8h]
  unsigned int v23; // [rsp+88h] [rbp+10h]
  __int64 v24; // [rsp+90h] [rbp+18h] BYREF

  v1 = 0;
  v2 = 0LL;
  v24 = 0LL;
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
LABEL_18:
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *(_DWORD *)(*((_QWORD *)this + 2) + 88LL) )
        goto LABEL_19;
    }
    while ( 1 )
    {
      v23 = v5;
      v8 = (DXGIOutputInfo *)(*(_QWORD *)(v7 + 368) + 272LL * v6);
      updated = DXGIOutputInfo::UpdateDesc(v8);
      v1 = updated;
      if ( updated < 0 )
        break;
      if ( DXGIOutputInfo::IsAttachedToDesktop(v8) )
      {
        updated = DXGIOutputInfo::Validate(v8);
        v1 = updated;
        if ( updated < 0 )
        {
          v19 = 819;
          goto LABEL_37;
        }
        if ( (*((_BYTE *)v8 + 200) & 2) != 0 )
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
            v19 = 823;
LABEL_32:
            v18 = v1;
            goto LABEL_38;
          }
        }
        v10 = WPF::ProcessHeapImpl::AllocClear(0x138uLL);
        if ( !v10 )
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        v24 = CDisplay::CDisplay((__int64)v10, v11, v12, v7, (__int64)v8, v22, v2);
        if ( !v24 )
        {
          v1 = -2147024882;
          v19 = 836;
          goto LABEL_32;
        }
        v13 = *((unsigned int *)this + 18);
        v14 = v13 + 1;
        v5 = v13 + 1;
        if ( (int)v13 + 1 < (unsigned int)v13 )
          v5 = v23;
        v1 = v14 < (unsigned int)v13 ? 0x80070216 : 0;
        if ( v14 < (unsigned int)v13 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v1, 0xB5u);
        }
        else if ( v5 > *((_DWORD *)this + 17) )
        {
          v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 48, 8u, 1, &v24);
          v1 = v17;
          if ( v17 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v13) = v24;
          *((_DWORD *)this + 18) = v5;
        }
        if ( v1 < 0 )
        {
          v19 = 838;
          goto LABEL_32;
        }
        v24 = 0LL;
      }
      if ( ++v6 >= *(_DWORD *)(v7 + 392) )
        goto LABEL_18;
    }
    v19 = 809;
LABEL_37:
    v18 = updated;
LABEL_38:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v18, v19);
  }
LABEL_19:
  ReleaseInterface<CDisplay>(&v24);
  return (unsigned int)v1;
}
