/*
 * XREFs of ?RmpGameModeTryApplyPriorityClass@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180039610
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpGameModeTryApplyPriorityClass(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  char v2; // di
  const GUID *v4; // r9
  void *v5; // rcx
  int v6; // edx
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  int v9; // r10d
  _WORD ProcessInformation[2]; // [rsp+30h] [rbp-29h] BYREF
  NTSTATUS InformationProcess; // [rsp+34h] [rbp-25h] BYREF
  int v13; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  NTSTATUS *p_InformationProcess; // [rsp+60h] [rbp+7h]
  int v16; // [rsp+68h] [rbp+Fh]
  int v17; // [rsp+6Ch] [rbp+13h]
  int *v18; // [rsp+70h] [rbp+17h]
  int v19; // [rsp+78h] [rbp+1Fh]
  int v20; // [rsp+7Ch] [rbp+23h]
  _WORD *v21; // [rsp+80h] [rbp+27h]
  int v22; // [rsp+88h] [rbp+2Fh]
  int v23; // [rsp+8Ch] [rbp+33h]
  char *v24; // [rsp+90h] [rbp+37h]
  int v25; // [rsp+98h] [rbp+3Fh]
  int v26; // [rsp+9Ch] [rbp+43h]

  v2 = *((_BYTE *)a2 + 132);
  if ( v2 )
  {
    InformationProcess = NtQueryInformationProcess(
                           *((HANDLE *)a2 + 5),
                           ProcessPriorityClass,
                           ProcessInformation,
                           2u,
                           0LL);
    LODWORD(v4) = InformationProcess;
    if ( InformationProcess >= 0 )
    {
      v5 = (void *)*((_QWORD *)a2 + 5);
      *((_WORD *)a2 + 76) = ProcessInformation[0];
      HIBYTE(ProcessInformation[0]) = v2;
      LODWORD(v4) = NtSetInformationProcess(v5, ProcessPriorityClass, ProcessInformation, 2u);
      InformationProcess = (int)v4;
    }
  }
  else
  {
    LODWORD(v4) = 255;
    InformationProcess = 255;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v26 = 0;
    p_InformationProcess = &InformationProcess;
    v13 = *((_DWORD *)a2 + 23);
    v18 = &v13;
    v21 = ProcessInformation;
    v24 = (char *)ProcessInformation + 1;
    v16 = v9;
    v19 = v9;
    v22 = v6;
    v25 = v6;
    TlgWrite(v7, &unk_180058260, v8, v4, 6u, &pData);
    LODWORD(v4) = InformationProcess;
  }
  return (unsigned int)v4;
}
