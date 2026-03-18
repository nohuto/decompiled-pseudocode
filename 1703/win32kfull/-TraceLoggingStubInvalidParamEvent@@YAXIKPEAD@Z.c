/*
 * XREFs of ?TraceLoggingStubInvalidParamEvent@@YAXIKPEAD@Z @ 0x1C013D7FC
 * Callers:
 *     NtUserfnINDEVICECHANGE @ 0x1C00C6AA0 (NtUserfnINDEVICECHANGE.c)
 *     NtUserfnPOWERBROADCAST @ 0x1C00FD6B0 (NtUserfnPOWERBROADCAST.c)
 *     NtUserfnIMECONTROL @ 0x1C01E1D20 (NtUserfnIMECONTROL.c)
 *     NtUserfnINLPHLPSTRUCT @ 0x1C01E2440 (NtUserfnINLPHLPSTRUCT.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingStubInvalidParamEvent(__int64 a1, __int64 a2, char *a3)
{
  int v4; // edi
  int v5; // ebx
  __int64 CurrentProcessWin32Process; // r8
  unsigned __int128 v7; // rax
  __int64 v8; // rcx
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  int v11; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v13; // [rsp+60h] [rbp+7h]
  int v14; // [rsp+68h] [rbp+Fh]
  int v15; // [rsp+6Ch] [rbp+13h]
  int *v16; // [rsp+70h] [rbp+17h]
  int v17; // [rsp+78h] [rbp+1Fh]
  int v18; // [rsp+7Ch] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+27h] BYREF
  int v20; // [rsp+C0h] [rbp+67h] BYREF

  v20 = a1;
  v4 = a2;
  v5 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  if ( !CurrentProcessWin32Process )
    goto LABEL_6;
  v7 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
  v8 = *(_QWORD *)(CurrentProcessWin32Process + 1016);
  if ( !v8 || (unsigned __int64)(*((_QWORD *)&v7 + 1) - v8) > 0xEA60 )
  {
    *(_QWORD *)(CurrentProcessWin32Process + 1016) = *((_QWORD *)&v7 + 1);
    v5 = 1;
  }
  if ( v5 )
  {
LABEL_6:
    if ( dword_1C0324850 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x400000000000uLL) )
      {
        v15 = 0;
        v18 = 0;
        v13 = &v20;
        v14 = 4;
        v17 = 4;
        v16 = &v11;
        v11 = v4;
        TlgCreateSz(&pDesc, a3);
        TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EAA01, v9, v10, 5u, &pData);
      }
    }
  }
}
