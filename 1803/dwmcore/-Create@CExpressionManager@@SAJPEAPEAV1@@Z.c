/*
 * XREFs of ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x1800C96FC
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180033E24 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??0CExpressionManager@@AEAA@XZ @ 0x18003ACA4 (--0CExpressionManager@@AEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CExpressionManager::Create(struct CExpressionManager **a1)
{
  unsigned int v2; // ebx
  CExpressionManager *v3; // rax
  volatile signed __int32 *v4; // rax
  bool v5; // zf
  signed int v7; // eax
  signed int LastError; // eax
  unsigned int v9; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  v3 = (CExpressionManager *)WPF::ProcessHeapImpl::AllocClear(0x1F8uLL);
  if ( !v3 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v4 = (volatile signed __int32 *)CExpressionManager::CExpressionManager(v3);
  if ( !v4 )
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Bu);
    return v2;
  }
  _InterlockedIncrement(v4 + 2);
  v5 = byte_1802D6914 == 0;
  *a1 = (struct CExpressionManager *)v4;
  if ( v5 )
  {
    byte_1802D6914 = 1;
    SetLastError(0);
    if ( QueryPerformanceFrequency(&Time::s_luFreq) )
    {
      SetLastError(0);
      if ( QueryPerformanceCounter(&Time::s_luBegin) )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / Time::s_luFreq.QuadPart < 0x12C )
        {
          v2 = -2147418113;
          goto LABEL_21;
        }
LABEL_7:
        if ( (v2 & 0x80000000) == 0 )
          return v2;
LABEL_21:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x26u);
        return v2;
      }
      LastError = GetLastError();
      v2 = LastError;
      if ( LastError > 0 )
        v2 = (unsigned __int16)LastError | 0x80070000;
      v9 = 35;
    }
    else
    {
      v7 = GetLastError();
      v2 = v7;
      if ( v7 > 0 )
        v2 = (unsigned __int16)v7 | 0x80070000;
      v9 = 34;
    }
    if ( (v2 & 0x80000000) == 0 )
      v2 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, v9);
    goto LABEL_7;
  }
  return v2;
}
