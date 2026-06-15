/*
 * XREFs of ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@@Z @ 0x140001B60
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140005A10 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140042C60 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400431D0 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1400447FC (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
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
  void *v20; // r13
  __int64 v22; // r9
  __int64 v23; // rdx
  DWORD LastError; // esi
  int v25; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v27; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  v25 = v5;
  *a1 = 0LL;
  v11 = 0LL;
  if ( a2 )
  {
    v12 = CoImpersonateClient();
    v13 = v12;
    if ( v12 < 0 )
    {
      v22 = (unsigned int)v12;
      v23 = 40LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)v22,
        v25);
      v6 = v13;
      goto LABEL_12;
    }
    v11 = (char *)OpenProcess(0x2000u, 0, a2);
    if ( ((unsigned __int64)(v11 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
      wil::details::in1diag3::_Log_GetLastError(retaddr, v14, v15, v16);
    CoRevertToSelf();
  }
  v17 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v18 = v17;
  if ( !v17 )
  {
    v13 = -2147024882;
    v23 = 55LL;
    v22 = 2147942414LL;
    goto LABEL_17;
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
  if ( v17 + 40 != &v27 )
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
LABEL_12:
  if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v11);
  return v6;
}
