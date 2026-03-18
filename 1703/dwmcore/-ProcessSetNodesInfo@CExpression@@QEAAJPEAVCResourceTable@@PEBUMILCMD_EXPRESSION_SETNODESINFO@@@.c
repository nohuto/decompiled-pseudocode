/*
 * XREFs of ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x180032390
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x18002EC04 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x18002F14C (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18002F1F8 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800584C0 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall CExpression::ProcessSetNodesInfo(
        CExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_EXPRESSION_SETNODESINFO *a3)
{
  bool v3; // zf
  __int64 v7; // rdx
  CBitmapOfDeviceBitmaps *Resource; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  CBitmapOfDeviceBitmaps *v11; // rsi
  CMILCOMBase *v12; // rcx
  CMILCOMBase *v13; // rcx
  int v14; // eax
  void *v15; // rax
  size_t v16; // r8
  int v18; // r9d
  LPCGUID v19; // r8
  LPCGUID v20; // r9
  UINT32 cData; // [rsp+20h] [rbp-49h]
  unsigned int v22; // [rsp+30h] [rbp-39h] BYREF
  int TracingCookie; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  int *p_TracingCookie; // [rsp+60h] [rbp-9h]
  int v26; // [rsp+68h] [rbp-1h]
  int v27; // [rsp+6Ch] [rbp+3h]
  unsigned int *v28; // [rsp+70h] [rbp+7h]
  int v29; // [rsp+78h] [rbp+Fh]
  int v30; // [rsp+7Ch] [rbp+13h]

  v3 = *((_QWORD *)this + 28) == 0LL;
  v22 = -2147467259;
  if ( !v3 || (v7 = *((unsigned int *)a3 + 2), !(_DWORD)v7) )
  {
    cData = 203;
    goto LABEL_33;
  }
  Resource = (CBitmapOfDeviceBitmaps *)CResourceTable::GetResource(a2, v7, 100LL);
  if ( !Resource )
  {
    cData = 210;
LABEL_33:
    v18 = -2003303421;
    goto LABEL_34;
  }
  v9 = CResourceTable::GetResource(a2, *((unsigned int *)a3 + 6), 100LL);
  v10 = *((unsigned int *)a3 + 10);
  v11 = (CBitmapOfDeviceBitmaps *)v9;
  if ( !v9 )
  {
    if ( !(_DWORD)v10 )
      goto LABEL_6;
    goto LABEL_26;
  }
  if ( !(_DWORD)v10 )
  {
LABEL_26:
    cData = 222;
    goto LABEL_33;
  }
LABEL_6:
  if ( *((_DWORD *)a3 + 3) < 4u || *((unsigned int *)a3 + 7) < (unsigned __int64)(8 * v10) )
  {
    cData = 231;
    goto LABEL_33;
  }
  v12 = (CMILCOMBase *)*((_QWORD *)this + 28);
  if ( v12 )
    CMILCOMBase::InternalRelease(v12);
  *((_QWORD *)this + 28) = Resource;
  CBitmapOfDeviceBitmaps::AddRef(Resource);
  v13 = (CMILCOMBase *)*((_QWORD *)this + 31);
  if ( v13 )
    CMILCOMBase::InternalRelease(v13);
  *((_QWORD *)this + 31) = v11;
  if ( v11 )
    CBitmapOfDeviceBitmaps::AddRef(v11);
  *((_DWORD *)this + 58) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 59) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 66) = *((_DWORD *)a3 + 7);
  *((_DWORD *)this + 60) = *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 67) = *((_DWORD *)a3 + 10);
  *((_DWORD *)this + 68) = *((_DWORD *)a3 + 11);
  v14 = CBaseExpression::SetChannelHandle(this, *((_DWORD *)a2 + 12));
  v22 = v14;
  if ( v14 < 0 )
  {
    cData = 247;
    goto LABEL_30;
  }
  if ( *((_DWORD *)a3 + 10) )
  {
    v15 = CSharedSection::ResolveAllocation(
            *((CSharedSection **)this + 31),
            *((unsigned int *)a3 + 8),
            *((unsigned int *)this + 66));
    *((_QWORD *)this + 32) = v15;
    if ( v15 )
    {
      if ( *((_DWORD *)a3 + 9) )
        memset_0(v15, 0, v16);
      goto LABEL_19;
    }
    v18 = -2147024882;
    cData = 257;
LABEL_34:
    v22 = v18;
    goto LABEL_35;
  }
LABEL_19:
  v14 = CBaseExpression::TryRegisterWithExpressionManager(this);
  v22 = v14;
  if ( v14 < 0 )
  {
    cData = 265;
LABEL_30:
    v18 = v14;
LABEL_35:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, cData);
    goto LABEL_21;
  }
  v22 = 0;
LABEL_21:
  if ( (*(_DWORD *)(*((_QWORD *)this + 25) + 4LL) & 0x40000000) != 0
    && dword_18023D7F0 > 4u
    && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 1uLL) )
  {
    v27 = 0;
    v30 = 0;
    TracingCookie = CBaseExpression::GetTracingCookie(this);
    p_TracingCookie = &TracingCookie;
    v28 = &v22;
    v26 = 4;
    v29 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F757B, v19, v20, 4u, &pData);
  }
  return v22;
}
