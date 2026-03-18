/*
 * XREFs of DxgkCheckSharedResourceAccess @ 0x1C017FCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C000706C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E120 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCheckSharedResourceAccess(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // r9
  __int64 ObjectA; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 *v17; // rsi
  __int64 *i; // rbx
  HANDLE v19; // rax
  _BYTE v21[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v22[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2059);
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v22);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  Global = DXGGLOBAL::GetGlobal(v5, v4, v6, v7);
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, *a1, 2LL, v9);
  if ( ObjectA )
  {
    v16 = *(_QWORD *)(ObjectA + 144);
    if ( v16 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGFASTMUTEX *const)(v16 + 8), v13, v14);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
      v17 = (__int64 *)(v16 + 48);
      for ( i = *(__int64 **)(v16 + 48); ; i = (__int64 *)*i )
      {
        if ( i == v17 )
        {
          LODWORD(v16) = -1073741790;
          goto LABEL_15;
        }
        v19 = *((_BYTE *)i + 16) ? PsGetCurrentProcessId() : PsGetProcessId((PEPROCESS)i[3]);
        v12 = a1[1];
        if ( v19 == (HANDLE)v12 )
          break;
      }
      LODWORD(v16) = 0;
LABEL_15:
      if ( v21[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21, v11, v13, v14);
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
    LODWORD(v16) = -1073741811;
    *(_QWORD *)(v15 + 24) = *a1;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v15);
  }
  if ( v22[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22, v11, v13, v14);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v12, &EventProfilerExit, v13, 2059);
  return (unsigned int)v16;
}
