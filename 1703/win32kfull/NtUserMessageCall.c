/*
 * XREFs of NtUserMessageCall @ 0x1C004FE70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserMessageCall(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  __int64 v7; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 (__fastcall *v16)(int, int, int, int, __int64, int); // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rsi
  _QWORD v21[4]; // [rsp+40h] [rbp-38h] BYREF

  v7 = a2;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  if ( ((a1 + 1) & 0xFFFFFFFFFFFEFFFFuLL) != 0 || (unsigned int)(a6 - 695) > 1 )
  {
    v13 = ValidateHwnd(a1);
    if ( !v13 )
    {
      v19 = 0LL;
      goto LABEL_11;
    }
    v21[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v21;
    v21[1] = v13;
    ++*(_DWORD *)(v13 + 8);
  }
  else
  {
    v13 = -1LL;
  }
  if ( (v7 & 0xFFFE0000) == 0 )
  {
    if ( (unsigned int)v7 >= 0x400 )
    {
      v17 = a5;
    }
    else
    {
      _mm_lfence();
      v16 = gapfnMessageCall[(unsigned __int8)MessageTable[v7]];
      v17 = a5;
      if ( v16 != NtUserfnDWORD )
      {
        v18 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, int, bool))v16)(
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
    v18 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))mpFnidPfn[((_BYTE)a6 + 6) & 0x1F])(
            v13,
            (unsigned int)v7,
            a3,
            a4,
            v17);
LABEL_8:
    v19 = v18;
    goto LABEL_9;
  }
  UserSetLastError(87LL);
  v19 = 0LL;
  UserSetLastError(87LL);
LABEL_9:
  if ( v13 != -1 )
    ThreadUnlock1(v12, v11);
LABEL_11:
  UserSessionSwitchLeaveCrit(v12, v11, v14, v15);
  return v19;
}
