/*
 * XREFs of ?InitializeObjectCaches@CThreadContext@@SAJXZ @ 0x1800C9FF0
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180033E24 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x18008BA48 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 */

__int64 CThreadContext::InitializeObjectCaches(void)
{
  int Current; // eax
  unsigned int v1; // ebx
  struct CThreadContext *v2; // rcx
  struct CThreadContext *v4; // [rsp+40h] [rbp+8h] BYREF

  Current = CThreadContext::GetCurrent(&v4);
  v1 = Current;
  if ( Current < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Current, 0xB9u);
  }
  else
  {
    v2 = v4;
    *((_DWORD *)v4 + 2) = 32;
    *((_DWORD *)v2 + 6) = 32;
    *((_DWORD *)v2 + 10) = 2;
    *((_DWORD *)v2 + 14) = 32;
    *((_DWORD *)v2 + 18) = 32;
    *((_DWORD *)v2 + 22) = 32;
    *((_DWORD *)v2 + 26) = 32;
    *((_DWORD *)v2 + 30) = 32;
    *((_DWORD *)v2 + 34) = 32;
    *((_DWORD *)v2 + 38) = 8;
    *((_DWORD *)v2 + 42) = 8;
    *((_DWORD *)v2 + 46) = 8;
    *((_DWORD *)v2 + 50) = 8;
    *((_DWORD *)v2 + 54) = 8;
    *((_DWORD *)v2 + 58) = 8;
  }
  return v1;
}
