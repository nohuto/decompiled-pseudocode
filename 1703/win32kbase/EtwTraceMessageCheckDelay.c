/*
 * XREFs of EtwTraceMessageCheckDelay @ 0x1C004A880
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00482A0 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ValidateHwnd @ 0x1C00715E0 (ValidateHwnd.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x1C00D95C0 (-EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C00D962C (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00D965C (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     Template_qqqqzzzqx @ 0x1C00DD07C (Template_qqqqzzzqx.c)
 *     Template_qqqqzzzzqx @ 0x1C00DD20C (Template_qqqqzzzzqx.c)
 */

void __fastcall EtwTraceMessageCheckDelay(struct tagTHREADINFO *a1)
{
  unsigned __int64 v3; // r12
  int v4; // eax
  unsigned int v5; // esi
  unsigned int ThreadInfoFlags; // r14d
  PWSTR Buffer; // rbx
  PWSTR v8; // rdi
  struct tagWND *v9; // rax
  struct tagWND *v10; // r13
  struct tagWND *v11; // rax
  int v12; // r13d
  __int64 v13; // r12
  __int64 v14; // rcx
  PACCESS_TOKEN v15; // r15
  int v16; // eax
  const WCHAR *v17; // rdx
  const WCHAR *v18; // rcx
  PEPROCESS ThreadProcess; // rax
  CTouchProcessor *v20; // rdx
  int v21; // ecx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rdx
  unsigned int v24; // [rsp+70h] [rbp-258h] BYREF
  unsigned int v25; // [rsp+74h] [rbp-254h] BYREF
  int v26; // [rsp+78h] [rbp-250h]
  int v27; // [rsp+7Ch] [rbp-24Ch]
  unsigned int v28; // [rsp+80h] [rbp-248h]
  int v29; // [rsp+84h] [rbp-244h]
  PWSTR v30; // [rsp+88h] [rbp-240h]
  __int64 v31; // [rsp+90h] [rbp-238h]
  int *v32; // [rsp+98h] [rbp-230h]
  PWSTR v33; // [rsp+A0h] [rbp-228h]
  __int64 v34; // [rsp+A8h] [rbp-220h] BYREF
  _QWORD v35[3]; // [rsp+B0h] [rbp-218h] BYREF
  int v36; // [rsp+C8h] [rbp-200h] BYREF
  __int64 v37; // [rsp+D0h] [rbp-1F8h]
  struct _UNICODE_STRING UnicodeString; // [rsp+D8h] [rbp-1F0h] BYREF
  struct _UNICODE_STRING v39; // [rsp+E8h] [rbp-1E0h] BYREF
  _BYTE v40[144]; // [rsp+100h] [rbp-1C8h] BYREF
  _BYTE v41[256]; // [rsp+190h] [rbp-138h] BYREF

  if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x8001000000040000uLL) == 0 )
    return;
  if ( (unsigned __int8)(byte_1C0186D98 - 1) <= 2u
    || (qword_1C0186D80 & 0x8001000000040000uLL) == 0
    || (qword_1C0186D88 & 0x8001000000040000uLL) != qword_1C0186D88 )
  {
    return;
  }
  v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v4 = *((_DWORD *)a1 + 260);
  if ( !v4 )
    return;
  v5 = v3 - v4;
  v27 = v3 - v4;
  if ( (int)v3 - v4 < W32kEtwMessageCheckDelayTimeoutMs )
    return;
  ThreadInfoFlags = EtwpGetThreadInfoFlags(a1);
  v28 = ThreadInfoFlags;
  if ( (ThreadInfoFlags & 3) == 0 || (ThreadInfoFlags & 8) == 0 && (ThreadInfoFlags & 0x20) == 0 )
    return;
  if ( (ThreadInfoFlags & 0x200) != 0 && v5 < gdwHungAppTimeout )
    return;
  Buffer = 0LL;
  v33 = 0LL;
  v8 = 0LL;
  v30 = 0LL;
  v9 = (struct tagWND *)ValidateHwnd(*((_QWORD *)a1 + 131));
  v10 = v9;
  if ( v9 )
  {
    if ( EtwpGetClassName(v9, &UnicodeString) >= 0 )
      Buffer = UnicodeString.Buffer;
    v33 = Buffer;
    v11 = (int)Is_GetTopLevelWindowSupported() < 0 ? 0LL : (struct tagWND *)_GetTopLevelWindow(v10);
    if ( v11 )
    {
      if ( v10 == v11 )
      {
        v8 = Buffer;
        goto LABEL_26;
      }
      if ( EtwpGetClassName(v11, &v39) >= 0 )
      {
        v8 = v39.Buffer;
LABEL_26:
        v30 = v8;
      }
    }
  }
  EtwpGetLastInputProcessTime(*((struct tagQ *const *)a1 + 48), v3, &v25, &v24);
  v12 = *((_DWORD *)a1 + 264);
  v29 = v12;
  v31 = *((_QWORD *)a1 + 133);
  v35[1] = v31;
  v32 = 0LL;
  v13 = 0LL;
  v14 = *((_QWORD *)a1 + 47);
  if ( (*(_DWORD *)(v14 + 768) & 0x30) == 0x10 )
  {
    v15 = PsReferencePrimaryToken(*(PEPROCESS *)v14);
    v35[0] = 256LL;
    v34 = 130LL;
    v16 = RtlQueryPackageIdentity(v15, v41, v35, v40, &v34, 0LL);
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
    {
      v17 = (const WCHAR *)v40;
      if ( v16 < 0 )
        v17 = &word_1C0163008;
      v18 = (const WCHAR *)v41;
      if ( v16 < 0 )
        v18 = &word_1C0163008;
      Template_qqqqzzzzqx(
        (_DWORD)v18,
        (_DWORD)v17,
        v31,
        ThreadInfoFlags,
        v5,
        v25,
        v24,
        (__int64)Buffer,
        (__int64)v8,
        (__int64)v18,
        (__int64)v17,
        v12,
        v31);
    }
    PsDereferencePrimaryToken(v15);
  }
  else
  {
    ThreadProcess = PsGetThreadProcess(*(PETHREAD *)a1);
    v20 = (CTouchProcessor *)(*(_QWORD *)(PsGetProcessPeb(ThreadProcess) + 32) + 96LL);
    if ( v20 >= W32UserProbeAddress )
      v20 = W32UserProbeAddress;
    v21 = *(_DWORD *)v20;
    v26 = v21;
    v36 = v21;
    v22 = *((_QWORD *)v20 + 1);
    v37 = v22;
    if ( (v22 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v23 = v22 + (unsigned __int16)v21 + 2LL;
    if ( v23 >= (unsigned __int64)W32UserProbeAddress
      || (unsigned __int16)v21 > HIWORD(v26)
      || (v21 & 1) != 0
      || v23 <= v22 )
    {
      *(_BYTE *)W32UserProbeAddress = 0;
    }
    v32 = &v36;
    if ( &v36 )
      v13 = v37;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
      Template_qqqqzzzqx(v21, v23, v31, ThreadInfoFlags, v5, v25, v24, (__int64)Buffer, (__int64)v8, v13, v12, v31);
  }
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v8 )
  {
    if ( Buffer != v8 )
      RtlFreeUnicodeString(&v39);
  }
}
