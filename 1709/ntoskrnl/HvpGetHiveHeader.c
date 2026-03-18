/*
 * XREFs of HvpGetHiveHeader @ 0x1404E4B6C
 * Callers:
 *     HvLoadHive @ 0x1404E4CD0 (HvLoadHive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     HvpHeaderCheckSum @ 0x1404E4CA4 (HvpHeaderCheckSum.c)
 */

__int64 __fastcall HvpGetHiveHeader(__int64 a1, char **a2, _QWORD *a3)
{
  char **v4; // r14
  char *v6; // rax
  char *v7; // rbx
  int v8; // ecx
  unsigned __int8 (__fastcall *v9)(__int64, _QWORD, int *, char *, int); // rax
  int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  int v13; // ecx
  unsigned __int8 (__fastcall *v15)(__int64, _QWORD, int *, char *, int); // rax
  __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-18h]
  int v18; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = a2;
  LOBYTE(a2) = 1;
  v6 = (char *)(*(__int64 (__fastcall **)(_QWORD, char **, __int64))(a1 + 24))(
                 *(unsigned int *)(a1 + 116),
                 a2,
                 842222915LL);
  v7 = v6;
  if ( !v6 )
    return 2LL;
  memset(v6, 0, 0x1000uLL);
  v8 = *(_DWORD *)(a1 + 120);
  v9 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD, int *, char *, int))(a1 + 48);
  v18 = 0;
  if ( !v9(a1, 0LL, &v18, v7, v8 << 9)
    || *(_DWORD *)v7 != 1718052210
    || *((_DWORD *)v7 + 127) != (unsigned int)HvpHeaderCheckSum(v7)
    || (v10 = *((_DWORD *)v7 + 10), (unsigned int)(v10 - 1) > 0x7FFFDFFF)
    || (v10 & 0xFFF) != 0 )
  {
    v15 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD, int *, char *, int))(a1 + 48);
    v17 = *(_DWORD *)(a1 + 120) << 9;
    v18 = 4096;
    if ( v15(a1, 0LL, &v18, v7, v17) && *(_DWORD *)v7 == 1852400232 && !*((_DWORD *)v7 + 1) )
    {
      v16 = *(unsigned int *)(a1 + 116);
      *a3 = *(_QWORD *)(v7 + 20);
      (*(void (__fastcall **)(char *, __int64))(a1 + 32))(v7, v16);
      return 4LL;
    }
LABEL_16:
    (*(void (__fastcall **)(char *, _QWORD))(a1 + 32))(v7, *(unsigned int *)(a1 + 116));
    return 0LL;
  }
  if ( *((_DWORD *)v7 + 7) )
    goto LABEL_16;
  v11 = *((_DWORD *)v7 + 5);
  if ( v11 > 1 )
    goto LABEL_16;
  v12 = *((_DWORD *)v7 + 6);
  if ( v12 < 3 || v11 == 1 && v12 - 1 > 5 )
    goto LABEL_16;
  if ( *((_DWORD *)v7 + 8) != 1 )
    goto LABEL_16;
  *a3 = *(_QWORD *)(v7 + 12);
  v13 = *((_DWORD *)v7 + 2);
  *v4 = v7;
  if ( *((_DWORD *)v7 + 1) != v13 )
    return 5LL;
  *((_DWORD *)v7 + 11) = 1;
  return 3LL;
}
