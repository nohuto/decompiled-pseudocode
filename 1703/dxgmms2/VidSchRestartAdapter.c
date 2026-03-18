/*
 * XREFs of VidSchRestartAdapter @ 0x1C00AC670
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0021DD8 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0021E0C (_TlgWrite.c)
 *     VidSchResetFlipQueueTimeout @ 0x1C00AA5D8 (VidSchResetFlipQueueTimeout.c)
 *     VidSchResetGPUTimeout @ 0x1C00AA620 (VidSchResetGPUTimeout.c)
 */

__int64 __fastcall VidSchRestartAdapter(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned __int16 *v4; // rax
  LPCGUID v5; // r9
  unsigned int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rcx
  int v10; // [rsp+30h] [rbp-69h] BYREF
  __int64 v11; // [rsp+38h] [rbp-61h] BYREF
  __int64 v12; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  __int64 *v14; // [rsp+70h] [rbp-29h]
  __int64 v15; // [rsp+78h] [rbp-21h]
  _DWORD *v16; // [rsp+80h] [rbp-19h]
  __int64 v17; // [rsp+88h] [rbp-11h]
  __int64 v18; // [rsp+90h] [rbp-9h]
  _DWORD v19[2]; // [rsp+98h] [rbp-1h] BYREF
  __int64 *v20; // [rsp+A0h] [rbp+7h]
  __int64 v21; // [rsp+A8h] [rbp+Fh]
  int *v22; // [rsp+B0h] [rbp+17h]
  __int64 v23; // [rsp+B8h] [rbp+1Fh]
  __int64 v24; // [rsp+C0h] [rbp+27h]
  __int64 v25; // [rsp+C8h] [rbp+2Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp+37h] BYREF

  if ( hProvider > 5u
    && (qword_1C003C010 & 0x400000000010LL) != 0
    && (qword_1C003C018 & 0x400000000010LL) == qword_1C003C018 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v3 = *(_QWORD *)(a1 + 2824);
    v11 = *(_QWORD *)(v2 + 268);
    v14 = &v11;
    v15 = 8LL;
    v4 = *(unsigned __int16 **)(v2 + 1224);
    v16 = v19;
    v17 = 2LL;
    LODWORD(v2) = *v4;
    v18 = *((_QWORD *)v4 + 1);
    v20 = &v12;
    v10 = *(_DWORD *)(a1 + 2840);
    v22 = &v10;
    v19[0] = v2;
    v24 = v3 + 2808;
    v19[1] = 0;
    v12 = v3;
    v21 = 8LL;
    v23 = 4LL;
    v25 = 8LL;
    TlgCreateSz(&pDesc, *(LPCSTR *)(v3 + 96));
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0030665, 0LL, v5, 9u, &pData);
  }
  *(_BYTE *)(a1 + 2844) &= ~4u;
  v6 = 0;
  *(_QWORD *)(a1 + 2824) = 0LL;
  *(_DWORD *)(a1 + 2820) = 0;
  *(_QWORD *)(a1 + 376) = 0LL;
  for ( *(_QWORD *)(a1 + 384) = 0LL; v6 < *(_DWORD *)(a1 + 60); *(_QWORD *)(*(_QWORD *)(a1 + 8 * v7 + 416) + 40LL) = 0LL )
    v7 = v6++;
  *(_QWORD *)(a1 + 2832) = 0LL;
  VidSchResetFlipQueueTimeout(a1);
  VidSchResetGPUTimeout(v8);
  DpiSetSchedulerCallbackState(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 192LL), 3LL);
  return 0LL;
}
