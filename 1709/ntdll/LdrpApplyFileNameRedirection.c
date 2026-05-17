/*
 * XREFs of LdrpApplyFileNameRedirection @ 0x180031AA8
 * Callers:
 *     LdrpPreprocessDllName @ 0x1800318FC (LdrpPreprocessDllName.c)
 * Callees:
 *     RtlGetNtSystemRoot @ 0x1800179D0 (RtlGetNtSystemRoot.c)
 *     LdrpLogDllState @ 0x180031CA8 (LdrpLogDllState.c)
 *     ApiSetResolveToHost @ 0x180031CFC (ApiSetResolveToHost.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180031E0C (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180032660 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     LdrpGetFullPath @ 0x18004DD58 (LdrpGetFullPath.c)
 *     LdrpFreeUnicodeString @ 0x18004F9BC (LdrpFreeUnicodeString.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 */

__int64 __fastcall LdrpApplyFileNameRedirection(__int64 a1, __int64 a2, __int64 a3, _WORD *a4, _BYTE *a5)
{
  struct _PEB *v5; // r13
  _BYTE *v7; // r12
  __int64 v9; // rsi
  void *ApiSetMap; // rdi
  char v11; // bp
  int v12; // eax
  __int16 v13; // di
  int appended; // ebx
  char v15; // r15
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // edi
  const WCHAR *NtSystemRoot; // rax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  _WORD v24[8]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v25[16]; // [rsp+60h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-38h] BYREF
  __int64 v27; // [rsp+C0h] [rbp+18h] BYREF

  v27 = a3;
  v5 = NtCurrentPeb();
  v7 = a5;
  v9 = a2;
  ApiSetMap = v5->ApiSetMap;
  v11 = 1;
  *a5 = 0;
  LdrpLogDllState(0LL, a2, 5328LL);
  v12 = ApiSetResolveToHost((_DWORD)ApiSetMap, v9, a1 != 0 ? a1 + 88 : 0, (unsigned int)&v27, (__int64)v24);
  v13 = v24[0];
  appended = v12;
  v15 = v27;
  if ( v12 >= 0 && (_BYTE)v27 )
  {
    v17 = v9;
    if ( v24[0] )
      v16 = 5329LL;
    else
      v16 = 5330LL;
  }
  else
  {
    v16 = 5331LL;
    v17 = v9;
  }
  LdrpLogDllState(0LL, v17, v16);
  if ( v15 )
  {
    if ( v13 )
    {
      *a4 = 0;
      NtSystemRoot = (const WCHAR *)RtlGetNtSystemRoot(v19, v18);
      RtlInitUnicodeString(&DestinationString, NtSystemRoot);
      LdrpAppendUnicodeStringToFilenameBuffer(a4, &DestinationString);
      LdrpAppendUnicodeStringToFilenameBuffer(a4, &SlashSystem32SlashString);
      appended = LdrpAppendUnicodeStringToFilenameBuffer(a4, v24);
      if ( appended >= 0 )
      {
        ProcessParameters = v5->ProcessParameters;
        if ( !ProcessParameters || (v11 = 1, (ProcessParameters->Flags & 0x1000) == 0) )
          v11 = 0;
        LODWORD(v9) = (_DWORD)a4;
      }
    }
    else
    {
      appended = -1073740671;
    }
  }
  if ( appended >= 0 && v11 && !LdrpIsSecureProcess )
  {
    v20 = RtlDosApplyFileIsolationRedirection_Ustr(1, v9, (unsigned int)L"\b\n", 0, (__int64)v25, 0LL, 0LL, 0LL, 0LL);
    if ( v20 >= 0 )
    {
      *v7 = 1;
      LdrpGetFullPath(v25, a4);
      LdrpFreeUnicodeString(v25);
    }
    if ( v20 != -1072365560 )
      return (unsigned int)v20;
  }
  return (unsigned int)appended;
}
