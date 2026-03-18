/*
 * XREFs of ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C00DE150
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0014410 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C001444C (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001569C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0027F38 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00E1694 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetDoDCddShadowSession@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z @ 0x1C0154B90 (-GetDoDCddShadowSession@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z.c)
 */

__int64 __fastcall DxgkCddEnable(
        __int64 a1,
        int a2,
        const struct _CDDDXGK_INTERFACE *a3,
        unsigned int a4,
        const struct _D3DKMT_DISPLAYMODE *a5,
        void **a6,
        unsigned __int64 *a7,
        unsigned int *a8)
{
  __int64 v10; // rbp
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v14; // rcx
  struct DXGPROCESS *v15; // rsi
  char *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // edx
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  unsigned int CddShadowPitch; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  _QWORD *v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rax
  void **v38; // rsi
  unsigned __int64 *v39; // rbx
  __int64 v40; // rax
  void *DoDCddShadowSession; // rax
  unsigned __int64 v42; // rcx
  int v43; // [rsp+30h] [rbp-88h] BYREF
  __int64 v44; // [rsp+38h] [rbp-80h]
  _BYTE v45[8]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v46[32]; // [rsp+48h] [rbp-70h] BYREF
  _BYTE v47[56]; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v48; // [rsp+C8h] [rbp+10h] BYREF

  v44 = 0LL;
  v10 = (unsigned int)a1;
  v43 = 3002;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, (__int64)a3, 3002);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v43, 3002);
  if ( (a2 & 0x40000000) != 0 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v31 + 24) = 418LL;
    WdLogEvent5_WdAssertion(v31);
    LODWORD(v26) = -1073741637;
    goto LABEL_16;
  }
  Current = DXGPROCESS::GetCurrent();
  v15 = Current;
  if ( !Current )
  {
    LODWORD(v26) = -1073741811;
    v32 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v32 + 24) = -1073741811LL;
    *(_QWORD *)(v32 + 32) = PsGetCurrentProcess(v34, v33);
    v35 = (_QWORD *)v32;
LABEL_24:
    WdLogEvent5_WdError(v35);
    goto LABEL_16;
  }
  v16 = (char *)Current + 208;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v17 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v17 < *((_DWORD *)v15 + 62)
    && (v18 = *((_QWORD *)v15 + 29),
        v19 = *(_DWORD *)(v18 + 16 * v17 + 8),
        (((unsigned int)v10 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60))
    && (v19 & 0x2000) == 0
    && (v19 & 0x1F) == 3 )
  {
    v20 = *(_QWORD *)(v18 + 16LL * (unsigned int)v17);
  }
  else
  {
    v20 = 0LL;
  }
  ExReleasePushLockSharedEx(v16, 0LL);
  KeLeaveCriticalRegion();
  if ( !v20 )
  {
    LODWORD(v26) = -1073741811;
    v35 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v35[3] = -1073741811LL;
    v35[4] = v10;
    v35[5] = v15;
    goto LABEL_24;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v45, v20, 1, v22, 0);
  v23 = COREDEVICEACCESS::AcquireExclusive((__int64)v45);
  v26 = v23;
  if ( v23 < 0 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdEvent(v25, v24);
    v36[3] = v26;
    v36[4] = v20;
    v36[5] = v15;
    WdLogEvent5_WdEvent(v36);
  }
  else
  {
    v26 = *(_QWORD *)(v20 + 1688);
    if ( !v26 || (v25 = *(_QWORD *)(v20 + 1688), !*(_QWORD *)(v26 + 2456)) )
    {
      v37 = WdLogNewEntry5_WdAssertion(v25);
      *(_QWORD *)(v37 + 24) = 454LL;
      WdLogEvent5_WdAssertion(v37);
      v25 = *(_QWORD *)(v20 + 1688);
    }
    if ( v25 != *(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) )
    {
      v38 = a6;
      if ( !*a6 && (*(_BYTE *)(v20 + 1709) & 1) == 0 )
      {
        v39 = a7;
        if ( !a7 )
        {
          v40 = WdLogNewEntry5_WdAssertion(v25);
          *(_QWORD *)(v40 + 24) = 472LL;
          WdLogEvent5_WdAssertion(v40);
        }
        if ( ADAPTER_DISPLAY::IsIdenticalMode(*(DXGADAPTER ***)(v26 + 2456), a4) )
        {
          DoDCddShadowSession = ADAPTER_DISPLAY::GetDoDCddShadowSession(*(ADAPTER_DISPLAY **)(v26 + 2456), a4, &v48);
          v42 = v48;
          if ( *v39 > v48 )
          {
            if ( DoDCddShadowSession )
              ObfDereferenceObject(DoDCddShadowSession);
          }
          else
          {
            *v38 = DoDCddShadowSession;
            *v39 = v42;
          }
        }
      }
    }
    CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(*(ADAPTER_DISPLAY **)(v26 + 2456), a4);
    *a8 = CddShadowPitch;
    ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v26 + 2456), a4, 1u);
    ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v26 + 2456), a4, a3);
    LODWORD(v26) = 0;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v47);
  COREACCESS::~COREACCESS((COREACCESS *)v46);
LABEL_16:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v28, &EventProfilerExit, v29, v43);
  return (unsigned int)v26;
}
