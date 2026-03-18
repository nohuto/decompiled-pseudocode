/*
 * XREFs of ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x1800A83FC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x180084B60 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800A188C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x1800A1DBC (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x1800A2348 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

__int64 __fastcall CExpression::ProcessSetNodesInfo(
        CExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_EXPRESSION_SETNODESINFO *a3)
{
  bool v3; // zf
  __int64 v7; // rdx
  CMILCOMBase *Resource; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  CMILCOMBase *v11; // rsi
  CMILCOMBase *v12; // rcx
  CMILCOMBase *v13; // rcx
  int v14; // eax
  void *v15; // rax
  size_t v16; // r8
  DWORD v18; // r9d
  LPCGUID v19; // r8
  LPCGUID v20; // r9
  UINT32 cData; // [rsp+20h] [rbp-39h]
  unsigned int v22; // [rsp+30h] [rbp-29h] BYREF
  int TracingCookie; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *p_TracingCookie; // [rsp+60h] [rbp+7h]
  int v26; // [rsp+68h] [rbp+Fh]
  int v27; // [rsp+6Ch] [rbp+13h]
  unsigned int *v28; // [rsp+70h] [rbp+17h]
  int v29; // [rsp+78h] [rbp+1Fh]
  int v30; // [rsp+7Ch] [rbp+23h]

  v3 = *((_QWORD *)this + 34) == 0LL;
  v22 = -2147467259;
  if ( !v3 || (v7 = *((unsigned int *)a3 + 2), !(_DWORD)v7) )
  {
    cData = 284;
    goto LABEL_32;
  }
  Resource = (CMILCOMBase *)CResourceTable::GetResource(a2, v7, 118LL);
  if ( !Resource )
  {
    cData = 291;
LABEL_32:
    v18 = -2003303421;
    goto LABEL_33;
  }
  v9 = CResourceTable::GetResource(a2, *((unsigned int *)a3 + 6), 118LL);
  v10 = *((unsigned int *)a3 + 10);
  v11 = (CMILCOMBase *)v9;
  if ( !v9 )
  {
    if ( !(_DWORD)v10 )
      goto LABEL_6;
    goto LABEL_25;
  }
  if ( !(_DWORD)v10 )
  {
LABEL_25:
    cData = 303;
    goto LABEL_32;
  }
LABEL_6:
  if ( *((_DWORD *)a3 + 3) < 4u || *((unsigned int *)a3 + 7) < (unsigned __int64)(8 * v10) )
  {
    cData = 312;
    goto LABEL_32;
  }
  v12 = (CMILCOMBase *)*((_QWORD *)this + 34);
  if ( v12 )
    CMILCOMBase::InternalRelease(v12);
  *((_QWORD *)this + 34) = Resource;
  CMILCOMBase::InternalAddRef(Resource);
  v13 = (CMILCOMBase *)*((_QWORD *)this + 37);
  if ( v13 )
    CMILCOMBase::InternalRelease(v13);
  *((_QWORD *)this + 37) = v11;
  if ( v11 )
    CMILCOMBase::InternalAddRef(v11);
  *((_DWORD *)this + 70) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 71) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 78) = *((_DWORD *)a3 + 7);
  *((_DWORD *)this + 72) = *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 79) = *((_DWORD *)a3 + 10);
  *((_DWORD *)this + 80) = *((_DWORD *)a3 + 11);
  v14 = CBaseExpression::SetChannelHandle(this, *((_DWORD *)a2 + 12));
  v22 = v14;
  if ( v14 < 0 )
  {
    cData = 328;
    goto LABEL_29;
  }
  if ( *((_DWORD *)a3 + 10) )
  {
    v15 = CSharedSection::ResolveAllocation(
            *((CSharedSection **)this + 37),
            *((unsigned int *)a3 + 8),
            *((unsigned int *)this + 78));
    *((_QWORD *)this + 38) = v15;
    if ( v15 )
    {
      if ( *((_DWORD *)a3 + 9) )
        memset_0(v15, 0, v16);
      goto LABEL_19;
    }
    v18 = -2147024882;
    cData = 338;
LABEL_33:
    v22 = v18;
    goto LABEL_34;
  }
LABEL_19:
  v14 = CBaseExpression::TryRegisterWithExpressionManager(this);
  v22 = v14;
  if ( v14 < 0 )
  {
    cData = 346;
LABEL_29:
    v18 = v14;
LABEL_34:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v18, cData);
    goto LABEL_21;
  }
  v22 = 0;
LABEL_21:
  if ( (*(_DWORD *)(*((_QWORD *)this + 33) + 4LL) & 0x40000000) != 0
    && dword_18026D7B0 > 4u
    && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 1uLL) )
  {
    v27 = 0;
    v30 = 0;
    TracingCookie = CBaseExpression::GetTracingCookie(this);
    p_TracingCookie = &TracingCookie;
    v28 = &v22;
    v26 = 4;
    v29 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_1802137D5, v19, v20, 4u, &pData);
  }
  return v22;
}
