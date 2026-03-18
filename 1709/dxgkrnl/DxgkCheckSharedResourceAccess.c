/*
 * XREFs of DxgkCheckSharedResourceAccess @ 0x1C0183DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C00030B4 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000DDE8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 */

__int64 __fastcall DxgkCheckSharedResourceAccess(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 *v12; // rsi
  __int64 *i; // rbx
  HANDLE v14; // rax
  _BYTE v16[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v17[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2059);
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v17);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  Global = DXGGLOBAL::GetGlobal(v4);
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, *a1, 2);
  if ( ObjectA )
  {
    v11 = *(_QWORD *)(ObjectA + 144);
    if ( v11 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct DXGFASTMUTEX *const)(v11 + 8));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
      v12 = (__int64 *)(v11 + 48);
      for ( i = *(__int64 **)(v11 + 48); ; i = (__int64 *)*i )
      {
        if ( i == v12 )
        {
          LODWORD(v11) = -1073741790;
          goto LABEL_15;
        }
        v14 = *((_BYTE *)i + 16) ? PsGetCurrentProcessId() : PsGetProcessId((PEPROCESS)i[3]);
        v8 = a1[1];
        if ( v14 == (HANDLE)v8 )
          break;
      }
      LODWORD(v11) = 0;
LABEL_15:
      if ( v16[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    LODWORD(v11) = -1073741811;
    *(_QWORD *)(v10 + 24) = *a1;
    *(_QWORD *)(v10 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v10);
  }
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v8, &EventProfilerExit, v9, 2059);
  return (unsigned int)v11;
}
