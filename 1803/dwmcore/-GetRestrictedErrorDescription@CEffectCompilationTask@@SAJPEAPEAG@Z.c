/*
 * XREFs of ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x18016CEA0
 * Callers:
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x180037340 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLA.c)
 *     ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x180037500 (-Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectCompilationTask::GetRestrictedErrorDescription(unsigned __int16 **a1)
{
  int RestrictedErrorInfo; // eax
  unsigned int v3; // edi
  __int64 v4; // rbx
  OLECHAR *v5; // rsi
  DWORD LastError; // edi
  OLECHAR *v7; // rsi
  DWORD v8; // edi
  int v9; // eax
  char v11; // [rsp+60h] [rbp+30h] BYREF
  BSTR bstrString; // [rsp+68h] [rbp+38h] BYREF
  BSTR v13; // [rsp+70h] [rbp+40h] BYREF
  __int64 v14; // [rsp+78h] [rbp+48h] BYREF

  *a1 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  bstrString = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  RestrictedErrorInfo = GetRestrictedErrorInfo(&v14);
  v3 = RestrictedErrorInfo;
  if ( RestrictedErrorInfo < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RestrictedErrorInfo, 0x9Au);
  }
  else
  {
    v4 = v14;
    if ( v14 )
    {
      v5 = bstrString;
      if ( bstrString )
      {
        LastError = GetLastError();
        SysFreeString(v5);
        SetLastError(LastError);
      }
      bstrString = 0LL;
      v7 = v13;
      if ( v13 )
      {
        v8 = GetLastError();
        SysFreeString(v7);
        SetLastError(v8);
      }
      v13 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, BSTR *, char *, unsigned __int16 **, BSTR *))(*(_QWORD *)v4 + 24LL))(
             v4,
             &v13,
             &v11,
             a1,
             &bstrString);
      v3 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x9Du);
    }
  }
  if ( bstrString )
    SysFreeString(bstrString);
  if ( v13 )
    SysFreeString(v13);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  return v3;
}
