/*
 * XREFs of ?DxgkEngAssertGdiOutput@@YAHQEBXPEBEIPEAE@Z @ 0x1C0067FB0
 * Callers:
 *     <none>
 * Callees:
 *     hdevEnumerate @ 0x1C00684D0 (hdevEnumerate.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall DxgkEngAssertGdiOutput(const void *a1, const unsigned __int8 *a2, __int64 a3, bool *a4)
{
  unsigned int v5; // r14d
  __int64 v8; // rcx
  BOOL v9; // edi
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // esi
  __int64 i; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(_QWORD, _QWORD); // rax
  _BOOL8 result; // rax
  __int64 v22; // rax
  __int64 (__fastcall *v23)(_QWORD, __int64); // rax

  v5 = a3;
  if ( gOldModeChange )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v22);
  }
  v8 = 0LL;
  v9 = 1;
  while ( 1 )
  {
    v10 = hdevEnumerate(v8);
    v11 = v10;
    if ( !v10 )
      break;
    if ( (*(_DWORD *)(v10 + 32) & 0x20400) == 0 )
    {
      v18 = *(_QWORD *)(v10 + 2592);
      if ( *(const void **)(v18 + 256) == a1 )
      {
        v19 = *(unsigned int *)(v18 + 272);
        if ( (unsigned int)v19 < v5 )
        {
          if ( a2[v19] )
            *(_DWORD *)(v11 + 2632) = -2147483646;
          else
            *(_DWORD *)(v11 + 2632) = -2147483645;
          v20 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v11 + 2744);
          if ( v20 )
            LODWORD(v20) = v20(*(_QWORD *)(v11 + 1816), 0LL);
          *(_DWORD *)(v11 + 2632) = 0;
          v9 = v9 && (_DWORD)v20;
        }
      }
    }
    v8 = v11;
  }
  v12 = 0;
  for ( i = 0LL; ; i = v15 )
  {
    v14 = hdevEnumerate(i);
    v15 = v14;
    if ( !v14 )
      break;
    if ( (*(_DWORD *)(v14 + 32) & 0x20400) == 0 )
    {
      v16 = *(_QWORD *)(v14 + 2592);
      if ( *(const void **)(v16 + 256) == a1 )
      {
        v17 = *(unsigned int *)(v16 + 272);
        if ( (unsigned int)v17 < v5 )
        {
          if ( a2[v17] )
          {
            *(_DWORD *)(v15 + 2632) = 0x80000000;
            v23 = *(__int64 (__fastcall **)(_QWORD, __int64))(v15 + 2744);
            if ( v23 )
              LODWORD(v23) = v23(*(_QWORD *)(v15 + 1816), 1LL);
            *(_DWORD *)(v15 + 2632) = 0;
            v9 = v9 && (_DWORD)v23;
            v12 = 1;
          }
        }
      }
    }
  }
  result = v9;
  *a4 = v12 != 0;
  return result;
}
