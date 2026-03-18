/*
 * XREFs of ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x180005D98
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x180005394 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 *     ?SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ @ 0x180005FEC (-SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800584C0 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18005A058 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x180152D3C (-GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z.c)
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
  int v12; // r9d
  int v13; // ebx
  __int64 v14; // r14
  BSTR v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // edx
  int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-30h]
  unsigned int v20; // [rsp+20h] [rbp-30h]
  _QWORD v21[2]; // [rsp+40h] [rbp-10h] BYREF
  struct Windows::UI::Composition::IEffectDescription *v22; // [rsp+80h] [rbp+30h] BYREF
  BSTR bstrString; // [rsp+98h] [rbp+48h] BYREF

  v3 = 0;
  v22 = 0LL;
  if ( *((_QWORD *)this + 9) )
  {
    v9 = -2003303422;
    v19 = 36;
LABEL_12:
    v12 = v9;
    goto LABEL_17;
  }
  Resource = (CSharedSection *)CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 100LL);
  if ( !Resource )
  {
    v9 = -2003303421;
    v19 = 44;
    goto LABEL_12;
  }
  *((_QWORD *)this + 8) = *(_QWORD *)((char *)a3 + 20);
  v7 = CSharedSection::ResolveAllocation(Resource, *((unsigned int *)a3 + 3), *((unsigned int *)a3 + 4));
  if ( !v7 )
  {
    v9 = -2147024882;
    v19 = 51;
    goto LABEL_12;
  }
  SetRestrictedErrorInfo(0LL);
  v8 = DeserializeEffectDescription(v7, *((unsigned int *)a3 + 4), &v22);
  v3 = v8;
  v9 = v8;
  if ( v8 < 0 )
  {
    v19 = 57;
  }
  else
  {
    v8 = CEffectCompilationService::BeginCompile(
           *(CEffectCompilationService **)(*((_QWORD *)this + 2) + 72LL),
           this,
           v22,
           (struct CEffectCompilationTask **)this + 9);
    v9 = v8;
    if ( v8 >= 0 )
    {
      CResource::NotifyOnChanged(this, 0LL, 0LL);
      v9 = 0;
      goto LABEL_7;
    }
    v19 = 60;
  }
  v12 = v8;
LABEL_17:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v19);
  CCompiledEffectTemplate::SignalCompileCompletedEvent(this);
  if ( CNotificationResource::ShouldNotify(this) )
  {
    v13 = -2147467259;
    v14 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1352LL) + 56LL);
    v15 = 0LL;
    bstrString = 0LL;
    if ( v3 < 0 )
    {
      v13 = v3;
      CEffectCompilationTask::GetRestrictedErrorDescription(&bstrString);
      v15 = bstrString;
    }
    v16 = *((_QWORD *)this + 6);
    if ( v16 )
      v17 = *(_DWORD *)(v16 + 60);
    else
      v17 = 0;
    v21[0] = v17;
    v21[1] = *((unsigned int *)this + 14);
    LOWORD(v20) = 1;
    v18 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, __int64, unsigned int, void *, int, BSTR))CoreUICallSend)(
            v14,
            v21,
            2LL,
            3LL,
            v20,
            &unk_1801D53DB,
            v13,
            v15);
    v9 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x5Du);
    SysFreeString(bstrString);
  }
LABEL_7:
  v10 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(struct Windows::UI::Composition::IEffectDescription *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  return v9;
}
