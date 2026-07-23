/*
 * XREFs of sub_18005F770 @ 0x18005F770
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E238 @ 0x18005E238 (sub_18005E238.c)
 *     sub_18005F840 @ 0x18005F840 (sub_18005F840.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

_BOOL8 __fastcall sub_18005F770(PRTL_RUN_ONCE a1, _QWORD *a2, PVOID *a3)
{
  char *v4; // rbx
  void *v5; // rax
  int v6; // edi
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  memset(a2, 0, 0x28uLL);
  v8 = xmmword_18015A790;
  v4 = (char *)sub_18005E238(0x200uLL, 0x200uLL, 0, &v8);
  if ( v4 )
  {
    v8 = xmmword_18015A790;
    v5 = sub_18005E238(0x2000uLL, 0x2000uLL, 1, &v8);
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
      v6 = 0;
    }
    else
    {
      v6 = -1073741801;
    }
    if ( v4 )
    {
      v8 = xmmword_18015A790;
      sub_18005F840(v4, &v8);
    }
  }
  else
  {
    v6 = -1073741801;
  }
  return v6 >= 0;
}
