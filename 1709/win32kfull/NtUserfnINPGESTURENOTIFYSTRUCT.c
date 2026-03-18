/*
 * XREFs of NtUserfnINPGESTURENOTIFYSTRUCT @ 0x1C01EEBF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINPGESTURENOTIFYSTRUCT(__int64 *a1, __int64 a2, __int64 a3, ULONG64 a4, __int64 a5, int a6)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int128 v10; // [rsp+50h] [rbp-28h]

  if ( (_DWORD)a2 == 284 && a6 != 670 )
  {
    v6 = 0LL;
LABEL_4:
    v7 = 5LL;
    goto LABEL_5;
  }
  if ( a4 + 24 < a4 || a4 + 24 > MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v10 = *(_OWORD *)a4;
  v6 = 0LL;
  if ( (unsigned int)*(_OWORD *)a4 != 24 || !HIDWORD(*(_QWORD *)(a4 + 16)) )
  {
    v7 = 87LL;
    goto LABEL_5;
  }
  if ( (_DWORD)a2 == 284 )
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
  UserSetLastError(v7, a2);
  return v6;
}
