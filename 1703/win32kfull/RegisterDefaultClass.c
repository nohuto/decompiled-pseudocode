/*
 * XREFs of RegisterDefaultClass @ 0x1C0036E20
 * Callers:
 *     NtUserRegisterClassExWOW @ 0x1C0034FD0 (NtUserRegisterClassExWOW.c)
 *     NtUserGetClassInfoEx @ 0x1C0039810 (NtUserGetClassInfoEx.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 * Callees:
 *     InternalRegisterClassEx @ 0x1C003573C (InternalRegisterClassEx.c)
 */

__int64 __fastcall RegisterDefaultClass(wchar_t *Str1)
{
  int v2; // r13d
  int v3; // r15d
  __int64 IntegerAtom; // r12
  unsigned int v5; // ebx
  _QWORD *v6; // rdi
  const wchar_t *v7; // rdx
  __int64 result; // rax
  bool v9; // zf
  __int64 *v10; // rax
  __int16 v11; // dx
  unsigned int v12; // r8d
  _BYTE v13[4]; // [rsp+20h] [rbp-60h] BYREF
  int v14; // [rsp+24h] [rbp-5Ch]
  __int64 v15; // [rsp+28h] [rbp-58h]
  __int64 v16; // [rsp+30h] [rbp-50h]
  __int64 v17; // [rsp+38h] [rbp-48h]
  __int64 v18; // [rsp+40h] [rbp-40h]
  __int64 v19; // [rsp+48h] [rbp-38h]
  __int64 v20; // [rsp+50h] [rbp-30h]
  __int64 v21; // [rsp+58h] [rbp-28h]
  __int64 v22; // [rsp+60h] [rbp-20h]
  __int64 v23; // [rsp+68h] [rbp-18h]
  __int64 v24; // [rsp+70h] [rbp-10h]
  int v25; // [rsp+78h] [rbp-8h]
  int v26; // [rsp+7Ch] [rbp-4h]
  __int16 v27; // [rsp+B0h] [rbp+30h] BYREF

  v2 = 1;
  v3 = *(_DWORD *)(gptiCurrent + 440LL) & 4;
  v27 = 0;
  if ( ((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    IntegerAtom = (unsigned __int8)RtlGetIntegerAtom(Str1, &v27);
  }
  else
  {
    v27 = (__int16)Str1;
    IntegerAtom = 1LL;
  }
  v5 = 0;
  v6 = &gDefaultServerClasses;
  while ( 1 )
  {
    if ( v3 && (*(_DWORD *)v6 & 1) == 0 || ((*(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 784LL) >> v5) & 1) != 0 )
      goto LABEL_8;
    v2 = 0;
    if ( IntegerAtom )
      break;
    v7 = (const wchar_t *)v6[5];
    if ( ((unsigned __int64)v7 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v9 = _wcsicmp(Str1, v7) == 0;
      goto LABEL_13;
    }
LABEL_8:
    ++v5;
    v6 += 6;
    if ( v5 >= 8 )
      goto LABEL_9;
  }
  v9 = v27 == *(_WORD *)(gpsi + 2LL * ((*(_DWORD *)v6 >> 3) & 0x1F) + 852);
LABEL_13:
  if ( !v9 )
    goto LABEL_8;
  v16 = 0LL;
  v18 = 0LL;
  v23 = 0LL;
  v17 = hModuleWin;
  v21 = 0LL;
  v26 = 1;
  v14 = *((_DWORD *)&gDefaultServerClasses + 12 * v5 + 2);
  v15 = *((_QWORD *)&gDefaultServerClasses + 6 * v5 + 2);
  v25 = *((_DWORD *)&gDefaultServerClasses + 12 * v5 + 6);
  if ( (*((_DWORD *)&gDefaultServerClasses + 12 * v5) & 2) != 0 && (v10 = (__int64 *)gasyscur[1]) != 0LL )
    v19 = *v10;
  else
    v19 = 0LL;
  v11 = *((_WORD *)&gDefaultServerClasses + 24 * v5 + 2);
  v12 = *((unsigned __int16 *)&gDefaultServerClasses + 24 * v5 + 3) | 0x41;
  v20 = *((_QWORD *)&gDefaultServerClasses + 6 * v5 + 4);
  v22 = *((_QWORD *)&gDefaultServerClasses + 6 * v5 + 5);
  v24 = v22;
  result = (__int64)InternalRegisterClassEx((__int64)v13, v11, v12);
  if ( result )
  {
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 784LL) |= 1 << v5;
LABEL_9:
    if ( v2 )
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) |= 0x2000u;
    return 1LL;
  }
  return result;
}
