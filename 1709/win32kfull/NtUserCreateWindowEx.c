/*
 * XREFs of NtUserCreateWindowEx @ 0x1C0073740
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall NtUserCreateWindowEx(
        unsigned int a1,
        ULONG64 a2,
        __m128i *a3,
        __m128i *a4,
        unsigned int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        unsigned int a14,
        unsigned __int16 a15,
        int a16,
        __int64 a17)
{
  int v18; // r12d
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // rax
  int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // r13d
  wchar_t *v28; // rdx
  __m128i **v29; // rcx
  __m128i v30; // xmm0
  unsigned __int64 v31; // xmm0_8
  __int64 v32; // rax
  ULONG64 v33; // rdx
  __int64 v34; // rax
  __m128i *v35; // r8
  unsigned __int64 v36; // xmm0_8
  unsigned __int64 v37; // r9
  __m128i *v38; // r9
  unsigned __int64 v39; // xmm0_8
  unsigned __int64 v40; // r10
  unsigned __int64 v41; // r10
  ULONG64 v42; // rdx
  unsigned __int64 v43; // r9
  _DWORD *Window; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdi
  __int64 v48; // rcx
  size_t Size[2]; // [rsp+90h] [rbp-E8h] BYREF
  int v51; // [rsp+A0h] [rbp-D8h]
  int v52; // [rsp+A4h] [rbp-D4h]
  __m128i v53; // [rsp+B0h] [rbp-C8h] BYREF
  __m128i v54; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v55; // [rsp+D8h] [rbp-A0h]
  _QWORD v56[3]; // [rsp+E0h] [rbp-98h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+F8h] [rbp-80h]
  _QWORD v58[3]; // [rsp+108h] [rbp-70h] BYREF
  _QWORD v59[11]; // [rsp+120h] [rbp-58h] BYREF
  __int64 v63; // [rsp+1C8h] [rbp+50h]

  v18 = 0;
  v51 = 0;
  v52 = 0;
  EnterCrit(0LL, 1LL);
  if ( a10 == -3 )
  {
    v20 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v22 = *(_QWORD *)(ThreadWin32Thread + 432);
      if ( v22 )
        v20 = *(_QWORD *)(v22 + 104);
    }
    if ( (a16 & 1) != 0 )
      goto LABEL_88;
  }
  else if ( a10 )
  {
    v20 = ValidateHwnd(a10);
    if ( !v20 )
      goto LABEL_87;
  }
  else
  {
    v20 = 0LL;
  }
  if ( (a16 & 0xFFFFFFF8) == 0 )
  {
    v55 = gptiCurrent;
    if ( (a5 & 0xC0000000) == 0x40000000 || !a11 )
    {
      v23 = a11;
LABEL_10:
      v24 = W32GetThreadWin32Thread(KeGetCurrentThread());
      LOWORD(v25) = 0;
      if ( *(_DWORD *)(v24 + 608) <= 0x400u )
        v25 = *(_DWORD *)(v24 + 624);
      v26 = a1 & 0x800777FF;
      if ( (v25 & 0x800) == 0 )
        v26 = a1;
      v27 = v26 & 0x8A7F77FF;
      if ( (v26 & 0x8A7F77FF) == v26 )
        v27 = v26;
      v28 = (wchar_t *)a2;
      v29 = (__m128i **)MmUserProbeAddress;
      if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( a2 >= MmUserProbeAddress )
          v28 = (wchar_t *)MmUserProbeAddress;
        v30 = *(__m128i *)v28;
        Size[0] = *(_QWORD *)v28;
        v31 = _mm_srli_si128(v30, 8).m128i_u64[0];
        Size[1] = v31;
        if ( v31 )
        {
          if ( LODWORD(Size[0]) > (HIDWORD(Size[0]) & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( (Size[0] & 0x8000000000000000uLL) != 0LL )
          {
            v32 = LODWORD(Size[0]);
            v42 = v31 + LODWORD(Size[0]) + 1LL;
            if ( v42 < v31 || v42 > MmUserProbeAddress )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v31 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v32 = LODWORD(Size[0]);
            v33 = v31 + LODWORD(Size[0]) + 2LL;
            if ( v33 < v31 || v33 > MmUserProbeAddress )
              ExRaiseAccessViolation();
          }
          v63 = Win32AllocPoolWithQuota(v32 + 2, 2020897621LL);
          Size[1] = v63;
          if ( !v63 )
            ExRaiseStatus(-1073741801);
          v52 = 1;
          CurrentThread = KeGetCurrentThread();
          v34 = W32GetThreadWin32Thread(CurrentThread);
          v56[0] = *(_QWORD *)(v34 + 16);
          *(_QWORD *)(v34 + 16) = v56;
          v56[1] = v63;
          v56[2] = Win32FreePool;
          memmove((void *)Size[1], (const void *)v31, LODWORD(Size[0]));
          *(_WORD *)(Size[1] + 2 * ((unsigned __int64)LODWORD(Size[0]) >> 1)) = 0;
          HIDWORD(Size[0]) ^= (HIDWORD(Size[0]) ^ (LODWORD(Size[0]) + 2)) & 0x7FFFFFFF;
          v29 = (__m128i **)MmUserProbeAddress;
        }
        else
        {
          LODWORD(Size[0]) = 0;
        }
        v28 = (wchar_t *)Size;
        a2 = (ULONG64)Size;
      }
      v35 = a3;
      if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( a3 >= *v29 )
          v35 = *v29;
        v53 = *v35;
        v36 = _mm_srli_si128(v53, 8).m128i_u64[0];
        if ( v36 )
        {
          if ( v53.m128i_i32[0] > (v53.m128i_i32[1] & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( v53.m128i_i32[1] < 0 )
          {
            v43 = v36 + v53.m128i_u32[0] + 1LL;
            if ( v43 < v36 || v43 > (unsigned __int64)*v29 )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v53.m128i_i8[8] & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v37 = v36 + v53.m128i_u32[0] + 2LL;
            if ( v37 < v36 || v37 > (unsigned __int64)*v29 )
              ExRaiseAccessViolation();
          }
        }
        else
        {
          v53.m128i_i32[0] = 0;
        }
        v35 = &v53;
        a3 = &v53;
      }
      v38 = a4;
      if ( a4 )
      {
        if ( a4 >= *v29 )
          v38 = *v29;
        v54 = *v38;
        v39 = _mm_srli_si128(v54, 8).m128i_u64[0];
        if ( v39 )
        {
          if ( v54.m128i_i32[0] > (v54.m128i_i32[1] & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( v54.m128i_i32[1] < 0 )
          {
            v41 = v39 + v54.m128i_u32[0] + 1LL;
            if ( v41 < v39 || v41 > (unsigned __int64)*v29 )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v54.m128i_i8[8] & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v40 = v39 + v54.m128i_u32[0] + 2LL;
            if ( v40 < v39 || v40 > (unsigned __int64)*v29 )
              ExRaiseAccessViolation();
          }
        }
        else
        {
          v54.m128i_i32[0] = 0;
        }
        v38 = &v54;
        a4 = &v54;
      }
      v59[0] = *(_QWORD *)(v55 + 392);
      *(_QWORD *)(v55 + 392) = v59;
      v59[1] = v20;
      if ( v20 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
        v38 = a4;
        v35 = a3;
        v28 = (wchar_t *)a2;
      }
      Window = xxxCreateWindowEx(
                 v27,
                 v28,
                 (__int64)v35,
                 (__int64)v38,
                 a5,
                 a6,
                 a7,
                 a8,
                 a9,
                 (struct tagWND *)v20,
                 (_QWORD *)v23,
                 a12,
                 a13,
                 a14,
                 a15,
                 a16,
                 a17);
      v47 = 0LL;
      if ( Window )
        v47 = *(_QWORD *)Window;
      ThreadUnlock1(v46, v45);
      goto LABEL_76;
    }
    v23 = ValidateHmenu();
    if ( v23 )
    {
      v58[0] = *(_QWORD *)(gptiCurrent + 392LL);
      *(_QWORD *)(gptiCurrent + 392LL) = v58;
      v58[1] = v23;
      _InterlockedAdd((volatile signed __int32 *)(v23 + 8), 1u);
      v18 = 1;
      v51 = 1;
      goto LABEL_10;
    }
LABEL_87:
    v47 = 0LL;
    goto LABEL_80;
  }
LABEL_88:
  v47 = 0LL;
  UserSetLastError(87LL, v19);
LABEL_76:
  if ( v52 )
    PopAndFreeAlwaysW32ThreadLock(v56);
  if ( v18 )
    ThreadUnlock1(v48, v19);
LABEL_80:
  UserSessionSwitchLeaveCrit(v48, v19);
  return v47;
}
