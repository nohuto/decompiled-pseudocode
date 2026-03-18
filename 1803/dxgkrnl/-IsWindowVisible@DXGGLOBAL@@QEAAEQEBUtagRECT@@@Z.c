/*
 * XREFs of ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C010C348
 * Callers:
 *     DxgkCheckOcclusion @ 0x1C010AD30 (DxgkCheckOcclusion.c)
 *     ?CheckOcclusion@DXGPRESENT@@QEAAEXZ @ 0x1C01B12B4 (-CheckOcclusion@DXGPRESENT@@QEAAEXZ.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z @ 0x1C010D25C (-IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z.c)
 */

char __fastcall DXGGLOBAL::IsWindowVisible(DXGGLOBAL *this, const struct tagRECT *const a2)
{
  _QWORD **v3; // r14
  _QWORD *v4; // rsi
  char v5; // di
  _QWORD *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  int IsWindowVisible; // eax
  __int64 v10; // rcx
  __int64 v12; // rax
  _BYTE v13[16]; // [rsp+28h] [rbp-39h] BYREF
  char v14[8]; // [rsp+38h] [rbp-29h] BYREF
  _QWORD *v15; // [rsp+40h] [rbp-21h]
  char v16; // [rsp+48h] [rbp-19h]
  char v17[8]; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v18[32]; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v19[40]; // [rsp+80h] [rbp+1Fh] BYREF

  v3 = (_QWORD **)((char *)this + 448);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (DXGGLOBAL *)((char *)this + 408), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  v4 = *v3;
  v5 = 1;
  while ( 1 )
  {
    do
    {
      if ( v4 == v3 || !v4 )
      {
        v5 = 0;
        goto LABEL_19;
      }
      v6 = v4;
      v4 = (_QWORD *)*v4;
      _m_prefetchw(v6 + 3);
      v7 = v6[3];
      while ( v7 )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange64(v6 + 3, v7 + 1, v7);
        if ( v8 == v7 )
        {
          LOBYTE(v7) = 1;
          break;
        }
      }
    }
    while ( !(_BYTE)v7 );
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, (struct DXGADAPTER *const)v6, 0LL);
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v6);
    if ( v6[307] )
      break;
LABEL_13:
    COREACCESS::~COREACCESS((COREACCESS *)v19);
    COREACCESS::~COREACCESS((COREACCESS *)v18);
  }
  v15 = v6;
  v16 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
  if ( *((_DWORD *)v6 + 44) != 1 )
  {
LABEL_11:
    if ( v16 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
    goto LABEL_13;
  }
  IsWindowVisible = ADAPTER_DISPLAY::IsWindowVisible((ADAPTER_DISPLAY *)v6[307], a2);
  if ( IsWindowVisible != -1073741823 )
  {
    if ( !IsWindowVisible )
      goto LABEL_16;
    if ( IsWindowVisible != 261 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v12 + 24) = 2547LL;
      WdLogEvent5_WdAssertion(v12);
    }
    goto LABEL_11;
  }
  v5 = 0;
LABEL_16:
  if ( v16 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
  COREACCESS::~COREACCESS((COREACCESS *)v19);
  COREACCESS::~COREACCESS((COREACCESS *)v18);
LABEL_19:
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  return v5;
}
