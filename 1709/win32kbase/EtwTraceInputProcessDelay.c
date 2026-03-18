/*
 * XREFs of EtwTraceInputProcessDelay @ 0x1C00E03A0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C009D264 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ValidateHwnd @ 0x1C00476D0 (ValidateHwnd.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x1C00DF8A4 (-EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C00DF910 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00DF944 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     McTemplateK0qqqzzzqx @ 0x1C00E3F1C (McTemplateK0qqqzzzqx.c)
 *     McTemplateK0qqqzzzzqx @ 0x1C00E4078 (McTemplateK0qqqzzzzqx.c)
 */

void __fastcall EtwTraceInputProcessDelay(struct tagTHREADINFO *a1)
{
  int ThreadInfoFlags; // esi
  PWSTR Buffer; // rbx
  PWSTR v5; // rdi
  struct tagWND *v6; // rax
  struct tagWND *v7; // r15
  struct tagWND *v8; // rax
  int v9; // r12d
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // rcx
  PACCESS_TOKEN v13; // r14
  int v14; // eax
  const WCHAR *v15; // rdx
  const WCHAR *v16; // rcx
  PEPROCESS ThreadProcess; // rax
  ULONG64 v18; // rdx
  int v19; // ecx
  ULONG64 v20; // r9
  ULONG64 v21; // r8
  unsigned int v22; // [rsp+60h] [rbp-258h] BYREF
  unsigned int v23; // [rsp+64h] [rbp-254h] BYREF
  int v24; // [rsp+68h] [rbp-250h]
  int v25; // [rsp+6Ch] [rbp-24Ch]
  int v26; // [rsp+70h] [rbp-248h]
  PWSTR v27; // [rsp+78h] [rbp-240h]
  PWSTR v28; // [rsp+80h] [rbp-238h]
  __int64 v29; // [rsp+88h] [rbp-230h] BYREF
  _QWORD v30[4]; // [rsp+90h] [rbp-228h] BYREF
  int v31; // [rsp+B0h] [rbp-208h] BYREF
  __int64 v32; // [rsp+B8h] [rbp-200h]
  struct _UNICODE_STRING UnicodeString; // [rsp+C0h] [rbp-1F8h] BYREF
  struct _UNICODE_STRING v34; // [rsp+D0h] [rbp-1E8h] BYREF
  _BYTE v35[144]; // [rsp+F0h] [rbp-1C8h] BYREF
  _BYTE v36[256]; // [rsp+180h] [rbp-138h] BYREF

  if ( (*(_QWORD *)&WPP_MAIN_CB.SectorSize & 0x8001000000040000uLL) == 0 )
    return;
  if ( (unsigned __int8)(byte_1C0188DA8 - 1) <= 2u
    || (qword_1C0188D90 & 0x8001000000040000uLL) == 0
    || (qword_1C0188D98 & 0x8001000000040000uLL) != qword_1C0188D98 )
  {
    return;
  }
  EtwpGetLastInputProcessTime(
    *((struct tagQ *const *)a1 + 51),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
    &v23,
    &v22);
  if ( v23 < W32kEtwInputProcessDelayTimeoutMs )
    return;
  if ( v22 < W32kEtwInputProcessDelayTimeoutMs )
    return;
  ThreadInfoFlags = EtwpGetThreadInfoFlags(a1);
  v25 = ThreadInfoFlags;
  if ( (ThreadInfoFlags & 3) == 0 || (ThreadInfoFlags & 8) == 0 && (ThreadInfoFlags & 0x20) == 0 )
    return;
  Buffer = 0LL;
  v28 = 0LL;
  v5 = 0LL;
  v27 = 0LL;
  v6 = (struct tagWND *)ValidateHwnd(*((void **)a1 + 142));
  v7 = v6;
  if ( v6 )
  {
    if ( (int)EtwpGetClassName(v6, &UnicodeString) >= 0 )
      Buffer = UnicodeString.Buffer;
    v28 = Buffer;
    v8 = (int)Is_GetTopLevelWindowSupported() < 0 ? 0LL : (struct tagWND *)_GetTopLevelWindow(v7);
    if ( v8 )
    {
      if ( v7 == v8 )
      {
        v5 = Buffer;
        goto LABEL_24;
      }
      if ( (int)EtwpGetClassName(v8, &v34) >= 0 )
      {
        v5 = v34.Buffer;
LABEL_24:
        v27 = v5;
      }
    }
  }
  v9 = *((_DWORD *)a1 + 286);
  v26 = v9;
  v10 = *((_QWORD *)a1 + 144);
  v30[2] = v10;
  v11 = 0LL;
  v12 = *((_QWORD *)a1 + 50);
  if ( (*(_DWORD *)(v12 + 776) & 0x30) == 0x10 )
  {
    v13 = PsReferencePrimaryToken(*(PEPROCESS *)v12);
    v30[0] = 256LL;
    v29 = 130LL;
    v14 = RtlQueryPackageIdentity(v13, v36, v30, v35, &v29, 0LL);
    if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
    {
      v15 = (const WCHAR *)v35;
      if ( v14 < 0 )
        v15 = &word_1C0160290;
      v16 = (const WCHAR *)v36;
      if ( v14 < 0 )
        v16 = &word_1C0160290;
      McTemplateK0qqqzzzzqx(
        (_DWORD)v16,
        (_DWORD)v15,
        (unsigned int)&word_1C0160290,
        ThreadInfoFlags,
        v23,
        v22,
        (__int64)Buffer,
        (__int64)v5,
        (__int64)v16,
        (__int64)v15,
        v9,
        v10);
    }
    PsDereferencePrimaryToken(v13);
  }
  else
  {
    ThreadProcess = PsGetThreadProcess(*(PETHREAD *)a1);
    v18 = *(_QWORD *)(PsGetProcessPeb(ThreadProcess) + 32) + 96LL;
    if ( v18 >= MmUserProbeAddress )
      v18 = MmUserProbeAddress;
    v19 = *(_DWORD *)v18;
    v24 = v19;
    v31 = v19;
    v20 = *(_QWORD *)(v18 + 8);
    v32 = v20;
    if ( (v20 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v21 = v20 + (unsigned __int16)v19 + 2LL;
    if ( v21 >= MmUserProbeAddress || (unsigned __int16)v19 > HIWORD(v24) || (v19 & 1) != 0 || v21 <= v20 )
      *(_BYTE *)MmUserProbeAddress = 0;
    v30[1] = &v31;
    if ( &v31 )
      v11 = v32;
    if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
      McTemplateK0qqqzzzqx(
        v19,
        MmUserProbeAddress,
        v21,
        ThreadInfoFlags,
        v23,
        v22,
        (__int64)Buffer,
        (__int64)v5,
        v11,
        v9,
        v10);
  }
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v5 )
  {
    if ( Buffer != v5 )
      RtlFreeUnicodeString(&v34);
  }
}
