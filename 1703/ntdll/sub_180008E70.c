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

_BOOL8 __fastcall sub_180008E70(__int64 a1, _QWORD *a2)
{
  int v3; // edi
  char *v4; // rbx
  __int64 v5; // rax

  v3 = RtlRunOnceExecuteOnce(&unk_18015C300, sub_180008C50, 0LL, 0LL);
  if ( v3 >= 0 )
  {
    memset(a2, 0, 0x28uLL);
    v4 = (char *)sub_1800093FC(512LL, 0LL);
    if ( v4 )
    {
      v5 = sub_1800093FC(0x2000LL, 1LL);
      if ( v5 )
      {
        *a2 = 0LL;
        a2[3] = v5;
        *((_DWORD *)a2 + 2) = 0;
        a2[2] = v4;
        *((_DWORD *)a2 + 3) = 2048;
        if ( (v4 + 512 >= v4 ? 0x40 : 0) != 0 )
          memset64(v4, (unsigned __int64)(a2 + 1) | 1, v4 + 512 >= v4 ? 0x40 : 0);
        v4 = 0LL;
        v3 = 0;
      }
      else
      {
        v3 = -1073741801;
      }
      if ( v4 )
        sub_18000913C((_DWORD)v4);
    }
    else
    {
      v3 = -1073741801;
    }
  }
  return v3 >= 0;
}
