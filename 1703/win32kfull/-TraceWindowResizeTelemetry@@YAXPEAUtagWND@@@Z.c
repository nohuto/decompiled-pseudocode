/*
 * XREFs of ?TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z @ 0x1C01F12F8
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F33EC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C0105170 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     GetProcessImageFileName @ 0x1C024A46C (GetProcessImageFileName.c)
 *     GreGetWindowResizeTelemetry @ 0x1C024E3D4 (GreGetWindowResizeTelemetry.c)
 */

void __fastcall TraceWindowResizeTelemetry(HWND *a1)
{
  HWND *v1; // rbx
  __int64 ProcessImageFileName; // rax
  __int64 v3; // rbx
  const WCHAR *v4; // r9
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  int v7; // [rsp+40h] [rbp-59h] BYREF
  int v8; // [rsp+44h] [rbp-55h] BYREF
  int v9; // [rsp+48h] [rbp-51h] BYREF
  char v10; // [rsp+4Ch] [rbp-4Dh] BYREF
  HANDLE ProcessHandle; // [rsp+50h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-19h] BYREF
  int *v14; // [rsp+90h] [rbp-9h]
  int v15; // [rsp+98h] [rbp-1h]
  int v16; // [rsp+9Ch] [rbp+3h]
  int *v17; // [rsp+A0h] [rbp+7h]
  int v18; // [rsp+A8h] [rbp+Fh]
  int v19; // [rsp+ACh] [rbp+13h]
  int *v20; // [rsp+B0h] [rbp+17h]
  int v21; // [rsp+B8h] [rbp+1Fh]
  int v22; // [rsp+BCh] [rbp+23h]
  char *v23; // [rsp+C0h] [rbp+27h]
  int v24; // [rsp+C8h] [rbp+2Fh]
  int v25; // [rsp+CCh] [rbp+33h]

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
           **((PVOID **)v1[2] + 47),
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
        if ( dword_1C0324850 > 5u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x400000000000uLL) )
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
            TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EBD3D, v5, v6, 7u, &pData);
          }
        }
        FreeTmpBuffer(v3);
      }
      ZwClose(ProcessHandle);
    }
  }
}
