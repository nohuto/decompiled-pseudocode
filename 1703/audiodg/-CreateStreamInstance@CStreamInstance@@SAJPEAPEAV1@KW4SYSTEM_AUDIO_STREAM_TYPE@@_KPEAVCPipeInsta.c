/*
 * XREFs of ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@@Z @ 0x14001A350
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140007580 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140043970 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140043F30 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 * Callees:
 *     wil::ScopeExit__lambda_a382b64dc43cf099a98e90d218aab0a0___ @ 0x14001A470 (wil--ScopeExit__lambda_a382b64dc43cf099a98e90d218aab0a0___.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D508 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033E48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033EC4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x14004566C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall CStreamInstance::CreateStreamInstance(_QWORD *a1, DWORD a2, int a3, __int64 a4, __int64 a5)
{
  int v5; // r15d
  unsigned int v6; // ebp
  char *v11; // rbx
  HRESULT v12; // eax
  int v13; // edi
  void *v14; // rdx
  unsigned int v15; // r8d
  const char *v16; // r9
  char *v17; // rax
  char *v18; // rdi
  void **v19; // r14
  void *v20; // r15
  DWORD LastError; // esi
  int v23; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v25; // [rsp+50h] [rbp+8h] BYREF
  char v26; // [rsp+58h] [rbp+10h] BYREF
  char v27; // [rsp+59h] [rbp+11h]

  v6 = 0;
  v23 = v5;
  *a1 = 0LL;
  v11 = 0LL;
  if ( a2 )
  {
    v12 = CoImpersonateClient();
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x27,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v12,
        v23);
LABEL_18:
      v6 = v13;
      goto LABEL_13;
    }
    wil::ScopeExit__lambda_a382b64dc43cf099a98e90d218aab0a0___(&v26);
    v11 = (char *)OpenProcess(0x2000u, 0, a2);
    if ( ((unsigned __int64)(v11 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
      wil::details::in1diag3::_Log_GetLastError(retaddr, v14, v15, v16);
    if ( v27 )
      CoRevertToSelf();
  }
  v17 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v18 = v17;
  if ( !v17 )
  {
    v13 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8007000ELL,
      v23);
    goto LABEL_18;
  }
  *(_QWORD *)v17 = 0LL;
  *((_DWORD *)v17 + 5) = a3;
  v19 = (void **)(v17 + 40);
  *((_QWORD *)v17 + 1) = 0LL;
  *((_WORD *)v17 + 8) = 0;
  *((_QWORD *)v17 + 3) = 0LL;
  *((_QWORD *)v17 + 4) = 0LL;
  *((_QWORD *)v17 + 5) = 0LL;
  *((_QWORD *)v17 + 6) = 0LL;
  *(_QWORD *)v17 = a5;
  *((_QWORD *)v17 + 1) = a4;
  if ( v17 + 40 != &v25 )
  {
    v20 = *v19;
    if ( (char *)*v19 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      LastError = GetLastError();
      CloseHandle(v20);
      SetLastError(LastError);
    }
    *v19 = v11;
    v11 = 0LL;
  }
  *a1 = v18;
LABEL_13:
  if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v11);
  return v6;
}
