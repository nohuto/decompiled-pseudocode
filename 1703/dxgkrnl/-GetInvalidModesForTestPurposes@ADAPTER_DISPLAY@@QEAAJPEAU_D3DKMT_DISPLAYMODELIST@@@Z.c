/*
 * XREFs of ?GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z @ 0x1C017179C
 * Callers:
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0001C48 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetInvalidModesForTestPurposes(
        ADAPTER_DISPLAY *this,
        struct _D3DKMT_DISPLAYMODELIST *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 VidPnSourceId; // rax
  __int64 v11; // r9
  __int64 v12; // rax
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (ADAPTER_DISPLAY *)((char *)this + 136), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v7 = *((_QWORD *)this + 22);
  v8 = 0;
  if ( v7 )
  {
    VidPnSourceId = a2->VidPnSourceId;
    if ( (unsigned int)VidPnSourceId < *((_DWORD *)this + 20) )
    {
      v11 = 3 * VidPnSourceId;
      v12 = *(unsigned int *)(v7 + 24 * VidPnSourceId + 16);
      if ( a2->ModeCount >= (unsigned int)v12 )
      {
        memmove(a2->pModeList, *(const void **)(v7 + 8 * v11 + 8), 44 * v12);
        a2->ModeCount = *(_DWORD *)(*((_QWORD *)this + 22) + 24LL * a2->VidPnSourceId + 16);
      }
      else
      {
        a2->ModeCount = v12;
        v8 = 1075707914;
      }
    }
    else
    {
      v8 = -1073741811;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v6, 0LL);
    *(_QWORD *)(v9 + 24) = 6914LL;
    WdLogEvent5_WdError(v9);
    v8 = -1073741709;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
  return v8;
}
