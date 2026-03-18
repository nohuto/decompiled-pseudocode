/*
 * XREFs of ?ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C019646C
 * Callers:
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0006310 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

struct DXGADAPTER *__fastcall DXGGLOBAL::ReferenceBddFallbackAdapter(
        DXGGLOBAL *this,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  signed __int64 v7; // rcx
  DXGADAPTER *v8; // r9
  DXGADAPTER *v9; // r8
  DXGADAPTER *v10; // rbx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  __int64 v13; // rax
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (DXGGLOBAL *)((char *)this + 400), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  v8 = (DXGGLOBAL *)((char *)this + 440);
  v9 = (DXGADAPTER *)*((_QWORD *)this + 55);
  while ( v9 != v8 && v9 )
  {
    v10 = v9;
    if ( DXGADAPTER::IsBddFallbackDriver(v9) )
    {
      _m_prefetchw((char *)v10 + 24);
      v11 = *((_QWORD *)v10 + 3);
      while ( v11 )
      {
        v7 = v11 + 1;
        v12 = v11;
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 3, v11 + 1, v11);
        if ( v12 == v11 )
        {
          *a2 = -1LL;
          goto LABEL_11;
        }
      }
    }
  }
  v13 = WdLogNewEntry5_WdAssertion(v7, v6, v9, v8);
  *(_QWORD *)(v13 + 24) = 2133LL;
  WdLogEvent5_WdAssertion(v13);
  v10 = 0LL;
LABEL_11:
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15, v6, (__int64)v9, (__int64)v8);
  return v10;
}
