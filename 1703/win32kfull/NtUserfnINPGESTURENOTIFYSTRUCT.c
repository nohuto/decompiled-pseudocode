/*
 * XREFs of NtUserfnINPGESTURENOTIFYSTRUCT @ 0x1C01E2A60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINPGESTURENOTIFYSTRUCT(
        __int64 *a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int128 v10; // [rsp+50h] [rbp-28h]

  if ( a2 == 284 && a6 != 670 )
  {
    v6 = 0LL;
LABEL_4:
    v7 = 5LL;
    goto LABEL_5;
  }
  if ( a4 + 24 < a4 || a4 + 24 > W32UserProbeAddress )
    a4 = W32UserProbeAddress;
  v10 = *(_OWORD *)a4;
  v6 = 0LL;
  if ( (unsigned int)*(_OWORD *)a4 != 24 || !HIDWORD(*(_QWORD *)(a4 + 16)) )
  {
    v7 = 87LL;
    goto LABEL_5;
  }
  if ( a2 == 284 )
  {
    v8 = 0LL;
    if ( a1 )
      v8 = *a1;
    if ( *((_QWORD *)&v10 + 1) != v8 )
      goto LABEL_4;
  }
  if ( !DWORD1(v10) )
    return _guard_dispatch_icall_fptr();
  v7 = 1004LL;
LABEL_5:
  UserSetLastError(v7);
  return v6;
}
