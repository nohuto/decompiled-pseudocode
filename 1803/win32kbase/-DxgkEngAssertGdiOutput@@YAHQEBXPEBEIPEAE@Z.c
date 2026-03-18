/*
 * XREFs of ?DxgkEngAssertGdiOutput@@YAHQEBXPEBEIPEAE@Z @ 0x1C00C8BF0
 * Callers:
 *     <none>
 * Callees:
 *     hdevEnumerate @ 0x1C004E820 (hdevEnumerate.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall DxgkEngAssertGdiOutput(const void *a1, const unsigned __int8 *a2, __int64 a3, bool *a4)
{
  unsigned int v5; // r14d
  __int64 v8; // rax
  struct PDEV *v9; // rcx
  BOOL v10; // edi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(_QWORD, _QWORD); // rax
  struct PDEV *v14; // rax
  struct PDEV *v15; // rbx
  int v16; // esi
  struct PDEV *i; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(_QWORD, __int64); // rax
  struct PDEV *v21; // rax
  struct PDEV *v22; // rbx
  _BOOL8 result; // rax

  v5 = a3;
  if ( gOldModeChange )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = 0LL;
  v10 = 1;
  while ( 1 )
  {
    v14 = hdevEnumerate(v9, (int)a2, a3);
    v15 = v14;
    if ( !v14 )
      break;
    if ( (*((_DWORD *)v14 + 10) & 0x20400) == 0 )
    {
      v11 = *((_QWORD *)v14 + 321);
      if ( *(const void **)(v11 + 240) == a1 )
      {
        v12 = *(unsigned int *)(v11 + 256);
        if ( (unsigned int)v12 < v5 )
        {
          *((_DWORD *)v15 + 652) = -(a2[v12] != 0) - 2147483645;
          v13 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v15 + 340);
          if ( v13 )
            LODWORD(v13) = v13(*((_QWORD *)v15 + 224), 0LL);
          *((_DWORD *)v15 + 652) = 0;
          v10 = v10 && (_DWORD)v13;
        }
      }
    }
    v9 = v15;
  }
  v16 = 0;
  for ( i = 0LL; ; i = v22 )
  {
    v21 = hdevEnumerate(i, (int)a2, a3);
    v22 = v21;
    if ( !v21 )
      break;
    if ( (*((_DWORD *)v21 + 10) & 0x20400) == 0 )
    {
      v18 = *((_QWORD *)v21 + 321);
      if ( *(const void **)(v18 + 240) == a1 )
      {
        v19 = *(unsigned int *)(v18 + 256);
        if ( (unsigned int)v19 < v5 )
        {
          if ( a2[v19] )
          {
            *((_DWORD *)v22 + 652) = 0x80000000;
            v20 = (__int64 (__fastcall *)(_QWORD, __int64))*((_QWORD *)v22 + 340);
            if ( v20 )
              LODWORD(v20) = v20(*((_QWORD *)v22 + 224), 1LL);
            *((_DWORD *)v22 + 652) = 0;
            v10 = v10 && (_DWORD)v20;
            v16 = 1;
          }
        }
      }
    }
  }
  result = v10;
  *a4 = v16 != 0;
  return result;
}
