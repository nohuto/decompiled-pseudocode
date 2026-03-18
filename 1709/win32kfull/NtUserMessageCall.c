/*
 * XREFs of NtUserMessageCall @ 0x1C00AC580
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserMessageCall(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  __int64 v7; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(int, int, int, int, __int64, int); // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v19; // rdx
  _QWORD v20[4]; // [rsp+40h] [rbp-38h] BYREF

  v7 = a2;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  if ( ((a1 + 1) & 0xFFFFFFFFFFFEFFFFuLL) != 0 || (unsigned int)(a6 - 695) > 1 )
  {
    v13 = ValidateHwnd(a1);
    if ( !v13 )
    {
      v17 = 0LL;
      goto LABEL_11;
    }
    v20[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v20;
    v20[1] = v13;
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
  }
  else
  {
    v13 = -1LL;
  }
  if ( (v7 & 0xFFFE0000) == 0 )
  {
    if ( (unsigned int)v7 >= 0x400 )
    {
      v15 = a5;
    }
    else
    {
      _mm_lfence();
      v14 = gapfnMessageCall[(unsigned __int8)MessageTable[v7]];
      v15 = a5;
      if ( (char *)v14 != (char *)NtUserfnDWORD )
      {
        v16 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, int, bool))v14)(
                v13,
                (unsigned int)v7,
                a3,
                a4,
                a5,
                a6,
                a7 != 0);
        goto LABEL_8;
      }
    }
    v16 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))mpFnidPfn[((_BYTE)a6 + 6) & 0x1F])(
            v13,
            (unsigned int)v7,
            a3,
            a4,
            v15);
LABEL_8:
    v17 = v16;
    goto LABEL_9;
  }
  UserSetLastError(87LL, v11);
  v17 = 0LL;
  UserSetLastError(87LL, v19);
LABEL_9:
  if ( v13 != -1 )
    ThreadUnlock1(v12, v11);
LABEL_11:
  UserSessionSwitchLeaveCrit(v12, v11);
  return v17;
}
