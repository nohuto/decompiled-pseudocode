/*
 * XREFs of ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C00D7E98
 * Callers:
 *     DxgkCheckOcclusion @ 0x1C0097B00 (DxgkCheckOcclusion.c)
 *     ?CheckOcclusion@DXGPRESENT@@QEAAEXZ @ 0x1C019EB30 (-CheckOcclusion@DXGPRESENT@@QEAAEXZ.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z @ 0x1C00E7E9C (-IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z.c)
 */

char __fastcall DXGGLOBAL::IsWindowVisible(DXGGLOBAL *this, const struct tagRECT *const a2, __int64 a3, __int64 a4)
{
  _QWORD **v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rsi
  char v10; // di
  _QWORD *v11; // rbx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  int IsWindowVisible; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // rax
  _BYTE v21[16]; // [rsp+28h] [rbp-39h] BYREF
  char v22[8]; // [rsp+38h] [rbp-29h] BYREF
  _QWORD *v23; // [rsp+40h] [rbp-21h]
  char v24; // [rsp+48h] [rbp-19h]
  char v25[8]; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v26[32]; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v27[40]; // [rsp+80h] [rbp+1Fh] BYREF

  v5 = (_QWORD **)((char *)this + 440);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (DXGGLOBAL *)((char *)this + 400), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  v9 = *v5;
  v10 = 1;
  while ( 1 )
  {
    do
    {
      if ( v9 == v5 || !v9 )
      {
        v10 = 0;
        goto LABEL_19;
      }
      v11 = v9;
      v9 = (_QWORD *)*v9;
      _m_prefetchw(v11 + 3);
      v12 = v11[3];
      while ( v12 )
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange64(v11 + 3, v12 + 1, v12);
        if ( v13 == v12 )
        {
          LOBYTE(v12) = 1;
          break;
        }
      }
    }
    while ( !(_BYTE)v12 );
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v25, (struct DXGADAPTER *const)v11, 0LL);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v11);
    if ( v11[285] )
      break;
LABEL_13:
    COREACCESS::~COREACCESS((COREACCESS *)v27);
    COREACCESS::~COREACCESS((COREACCESS *)v26);
  }
  v23 = v11;
  v24 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
  if ( *((_DWORD *)v11 + 44) != 1 )
  {
LABEL_11:
    if ( v24 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
    goto LABEL_13;
  }
  IsWindowVisible = ADAPTER_DISPLAY::IsWindowVisible((ADAPTER_DISPLAY *)v11[285], a2);
  if ( IsWindowVisible != -1073741823 )
  {
    if ( !IsWindowVisible )
      goto LABEL_16;
    if ( IsWindowVisible != 261 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
      *(_QWORD *)(v20 + 24) = 2349LL;
      WdLogEvent5_WdAssertion(v20);
    }
    goto LABEL_11;
  }
  v10 = 0;
LABEL_16:
  if ( v24 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
  COREACCESS::~COREACCESS((COREACCESS *)v27);
  COREACCESS::~COREACCESS((COREACCESS *)v26);
LABEL_19:
  if ( v21[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21, v6, v7, v8);
  return v10;
}
