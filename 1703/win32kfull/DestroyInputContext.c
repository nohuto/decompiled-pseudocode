/*
 * XREFs of DestroyInputContext @ 0x1C01357D4
 * Callers:
 *     NtUserDestroyInputContext @ 0x1C0135750 (NtUserDestroyInputContext.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C00693F0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0069470 (BuildHwndList.c)
 *     AssociateInputContext @ 0x1C0103F34 (AssociateInputContext.c)
 */

__int64 __fastcall DestroyInputContext(_QWORD *a1)
{
  __int64 v2; // rbx
  struct tagBWL *v3; // rax
  struct tagBWL *v4; // rbp
  unsigned __int64 *i; // rsi
  __int64 v6; // rax
  __int64 v8; // rcx

  v2 = a1[2];
  if ( v2 != gptiCurrent )
  {
    v8 = 5LL;
LABEL_16:
    UserSetLastError(v8);
    return 0LL;
  }
  if ( a1 == *(_QWORD **)(v2 + 704) )
  {
    v8 = 87LL;
    goto LABEL_16;
  }
  v3 = BuildHwndList(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 408) + 8LL) + 16LL) + 112LL), 3, a1[2]);
  v4 = v3;
  if ( v3 )
  {
    for ( i = (unsigned __int64 *)((char *)v3 + 32); *i != 1; ++i )
    {
      v6 = HMValidateHandleNoSecure(*i, 1);
      if ( v6 )
      {
        if ( *(_QWORD *)(v6 + 264) == *a1 )
          AssociateInputContext(v6, *(__int64 **)(v2 + 704));
      }
    }
    FreeHwndList(v4);
  }
  if ( (*(_BYTE *)(gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + 25LL) & 1) == 0 )
    HMDestroyUnlockedObject();
  return 1LL;
}
