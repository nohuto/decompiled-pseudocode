/*
 * XREFs of sub_18002AFBC @ 0x18002AFBC
 * Callers:
 *     sub_18002BBDC @ 0x18002BBDC (sub_18002BBDC.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 *     sub_180023700 @ 0x180023700 (sub_180023700.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18002AE58 @ 0x18002AE58 (sub_18002AE58.c)
 *     sub_18002B1A4 @ 0x18002B1A4 (sub_18002B1A4.c)
 *     sub_18002B1E8 @ 0x18002B1E8 (sub_18002B1E8.c)
 *     sub_18002B488 @ 0x18002B488 (sub_18002B488.c)
 *     sub_18002B4E4 @ 0x18002B4E4 (sub_18002B4E4.c)
 *     sub_18003BC9C @ 0x18003BC9C (sub_18003BC9C.c)
 */

__int64 sub_18002AFBC(__int64 a1, int a2, int a3, ...)
{
  unsigned __int64 v3; // rbp
  int v7; // edi
  unsigned __int16 *v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // eax
  int v13; // eax
  int v14; // r8d
  unsigned __int64 *v15; // r8
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int16 *v18; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v18 = va_arg(va1, unsigned __int16 *);
  v3 = *(_QWORD *)(a1 + 48);
  v7 = RtlImageNtHeaderEx(3, v3, 0LL, (unsigned __int16 **)va);
  if ( v7 < 0 )
    return (unsigned int)v7;
  v8 = v18;
  if ( (*(_DWORD *)(a1 + 104) & 0x1000004) == 4 )
  {
    if ( *((_DWORD *)v18 + 10) )
      v9 = v3 + *((unsigned int *)v18 + 10);
    else
      v9 = 0LL;
    *(_QWORD *)(a1 + 56) = v9;
  }
  if ( !(unsigned __int8)sub_18002B1A4(a1) )
    return (unsigned int)-1073741701;
  *(_QWORD *)(a1 + 248) = *((_QWORD *)v8 + 6);
  *(_QWORD *)(a1 + 256) = MEMORY[0x7FFE0014];
  if ( (a2 & 0x800000) == 0 && (*(_BYTE *)(a1 + 104) & 4) != 0 && (*(_DWORD *)(a1 + 104) & 0x2000) == 0 && a3 )
  {
    v17 = 0LL;
    v12 = sub_18002B488();
    v13 = sub_18002B1E8(v3, *(_DWORD *)(a1 + 64), 0, v12 ^ (unsigned int)dword_18016F368, (__int64)&v17);
    if ( v3 == 0x180000000LL || !*(_QWORD *)(a1 + 56) || (v18[36] != 6 || v18[37] < 3u) && v18[36] < 7u || v13 )
    {
      v7 = sub_180023700(a1, v18, v17);
      if ( v7 < 0 )
        return (unsigned int)v7;
      goto LABEL_17;
    }
    return (unsigned int)-1073741701;
  }
LABEL_17:
  v14 = *(_DWORD *)(a1 + 104);
  LOBYTE(v10) = (v14 & 0x200) == 0;
  if ( ((unsigned __int8)v10 & ((a2 & 0x800000) == 0)) != 0 )
  {
    sub_18002AE58(v3, *(_DWORD *)(a1 + 64));
    v14 = *(_DWORD *)(a1 + 104);
  }
  v15 = (unsigned __int64 *)(v14 | 0x2200u);
  *(_DWORD *)(a1 + 104) = (_DWORD)v15;
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D070, v10, v15, v11);
  *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) = 2;
  if ( (a2 & 0x800000) == 0 && *(_QWORD *)(a1 + 176) )
    sub_18002B4E4(a1);
  RtlReleaseSRWLockExclusive(&qword_18015D070);
  sub_18003BC9C(*(_QWORD *)(a1 + 48), a1 + 72, 5281LL);
  return (unsigned int)v7;
}
