/*
 * XREFs of DestroyInputContext @ 0x1C013A7D0
 * Callers:
 *     NtUserDestroyInputContext @ 0x1C013A760 (NtUserDestroyInputContext.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     FreeHwndList @ 0x1C006F360 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006F3E0 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     AssociateInputContext @ 0x1C010F604 (AssociateInputContext.c)
 */

__int64 __fastcall DestroyInputContext(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  struct tagBWL *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct tagBWL *v8; // rbp
  unsigned __int64 *i; // rsi
  __int64 v10; // rax
  __int64 v12; // rcx

  v3 = a1[2];
  if ( v3 != gptiCurrent )
  {
    v12 = 5LL;
LABEL_16:
    UserSetLastError(v12, a2);
    return 0LL;
  }
  if ( a1 == *(_QWORD **)(v3 + 760) )
  {
    v12 = 87LL;
    goto LABEL_16;
  }
  v4 = BuildHwndList(
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 432) + 8LL) + 16LL) + 112LL),
         (struct tagWND *)3,
         a1[2]);
  v8 = v4;
  if ( v4 )
  {
    for ( i = (unsigned __int64 *)((char *)v4 + 32); *i != 1; ++i )
    {
      LOBYTE(v5) = 1;
      v10 = HMValidateHandleNoSecure(*i, v5, v6, v7);
      if ( v10 )
      {
        if ( *(_QWORD *)(v10 + 264) == *a1 )
          AssociateInputContext(v10, *(__int64 **)(v3 + 760));
      }
    }
    FreeHwndList(v8);
  }
  if ( (*(_BYTE *)(gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + 25LL) & 1) == 0 )
    HMDestroyUnlockedObject();
  return 1LL;
}
