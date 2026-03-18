/*
 * XREFs of EtwTraceMessageCheckDelay @ 0x1C00E0800
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C009D264 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ValidateHwnd @ 0x1C00476D0 (ValidateHwnd.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x1C00DF8A4 (-EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C00DF910 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00DF944 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     McTemplateK0qqqqzzzqx @ 0x1C00E3A9C (McTemplateK0qqqqzzzqx.c)
 *     McTemplateK0qqqqzzzzqx @ 0x1C00E3C18 (McTemplateK0qqqqzzzzqx.c)
 */

void __fastcall EtwTraceMessageCheckDelay(struct tagTHREADINFO *a1)
{
  unsigned __int64 v3; // r12
  int v4; // eax
  unsigned int v5; // esi
  int ThreadInfoFlags; // r14d
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
  ULONG64 v20; // rdx
  int v21; // ecx
  ULONG64 v22; // r9
  ULONG64 v23; // r8
  unsigned int v24; // [rsp+70h] [rbp-258h] BYREF
  unsigned int v25; // [rsp+74h] [rbp-254h] BYREF
  int v26; // [rsp+78h] [rbp-250h]
  int v27; // [rsp+7Ch] [rbp-24Ch]
  int v28; // [rsp+80h] [rbp-248h]
  int v29; // [rsp+84h] [rbp-244h]
  PWSTR v30; // [rsp+88h] [rbp-240h]
  __int64 v31; // [rsp+90h] [rbp-238h]
  PWSTR v32; // [rsp+98h] [rbp-230h]
  __int64 v33; // [rsp+A0h] [rbp-228h] BYREF
  _QWORD v34[4]; // [rsp+A8h] [rbp-220h] BYREF
  int v35; // [rsp+C8h] [rbp-200h] BYREF
  __int64 v36; // [rsp+D0h] [rbp-1F8h]
  struct _UNICODE_STRING UnicodeString; // [rsp+D8h] [rbp-1F0h] BYREF
  struct _UNICODE_STRING v38; // [rsp+E8h] [rbp-1E0h] BYREF
  _BYTE v39[144]; // [rsp+100h] [rbp-1C8h] BYREF
  _BYTE v40[256]; // [rsp+190h] [rbp-138h] BYREF

  if ( (*(_QWORD *)&WPP_MAIN_CB.SectorSize & 0x8001000000040000uLL) == 0 )
    return;
  if ( (unsigned __int8)(byte_1C0188DA8 - 1) <= 2u
    || (qword_1C0188D90 & 0x8001000000040000uLL) == 0
    || (qword_1C0188D98 & 0x8001000000040000uLL) != qword_1C0188D98 )
  {
    return;
  }
  v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v4 = *((_DWORD *)a1 + 282);
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
  v32 = 0LL;
  v8 = 0LL;
  v30 = 0LL;
  v9 = (struct tagWND *)ValidateHwnd(*((void **)a1 + 142));
  v10 = v9;
  if ( v9 )
  {
    if ( (int)EtwpGetClassName(v9, &UnicodeString) >= 0 )
      Buffer = UnicodeString.Buffer;
    v32 = Buffer;
    v11 = (int)Is_GetTopLevelWindowSupported() < 0 ? 0LL : (struct tagWND *)_GetTopLevelWindow(v10);
    if ( v11 )
    {
      if ( v10 == v11 )
      {
        v8 = Buffer;
        goto LABEL_26;
      }
      if ( (int)EtwpGetClassName(v11, &v38) >= 0 )
      {
        v8 = v38.Buffer;
LABEL_26:
        v30 = v8;
      }
    }
  }
  EtwpGetLastInputProcessTime(*((struct tagQ *const *)a1 + 51), v3, &v25, &v24);
  v12 = *((_DWORD *)a1 + 286);
  v29 = v12;
  v31 = *((_QWORD *)a1 + 144);
  v34[2] = v31;
  v13 = 0LL;
  v14 = *((_QWORD *)a1 + 50);
  if ( (*(_DWORD *)(v14 + 776) & 0x30) == 0x10 )
  {
    v15 = PsReferencePrimaryToken(*(PEPROCESS *)v14);
    v34[0] = 256LL;
    v33 = 130LL;
    v16 = RtlQueryPackageIdentity(v15, v40, v34, v39, &v33, 0LL);
    if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
    {
      v17 = (const WCHAR *)v39;
      if ( v16 < 0 )
        v17 = &word_1C0160290;
      v18 = (const WCHAR *)v40;
      if ( v16 < 0 )
        v18 = &word_1C0160290;
      McTemplateK0qqqqzzzzqx(
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
    v20 = *(_QWORD *)(PsGetProcessPeb(ThreadProcess) + 32) + 96LL;
    if ( v20 >= MmUserProbeAddress )
      v20 = MmUserProbeAddress;
    v21 = *(_DWORD *)v20;
    v26 = v21;
    v35 = v21;
    v22 = *(_QWORD *)(v20 + 8);
    v36 = v22;
    if ( (v22 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v23 = v22 + (unsigned __int16)v21 + 2LL;
    if ( v23 >= MmUserProbeAddress || (unsigned __int16)v21 > HIWORD(v26) || (v21 & 1) != 0 || v23 <= v22 )
      *(_BYTE *)MmUserProbeAddress = 0;
    v34[1] = &v35;
    if ( &v35 )
      v13 = v36;
    if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
      McTemplateK0qqqqzzzqx(
        v21,
        MmUserProbeAddress,
        v31,
        ThreadInfoFlags,
        v5,
        v25,
        v24,
        (__int64)Buffer,
        (__int64)v8,
        v13,
        v12,
        v31);
  }
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v8 )
  {
    if ( Buffer != v8 )
      RtlFreeUnicodeString(&v38);
  }
}
