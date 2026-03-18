/*
 * XREFs of ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x180084658
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x180083CC8 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 *     ?SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ @ 0x1800845D0 (-SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x180084B60 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180084C5C (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x180145718 (-GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z.c)
 */

__int64 __fastcall CCompiledEffectTemplate::ProcessUpdate(
        CCompiledEffectTemplate *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPILEDEFFECTTEMPLATE *a3)
{
  int v3; // esi
  CSharedSection *Resource; // rcx
  void *v7; // r15
  int v8; // eax
  unsigned int v9; // ebx
  struct Windows::UI::Composition::IEffectDescription *v10; // rcx
  DWORD v12; // r9d
  int v13; // ebx
  __int64 v14; // r14
  __int64 v15; // rax
  unsigned int v16; // edx
  signed int v17; // eax
  unsigned int v18; // [rsp+20h] [rbp-30h]
  unsigned int v19; // [rsp+20h] [rbp-30h]
  _QWORD v20[2]; // [rsp+40h] [rbp-10h] BYREF
  struct Windows::UI::Composition::IEffectDescription *v21; // [rsp+80h] [rbp+30h] BYREF
  BSTR bstrString; // [rsp+98h] [rbp+48h] BYREF

  v3 = 0;
  v21 = 0LL;
  if ( *((_QWORD *)this + 9) )
  {
    v9 = -2003303422;
    v18 = 36;
LABEL_12:
    v12 = v9;
    goto LABEL_17;
  }
  Resource = (CSharedSection *)CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 118LL);
  if ( !Resource )
  {
    v9 = -2003303421;
    v18 = 44;
    goto LABEL_12;
  }
  *((_QWORD *)this + 8) = *(_QWORD *)((char *)a3 + 20);
  v7 = CSharedSection::ResolveAllocation(Resource, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 4));
  if ( !v7 )
  {
    v9 = -2147024882;
    v18 = 51;
    goto LABEL_12;
  }
  SetRestrictedErrorInfo(0LL);
  v8 = DeserializeEffectDescription(v7, *((unsigned int *)a3 + 4), &v21);
  v3 = v8;
  v9 = v8;
  if ( v8 < 0 )
  {
    v18 = 57;
  }
  else
  {
    v8 = CEffectCompilationService::BeginCompile(
           *(HANDLE **)(*((_QWORD *)this + 2) + 112LL),
           this,
           v21,
           (struct CEffectCompilationTask **)this + 9);
    v9 = v8;
    if ( v8 >= 0 )
    {
      (*(void (__fastcall **)(CCompiledEffectTemplate *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
      v9 = 0;
      goto LABEL_7;
    }
    v18 = 60;
  }
  v12 = v8;
LABEL_17:
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, v18);
  CCompiledEffectTemplate::SignalCompileCompletedEvent(this);
  if ( CNotificationResource::ShouldNotify(this) )
  {
    v13 = -2147467259;
    v14 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1288LL) + 56LL);
    bstrString = 0LL;
    if ( v3 < 0 )
    {
      v13 = v3;
      CEffectCompilationTask::GetRestrictedErrorDescription(&bstrString);
    }
    v15 = *((_QWORD *)this + 6);
    if ( v15 )
      v16 = *(_DWORD *)(v15 + 68);
    else
      v16 = 0;
    v20[0] = v16;
    v20[1] = *((unsigned int *)this + 14);
    LOWORD(v19) = 1;
    v17 = CoreUICallSend(v14, v20, 2LL, 3LL, v19, &unk_1801F051B, v13);
    v9 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0x5Du);
    SysFreeString(bstrString);
  }
LABEL_7:
  v10 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  return v9;
}
