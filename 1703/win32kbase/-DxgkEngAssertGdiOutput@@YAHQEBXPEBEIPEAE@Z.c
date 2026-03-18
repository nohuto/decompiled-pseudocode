/*
 * XREFs of ?DxgkEngAssertGdiOutput@@YAHQEBXPEBEIPEAE@Z @ 0x1C005BCA0
 * Callers:
 *     <none>
 * Callees:
 *     hdevEnumerate @ 0x1C005BFB0 (hdevEnumerate.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall DxgkEngAssertGdiOutput(
        const void *a1,
        const unsigned __int8 *a2,
        unsigned int a3,
        unsigned __int8 *a4)
{
  int v4; // ebp
  unsigned __int8 v9; // si
  PDEV *v10; // rcx
  BOOL v11; // edi
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(_QWORD, _QWORD); // rax
  int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  _BOOL8 result; // rax
  __int64 v22; // rax
  __int64 (__fastcall *v23)(_QWORD, __int64); // rax

  v4 = 0;
  if ( gOldModeChange )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v22);
  }
  v9 = 1;
  v10 = 0LL;
  v11 = 1;
  while ( 1 )
  {
    v12 = hdevEnumerate(v10);
    v13 = v12;
    if ( !v12 )
      break;
    if ( (*(_DWORD *)(v12 + 32) & 0x20400) == 0 )
    {
      v14 = *(_QWORD *)(v12 + 2592);
      if ( *(const void **)(v14 + 256) == a1 )
      {
        v15 = *(unsigned int *)(v14 + 272);
        if ( (unsigned int)v15 < a3 )
        {
          if ( a2[v15] )
            *(_DWORD *)(v13 + 2632) = -2147483646;
          else
            *(_DWORD *)(v13 + 2632) = -2147483645;
          v16 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v13 + 2744);
          if ( v16 )
            v17 = v16(*(_QWORD *)(v13 + 1816), 0LL);
          else
            v17 = 0;
          *(_DWORD *)(v13 + 2632) = 0;
          if ( !v11 || (v11 = 1, !v17) )
            v11 = 0;
        }
      }
    }
    v10 = (PDEV *)v13;
  }
  v18 = hdevEnumerate(0LL);
  if ( !v18 )
    goto LABEL_22;
  do
  {
    if ( (*(_DWORD *)(v18 + 32) & 0x20400) == 0 )
    {
      v19 = *(_QWORD *)(v18 + 2592);
      if ( *(const void **)(v19 + 256) == a1 )
      {
        v20 = *(unsigned int *)(v19 + 272);
        if ( (unsigned int)v20 < a3 )
        {
          if ( a2[v20] )
          {
            *(_DWORD *)(v18 + 2632) = 0x80000000;
            v23 = *(__int64 (__fastcall **)(_QWORD, __int64))(v18 + 2744);
            if ( v23 )
              LODWORD(v23) = v23(*(_QWORD *)(v18 + 1816), 1LL);
            *(_DWORD *)(v18 + 2632) = 0;
            v11 = v11 && (_DWORD)v23;
            v4 = 1;
          }
        }
      }
    }
    v18 = hdevEnumerate((PDEV *)v18);
  }
  while ( v18 );
  if ( !v4 )
LABEL_22:
    v9 = 0;
  result = v11;
  *a4 = v9;
  return result;
}
