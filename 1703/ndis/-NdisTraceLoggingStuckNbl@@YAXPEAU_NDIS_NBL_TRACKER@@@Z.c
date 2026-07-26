/*
 * XREFs of ?NdisTraceLoggingStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C00777B8
 * Callers:
 *     ?ndisNblTrackerWatchdogTimer@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0010700 (-ndisNblTrackerWatchdogTimer@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0015A3C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0015A70 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingStuckNbl(const struct _TlgProvider_t *a1)
{
  int KeywordAny_low; // r9d
  const struct _TlgProvider_t *v2; // rcx
  const GUID *v3; // r8
  const GUID *v4; // r9
  unsigned __int64 KeywordAll; // rax
  const struct _TlgProvider_t *v6; // rcx
  __int64 v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  __int64 v10; // r10
  unsigned int v11; // eax
  const GUID *v12; // r9
  __int64 v13; // r10
  __int64 v14; // r11
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rax
  const struct _TlgProvider_t *v18; // rcx
  const GUID *v19; // r8
  const GUID *v20; // r9
  __int64 v21; // r10
  _DWORD v22[4]; // [rsp+30h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  _DWORD *v24; // [rsp+60h] [rbp-29h]
  __int64 v25; // [rsp+68h] [rbp-21h]
  _QWORD *v26; // [rsp+70h] [rbp-19h]
  __int64 v27; // [rsp+78h] [rbp-11h]
  _DWORD *v28; // [rsp+80h] [rbp-9h]
  _QWORD v29[2]; // [rsp+88h] [rbp-1h] BYREF
  _DWORD v30[2]; // [rsp+98h] [rbp+Fh] BYREF
  GUID *p_pActivityId; // [rsp+A0h] [rbp+17h]
  __int64 v32; // [rsp+A8h] [rbp+1Fh]
  __int64 v33; // [rsp+B0h] [rbp+27h]
  GUID pActivityId; // [rsp+B8h] [rbp+2Fh] BYREF

  KeywordAny_low = SLOWORD(a1->KeywordAny);
  if ( !LOWORD(a1->KeywordAny) )
  {
LABEL_6:
    if ( (unsigned int)dword_1C0091010 > 5 )
    {
      if ( TlgKeywordOn(a1, 0x400000000000uLL) )
      {
        v22[0] = (_DWORD)v4;
        v24 = v22;
        KeywordAll = v2->KeywordAll;
        v25 = 4LL;
        v26 = (_QWORD *)(KeywordAll + 4032);
        v27 = 16LL;
        TlgWrite(v2, &unk_1C007F7CB, v3, v4, 4u, &pData);
      }
    }
    return;
  }
  if ( KeywordAny_low == 1 )
  {
    if ( *(_QWORD *)(a1->KeywordAll + 16) )
    {
      if ( (unsigned int)dword_1C0091010 > 5 && TlgKeywordOn(a1, 0x400000000000uLL) )
      {
        v22[0] = (_DWORD)v12;
        v24 = v22;
        v25 = 4LL;
        v26 = (_QWORD *)(v13 + 816);
        v27 = 16LL;
        v15 = *(unsigned __int16 *)(v14 + 112);
        v16 = *(_QWORD *)(v14 + 120);
        v28 = v30;
        v29[0] = 2LL;
        v30[0] = v15 & 0xFFFFFFFE;
        v29[1] = v16;
        v30[1] = 0;
        v17 = *(_QWORD *)(v14 + 152);
        pActivityId.Data1 = *(_WORD *)(v14 + 144) & 0xFFFE;
        p_pActivityId = &pActivityId;
        v32 = 2LL;
        v33 = v17;
        *(_DWORD *)&pActivityId.Data2 = 0;
        TlgWrite((TraceLoggingHProvider)pActivityId.Data1, &unk_1C00806FD, &pActivityId, v12, 8u, &pData);
      }
    }
    else if ( (unsigned int)dword_1C0091010 > 5 && TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v22[0] = (_DWORD)v20;
      v24 = v22;
      v26 = (_QWORD *)(v21 + 816);
      v25 = 4LL;
      v27 = 16LL;
      TlgWrite(v18, &unk_1C00808DF, v19, v20, 4u, &pData);
    }
  }
  else
  {
    if ( KeywordAny_low != 2 )
    {
      if ( KeywordAny_low <= 2 || KeywordAny_low > 5 )
        return;
      goto LABEL_6;
    }
    v6 = *(const struct _TlgProvider_t **)(a1->KeywordAll + 24);
    if ( (unsigned int)dword_1C0091010 > 5 && TlgKeywordOn(v6, 0x400000000000uLL) )
    {
      v22[0] = (_DWORD)v9;
      v24 = v22;
      v25 = 4LL;
      v26 = v29;
      v28 = *(_DWORD **)(v7 + 80);
      v11 = *(_WORD *)(v7 + 72) & 0xFFFE;
      v27 = v10;
      v29[0] = v11;
      TlgWrite((TraceLoggingHProvider)v7, &unk_1C00808AE, v8, v9, 5u, &pData);
    }
  }
}
