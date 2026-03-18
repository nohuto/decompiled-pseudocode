/*
 * XREFs of ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C00F6BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C0006FEC (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00075FC (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0008158 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00AED34 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

void __fastcall DxgkCddSetOrigin(struct DXGADAPTER *a1, unsigned int a2, const struct tagPOINT *const a3)
{
  __int64 v4; // rsi
  int PairingAdapters; // eax
  __int64 v7; // rcx
  __int64 v8; // r14
  ADAPTER_DISPLAY **v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  int **SessionViewOwner; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // r14
  __int64 x; // r9
  LONG y; // r10d
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // ecx
  int v23; // ecx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  struct tagRECT v32; // [rsp+38h] [rbp-19h] BYREF
  __int64 v33; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v34[32]; // [rsp+50h] [rbp-1h] BYREF
  _BYTE v35[40]; // [rsp+70h] [rbp+1Fh] BYREF
  struct DXGADAPTER *v36; // [rsp+D0h] [rbp+7Fh] BYREF

  v4 = a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3014);
  PairingAdapters = DxgkpGetPairingAdapters(a1, v4, 0LL, 0LL, &v36, (unsigned __int64 *)&v32);
  v8 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v28[3] = a1;
    v28[4] = v4;
    v28[5] = v8;
    WdLogEvent5_WdError(v28);
  }
  else
  {
    v9 = (ADAPTER_DISPLAY **)v36;
    if ( !v36 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v29 + 24) = 2341LL;
      WdLogEvent5_WdAssertion(v29);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v33, (struct DXGADAPTER *const)v9, 0LL);
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v9);
    v10 = COREADAPTERACCESS::AcquireExclusive(&v33, 1u);
    v15 = v10;
    if ( v10 < 0 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v11, v13, v14);
      v31[3] = v15;
      v31[4] = v4;
      v31[5] = v9;
      v31[6] = a3->x;
      v31[7] = a3->y;
      WdLogEvent5_WdEvent(v31);
    }
    else
    {
      if ( !v9[288] )
      {
        v30 = WdLogNewEntry5_WdAssertion(v12);
        *(_QWORD *)(v30 + 24) = 2352LL;
        WdLogEvent5_WdAssertion(v30);
      }
      SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v9[288], v4);
      if ( SessionViewOwner )
      {
        *((_DWORD *)SessionViewOwner + 8) += a3->x - *((_DWORD *)SessionViewOwner + 6);
        *((_DWORD *)SessionViewOwner + 6) = a3->x;
        *((_DWORD *)SessionViewOwner + 9) += a3->y - *((_DWORD *)SessionViewOwner + 7);
        *((_DWORD *)SessionViewOwner + 7) = a3->y;
      }
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo((DXGADAPTER **)v9[288], v4);
      x = (unsigned int)a3->x;
      y = a3->y;
      v20 = 3760 * v4;
      v21 = *((_QWORD *)v9[288] + 14);
      v22 = *((_DWORD *)DisplayModeInfo + 7) - 2;
      v32.left = a3->x;
      v32.top = y;
      if ( (v22 & 0xFFFFFFFD) != 0 )
      {
        v32.right = x + *(_DWORD *)(v20 + v21 + 644);
        v23 = *(_DWORD *)(v20 + v21 + 648);
      }
      else
      {
        v32.right = x + *(_DWORD *)(v20 + v21 + 648);
        v23 = *(_DWORD *)(v20 + v21 + 644);
      }
      v24 = (unsigned int)(y + v23);
      v32.bottom = v24;
      v25 = (_QWORD *)WdLogNewEntry5_WdEvent(v24, v20, v21, x);
      v25[3] = v4;
      v25[4] = v9;
      v25[5] = a3->x;
      v25[6] = a3->y;
      v25[7] = *((int *)DisplayModeInfo + 7);
      WdLogEvent5_WdEvent(v25);
      ADAPTER_DISPLAY::SetContentRect(v9[288], v4, &v32);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v35);
    COREACCESS::~COREACCESS((COREACCESS *)v34);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, 3014);
}
