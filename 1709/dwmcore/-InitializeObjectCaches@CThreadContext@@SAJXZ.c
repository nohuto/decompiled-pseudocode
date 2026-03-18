/*
 * XREFs of ?InitializeObjectCaches@CThreadContext@@SAJXZ @ 0x18018EEE8
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180128180 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180035760 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 CThreadContext::InitializeObjectCaches(void)
{
  signed int Current; // eax
  unsigned int v1; // ebx
  struct CThreadContext *v2; // rcx
  struct CThreadContext *v4; // [rsp+40h] [rbp+8h] BYREF

  Current = CThreadContext::GetCurrent(&v4);
  v1 = Current;
  if ( Current < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Current, 0xB9u);
  }
  else
  {
    v2 = v4;
    *((_DWORD *)v4 + 2) = 32;
    *((_DWORD *)v2 + 6) = 32;
    *((_DWORD *)v2 + 10) = 32;
    *((_DWORD *)v2 + 14) = 32;
    *((_DWORD *)v2 + 18) = 32;
    *((_DWORD *)v2 + 22) = 32;
    *((_DWORD *)v2 + 26) = 32;
    *((_DWORD *)v2 + 30) = 8;
    *((_DWORD *)v2 + 34) = 8;
    *((_DWORD *)v2 + 38) = 8;
  }
  return v1;
}
