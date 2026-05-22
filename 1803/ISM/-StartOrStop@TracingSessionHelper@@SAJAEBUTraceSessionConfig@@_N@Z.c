/*
 * XREFs of ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x18006FD8C
 * Callers:
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x180070FF0 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180071130 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180044E10 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800668E8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_ @ 0x18006695C (std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--_Reallocate_for__.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800696F4 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x18006FB60 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TracingSessionHelper::StartOrStop(const struct TraceSessionConfig *a1, char a2)
{
  char *v3; // r14
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
  int v16; // esi
  unsigned int v17; // edi
  unsigned int *v18; // r13
  unsigned int v19; // esi
  char *v20; // rax
  __int64 v21; // rdx
  const WCHAR *v22; // rdx
  const WCHAR *v23; // rdx
  ULONG started; // eax
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rdi
  const WCHAR *v29; // rdx
  signed int v30; // eax
  signed int v31; // ebx
  ULONG64 TraceHandle[3]; // [rsp+50h] [rbp-41h] BYREF
  struct _ENABLE_TRACE_PARAMETERS EnableParameters; // [rsp+68h] [rbp-29h] BYREF
  LPCWSTR InstanceName[2]; // [rsp+98h] [rbp+7h] BYREF
  int v36; // [rsp+A8h] [rbp+17h]
  unsigned __int64 v37; // [rsp+B0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  TraceHandle[1] = -2LL;
  v3 = (char *)a1 + 48;
  v4 = (char *)a1 + 48;
  if ( *((_QWORD *)a1 + 9) >= 8uLL )
    v4 = *(char **)v3;
  v5 = *((_QWORD *)a1 + 8);
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
  *(__m128i *)&EnableParameters.SourceId.Data2 = _mm_load_si128((const __m128i *)&_xmm);
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
  std::wstring::wstring(InstanceName, (__int64)a1);
  v16 = 2 * v36 + 2;
  v17 = 2 * v36 + 644;
  v18 = (unsigned int *)operator new(v17);
  memset_0(v18, 0, v17);
  *v18 = v17;
  v18[11] = 0x20000;
  v18[10] = 1;
  *(_OWORD *)(v18 + 6) = *((_OWORD *)a1 + 2);
  v18[12] = *((_DWORD *)a1 + 20);
  v18[17] = *((_DWORD *)a1 + 21);
  v18[16] = *((_DWORD *)a1 + 22);
  v18[14] = *((_DWORD *)a1 + 23);
  v18[13] = *((_DWORD *)a1 + 24);
  v18[15] = *((_DWORD *)a1 + 25);
  v18[29] = 120;
  v19 = v16 + 120;
  v18[28] = v19;
  v20 = v3;
  if ( *((_QWORD *)v3 + 3) >= 8uLL )
    v20 = *(char **)v3;
  v21 = *((_QWORD *)v3 + 2);
  if ( *((_QWORD *)v3 + 3) >= 8uLL )
    v3 = *(char **)v3;
  memmove((char *)v18 + v19, v3, &v20[2 * v21] - v3);
  TraceHandle[0] = -1LL;
  if ( !a2 )
  {
    v29 = (const WCHAR *)InstanceName;
    if ( v37 >= 8 )
      v29 = InstanceName[0];
    v30 = ControlTraceW(0LL, v29, (PEVENT_TRACE_PROPERTIES)v18, 1u);
    v31 = (unsigned __int16)v30 | 0x80070000;
    if ( v30 <= 0 )
      v31 = v30;
    if ( v31 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x85,
        (__int64)"internal\\onecoreuapanalog\\inc\\tracingsessionhelper.h",
        (const char *)(unsigned int)v31);
      v6 = v31;
      goto LABEL_42;
    }
LABEL_41:
    v6 = 0;
    goto LABEL_42;
  }
  v22 = (const WCHAR *)a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v22 = *(const WCHAR **)a1;
  if ( ControlTraceW(0LL, v22, (PEVENT_TRACE_PROPERTIES)v18, 0) != 4201 )
    goto LABEL_42;
  v23 = (const WCHAR *)a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v23 = *(const WCHAR **)a1;
  started = StartTraceW(TraceHandle, v23, (PEVENT_TRACE_PROPERTIES)v18);
  if ( !started )
  {
    v26 = *((_QWORD *)a1 + 13);
    v27 = *((_QWORD *)a1 + 14);
    while ( v26 != v27 )
    {
      memset_0(&EnableParameters, 0, sizeof(EnableParameters));
      *(_QWORD *)&EnableParameters.Version = 2LL;
      EnableParameters.EnableFilterDesc = 0LL;
      started = EnableTraceEx2(
                  TraceHandle[0],
                  (LPCGUID)v26,
                  1u,
                  *(_BYTE *)(v26 + 16),
                  *(_QWORD *)(v26 + 24),
                  *(_QWORD *)(v26 + 32),
                  0,
                  &EnableParameters);
      if ( started )
      {
        v25 = 128LL;
        goto LABEL_46;
      }
      v26 += 40LL;
    }
    goto LABEL_41;
  }
  v25 = 111LL;
LABEL_46:
  v6 = wil::details::in1diag3::Return_Win32(
         retaddr,
         (void *)v25,
         (__int64)"internal\\onecoreuapanalog\\inc\\tracingsessionhelper.h",
         (const char *)started);
LABEL_42:
  if ( TraceHandle[0] != -1LL )
    CloseTrace(TraceHandle[0]);
  std::wstring::_Tidy_deallocate((unsigned __int64 *)InstanceName);
  operator delete(v18);
  return v6;
}
