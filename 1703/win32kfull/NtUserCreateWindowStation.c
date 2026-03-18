/*
 * XREFs of NtUserCreateWindowStation @ 0x1C0012850
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C00127D4 (RtlStringCchPrintfW.c)
 *     xxxCreateWindowStation @ 0x1C0012EC4 (xxxCreateWindowStation.c)
 *     RtlStringCchCopyNW @ 0x1C0013AC8 (RtlStringCchCopyNW.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall NtUserCreateWindowStation(
        unsigned __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        int a8)
{
  int v9; // r15d
  __int64 v12; // rdi
  int v13; // ecx
  const wchar_t *v14; // r8
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _OWORD *v20; // rcx
  _OWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  _OWORD *v24; // rax
  _OWORD *v25; // rcx
  __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  char v28; // si
  int v29; // edi
  int v30; // ecx
  WCHAR *v31; // r8
  unsigned __int64 v32; // r9
  USHORT Length; // ax
  int v34; // eax
  __int64 *v35; // rcx
  int v36; // eax
  NTSTATUS v37; // ecx
  __int64 v38; // rdi
  int v39; // edx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 ThreadWin32Thread; // rax
  ULONG v44; // eax
  NTSTATUS Status; // [rsp+54h] [rbp-684h]
  int v47; // [rsp+60h] [rbp-678h]
  int v48; // [rsp+60h] [rbp-678h]
  __int64 v49; // [rsp+68h] [rbp-670h] BYREF
  _DWORD *v50; // [rsp+70h] [rbp-668h]
  PVOID BaseAddress; // [rsp+78h] [rbp-660h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-658h] BYREF
  int v53; // [rsp+90h] [rbp-648h]
  int v54; // [rsp+98h] [rbp-640h]
  _DWORD v55[2]; // [rsp+A0h] [rbp-638h] BYREF
  ULONG_PTR RegionSize; // [rsp+A8h] [rbp-630h] BYREF
  __int128 v57; // [rsp+B0h] [rbp-628h] BYREF
  __m128i v58; // [rsp+C0h] [rbp-618h]
  __int128 v59; // [rsp+D0h] [rbp-608h]
  __int64 v60; // [rsp+E0h] [rbp-5F8h]
  int v61; // [rsp+F0h] [rbp-5E8h]
  const wchar_t *v62; // [rsp+F8h] [rbp-5E0h]
  _QWORD v63[3]; // [rsp+100h] [rbp-5D8h] BYREF
  __int128 v64; // [rsp+130h] [rbp-5A8h]
  __m128i v65; // [rsp+140h] [rbp-598h]
  __int128 v66; // [rsp+150h] [rbp-588h]
  _BYTE v67[784]; // [rsp+160h] [rbp-578h] BYREF
  __int64 v68; // [rsp+470h] [rbp-268h] BYREF
  int v69; // [rsp+478h] [rbp-260h]
  wchar_t pszDest[16]; // [rsp+480h] [rbp-258h] BYREF
  wchar_t SourceString[256]; // [rsp+4A0h] [rbp-238h] BYREF

  v9 = a3;
  v53 = a2;
  v60 = a3;
  v54 = a4;
  v12 = a7;
  v50 = 0LL;
  BaseAddress = 0LL;
  v49 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a7 >= W32UserProbeAddress )
    v12 = W32UserProbeAddress;
  v13 = *(_DWORD *)v12;
  v47 = *(_DWORD *)v12;
  v61 = *(_DWORD *)v12;
  v14 = *(const wchar_t **)(v12 + 8);
  v62 = v14;
  if ( ((unsigned __int8)v14 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = (unsigned __int64)v14 + (unsigned __int16)v13 + 2;
  if ( v15 >= W32UserProbeAddress
    || (unsigned __int16)v13 > HIWORD(v47)
    || (v13 & 1) != 0
    || v15 <= (unsigned __int64)v14 )
  {
    *W32UserProbeAddress = 0;
  }
  RtlStringCchCopyNW(pszDest, 9uLL, v14, (unsigned __int64)(unsigned __int16)v13 >> 1);
  v50 = (_DWORD *)Win32AllocPoolWithQuota(784LL, 1702064981LL);
  if ( !v50 )
  {
    v49 = 0LL;
    UserSetLastError(8LL);
    goto LABEL_57;
  }
  v20 = (_OWORD *)a6;
  if ( a6 + 784 < a6 || a6 + 784 > W32UserProbeAddress )
    v20 = (_OWORD *)W32UserProbeAddress;
  v21 = v67;
  v22 = 6LL;
  v23 = 6LL;
  do
  {
    *v21 = *v20;
    v21[1] = v20[1];
    v21[2] = v20[2];
    v21[3] = v20[3];
    v21[4] = v20[4];
    v21[5] = v20[5];
    v21[6] = v20[6];
    v21 += 8;
    *(v21 - 1) = v20[7];
    v20 += 8;
    --v23;
  }
  while ( v23 );
  *v21 = *v20;
  v24 = v50;
  v25 = v67;
  do
  {
    *v24 = *v25;
    v24[1] = v25[1];
    v24[2] = v25[2];
    v24[3] = v25[3];
    v24[4] = v25[4];
    v24[5] = v25[5];
    v24[6] = v25[6];
    v24 += 8;
    *(v24 - 1) = v25[7];
    v25 += 8;
    --v22;
  }
  while ( v22 );
  *v24 = *v25;
  if ( *v50 < 8u )
  {
    if ( a1 + 48 < a1 || a1 + 48 > W32UserProbeAddress )
      a1 = W32UserProbeAddress;
    v64 = *(_OWORD *)a1;
    v65 = *(__m128i *)(a1 + 16);
    v66 = *(_OWORD *)(a1 + 32);
    v57 = v64;
    v58 = v65;
    v59 = v66;
    v58.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v65, 8)) & 0xFFFFFDFF;
    v26 = v65.m128i_i64[0];
    if ( __PAIR128__(v65.m128i_u64[0], *((unsigned __int64 *)&v64 + 1)) == 0 )
    {
      GetProcessLuid(0LL, v55);
      RtlStringCchPrintfW(SourceString, 0x100uLL, L"%ws\\Service-0x%x-%x$", szWindowStationDirectory, v55[1], v55[0]);
      RtlInitUnicodeString(&DestinationString, SourceString);
      v58.m128i_i64[0] = (__int64)&DestinationString;
      v28 = 0;
      v29 = 0;
    }
    else
    {
      if ( v65.m128i_i64[0] >= W32UserProbeAddress )
        v26 = W32UserProbeAddress;
      v30 = *(_DWORD *)v26;
      v48 = *(_DWORD *)v26;
      *(_DWORD *)&DestinationString.Length = *(_DWORD *)v26;
      v31 = *(WCHAR **)(v26 + 8);
      DestinationString.Buffer = v31;
      if ( ((unsigned __int8)v31 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v32 = (unsigned __int64)v31 + (unsigned __int16)v30 + 2;
      if ( v32 >= W32UserProbeAddress
        || (unsigned __int16)v30 > HIWORD(v48)
        || (v30 & 1) != 0
        || v32 <= (unsigned __int64)v31 )
      {
        *W32UserProbeAddress = 0;
      }
      Length = 522;
      if ( DestinationString.Length < 0x20Au )
        Length = DestinationString.Length;
      DestinationString.Length = Length;
      RegionSize = Length;
      v34 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
      v29 = v34;
      if ( v34 < 0 )
        ExRaiseStatus(v34);
      memmove(BaseAddress, DestinationString.Buffer, DestinationString.Length);
      DestinationString.Buffer = (PWSTR)BaseAddress;
      v58.m128i_i64[0] = (__int64)&DestinationString;
      v28 = 1;
    }
    v35 = (__int64 *)*((_QWORD *)&v59 + 1);
    if ( *((_QWORD *)&v59 + 1) )
    {
      v27 = *((_QWORD *)&v59 + 1) + 12LL;
      if ( (unsigned __int64)(*((_QWORD *)&v59 + 1) + 12LL) < *((_QWORD *)&v59 + 1) || v27 > W32UserProbeAddress )
        v35 = (__int64 *)W32UserProbeAddress;
      v36 = *((_DWORD *)v35 + 2);
      v68 = *v35;
      v69 = v36;
      *((_QWORD *)&v59 + 1) = &v68;
    }
    if ( v29 >= 0 && (_QWORD)v59 )
    {
      LOBYTE(v27) = 1;
      v29 = SeCaptureSecurityDescriptor(v59, v27);
      *(_QWORD *)&v59 = 0LL;
    }
    if ( v29 >= 0 )
    {
      v38 = (__int64)v50;
      PushW32ThreadLock(v50, v63, Win32FreePool);
      LOBYTE(v39) = v28;
      Status = xxxCreateWindowStation((unsigned int)&v57, v39, a2, v9, a4, a5, v38, (__int64)pszDest, a8, (__int64)&v49);
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), v40, v41, v42);
      *(_QWORD *)(ThreadWin32Thread + 16) = v63[0];
      v37 = Status;
      if ( Status >= 0 )
        goto LABEL_52;
    }
    else
    {
      v37 = v29;
    }
    v49 = 0LL;
    v44 = RtlNtStatusToDosError(v37);
    UserSetLastError(v44);
    goto LABEL_52;
  }
  v49 = 0LL;
  UserSetLastError(87LL);
LABEL_52:
  if ( v50 )
    Win32FreePool(v50);
  if ( BaseAddress )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  v17 = 0LL;
LABEL_57:
  UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
  return v49;
}
