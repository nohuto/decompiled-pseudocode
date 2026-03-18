/*
 * XREFs of ?TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z @ 0x1C01D9024
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01DAD48 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00414C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00438A0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     GetProcessImageFileName @ 0x1C024BD84 (GetProcessImageFileName.c)
 *     GreGetWindowResizeTelemetry @ 0x1C024FE48 (GreGetWindowResizeTelemetry.c)
 */

void __fastcall TraceWindowResizeTelemetry(HWND *a1)
{
  HWND *v1; // rbx
  __int64 ProcessImageFileName; // rax
  __int64 v3; // rbx
  const WCHAR *v4; // r9
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  int v7; // [rsp+40h] [rbp-49h] BYREF
  int v8; // [rsp+44h] [rbp-45h] BYREF
  int v9; // [rsp+48h] [rbp-41h] BYREF
  char v10; // [rsp+4Ch] [rbp-3Dh] BYREF
  HANDLE ProcessHandle; // [rsp+50h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-9h] BYREF
  int *v14; // [rsp+90h] [rbp+7h]
  int v15; // [rsp+98h] [rbp+Fh]
  int v16; // [rsp+9Ch] [rbp+13h]
  int *v17; // [rsp+A0h] [rbp+17h]
  int v18; // [rsp+A8h] [rbp+1Fh]
  int v19; // [rsp+ACh] [rbp+23h]
  int *v20; // [rsp+B0h] [rbp+27h]
  int v21; // [rsp+B8h] [rbp+2Fh]
  int v22; // [rsp+BCh] [rbp+33h]
  char *v23; // [rsp+C0h] [rbp+37h]
  int v24; // [rsp+C8h] [rbp+3Fh]
  int v25; // [rsp+CCh] [rbp+43h]

  v1 = a1;
  if ( (unsigned int)GreGetWindowResizeTelemetry(*a1) )
  {
    v9 = 0;
    if ( *((char *)v1 + 306) < 0 )
    {
      v1 = (HWND *)v1[14];
      v9 = 1;
      if ( !v1 )
        return;
      do
      {
        if ( (*((_BYTE *)v1 + 307) & 2) != 0 )
          break;
        v1 = (HWND *)v1[11];
      }
      while ( v1 );
    }
    if ( v1
      && ObOpenObjectByPointer(
           **((PVOID **)v1[2] + 50),
           0x200u,
           0LL,
           0x400u,
           (POBJECT_TYPE)PsProcessType,
           0,
           &ProcessHandle) >= 0 )
    {
      ProcessImageFileName = GetProcessImageFileName(ProcessHandle);
      v3 = ProcessImageFileName;
      if ( ProcessImageFileName )
      {
        wcsrchr(*(const wchar_t **)(ProcessImageFileName + 8), 0x5Cu);
        if ( hProvider > 5u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
          {
            TlgCreateWsz(&pDesc, v4);
            v16 = 0;
            v19 = 0;
            v22 = 0;
            v25 = 0;
            v17 = &v7;
            v20 = &v8;
            v23 = &v10;
            v14 = &v9;
            v15 = 4;
            v18 = 4;
            v21 = 4;
            v24 = 4;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E889C, v5, v6, 7u, &pData);
          }
        }
        FreeTmpBuffer(v3);
      }
      ZwClose(ProcessHandle);
    }
  }
}
