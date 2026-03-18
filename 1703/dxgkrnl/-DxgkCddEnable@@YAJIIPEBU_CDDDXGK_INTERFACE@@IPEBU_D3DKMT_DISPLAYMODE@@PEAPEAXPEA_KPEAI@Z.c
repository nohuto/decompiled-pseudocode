/*
 * XREFs of ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C00A4AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0005AB8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C000AEF4 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C000AF30 (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0022E14 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00E6420 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?GetDoDCddShadowSession@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z @ 0x1C0171650 (-GetDoDCddShadowSession@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z.c)
 */

__int64 __fastcall DxgkCddEnable(
        __int64 a1,
        __int64 a2,
        const struct _CDDDXGK_INTERFACE *a3,
        __int64 a4,
        const struct _D3DKMT_DISPLAYMODE *a5,
        void **a6,
        unsigned __int64 *a7,
        unsigned int *a8)
{
  unsigned int v8; // r14d
  __int64 v10; // rbp
  int v11; // ebx
  struct DXGPROCESS *Current; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGPROCESS *v15; // rsi
  char *v16; // rdi
  unsigned int v17; // edx
  __int64 v18; // r9
  int v19; // r8d
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdi
  __int64 v30; // rcx
  unsigned int CddShadowPitch; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v35; // rax
  __int64 v36; // rbx
  _QWORD *v37; // rcx
  _QWORD *v38; // rax
  __int64 v39; // rax
  void **v40; // rsi
  unsigned __int64 *v41; // rbx
  __int64 v42; // rax
  void *DoDCddShadowSession; // rax
  unsigned __int64 v44; // rcx
  _BYTE v45[8]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v46[32]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v47[56]; // [rsp+58h] [rbp-50h] BYREF
  unsigned int v48; // [rsp+B8h] [rbp+10h] BYREF

  v8 = a4;
  v10 = (unsigned int)a1;
  v11 = a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, (__int64)a3, 3002);
  if ( (v11 & 0x40000000) != 0 )
  {
    v35 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v35 + 24) = 384LL;
    WdLogEvent5_WdAssertion(v35);
    LODWORD(v29) = -1073741637;
    goto LABEL_17;
  }
  Current = DXGPROCESS::GetCurrent();
  v15 = Current;
  if ( !Current )
  {
    LODWORD(v29) = -1073741811;
    v36 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v36 + 24) = -1073741811LL;
    *(_QWORD *)(v36 + 32) = PsGetCurrentProcess();
    v37 = (_QWORD *)v36;
LABEL_25:
    WdLogEvent5_WdError(v37);
    goto LABEL_17;
  }
  v16 = (char *)Current + 168;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 168));
  v17 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
  if ( v17 < *((_DWORD *)v15 + 52)
    && (v18 = *((_QWORD *)v15 + 24),
        v19 = *(_DWORD *)(v18 + 16LL * v17 + 8),
        (((unsigned int)v10 >> 26) & 0x30) == (*(_BYTE *)(v18 + 16LL * v17 + 8) & 0x30))
    && (v19 & 0x1000) == 0
    && (v19 & 0xF) != 0
    && (*(_BYTE *)(v18 + 16LL * v17 + 8) & 0xF) == 3 )
  {
    v20 = *(_QWORD *)(v18 + 16LL * v17);
  }
  else
  {
    v20 = 0LL;
  }
  ExReleasePushLockSharedEx(v16, 0LL);
  KeLeaveCriticalRegion();
  if ( !v20 )
  {
    LODWORD(v29) = -1073741811;
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
    v37[3] = -1073741811LL;
    v37[4] = v10;
    v37[5] = v15;
    goto LABEL_25;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v45, v20, 1LL, v23, 0);
  v24 = COREDEVICEACCESS::AcquireExclusive((__int64)v45, 2LL);
  v29 = v24;
  if ( v24 < 0 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v38[3] = v29;
    v38[4] = v20;
    v38[5] = v15;
    WdLogEvent5_WdEvent(v38);
  }
  else
  {
    v29 = *(_QWORD *)(v20 + 1800);
    if ( !v29 || !*(_QWORD *)(v29 + 2280) )
    {
      v39 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
      *(_QWORD *)(v39 + 24) = 420LL;
      WdLogEvent5_WdAssertion(v39);
    }
    v30 = *(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL);
    if ( *(_QWORD *)(v20 + 1800) != v30 )
    {
      v40 = a6;
      if ( !*a6 && !*(_BYTE *)(v20 + 1821) )
      {
        v41 = a7;
        if ( !a7 )
        {
          v42 = WdLogNewEntry5_WdAssertion(v30, v25, v27, v28);
          *(_QWORD *)(v42 + 24) = 438LL;
          WdLogEvent5_WdAssertion(v42);
        }
        if ( ADAPTER_DISPLAY::IsIdenticalMode(*(DXGADAPTER ***)(v29 + 2280), v8) )
        {
          DoDCddShadowSession = ADAPTER_DISPLAY::GetDoDCddShadowSession(*(ADAPTER_DISPLAY **)(v29 + 2280), v8, &v48);
          v44 = v48;
          if ( *v41 > v48 )
          {
            if ( DoDCddShadowSession )
              ObfDereferenceObject(DoDCddShadowSession);
          }
          else
          {
            *v40 = DoDCddShadowSession;
            *v41 = v44;
          }
        }
      }
    }
    CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(*(ADAPTER_DISPLAY **)(v29 + 2280), v8, v27, v28);
    *a8 = CddShadowPitch;
    ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v29 + 2280), v8, 1u);
    ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v29 + 2280), v8, a3);
    LODWORD(v29) = 0;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v47);
  COREACCESS::~COREACCESS((COREACCESS *)v46);
LABEL_17:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v32, &EventProfilerExit, v33, 3002);
  return (unsigned int)v29;
}
