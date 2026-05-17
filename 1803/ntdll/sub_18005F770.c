/*
 * XREFs of sub_18005F770 @ 0x18005F770
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E238 @ 0x18005E238 (sub_18005E238.c)
 *     sub_18005F840 @ 0x18005F840 (sub_18005F840.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

_BOOL8 __fastcall sub_18005F770(__int64 a1, _QWORD *a2)
{
  char *v3; // rbx
  void *v4; // rax
  int v5; // edi
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  memset(a2, 0, 0x28uLL);
  v7 = xmmword_18015A790;
  v3 = (char *)sub_18005E238(0x200uLL, 0x200uLL, 0, &v7);
  if ( v3 )
  {
    v7 = xmmword_18015A790;
    v4 = sub_18005E238(0x2000uLL, 0x2000uLL, 1, &v7);
    if ( v4 )
    {
      *a2 = 0LL;
      a2[3] = v4;
      *((_DWORD *)a2 + 2) = 0;
      a2[2] = v3;
      *((_DWORD *)a2 + 3) = 2048;
      if ( (v3 + 512 >= v3 ? 0x40 : 0) != 0 )
        memset64(v3, (unsigned __int64)(a2 + 1) | 1, v3 + 512 >= v3 ? 0x40 : 0);
      v3 = 0LL;
      v5 = 0;
    }
    else
    {
      v5 = -1073741801;
    }
    if ( v3 )
    {
      v7 = xmmword_18015A790;
      sub_18005F840(v3, &v7);
    }
  }
  else
  {
    v5 = -1073741801;
  }
  return v5 >= 0;
}
