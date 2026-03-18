/*
 * XREFs of ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C00A3A90
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00078FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C000B06C (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000B4C0 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00E90A4 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

void __fastcall DxgkCddSetOrigin(struct DXGADAPTER *a1, unsigned int a2, const struct tagPOINT *const a3)
{
  __int64 v4; // rsi
  int PairingAdapters; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r14
  ADAPTER_DISPLAY **v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r14
  struct SESSION_VIEW *SessionViewOwner; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // r14
  LONG x; // r9d
  LONG y; // r10d
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // ecx
  int v26; // ecx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  struct tagRECT v34; // [rsp+38h] [rbp-19h] BYREF
  __int64 v35; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v36[32]; // [rsp+50h] [rbp-1h] BYREF
  _BYTE v37[40]; // [rsp+70h] [rbp+1Fh] BYREF
  struct DXGADAPTER *v38; // [rsp+D0h] [rbp+7Fh] BYREF

  v4 = a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3014);
  PairingAdapters = DxgkpGetPairingAdapters(a1, v4, 0LL, 0LL, &v38, (unsigned __int64 *)&v34);
  v11 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7);
    v30[3] = a1;
    v30[4] = v4;
    v30[5] = v11;
    WdLogEvent5_WdError(v30);
  }
  else
  {
    v12 = (ADAPTER_DISPLAY **)v38;
    if ( !v38 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      *(_QWORD *)(v31 + 24) = 2306LL;
      WdLogEvent5_WdAssertion(v31);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v35, (struct DXGADAPTER *const)v12, 0LL);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v12);
    v13 = COREADAPTERACCESS::AcquireExclusive(&v35, 1u);
    v18 = v13;
    if ( v13 < 0 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v33[3] = v18;
      v33[4] = v4;
      v33[5] = v12;
      v33[6] = a3->x;
      v33[7] = a3->y;
      WdLogEvent5_WdEvent(v33);
    }
    else
    {
      if ( !v12[285] )
      {
        v32 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
        *(_QWORD *)(v32 + 24) = 2317LL;
        WdLogEvent5_WdAssertion(v32);
      }
      SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v12[285], v4);
      if ( SessionViewOwner )
      {
        *((_DWORD *)SessionViewOwner + 8) += a3->x - *((_DWORD *)SessionViewOwner + 6);
        *((_DWORD *)SessionViewOwner + 6) = a3->x;
        *((_DWORD *)SessionViewOwner + 9) += a3->y - *((_DWORD *)SessionViewOwner + 7);
        *((_DWORD *)SessionViewOwner + 7) = a3->y;
      }
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo((DXGADAPTER **)v12[285], v4);
      x = a3->x;
      y = a3->y;
      v23 = 3208 * v4;
      v24 = *((_QWORD *)v12[285] + 14);
      v25 = *((_DWORD *)DisplayModeInfo + 7) - 2;
      v34.left = a3->x;
      v34.top = y;
      if ( (v25 & 0xFFFFFFFD) != 0 )
      {
        v34.right = x + *(_DWORD *)(v23 + v24 + 644);
        v26 = *(_DWORD *)(v23 + v24 + 648);
      }
      else
      {
        v34.right = x + *(_DWORD *)(v23 + v24 + 648);
        v26 = *(_DWORD *)(v23 + v24 + 644);
      }
      v34.bottom = y + v26;
      v27 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v27[3] = v4;
      v27[4] = v12;
      v27[5] = a3->x;
      v27[6] = a3->y;
      v27[7] = *((int *)DisplayModeInfo + 7);
      WdLogEvent5_WdEvent(v27);
      ADAPTER_DISPLAY::SetContentRect(v12[285], (unsigned int)v4, &v34);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v37);
    COREACCESS::~COREACCESS((COREACCESS *)v36);
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v28, &EventProfilerExit, v29, 3014);
}
