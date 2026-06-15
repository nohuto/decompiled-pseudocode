/*
 * XREFs of ?UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAH@Z @ 0x180019BB8
 * Callers:
 *     ?TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z @ 0x18001D5AC (-TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x180010F00 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?Lookup@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEBAPEAUDuckingDescriptor@@AEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@@Z @ 0x18001A024 (-Lookup@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingD.c)
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z @ 0x180024798 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStreamClassPolicyGainsWrapper::UpdateStreamClassPolicyGains(
        CStreamClassPolicyGainsWrapper *this,
        unsigned int a2,
        int a3,
        int *a4)
{
  int updated; // ebx
  __int64 v5; // r13
  int v6; // edi
  unsigned int v7; // esi
  char **v8; // r14
  CStreamClassPolicyGainsWrapper *v10; // r15
  __int64 v11; // r15
  _QWORD *v12; // rdx
  const struct DuckingDescriptor *v13; // r9
  unsigned int v14; // esi
  char **v15; // r14
  __int64 v16; // r15
  _QWORD *v17; // rdx
  const struct DuckingDescriptor *v18; // r9
  int v20; // [rsp+30h] [rbp-20h] BYREF
  int v21; // [rsp+34h] [rbp-1Ch] BYREF
  __int64 v22; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v23[2]; // [rsp+40h] [rbp-10h] BYREF

  updated = 0;
  v5 = 21LL * a2;
  v6 = 0;
  v7 = 0;
  v8 = (char **)&off_18002B180[v5];
  v10 = this;
  do
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      &v22,
      *v8);
    v11 = ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Lookup(
            *((_QWORD *)v10 + 257),
            &v22);
    v12 = (_QWORD *)(v22 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v22 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 8LL))(*v12);
    if ( v11 )
    {
      v20 = 0;
      v13 = (const struct DuckingDescriptor *)v11;
      v10 = this;
      updated = CStreamClassPolicyGains::UpdateStreamClassGainStage(this, v7, 1, v13, a3, &v20);
      if ( updated < 0 )
      {
LABEL_24:
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_4ded2bb3714e38485bdee795a2f1ce42_Traceguids, updated);
        }
        AudPolicyLogError("CStreamClassPolicyGainsWrapper::UpdateStreamClassPolicyGains", 191, updated);
        return (unsigned int)updated;
      }
      if ( v6 || v20 )
        v6 = 1;
    }
    else
    {
      v10 = this;
    }
    ++v7;
    ++v8;
  }
  while ( v7 < 0x15 );
  v14 = 0;
  v15 = (char **)&off_18002B180[v5];
  do
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      v23,
      *v15);
    v16 = ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Lookup(
            *((_QWORD *)v10 + 257),
            v23);
    v17 = (_QWORD *)(v23[0] - 24LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v23[0] - 24LL + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v17 + 8LL))(*v17);
    if ( v16 )
    {
      v21 = 0;
      v18 = (const struct DuckingDescriptor *)v16;
      v10 = this;
      updated = CStreamClassPolicyGains::UpdateStreamClassGainStage(this, v14, 0, v18, a3, &v21);
      if ( updated < 0 )
        goto LABEL_24;
      if ( v6 || v21 )
        v6 = 1;
    }
    else
    {
      v10 = this;
    }
    ++v14;
    ++v15;
  }
  while ( v14 < 0x15 );
  if ( a4 )
    *a4 = v6;
  return (unsigned int)updated;
}
