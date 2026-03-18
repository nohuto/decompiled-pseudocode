/*
 * XREFs of NtGdiStartDoc @ 0x1C00FF7D0
 * Callers:
 *     <none>
 * Callees:
 *     ULongLongMult @ 0x1C00FFC68 (ULongLongMult.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C00FFCA8 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall NtGdiStartDoc(HDC a1, __int64 a2, int *a3, int a4)
{
  int *v4; // rdi
  unsigned int started; // r15d
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rax
  HRESULT v10; // eax
  size_t v11; // rdi
  const WCHAR *v12; // rax
  const void *v13; // rdx
  LPCWSTR lpszDocName; // rsi
  unsigned __int64 v15; // rax
  HRESULT v16; // eax
  ULONGLONG v17; // r9
  const WCHAR *v18; // rax
  LPCWSTR lpszOutput; // rsi
  unsigned __int64 v20; // rax
  HRESULT v21; // eax
  const WCHAR *v22; // rax
  LPCWSTR lpszDatatype; // rsi
  int v25; // [rsp+20h] [rbp-88h]
  int v26; // [rsp+24h] [rbp-84h] BYREF
  int v27; // [rsp+28h] [rbp-80h]
  ULONGLONG pullResult; // [rsp+30h] [rbp-78h] BYREF
  __int64 v29; // [rsp+38h] [rbp-70h]
  _DOCINFOW v30; // [rsp+40h] [rbp-68h] BYREF

  v4 = a3;
  started = 0;
  v26 = 0;
  v25 = 1;
  v30.cbSize = 0;
  memset(&v30.lpszDocName, 0, 24);
  if ( a2 )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v27 = *(_DWORD *)a2;
    v30.cbSize = v27;
    v6 = *(_QWORD *)(a2 + 8);
    v7 = *(_QWORD *)(a2 + 16);
    v8 = *(_QWORD *)(a2 + 24);
    if ( v6 )
    {
      if ( (v6 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v6 + 2 > W32UserProbeAddress || v6 + 2 < v6 )
        *W32UserProbeAddress = 0;
      v9 = -1LL;
      do
        ++v9;
      while ( *(_WORD *)(v6 + 2 * v9) );
      if ( v9 + 1 < v9 )
      {
        v29 = -1LL;
        v11 = pullResult;
      }
      else
      {
        v29 = v9 + 1;
        v10 = ULongLongMult(v9 + 1, 2uLL, &pullResult);
        v11 = pullResult;
        if ( v10 >= 0 && pullResult <= 0xFFFFFFFF )
        {
          if ( (_DWORD)pullResult )
            v12 = (const WCHAR *)AllocThreadBufferWithTag((unsigned int)pullResult, 1886221383LL, 0LL);
          else
            v12 = 0LL;
          v30.lpszDocName = v12;
        }
      }
      if ( v30.lpszDocName )
      {
        if ( v11 && (v11 + v6 > W32UserProbeAddress || v11 + v6 < v6) )
          *W32UserProbeAddress = 0;
        v13 = (const void *)v6;
        lpszDocName = v30.lpszDocName;
        memmove((void *)v30.lpszDocName, v13, v11);
        if ( v11 >= 2 )
          lpszDocName[(v11 >> 1) - 1] = 0;
      }
      else
      {
        v25 = 0;
      }
    }
    else
    {
      v11 = pullResult;
    }
    if ( v7 )
    {
      if ( (v7 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v7 + 2 > W32UserProbeAddress || v7 + 2 < v7 )
        *W32UserProbeAddress = 0;
      v15 = -1LL;
      do
        ++v15;
      while ( *(_WORD *)(v7 + 2 * v15) );
      if ( v15 + 1 < v15 )
      {
        v29 = -1LL;
      }
      else
      {
        v29 = v15 + 1;
        v16 = ULongLongMult(v15 + 1, 2uLL, &pullResult);
        v11 = pullResult;
        if ( v16 >= 0 && pullResult <= v17 )
        {
          if ( (_DWORD)pullResult )
            v18 = (const WCHAR *)AllocThreadBufferWithTag((unsigned int)pullResult, 1886221383LL, 0LL);
          else
            v18 = 0LL;
          v30.lpszOutput = v18;
        }
      }
      if ( v30.lpszOutput )
      {
        if ( v11 && (v11 + v7 > W32UserProbeAddress || v11 + v7 < v7) )
          *W32UserProbeAddress = 0;
        lpszOutput = v30.lpszOutput;
        memmove((void *)v30.lpszOutput, (const void *)v7, v11);
        if ( v11 >= 2 )
          lpszOutput[(v11 >> 1) - 1] = 0;
      }
      else
      {
        v25 = 0;
      }
    }
    if ( (unsigned __int64)v27 >= 0x28 && v8 )
    {
      if ( (v8 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v8 + 2 > W32UserProbeAddress || v8 + 2 < v8 )
        *W32UserProbeAddress = 0;
      v20 = -1LL;
      do
        ++v20;
      while ( *(_WORD *)(v8 + 2 * v20) );
      if ( v20 + 1 < v20 )
      {
        v29 = -1LL;
      }
      else
      {
        v29 = v20 + 1;
        v21 = ULongLongMult(v20 + 1, 2uLL, &pullResult);
        v11 = pullResult;
        if ( v21 >= 0 && pullResult <= 0xFFFFFFFF )
        {
          if ( pullResult && (pullResult + v8 > W32UserProbeAddress || pullResult + v8 < v8) )
            *W32UserProbeAddress = 0;
          if ( (_DWORD)v11 )
            v22 = (const WCHAR *)AllocThreadBufferWithTag((unsigned int)v11, 1886221383LL, 0LL);
          else
            v22 = 0LL;
          v30.lpszDatatype = v22;
        }
      }
      if ( v30.lpszDatatype )
      {
        lpszDatatype = v30.lpszDatatype;
        memmove((void *)v30.lpszDatatype, (const void *)v8, v11);
        if ( v11 >= 2 )
          lpszDatatype[(v11 >> 1) - 1] = 0;
      }
      else
      {
        v25 = 0;
      }
      v4 = a3;
    }
    else
    {
      v4 = a3;
    }
  }
  if ( v25 )
  {
    started = GreStartDocInternal(a1, &v30, &v26, a4);
    if ( started )
    {
      if ( (unsigned __int64)v4 >= W32UserProbeAddress )
        v4 = (int *)W32UserProbeAddress;
      *v4 = v26;
    }
  }
  if ( v30.lpszDocName )
    FreeThreadBufferWithTag(v30.lpszDocName);
  if ( v30.lpszOutput )
    FreeThreadBufferWithTag(v30.lpszOutput);
  if ( v30.lpszDatatype )
    FreeThreadBufferWithTag(v30.lpszDatatype);
  return started;
}
