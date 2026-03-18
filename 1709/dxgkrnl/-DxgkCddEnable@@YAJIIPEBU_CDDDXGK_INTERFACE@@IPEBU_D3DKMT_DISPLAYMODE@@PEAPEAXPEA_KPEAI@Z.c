/*
 * XREFs of ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C00F78A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001CA0 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0006DF8 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C0006E34 (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C00074AC (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00ABA0C (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?GetDoDCddShadowSession@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z @ 0x1C00ADE0C (-GetDoDCddShadowSession@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z.c)
 */

__int64 __fastcall DxgkCddEnable(
        __int64 a1,
        __int64 a2,
        const struct _CDDDXGK_INTERFACE *a3,
        unsigned int a4,
        const struct _D3DKMT_DISPLAYMODE *a5,
        void **a6,
        unsigned __int64 *a7,
        unsigned int *a8)
{
  __int64 v10; // rbp
  int v11; // ebx
  struct DXGPROCESS *Current; // rax
  __int64 v13; // rcx
  struct DXGPROCESS *v14; // rsi
  char *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // edx
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdi
  __int64 v28; // rcx
  unsigned int CddShadowPitch; // eax
  __int64 v30; // rcx
  __int64 v31; // r8
  void **v33; // rsi
  unsigned __int64 *v34; // rbx
  void *DoDCddShadowSession; // rax
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  _BYTE v45[8]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v46[32]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v47[56]; // [rsp+58h] [rbp-50h] BYREF
  unsigned int v48; // [rsp+B8h] [rbp+10h] BYREF

  v10 = (unsigned int)a1;
  v11 = a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, (__int64)a3, 3002);
  if ( (v11 & 0x40000000) != 0 )
  {
    v37 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v37 + 24) = 379LL;
    WdLogEvent5_WdAssertion(v37);
    LODWORD(v27) = -1073741637;
    goto LABEL_17;
  }
  Current = DXGPROCESS::GetCurrent(a1, a2);
  v14 = Current;
  if ( !Current )
  {
    LODWORD(v27) = -1073741811;
    v38 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v38 + 24) = -1073741811LL;
    *(_QWORD *)(v38 + 32) = PsGetCurrentProcess(v40, v39);
    v41 = (_QWORD *)v38;
LABEL_32:
    WdLogEvent5_WdError(v41);
    goto LABEL_17;
  }
  v15 = (char *)Current + 200;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 200));
  v16 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v16 < *((_DWORD *)v14 + 60)
    && (v17 = *((_QWORD *)v14 + 28),
        v18 = *(_DWORD *)(v17 + 16 * v16 + 8),
        (((unsigned int)v10 >> 25) & 0x60) == (*(_BYTE *)(v17 + 16 * v16 + 8) & 0x60))
    && (v18 & 0x2000) == 0
    && (v18 & 0x1F) != 0
    && (*(_BYTE *)(v17 + 16LL * (unsigned int)v16 + 8) & 0x1F) == 3 )
  {
    v19 = *(_QWORD *)(v17 + 16LL * (unsigned int)v16);
  }
  else
  {
    v19 = 0LL;
  }
  ExReleasePushLockSharedEx(v15, 0LL);
  KeLeaveCriticalRegion();
  if ( !v19 )
  {
    LODWORD(v27) = -1073741811;
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v41[3] = -1073741811LL;
    v41[4] = v10;
    v41[5] = v14;
    goto LABEL_32;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v45, v19, 1, v21, 0);
  v22 = COREDEVICEACCESS::AcquireExclusive((__int64)v45, 2LL);
  v27 = v22;
  if ( v22 < 0 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdEvent(v24, v23, v25, v26);
    v42[3] = v27;
    v42[4] = v19;
    v42[5] = v14;
    WdLogEvent5_WdEvent(v42);
  }
  else
  {
    v27 = *(_QWORD *)(v19 + 1672);
    if ( !v27 || !*(_QWORD *)(v27 + 2304) )
    {
      v43 = WdLogNewEntry5_WdAssertion(v24);
      *(_QWORD *)(v43 + 24) = 415LL;
      WdLogEvent5_WdAssertion(v43);
    }
    v28 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL);
    if ( *(_QWORD *)(v19 + 1672) != v28 )
    {
      v33 = a6;
      if ( !*a6 && !*(_BYTE *)(v19 + 1693) )
      {
        v34 = a7;
        if ( !a7 )
        {
          v44 = WdLogNewEntry5_WdAssertion(v28);
          *(_QWORD *)(v44 + 24) = 433LL;
          WdLogEvent5_WdAssertion(v44);
        }
        if ( ADAPTER_DISPLAY::IsIdenticalMode(*(DXGADAPTER ***)(v27 + 2304), a4) )
        {
          DoDCddShadowSession = ADAPTER_DISPLAY::GetDoDCddShadowSession(*(DXGADAPTER ***)(v27 + 2304), a4, &v48);
          v36 = v48;
          if ( *v34 > v48 )
          {
            if ( DoDCddShadowSession )
              ObfDereferenceObject(DoDCddShadowSession);
          }
          else
          {
            *v33 = DoDCddShadowSession;
            *v34 = v36;
          }
        }
      }
    }
    CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(*(ADAPTER_DISPLAY **)(v27 + 2304), a4);
    *a8 = CddShadowPitch;
    ADAPTER_DISPLAY::SetPartOfDesktop(*(PERESOURCE ***)(v27 + 2304), a4, 1);
    ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v27 + 2304), a4, a3);
    LODWORD(v27) = 0;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v47);
  COREACCESS::~COREACCESS((COREACCESS *)v46);
LABEL_17:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v30, &EventProfilerExit, v31, 3002);
  return (unsigned int)v27;
}
