/*
 * XREFs of NtUserCreateWindowStation @ 0x1C00DAB20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     RtlStringCchPrintfW @ 0x1C00DAAA4 (RtlStringCchPrintfW.c)
 *     xxxCreateWindowStation @ 0x1C00DB1AC (xxxCreateWindowStation.c)
 *     RtlStringCchCopyNW @ 0x1C00DBB38 (RtlStringCchCopyNW.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall NtUserCreateWindowStation(
        ULONG64 a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned __int64 a6,
        ULONG64 a7,
        int a8)
{
  int v9; // r15d
  ULONG64 v12; // rdi
  int v13; // ecx
  const wchar_t *v14; // r8
  ULONG64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _OWORD *v19; // rcx
  _OWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  _OWORD *v23; // rax
  _OWORD *v24; // rcx
  __int64 v25; // r8
  ULONG64 v26; // rdx
  ULONG64 v27; // rdx
  int ProcessLuid; // edi
  __int64 v29; // r9
  char v30; // si
  int v31; // ecx
  WCHAR *v32; // r8
  ULONG64 v33; // r9
  USHORT Length; // ax
  int v35; // eax
  ULONG64 v36; // rcx
  int v37; // eax
  NTSTATUS v38; // ecx
  _DWORD *v39; // rdi
  int v40; // edx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 ThreadWin32Thread; // rax
  ULONG v45; // eax
  __int64 v46; // rdx
  NTSTATUS Status; // [rsp+54h] [rbp-684h]
  int v49; // [rsp+60h] [rbp-678h]
  int v50; // [rsp+60h] [rbp-678h]
  __int64 v51; // [rsp+68h] [rbp-670h] BYREF
  _DWORD *v52; // [rsp+70h] [rbp-668h]
  PVOID BaseAddress; // [rsp+78h] [rbp-660h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-658h] BYREF
  int v55; // [rsp+90h] [rbp-648h]
  int v56; // [rsp+98h] [rbp-640h]
  _DWORD v57[2]; // [rsp+A0h] [rbp-638h] BYREF
  ULONG_PTR RegionSize; // [rsp+A8h] [rbp-630h] BYREF
  __int128 v59; // [rsp+B0h] [rbp-628h] BYREF
  __m128i v60; // [rsp+C0h] [rbp-618h]
  __int128 v61; // [rsp+D0h] [rbp-608h]
  __int64 v62; // [rsp+E0h] [rbp-5F8h]
  int v63; // [rsp+F0h] [rbp-5E8h]
  const wchar_t *v64; // [rsp+F8h] [rbp-5E0h]
  _QWORD v65[3]; // [rsp+100h] [rbp-5D8h] BYREF
  __int128 v66; // [rsp+130h] [rbp-5A8h]
  __m128i v67; // [rsp+140h] [rbp-598h]
  __int128 v68; // [rsp+150h] [rbp-588h]
  _BYTE v69[784]; // [rsp+160h] [rbp-578h] BYREF
  __int64 v70; // [rsp+470h] [rbp-268h] BYREF
  int v71; // [rsp+478h] [rbp-260h]
  wchar_t pszDest[16]; // [rsp+480h] [rbp-258h] BYREF
  wchar_t SourceString[256]; // [rsp+4A0h] [rbp-238h] BYREF

  v9 = a3;
  v55 = a2;
  v62 = a3;
  v56 = a4;
  v12 = a7;
  v52 = 0LL;
  BaseAddress = 0LL;
  v51 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a7 >= MmUserProbeAddress )
    v12 = MmUserProbeAddress;
  v13 = *(_DWORD *)v12;
  v49 = *(_DWORD *)v12;
  v63 = *(_DWORD *)v12;
  v14 = *(const wchar_t **)(v12 + 8);
  v64 = v14;
  if ( ((unsigned __int8)v14 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = (ULONG64)v14 + (unsigned __int16)v13 + 2;
  if ( v15 >= MmUserProbeAddress
    || (unsigned __int16)v13 > HIWORD(v49)
    || (v13 & 1) != 0
    || v15 <= (unsigned __int64)v14 )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  RtlStringCchCopyNW(pszDest, 9uLL, v14, (unsigned __int64)(unsigned __int16)v13 >> 1);
  v52 = (_DWORD *)Win32AllocPoolWithQuota(784LL, 1702064981LL);
  if ( !v52 )
  {
    v51 = 0LL;
    UserSetLastError(8LL, v16);
    goto LABEL_59;
  }
  v19 = (_OWORD *)a6;
  if ( a6 + 784 < a6 || a6 + 784 > MmUserProbeAddress )
    v19 = (_OWORD *)MmUserProbeAddress;
  v20 = v69;
  v21 = 6LL;
  v22 = 6LL;
  do
  {
    *v20 = *v19;
    v20[1] = v19[1];
    v20[2] = v19[2];
    v20[3] = v19[3];
    v20[4] = v19[4];
    v20[5] = v19[5];
    v20[6] = v19[6];
    v20 += 8;
    *(v20 - 1) = v19[7];
    v19 += 8;
    --v22;
  }
  while ( v22 );
  *v20 = *v19;
  v23 = v52;
  v24 = v69;
  do
  {
    *v23 = *v24;
    v23[1] = v24[1];
    v23[2] = v24[2];
    v23[3] = v24[3];
    v23[4] = v24[4];
    v23[5] = v24[5];
    v23[6] = v24[6];
    v23 += 8;
    *(v23 - 1) = v24[7];
    v24 += 8;
    --v21;
  }
  while ( v21 );
  *v23 = *v24;
  if ( *v52 < 8u )
  {
    if ( a1 + 48 < a1 || a1 + 48 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v66 = *(_OWORD *)a1;
    v67 = *(__m128i *)(a1 + 16);
    v68 = *(_OWORD *)(a1 + 32);
    v59 = v66;
    v60 = v67;
    v61 = v68;
    v60.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v67, 8)) & 0xFFFFFDFF;
    v26 = v67.m128i_i64[0];
    if ( __PAIR128__(v67.m128i_u64[0], *((unsigned __int64 *)&v66 + 1)) == 0 )
    {
      ProcessLuid = GetProcessLuid(0LL, v57);
      if ( ProcessLuid >= 0 )
      {
        RtlStringCchPrintfW(SourceString, 0x100uLL, L"%ws\\Service-0x%x-%x$", szWindowStationDirectory, v57[1], v57[0]);
        RtlInitUnicodeString(&DestinationString, SourceString);
        v60.m128i_i64[0] = (__int64)&DestinationString;
      }
      v30 = 0;
    }
    else
    {
      if ( v67.m128i_i64[0] >= MmUserProbeAddress )
        v26 = MmUserProbeAddress;
      v31 = *(_DWORD *)v26;
      v50 = *(_DWORD *)v26;
      *(_DWORD *)&DestinationString.Length = *(_DWORD *)v26;
      v32 = *(WCHAR **)(v26 + 8);
      DestinationString.Buffer = v32;
      if ( ((unsigned __int8)v32 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v33 = (ULONG64)v32 + (unsigned __int16)v31 + 2;
      if ( v33 >= MmUserProbeAddress
        || (unsigned __int16)v31 > HIWORD(v50)
        || (v31 & 1) != 0
        || v33 <= (unsigned __int64)v32 )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      Length = 522;
      if ( DestinationString.Length < 0x20Au )
        Length = DestinationString.Length;
      DestinationString.Length = Length;
      RegionSize = Length;
      v35 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
      ProcessLuid = v35;
      if ( v35 < 0 )
        ExRaiseStatus(v35);
      memmove(BaseAddress, DestinationString.Buffer, DestinationString.Length);
      DestinationString.Buffer = (PWSTR)BaseAddress;
      v60.m128i_i64[0] = (__int64)&DestinationString;
      v30 = 1;
    }
    if ( ProcessLuid >= 0 )
    {
      v36 = *((_QWORD *)&v61 + 1);
      if ( *((_QWORD *)&v61 + 1) )
      {
        v27 = *((_QWORD *)&v61 + 1) + 12LL;
        if ( (unsigned __int64)(*((_QWORD *)&v61 + 1) + 12LL) < *((_QWORD *)&v61 + 1) || v27 > MmUserProbeAddress )
          v36 = MmUserProbeAddress;
        v37 = *(_DWORD *)(v36 + 8);
        v70 = *(_QWORD *)v36;
        v71 = v37;
        *((_QWORD *)&v61 + 1) = &v70;
      }
      if ( (_QWORD)v61 )
      {
        LOBYTE(v27) = 1;
        ProcessLuid = SeCaptureSecurityDescriptor(v61, v27);
        *(_QWORD *)&v61 = 0LL;
      }
    }
    if ( ProcessLuid >= 0 )
    {
      v39 = v52;
      PushW32ThreadLock((__int64)v52, v65, (__int64)Win32FreePool, v29);
      LOBYTE(v40) = v30;
      Status = xxxCreateWindowStation(
                 (unsigned int)&v59,
                 v40,
                 a2,
                 v9,
                 a4,
                 a5,
                 (__int64)v39,
                 (__int64)pszDest,
                 a8,
                 (__int64)&v51);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41, v42, v43);
      *(_QWORD *)(ThreadWin32Thread + 16) = v65[0];
      v38 = Status;
      if ( Status >= 0 )
        goto LABEL_54;
    }
    else
    {
      v38 = ProcessLuid;
    }
    v51 = 0LL;
    v45 = RtlNtStatusToDosError(v38);
    UserSetLastError(v45, v46);
    goto LABEL_54;
  }
  v51 = 0LL;
  UserSetLastError(87LL, 0LL);
LABEL_54:
  if ( v52 )
    Win32FreePool(v52, v17, v25);
  if ( BaseAddress )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  v18 = 0LL;
LABEL_59:
  UserSessionSwitchLeaveCrit(v18, v17);
  return v51;
}
