/*
 * XREFs of ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x180054CF8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x18003B008 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x18003B55C (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18003BCD0 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall CExpression::ProcessSetNodesInfo(
        CExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_EXPRESSION_SETNODESINFO *a3)
{
  bool v3; // zf
  unsigned int v7; // edx
  CMILCOMBase *Resource; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  CMILCOMBase *v11; // rsi
  CMILCOMBase *v12; // rcx
  CMILCOMBase *v13; // rcx
  int v14; // eax
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  void *v19; // rcx
  int v21; // r9d
  UINT32 cData; // [rsp+20h] [rbp-39h]
  unsigned int v23; // [rsp+30h] [rbp-29h] BYREF
  int TracingCookie; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *p_TracingCookie; // [rsp+60h] [rbp+7h]
  int v27; // [rsp+68h] [rbp+Fh]
  int v28; // [rsp+6Ch] [rbp+13h]
  unsigned int *v29; // [rsp+70h] [rbp+17h]
  int v30; // [rsp+78h] [rbp+1Fh]
  int v31; // [rsp+7Ch] [rbp+23h]

  v3 = *((_QWORD *)this + 36) == 0LL;
  v23 = -2147467259;
  if ( !v3 || (v7 = *((_DWORD *)a3 + 2)) == 0 )
  {
    cData = 286;
    goto LABEL_37;
  }
  Resource = (CMILCOMBase *)CResourceTable::GetResource((__int64)a2, v7, 0x83u);
  if ( !Resource )
  {
    cData = 293;
LABEL_37:
    v21 = -2003303421;
    goto LABEL_38;
  }
  v9 = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 6), 0x83u);
  v10 = *((unsigned int *)a3 + 10);
  v11 = (CMILCOMBase *)v9;
  if ( !v9 )
  {
    if ( !(_DWORD)v10 )
      goto LABEL_6;
    goto LABEL_30;
  }
  if ( !(_DWORD)v10 )
  {
LABEL_30:
    cData = 305;
    goto LABEL_37;
  }
LABEL_6:
  if ( *((_DWORD *)a3 + 3) < 4u || *((unsigned int *)a3 + 7) < (unsigned __int64)(8 * v10) )
  {
    cData = 314;
    goto LABEL_37;
  }
  v12 = (CMILCOMBase *)*((_QWORD *)this + 36);
  if ( v12 )
    CMILCOMBase::InternalRelease(v12);
  *((_QWORD *)this + 36) = Resource;
  CMILCOMBase::InternalAddRef(Resource);
  v13 = (CMILCOMBase *)*((_QWORD *)this + 39);
  if ( v13 )
    CMILCOMBase::InternalRelease(v13);
  *((_QWORD *)this + 39) = v11;
  if ( v11 )
    CMILCOMBase::InternalAddRef(v11);
  *((_DWORD *)this + 74) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 75) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 82) = *((_DWORD *)a3 + 7);
  *((_DWORD *)this + 76) = *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 83) = *((_DWORD *)a3 + 10);
  *((_DWORD *)this + 84) = *((_DWORD *)a3 + 11);
  v14 = CBaseExpression::SetChannelHandle(this, *((_DWORD *)a2 + 12));
  v23 = v14;
  if ( v14 < 0 )
  {
    cData = 330;
    goto LABEL_34;
  }
  if ( *((_DWORD *)a3 + 10) )
  {
    v15 = *((_QWORD *)this + 39);
    v16 = *((unsigned int *)a3 + 8);
    v17 = *(unsigned int *)(v15 + 64);
    if ( v16 < v17 && *((unsigned int *)this + 82) <= v17 - v16 && (v18 = *(_QWORD *)(v15 + 72)) != 0 )
      v19 = (void *)(v18 + v16);
    else
      v19 = 0LL;
    *((_QWORD *)this + 40) = v19;
    if ( v19 )
    {
      if ( *((_DWORD *)a3 + 9) )
        memset_0(v19, 0, *((unsigned int *)this + 82));
      goto LABEL_23;
    }
    v21 = -2147024882;
    cData = 340;
LABEL_38:
    v23 = v21;
    goto LABEL_39;
  }
LABEL_23:
  v14 = CBaseExpression::TryRegisterWithExpressionManager(this);
  v23 = v14;
  if ( v14 < 0 )
  {
    cData = 348;
LABEL_34:
    v21 = v14;
LABEL_39:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, cData);
    goto LABEL_25;
  }
  v23 = 0;
LABEL_25:
  if ( (*(_DWORD *)(*((_QWORD *)this + 35) + 4LL) & 0x40000000) != 0
    && dword_1802D3FE0 > 4u
    && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
  {
    v28 = 0;
    v31 = 0;
    TracingCookie = CBaseExpression::GetTracingCookie(this);
    p_TracingCookie = &TracingCookie;
    v29 = &v23;
    v27 = 4;
    v30 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A8352, 0LL, 0LL, 4u, &pData);
  }
  return v23;
}
