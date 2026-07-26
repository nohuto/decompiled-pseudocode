/*
 * XREFs of ?NdisTraceLoggingStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C00795F0
 * Callers:
 *     ?ndisNblTrackerWatchdogTimer@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C001AFF0 (-ndisNblTrackerWatchdogTimer@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0011DA8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0012B70 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingStuckNbl(struct _NDIS_NBL_TRACKER *a1)
{
  int v1; // r9d
  const GUID *v2; // r8
  const GUID *v3; // r9
  __int64 v4; // r10
  __int64 v5; // rax
  const GUID *v6; // r8
  const GUID *v7; // r9
  __int64 v8; // r10
  __int64 v9; // r11
  unsigned int v10; // eax
  const GUID *v11; // r9
  __int64 v12; // r10
  __int64 v13; // r11
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rax
  const GUID *v17; // r8
  const GUID *v18; // r9
  __int64 v19; // r11
  _DWORD v20[4]; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  _DWORD *v22; // [rsp+60h] [rbp-19h]
  __int64 v23; // [rsp+68h] [rbp-11h]
  _QWORD *v24; // [rsp+70h] [rbp-9h]
  __int64 v25; // [rsp+78h] [rbp-1h]
  _DWORD *v26; // [rsp+80h] [rbp+7h]
  _QWORD v27[2]; // [rsp+88h] [rbp+Fh] BYREF
  _DWORD v28[2]; // [rsp+98h] [rbp+1Fh] BYREF
  GUID *p_pActivityId; // [rsp+A0h] [rbp+27h]
  __int64 v30; // [rsp+A8h] [rbp+2Fh]
  __int64 v31; // [rsp+B0h] [rbp+37h]
  GUID pActivityId; // [rsp+B8h] [rbp+3Fh] BYREF

  v1 = *((__int16 *)a1 + 8);
  if ( !*((_WORD *)a1 + 8) )
  {
LABEL_6:
    if ( hProvider.LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(&hProvider, 0x400000000000uLL) )
      {
        v20[0] = (_DWORD)v3;
        v22 = v20;
        v5 = *(_QWORD *)(v4 + 24);
        v23 = 4LL;
        v24 = (_QWORD *)(v5 + 4032);
        v25 = 16LL;
        TlgWrite(&hProvider, &unk_1C00845C2, v2, v3, 4u, &pData);
      }
    }
    return;
  }
  if ( v1 == 1 )
  {
    if ( *((_QWORD *)a1->Context + 2) )
    {
      if ( hProvider.LevelPlus1 > 5 && TlgKeywordOn(&hProvider, 0x400000000000uLL) )
      {
        v20[0] = (_DWORD)v11;
        v22 = v20;
        v23 = 4LL;
        v24 = (_QWORD *)(v13 + 816);
        v25 = 16LL;
        v14 = *(unsigned __int16 *)(v12 + 112);
        v15 = *(_QWORD *)(v12 + 120);
        v26 = v28;
        v27[0] = 2LL;
        v28[0] = v14 & 0xFFFFFFFE;
        v27[1] = v15;
        v28[1] = 0;
        v16 = *(_QWORD *)(v12 + 152);
        pActivityId.Data1 = *(_WORD *)(v12 + 144) & 0xFFFE;
        p_pActivityId = &pActivityId;
        v30 = 2LL;
        v31 = v16;
        *(_DWORD *)&pActivityId.Data2 = 0;
        TlgWrite(&hProvider, &unk_1C0085322, &pActivityId, v11, 8u, &pData);
      }
    }
    else if ( hProvider.LevelPlus1 > 5 && TlgKeywordOn(&hProvider, 0x400000000000uLL) )
    {
      v20[0] = (_DWORD)v18;
      v22 = v20;
      v24 = (_QWORD *)(v19 + 816);
      v23 = 4LL;
      v25 = 16LL;
      TlgWrite(&hProvider, &unk_1C0085504, v17, v18, 4u, &pData);
    }
  }
  else
  {
    if ( v1 != 2 )
    {
      if ( v1 <= 2 || v1 > 5 )
        return;
      goto LABEL_6;
    }
    if ( hProvider.LevelPlus1 > 5 && TlgKeywordOn(&hProvider, 0x400000000000uLL) )
    {
      v20[0] = (_DWORD)v7;
      v22 = v20;
      v23 = 4LL;
      v24 = v27;
      v26 = *(_DWORD **)(v8 + 80);
      v10 = *(_WORD *)(v8 + 72) & 0xFFFE;
      v25 = v9;
      v27[0] = v10;
      TlgWrite(&hProvider, &unk_1C00854D3, v6, v7, 5u, &pData);
    }
  }
}
