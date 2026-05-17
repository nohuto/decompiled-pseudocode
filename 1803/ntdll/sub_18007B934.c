/*
 * XREFs of sub_18007B934 @ 0x18007B934
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180034390 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     _wcsnicmp @ 0x18008CC10 (_wcsnicmp.c)
 */

bool __fastcall sub_18007B934(unsigned __int64 a1, __int64 a2, _WORD *a3)
{
  char v3; // di
  __int64 v5; // rax
  const wchar_t *v7; // rbx
  int v8; // eax
  int v9; // ecx
  unsigned __int64 v11; // rbx
  __int64 v12; // rcx
  unsigned __int64 v13; // r14
  __int16 v14; // ax
  _WORD *v15; // rax

  v3 = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)(a1 + 2 * v5) );
  v7 = (const wchar_t *)(a1 + 2LL * (unsigned int)v5);
  v8 = 0;
  if ( (unsigned __int64)v7 > a1 )
  {
    while ( 1 )
    {
      v9 = v8;
      if ( *v7 == 92 && ++v8 == 4 )
        break;
      v8 = v9 + 1;
      if ( *v7 != 92 )
        v8 = v9;
      if ( (unsigned __int64)--v7 <= a1 )
        goto LABEL_11;
    }
    ++v7;
LABEL_11:
    if ( v8 == 4 && !wcsnicmp(L"DriverStore", v7, 0xBuLL) )
    {
      v11 = ((__int64)((__int64)v7 - a1) >> 1) + 11;
      if ( v11 <= 0x7FFFFFFE )
      {
        v12 = 351LL;
        v13 = a1 - (_QWORD)a3;
        do
        {
          if ( !(v11 + v12 - 351) )
            break;
          v14 = *(_WORD *)((char *)a3 + v13);
          if ( !v14 )
            break;
          *a3++ = v14;
          --v12;
        }
        while ( v12 );
        v15 = a3 - 1;
        if ( v12 )
          v15 = a3;
        *v15 = 0;
        return v12 != 0;
      }
      else
      {
        *a3 = 0;
      }
    }
  }
  return v3;
}
