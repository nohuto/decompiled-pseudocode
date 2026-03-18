/*
 * XREFs of _BuildNameList @ 0x1C00F7DC4
 * Callers:
 *     NtUserBuildNameList @ 0x1C00F7CD0 (NtUserBuildNameList.c)
 * Callees:
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall BuildNameList(__int64 a1, _DWORD *a2, size_t a3, _DWORD *a4)
{
  char v6; // dl
  _WORD *v7; // rbx
  __int64 v8; // rsi
  unsigned int v9; // r15d
  __int64 v10; // r12
  __int64 CurrentProcess; // rax
  bool v12; // zf
  PGENERIC_MAPPING v13; // rax
  unsigned int v14; // r13d
  __int64 NameInfo; // rax
  __int64 v16; // r15
  _WORD *v17; // rbx
  char v19; // [rsp+20h] [rbp-58h]
  int v20; // [rsp+24h] [rbp-54h]
  PGENERIC_MAPPING v21; // [rsp+28h] [rbp-50h]
  unsigned __int64 v22; // [rsp+38h] [rbp-40h]

  v6 = 1;
  v19 = 1;
  a2[1] = 0;
  v7 = a2 + 2;
  v22 = (unsigned __int64)a2 + (unsigned int)a3 - 2;
  if ( a1 )
  {
    v8 = *(_QWORD *)(a1 + 16);
    v9 = 64;
    v20 = 64;
    v21 = DesktopMapping;
    v10 = 32LL;
    CurrentProcess = PsGetCurrentProcess(a1);
    v12 = (unsigned int)IsProcessDwm(CurrentProcess) == 0;
    v13 = DesktopMapping;
    if ( v12 )
    {
      v6 = 1;
    }
    else
    {
      v6 = 0;
      v19 = 0;
    }
  }
  else
  {
    v8 = grpWinStaList;
    v9 = 256;
    v20 = 256;
    v13 = WinStaMapping;
    v21 = WinStaMapping;
    v10 = 8LL;
  }
  v14 = 0;
  *a4 = 0;
  while ( v8 )
  {
    LOBYTE(a3) = v6;
    if ( (unsigned int)AccessCheckObject(v8, v9, a3, v13) )
    {
      NameInfo = ObQueryNameInfo(v8);
      v16 = NameInfo;
      if ( NameInfo )
      {
        if ( (unsigned __int64)v7 + *(unsigned __int16 *)(NameInfo + 8) + 2 >= v22 )
        {
          *a4 += (_DWORD)v7 - (_DWORD)a2;
          v7 = a2 + 2;
          v14 = -1073741789;
        }
        ++a2[1];
        a3 = *(unsigned __int16 *)(NameInfo + 8);
        if ( (unsigned __int64)v7 + a3 + 2 <= v22 )
        {
          memmove(v7, *(const void **)(NameInfo + 16), a3);
          v17 = (_WORD *)((char *)v7 + *(unsigned __int16 *)(v16 + 8));
          *v17 = 0;
          v7 = v17 + 1;
        }
        v9 = v20;
      }
      else
      {
        v9 = v20;
      }
    }
    v8 = *(_QWORD *)(v10 + v8);
    v13 = v21;
    v6 = v19;
  }
  *v7 = 0;
  *a2 = (_DWORD)v7 + 2 - (_DWORD)a2;
  *a4 += (_DWORD)v7 + 2 - (_DWORD)a2;
  return v14;
}
