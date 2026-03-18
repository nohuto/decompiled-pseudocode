/*
 * XREFs of NtUserCallOneParam @ 0x1C004C6D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserCallOneParam(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9

  v3 = a2;
  if ( a2 != 72 )
  {
    EnterCrit(0LL, 1LL);
    if ( (unsigned int)(v3 - 46) <= 0x2D )
    {
      _mm_lfence();
      v8 = (_QWORD *)((__int64 (__fastcall *)(__int64))apfnSimpleCall[v3])(a1);
      v9 = v8;
      if ( (unsigned int)v3 >= 0x31 )
      {
LABEL_4:
        UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
        return (__int64)v9;
      }
      if ( v8 )
      {
        v9 = (_QWORD *)*v8;
        goto LABEL_4;
      }
    }
    v9 = 0LL;
    goto LABEL_4;
  }
  EnterSharedCrit(0LL, 1LL);
  _mm_lfence();
  v11 = ReleaseDC_0(a1);
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v11;
}
