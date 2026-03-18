/*
 * XREFs of NtUserCreateWindowEx @ 0x1C00378A0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall NtUserCreateWindowEx(
        unsigned int a1,
        size_t *a2,
        __m128i *a3,
        __m128i *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14,
        int a15,
        int a16,
        __int64 a17)
{
  int v18; // r12d
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rax
  int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // r13d
  size_t *v31; // rdx
  __m128i **v32; // rcx
  __m128i v33; // xmm0
  unsigned __int64 v34; // xmm0_8
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  __m128i *v38; // r8
  unsigned __int64 v39; // xmm0_8
  unsigned __int64 v40; // r9
  __m128i *v41; // r9
  unsigned __int64 v42; // xmm0_8
  unsigned __int64 v43; // r10
  unsigned __int64 v44; // r10
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // r9
  __int64 *Window; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdi
  size_t Size[2]; // [rsp+90h] [rbp-D8h] BYREF
  int v53; // [rsp+A0h] [rbp-C8h]
  int v54; // [rsp+A4h] [rbp-C4h]
  __m128i v55; // [rsp+B0h] [rbp-B8h] BYREF
  __m128i v56; // [rsp+C0h] [rbp-A8h] BYREF
  _QWORD v57[3]; // [rsp+E0h] [rbp-88h] BYREF
  _QWORD v58[3]; // [rsp+F8h] [rbp-70h] BYREF
  _BYTE v59[88]; // [rsp+110h] [rbp-58h] BYREF

  v18 = 0;
  v53 = 0;
  v54 = 0;
  EnterCrit(0LL, 1LL);
  if ( a10 == -3 )
  {
    v23 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), v19, v20, v21);
    if ( ThreadWin32Thread )
    {
      v25 = *(_QWORD *)(ThreadWin32Thread + 408);
      if ( v25 )
        v23 = *(_QWORD *)(v25 + 104);
    }
    if ( (a16 & 1) != 0 )
      goto LABEL_88;
  }
  else if ( a10 )
  {
    v23 = ValidateHwnd(a10);
    if ( !v23 )
      goto LABEL_87;
  }
  else
  {
    v23 = 0LL;
  }
  if ( (a16 & 0xFFFFFFF8) == 0 )
  {
    if ( (a5 & 0xC0000000) == 0x40000000 || !a11 )
    {
      v26 = a11;
LABEL_13:
      v27 = W32GetThreadWin32Thread(KeGetCurrentThread(), v19, v20, v21);
      LOWORD(v28) = 0;
      if ( *(_DWORD *)(v27 + 552) <= 0x400u )
        v28 = *(_DWORD *)(v27 + 568);
      v29 = a1 & 0x800777FF;
      if ( (v28 & 0x800) == 0 )
        v29 = a1;
      v30 = v29 & 0x8A7F77FF;
      if ( (v29 & 0x8A7F77FF) == v29 )
        v30 = v29;
      v31 = a2;
      v32 = (__m128i **)W32UserProbeAddress;
      if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( (unsigned __int64)a2 >= W32UserProbeAddress )
          v31 = (size_t *)W32UserProbeAddress;
        v33 = *(__m128i *)v31;
        Size[0] = *v31;
        v34 = _mm_srli_si128(v33, 8).m128i_u64[0];
        Size[1] = v34;
        if ( v34 )
        {
          if ( LODWORD(Size[0]) > (HIDWORD(Size[0]) & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( (Size[0] & 0x8000000000000000uLL) != 0LL )
          {
            v35 = LODWORD(Size[0]);
            v45 = v34 + LODWORD(Size[0]) + 1LL;
            if ( v45 < v34 || v45 > W32UserProbeAddress )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v34 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v35 = LODWORD(Size[0]);
            v36 = v34 + LODWORD(Size[0]) + 2LL;
            if ( v36 < v34 || v36 > W32UserProbeAddress )
              ExRaiseAccessViolation();
          }
          v37 = Win32AllocPoolWithQuota(v35 + 2, 2020897621LL);
          Size[1] = v37;
          if ( !v37 )
            ExRaiseStatus(-1073741801);
          v54 = 1;
          PushW32ThreadLock(v37, v59, Win32FreePool);
          memmove((void *)Size[1], (const void *)v34, LODWORD(Size[0]));
          *(_WORD *)(Size[1] + 2 * ((unsigned __int64)LODWORD(Size[0]) >> 1)) = 0;
          HIDWORD(Size[0]) ^= (HIDWORD(Size[0]) ^ (LODWORD(Size[0]) + 2)) & 0x7FFFFFFF;
          v32 = (__m128i **)W32UserProbeAddress;
        }
        else
        {
          LODWORD(Size[0]) = 0;
        }
        v31 = Size;
      }
      v38 = a3;
      if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( a3 >= *v32 )
          v38 = *v32;
        v55 = *v38;
        v39 = _mm_srli_si128(v55, 8).m128i_u64[0];
        if ( v39 )
        {
          if ( v55.m128i_i32[0] > (v55.m128i_i32[1] & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( v55.m128i_i32[1] < 0 )
          {
            v46 = v39 + v55.m128i_u32[0] + 1LL;
            if ( v46 < v39 || v46 > (unsigned __int64)*v32 )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v55.m128i_i8[8] & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v40 = v39 + v55.m128i_u32[0] + 2LL;
            if ( v40 < v39 || v40 > (unsigned __int64)*v32 )
              ExRaiseAccessViolation();
          }
        }
        else
        {
          v55.m128i_i32[0] = 0;
        }
        v38 = &v55;
      }
      v41 = a4;
      if ( a4 )
      {
        if ( a4 >= *v32 )
          v41 = *v32;
        v56 = *v41;
        v42 = _mm_srli_si128(v56, 8).m128i_u64[0];
        if ( v42 )
        {
          if ( v56.m128i_i32[0] > (v56.m128i_i32[1] & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( v56.m128i_i32[1] < 0 )
          {
            v44 = v42 + v56.m128i_u32[0] + 1LL;
            if ( v44 < v42 || v44 > (unsigned __int64)*v32 )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v56.m128i_i8[8] & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v43 = v42 + v56.m128i_u32[0] + 2LL;
            if ( v43 < v42 || v43 > (unsigned __int64)*v32 )
              ExRaiseAccessViolation();
          }
        }
        else
        {
          v56.m128i_i32[0] = 0;
        }
        v41 = &v56;
      }
      v58[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v58;
      v58[1] = v23;
      if ( v23 )
        ++*(_DWORD *)(v23 + 8);
      Window = (__int64 *)xxxCreateWindowEx(
                            v30,
                            (_DWORD)v31,
                            (_DWORD)v38,
                            (_DWORD)v41,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9,
                            v23,
                            v26,
                            a12,
                            a13,
                            a14,
                            a15,
                            a16,
                            a17);
      v50 = 0LL;
      if ( Window )
        v50 = *Window;
      ThreadUnlock1(v49, v48);
      goto LABEL_79;
    }
    v26 = ValidateHmenu();
    if ( v26 )
    {
      v57[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v57;
      v57[1] = v26;
      ++*(_DWORD *)(v26 + 8);
      v18 = 1;
      v53 = 1;
      goto LABEL_13;
    }
LABEL_87:
    v50 = 0LL;
    goto LABEL_83;
  }
LABEL_88:
  v50 = 0LL;
  UserSetLastError(87LL);
LABEL_79:
  if ( v54 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v59);
  if ( v18 )
    ThreadUnlock1(v22, v19);
LABEL_83:
  UserSessionSwitchLeaveCrit(v22, v19, v20, v21);
  return v50;
}
