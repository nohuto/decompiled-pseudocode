/*
 * XREFs of EtwTraceInputProcessDelay @ 0x1C004A470
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00482A0 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ValidateHwnd @ 0x1C00715E0 (ValidateHwnd.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x1C00D95C0 (-EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C00D962C (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00D965C (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     Template_qqqzzzqx @ 0x1C00DD524 (Template_qqqzzzqx.c)
 *     Template_qqqzzzzqx @ 0x1C00DD694 (Template_qqqzzzzqx.c)
 */

void __fastcall EtwTraceInputProcessDelay(struct tagQ **a1)
{
  unsigned int ThreadInfoFlags; // esi
  PWSTR Buffer; // rbx
  PWSTR v5; // rdi
  struct tagWND *v6; // rax
  struct tagWND *v7; // r15
  struct tagWND *v8; // rax
  int v9; // r12d
  struct tagQ *v10; // r13
  __int64 v11; // r15
  struct tagQ *v12; // rcx
  PACCESS_TOKEN v13; // r14
  int v14; // eax
  const WCHAR *v15; // rdx
  const WCHAR *v16; // rcx
  PEPROCESS ThreadProcess; // rax
  CTouchProcessor *v18; // rdx
  int v19; // ecx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rdx
  unsigned int v22; // [rsp+60h] [rbp-258h] BYREF
  unsigned int v23; // [rsp+64h] [rbp-254h] BYREF
  int v24; // [rsp+68h] [rbp-250h]
  unsigned int v25; // [rsp+6Ch] [rbp-24Ch]
  int v26; // [rsp+70h] [rbp-248h]
  PWSTR v27; // [rsp+78h] [rbp-240h]
  int *v28; // [rsp+80h] [rbp-238h]
  PWSTR v29; // [rsp+88h] [rbp-230h]
  __int64 v30; // [rsp+90h] [rbp-228h] BYREF
  _QWORD v31[3]; // [rsp+98h] [rbp-220h] BYREF
  int v32; // [rsp+B0h] [rbp-208h] BYREF
  __int64 v33; // [rsp+B8h] [rbp-200h]
  struct _UNICODE_STRING UnicodeString; // [rsp+C0h] [rbp-1F8h] BYREF
  struct _UNICODE_STRING v35; // [rsp+D0h] [rbp-1E8h] BYREF
  _BYTE v36[144]; // [rsp+F0h] [rbp-1C8h] BYREF
  _BYTE v37[256]; // [rsp+180h] [rbp-138h] BYREF

  if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x8001000000040000uLL) == 0 )
    return;
  if ( (unsigned __int8)(byte_1C0186D98 - 1) <= 2u
    || (qword_1C0186D80 & 0x8001000000040000uLL) == 0
    || (qword_1C0186D88 & 0x8001000000040000uLL) != qword_1C0186D88 )
  {
    return;
  }
  EtwpGetLastInputProcessTime(
    a1[48],
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
    &v23,
    &v22);
  if ( v23 < W32kEtwInputProcessDelayTimeoutMs )
    return;
  if ( v22 < W32kEtwInputProcessDelayTimeoutMs )
    return;
  ThreadInfoFlags = EtwpGetThreadInfoFlags((struct tagTHREADINFO *const)a1);
  v25 = ThreadInfoFlags;
  if ( (ThreadInfoFlags & 3) == 0 || (ThreadInfoFlags & 8) == 0 && (ThreadInfoFlags & 0x20) == 0 )
    return;
  Buffer = 0LL;
  v29 = 0LL;
  v5 = 0LL;
  v27 = 0LL;
  v6 = (struct tagWND *)ValidateHwnd(a1[131]);
  v7 = v6;
  if ( v6 )
  {
    if ( EtwpGetClassName(v6, &UnicodeString) >= 0 )
      Buffer = UnicodeString.Buffer;
    v29 = Buffer;
    v8 = (int)Is_GetTopLevelWindowSupported() < 0 ? 0LL : (struct tagWND *)_GetTopLevelWindow(v7);
    if ( v8 )
    {
      if ( v7 == v8 )
      {
        v5 = Buffer;
        goto LABEL_24;
      }
      if ( EtwpGetClassName(v8, &v35) >= 0 )
      {
        v5 = v35.Buffer;
LABEL_24:
        v27 = v5;
      }
    }
  }
  v9 = *((_DWORD *)a1 + 264);
  v26 = v9;
  v10 = a1[133];
  v31[1] = v10;
  v28 = 0LL;
  v11 = 0LL;
  v12 = a1[47];
  if ( (*((_DWORD *)v12 + 192) & 0x30) == 0x10 )
  {
    v13 = PsReferencePrimaryToken(*(PEPROCESS *)v12);
    v31[0] = 256LL;
    v30 = 130LL;
    v14 = RtlQueryPackageIdentity(v13, v37, v31, v36, &v30, 0LL);
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
    {
      v15 = (const WCHAR *)v36;
      if ( v14 < 0 )
        v15 = &word_1C0163008;
      v16 = (const WCHAR *)v37;
      if ( v14 < 0 )
        v16 = &word_1C0163008;
      Template_qqqzzzzqx(
        (_DWORD)v16,
        (_DWORD)v15,
        (unsigned int)&word_1C0163008,
        ThreadInfoFlags,
        v23,
        v22,
        (__int64)Buffer,
        (__int64)v5,
        (__int64)v16,
        (__int64)v15,
        v9,
        (char)v10);
    }
    PsDereferencePrimaryToken(v13);
  }
  else
  {
    ThreadProcess = PsGetThreadProcess(*a1);
    v18 = (CTouchProcessor *)(*(_QWORD *)(PsGetProcessPeb(ThreadProcess) + 32) + 96LL);
    if ( v18 >= W32UserProbeAddress )
      v18 = W32UserProbeAddress;
    v19 = *(_DWORD *)v18;
    v24 = v19;
    v32 = v19;
    v20 = *((_QWORD *)v18 + 1);
    v33 = v20;
    if ( (v20 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v21 = v20 + (unsigned __int16)v19 + 2LL;
    if ( v21 >= (unsigned __int64)W32UserProbeAddress
      || (unsigned __int16)v19 > HIWORD(v24)
      || (v19 & 1) != 0
      || v21 <= v20 )
    {
      *(_BYTE *)W32UserProbeAddress = 0;
    }
    v28 = &v32;
    if ( &v32 )
      v11 = v33;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
      Template_qqqzzzqx(v19, v21, v20, ThreadInfoFlags, v23, v22, (__int64)Buffer, (__int64)v5, v11, v9, (char)v10);
  }
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v5 )
  {
    if ( Buffer != v5 )
      RtlFreeUnicodeString(&v35);
  }
}
