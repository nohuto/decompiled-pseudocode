/*
 * XREFs of ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x180090588
 * Callers:
 *     ?OnFinalRelease@SpatialInputControllerCollection@@MEAAXXZ @ 0x180092B20 (-OnFinalRelease@SpatialInputControllerCollection@@MEAAXXZ.c)
 *     ?OnDeviceAttach@SpatialInputControllerCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180092EE0 (-OnDeviceAttach@SpatialInputControllerCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180028C80 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_ @ 0x180034298 (std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--_Reallocate_for__.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18004CAF4 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x180090350 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800CC377 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TracingSessionHelper::StartOrStop(const struct TraceSessionConfig *Src, char a2)
{
  char *v3; // r15
  char *v4; // r8
  unsigned __int64 v5; // r9
  unsigned int v6; // r12d
  char *i; // rdx
  __int64 v8; // rcx
  const WCHAR *v9; // rax
  unsigned __int64 v10; // rdx
  const void *v11; // r9
  __int64 v12; // rbx
  const unsigned __int16 *v13; // rdx
  struct _ENABLE_TRACE_PARAMETERS *p_EnableParameters; // rcx
  int DirectoryDeepNoThrow; // eax
  unsigned __int64 v16; // rdi
  const struct TraceSessionConfig *v17; // rsi
  __int64 v18; // rbx
  int v19; // esi
  unsigned int v20; // edi
  unsigned int *v21; // r13
  unsigned int v22; // esi
  char *v23; // rax
  __int64 v24; // rdx
  const WCHAR *v25; // rdx
  const WCHAR *v26; // rdx
  ULONG started; // eax
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // rdi
  const WCHAR *v31; // rdx
  signed int v32; // eax
  signed int v33; // ebx
  ULONG64 TraceHandle[3]; // [rsp+50h] [rbp-41h] BYREF
  struct _ENABLE_TRACE_PARAMETERS EnableParameters; // [rsp+68h] [rbp-29h] BYREF
  LPCWSTR InstanceName[2]; // [rsp+98h] [rbp+7h] BYREF
  unsigned __int64 v39; // [rsp+A8h] [rbp+17h]
  unsigned __int64 v40; // [rsp+B0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  TraceHandle[1] = -2LL;
  v3 = (char *)Src + 48;
  v4 = (char *)Src + 48;
  if ( *((_QWORD *)Src + 9) >= 8uLL )
    v4 = *(char **)v3;
  v5 = *((_QWORD *)Src + 8);
  v6 = 1;
  if ( v5 )
  {
    for ( i = &v4[2 * v5 - 2]; ; i -= 2 )
    {
      v8 = 1LL;
      v9 = L"\\";
      while ( *v9 != *(_WORD *)i )
      {
        ++v9;
        if ( !--v8 )
        {
          v9 = 0LL;
          break;
        }
      }
      if ( v9 )
        break;
      if ( i == v4 )
        goto LABEL_13;
    }
    v10 = (i - v4) >> 1;
  }
  else
  {
LABEL_13:
    v10 = -1LL;
  }
  *(_QWORD *)&EnableParameters.SourceId.Data2 = 0LL;
  *(_QWORD *)&EnableParameters.SourceId.Data4[4] = 7LL;
  LOWORD(EnableParameters.Version) = 0;
  if ( v5 < v10 )
    v10 = v5;
  v11 = v3;
  if ( *((_QWORD *)v3 + 3) >= 8uLL )
    v11 = *(const void **)v3;
  if ( v10 > 7 )
  {
    std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_(
      (unsigned __int64 *)&EnableParameters.Version,
      v10,
      (__int64)v4,
      v11);
  }
  else
  {
    *(_QWORD *)&EnableParameters.SourceId.Data2 = v10;
    v12 = 2 * v10;
    memmove(&EnableParameters, v11, 2 * v10);
    *(_WORD *)((char *)&EnableParameters.Version + v12) = 0;
  }
  p_EnableParameters = &EnableParameters;
  if ( *(_QWORD *)&EnableParameters.SourceId.Data4[4] >= 8uLL )
    p_EnableParameters = *(struct _ENABLE_TRACE_PARAMETERS **)&EnableParameters.Version;
  DirectoryDeepNoThrow = wil::CreateDirectoryDeepNoThrow((wil *)p_EnableParameters, v13);
  if ( DirectoryDeepNoThrow < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x42,
      (__int64)"internal\\onecoreuapanalog\\inc\\tracingsessionhelper.h",
      (const char *)(unsigned int)DirectoryDeepNoThrow);
  std::wstring::_Tidy_deallocate((unsigned __int64 *)&EnableParameters.Version);
  TraceHandle[2] = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v16 = *((_QWORD *)Src + 2);
  v17 = Src;
  if ( *((_QWORD *)Src + 3) >= 8uLL )
    v17 = *(const struct TraceSessionConfig **)Src;
  if ( v16 >= 8 )
  {
    v18 = v16 | 7;
    if ( (v16 | 7) > 0x7FFFFFFFFFFFFFFELL )
      v18 = 0x7FFFFFFFFFFFFFFELL;
    InstanceName[0] = (LPCWSTR)std::_Allocate(v18 + 1, 2uLL);
    memcpy_0((void *)InstanceName[0], v17, 2 * v16 + 2);
    v40 = v18;
  }
  else
  {
    *(_OWORD *)InstanceName = *(_OWORD *)v17;
    v40 = 7LL;
  }
  v39 = v16;
  v19 = 2 * v16 + 2;
  v20 = 2 * v16 + 644;
  v21 = (unsigned int *)operator new(v20);
  memset(v21, 0, v20);
  *v21 = v20;
  v21[11] = 0x20000;
  v21[10] = 1;
  *(_OWORD *)(v21 + 6) = *((_OWORD *)Src + 2);
  v21[12] = *((_DWORD *)Src + 20);
  v21[17] = *((_DWORD *)Src + 21);
  v21[16] = *((_DWORD *)Src + 22);
  v21[14] = *((_DWORD *)Src + 23);
  v21[13] = *((_DWORD *)Src + 24);
  v21[15] = *((_DWORD *)Src + 25);
  v21[29] = 120;
  v22 = v19 + 120;
  v21[28] = v22;
  v23 = v3;
  if ( *((_QWORD *)v3 + 3) >= 8uLL )
    v23 = *(char **)v3;
  v24 = *((_QWORD *)v3 + 2);
  if ( *((_QWORD *)v3 + 3) >= 8uLL )
    v3 = *(char **)v3;
  memmove((char *)v21 + v22, v3, &v23[2 * v24] - v3);
  TraceHandle[0] = -1LL;
  if ( !a2 )
  {
    v31 = (const WCHAR *)InstanceName;
    if ( v40 >= 8 )
      v31 = InstanceName[0];
    v32 = ControlTraceW(0LL, v31, (PEVENT_TRACE_PROPERTIES)v21, 1u);
    v33 = (unsigned __int16)v32 | 0x80070000;
    if ( v32 <= 0 )
      v33 = v32;
    if ( v33 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x85,
        (__int64)"internal\\onecoreuapanalog\\inc\\tracingsessionhelper.h",
        (const char *)(unsigned int)v33);
      v6 = v33;
      goto LABEL_58;
    }
    goto LABEL_57;
  }
  v25 = (const WCHAR *)Src;
  if ( *((_QWORD *)Src + 3) >= 8uLL )
    v25 = *(const WCHAR **)Src;
  if ( ControlTraceW(0LL, v25, (PEVENT_TRACE_PROPERTIES)v21, 0) != 4201 )
    goto LABEL_58;
  v26 = (const WCHAR *)Src;
  if ( *((_QWORD *)Src + 3) >= 8uLL )
    v26 = *(const WCHAR **)Src;
  started = StartTraceW(TraceHandle, v26, (PEVENT_TRACE_PROPERTIES)v21);
  if ( !started )
  {
    v29 = *((_QWORD *)Src + 13);
    v30 = *((_QWORD *)Src + 14);
    while ( v29 != v30 )
    {
      memset(&EnableParameters.EnableProperty, 0, 0x2CuLL);
      *(_QWORD *)&EnableParameters.Version = 2LL;
      EnableParameters.EnableFilterDesc = 0LL;
      started = EnableTraceEx2(
                  TraceHandle[0],
                  (LPCGUID)v29,
                  1u,
                  *(_BYTE *)(v29 + 16),
                  *(_QWORD *)(v29 + 24),
                  *(_QWORD *)(v29 + 32),
                  0,
                  &EnableParameters);
      if ( started )
      {
        v28 = 128LL;
        goto LABEL_50;
      }
      v29 += 40LL;
    }
LABEL_57:
    v6 = 0;
    goto LABEL_58;
  }
  v28 = 111LL;
LABEL_50:
  v6 = wil::details::in1diag3::Return_Win32(
         retaddr,
         (void *)v28,
         (__int64)"internal\\onecoreuapanalog\\inc\\tracingsessionhelper.h",
         (const char *)started);
LABEL_58:
  if ( TraceHandle[0] != -1LL )
    CloseTrace(TraceHandle[0]);
  std::wstring::_Tidy_deallocate((unsigned __int64 *)InstanceName);
  operator delete(v21);
  return v6;
}
