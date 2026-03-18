/*
 * XREFs of ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x180037340
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x18002BC88 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18002BCD4 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x180035184 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 *     ?SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ @ 0x1800372B8 (-SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x18016CEA0 (-GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z.c)
 */

__int64 __fastcall CCompiledEffectTemplate::ProcessUpdate(
        CCompiledEffectTemplate *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPILEDEFFECTTEMPLATE *a3)
{
  int v5; // esi
  CSharedSection *Resource; // rcx
  void *v7; // r15
  int v8; // ebx
  struct Windows::UI::Composition::IEffectDescription *v9; // rcx
  unsigned int v11; // eax
  __int64 v12; // r14
  __int64 v13; // rax
  unsigned int v14; // edx
  int v15; // eax
  _QWORD v16[2]; // [rsp+40h] [rbp-10h] BYREF
  struct Windows::UI::Composition::IEffectDescription *v17; // [rsp+80h] [rbp+30h] BYREF
  BSTR bstrString; // [rsp+98h] [rbp+48h] BYREF

  v5 = 0;
  v17 = 0LL;
  if ( *((_QWORD *)this + 9) )
  {
    v8 = -2003303422;
    v11 = 36;
  }
  else
  {
    Resource = (CSharedSection *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x83u);
    if ( Resource )
    {
      *((_QWORD *)this + 8) = *(_QWORD *)((char *)a3 + 20);
      v7 = CSharedSection::ResolveAllocation(Resource, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 4));
      if ( v7 )
      {
        SetRestrictedErrorInfo(0LL);
        v5 = DeserializeEffectDescription(v7, *((unsigned int *)a3 + 4), &v17);
        v8 = v5;
        if ( v5 < 0 )
        {
          v11 = 57;
        }
        else
        {
          v8 = CEffectCompilationService::BeginCompile(
                 *(CEffectCompilationService **)(*((_QWORD *)this + 2) + 112LL),
                 this,
                 v17,
                 (struct CEffectCompilationTask **)this + 9);
          if ( v8 >= 0 )
          {
            (*(void (__fastcall **)(CCompiledEffectTemplate *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
            v8 = 0;
            goto LABEL_7;
          }
          v11 = 60;
        }
      }
      else
      {
        v8 = -2147024882;
        v11 = 51;
      }
    }
    else
    {
      v8 = -2003303421;
      v11 = 44;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, v11);
  CCompiledEffectTemplate::SignalCompileCompletedEvent(this);
  if ( CNotificationResource::ShouldNotify(this) )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1312LL) + 56LL);
    bstrString = 0LL;
    if ( v5 < 0 )
      CEffectCompilationTask::GetRestrictedErrorDescription(&bstrString);
    v13 = *((_QWORD *)this + 6);
    if ( v13 )
      v14 = *(_DWORD *)(v13 + 68);
    else
      v14 = 0;
    v16[0] = v14;
    v16[1] = *((unsigned int *)this + 14);
    v15 = CoreUICallSend(v12, v16, 2LL, 5LL, 1, &unk_180239C8D);
    v8 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x5Du);
    SysFreeString(bstrString);
  }
  if ( v5 < 0 )
    v8 = 0;
LABEL_7:
  v9 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  return (unsigned int)v8;
}
