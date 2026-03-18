/*
 * XREFs of ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x1800B6D9C
 * Callers:
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x18001EB98 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??0CDisplay@@AEAA@IIPEAVCDXGIAdapterLimited@@AEBUDXGIOutputInfo@@W4_QAI_DRIVERVERSION@@P6AJPEBGPEAUDXGI_MODE_DESC@@@Z@Z @ 0x1800B78AC (--0CDisplay@@AEAA@IIPEAVCDXGIAdapterLimited@@AEBUDXGIOutputInfo@@W4_QAI_DRIVERVERSION@@P6AJPEBGP.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800C2374 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ?IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ @ 0x1800CB660 (-IsAttachedToDesktop@DXGIOutputInfo@@QEBA_NXZ.c)
 *     ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x1800CB68C (-UpdateDesc@DXGIOutputInfo@@QEAAJXZ.c)
 *     ?Validate@DXGIOutputInfo@@QEBAJXZ @ 0x1800CB6E4 (-Validate@DXGIOutputInfo@@QEBAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDisplaySet::EnumerateOutputs(CDisplaySet *this)
{
  int v1; // ebx
  __int64 v2; // rbp
  __int64 v3; // r14
  __int64 v4; // rax
  unsigned int v6; // r13d
  unsigned int v7; // r12d
  __int64 v8; // r15
  DXGIOutputInfo *v10; // rdi
  int updated; // eax
  void *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned int v16; // eax
  HMODULE LibraryW; // rax
  int v18; // eax
  int v19; // r9d
  unsigned int v20; // [rsp+20h] [rbp-58h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v22; // [rsp+80h] [rbp+8h]
  int v23; // [rsp+80h] [rbp+8h]
  __int64 v24; // [rsp+88h] [rbp+10h] BYREF

  v1 = 0;
  v2 = 0LL;
  v24 = 0LL;
  v3 = 0LL;
  v4 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v4 + 88) )
  {
    v6 = v22;
    while ( 1 )
    {
      v7 = 0;
      v8 = *(_QWORD *)(*(_QWORD *)(v4 + 64) + 8 * v3);
      v23 = *(_DWORD *)(v8 + 348);
      if ( *(_DWORD *)(v8 + 392) )
        break;
LABEL_4:
      v4 = *((_QWORD *)this + 2);
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *(_DWORD *)(v4 + 88) )
        goto LABEL_5;
    }
    while ( 1 )
    {
      v10 = (DXGIOutputInfo *)(*(_QWORD *)(v8 + 368) + 280LL * v7);
      updated = DXGIOutputInfo::UpdateDesc(v10);
      v1 = updated;
      if ( updated < 0 )
        break;
      if ( DXGIOutputInfo::IsAttachedToDesktop(v10) )
      {
        updated = DXGIOutputInfo::Validate(v10);
        v1 = updated;
        if ( updated < 0 )
        {
          v20 = 850;
          goto LABEL_38;
        }
        if ( (*((_BYTE *)v10 + 200) & 2) != 0 )
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
            {
              v1 = -2147467259;
              v2 = 0LL;
            }
          }
          if ( v1 < 0 )
          {
            v20 = 854;
LABEL_33:
            v19 = v1;
            goto LABEL_39;
          }
        }
        v12 = WPF::ProcessHeapImpl::AllocClear(0x150uLL);
        if ( !v12 )
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        v24 = CDisplay::CDisplay(v12, v13, v14, v8, v10, v23, v2);
        if ( !v24 )
        {
          v1 = -2147024882;
          v20 = 867;
          goto LABEL_33;
        }
        v15 = *((unsigned int *)this + 18);
        v16 = v15 + 1;
        if ( (int)v15 + 1 >= (unsigned int)v15 )
          v6 = v15 + 1;
        v1 = v16 < (unsigned int)v15 ? 0x80070216 : 0;
        if ( v16 < (unsigned int)v15 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0xB5u);
        }
        else if ( v6 > *((_DWORD *)this + 17) )
        {
          v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 48, 8u, 1, &v24);
          v1 = v18;
          if ( v18 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v15) = v24;
          *((_DWORD *)this + 18) = v6;
        }
        if ( v1 < 0 )
        {
          v20 = 869;
          goto LABEL_33;
        }
        v24 = 0LL;
      }
      if ( ++v7 >= *(_DWORD *)(v8 + 392) )
        goto LABEL_4;
    }
    v20 = 840;
LABEL_38:
    v19 = updated;
LABEL_39:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, v20);
  }
LABEL_5:
  ReleaseInterface<CDisplay>(&v24);
  return (unsigned int)v1;
}
