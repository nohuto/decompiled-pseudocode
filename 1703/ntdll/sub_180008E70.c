/*
 * XREFs of sub_180008E70 @ 0x180008E70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000913C @ 0x18000913C (sub_18000913C.c)
 *     sub_1800093FC @ 0x1800093FC (sub_1800093FC.c)
 *     RtlRunOnceExecuteOnce @ 0x18001B510 (RtlRunOnceExecuteOnce.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

_BOOL8 __fastcall sub_180008E70(PRTL_RUN_ONCE a1, _QWORD *a2, PVOID *a3)
{
  NTSTATUS v4; // edi
  char *v5; // rbx
  __int64 v6; // rax

  v4 = RtlRunOnceExecuteOnce(&RunOnce, (PRTL_RUN_ONCE_INIT_FN)InitFn, 0LL, 0LL);
  if ( v4 >= 0 )
  {
    memset(a2, 0, 0x28uLL);
    v5 = (char *)sub_1800093FC(0x200uLL);
    if ( v5 )
    {
      v6 = sub_1800093FC(0x2000uLL);
      if ( v6 )
      {
        *a2 = 0LL;
        a2[3] = v6;
        *((_DWORD *)a2 + 2) = 0;
        a2[2] = v5;
        *((_DWORD *)a2 + 3) = 2048;
        if ( (v5 + 512 >= v5 ? 0x40 : 0) != 0 )
          memset64(v5, (unsigned __int64)(a2 + 1) | 1, v5 + 512 >= v5 ? 0x40 : 0);
        v5 = 0LL;
        v4 = 0;
      }
      else
      {
        v4 = -1073741801;
      }
      if ( v5 )
        sub_18000913C((_DWORD)v5);
    }
    else
    {
      v4 = -1073741801;
    }
  }
  return v4 >= 0;
}
