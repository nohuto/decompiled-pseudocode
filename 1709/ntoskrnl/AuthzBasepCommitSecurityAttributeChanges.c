/*
 * XREFs of AuthzBasepCommitSecurityAttributeChanges @ 0x140089A70
 * Callers:
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x140089A00 (AuthzBasepFinaliseSecurityAttributesList.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributeValues @ 0x14000A478 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepRemoveSecurityAttributeFromLists @ 0x14000CF58 (AuthzBasepRemoveSecurityAttributeFromLists.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepCommitSecurityAttributeChanges(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // si
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // r8
  int v7; // eax
  __int64 *v8; // rdx
  __int64 **v9; // rdi
  __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // r8
  __int64 **v13; // r9
  __int64 *v14; // rdx
  __int64 v15; // r8
  __int64 v17; // rax
  _QWORD *v18; // r8

  v2 = 0;
  if ( (*(_DWORD *)(a2 + 56) & 2) != 0 )
  {
    v4 = a2 + 16;
    v5 = *(_QWORD *)(a2 + 16);
    if ( *(_QWORD *)(v5 + 8) != v4 || (v6 = *(_QWORD **)(v4 + 8), *v6 != v4) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    *(_DWORD *)(a2 + 56) &= ~2u;
    if ( a1 )
      --*(_DWORD *)(a1 + 24);
  }
  v7 = *(_DWORD *)(a2 + 56);
  if ( (v7 & 4) != 0 )
  {
    AuthzBasepRemoveSecurityAttributeFromLists((_DWORD *)a1, (__int64 *)a2, 1, 0);
    AuthzBasepFreeSecurityAttributeValues(a2, 0, v15);
    return 1;
  }
  else
  {
    if ( (v7 & 1) == 0 )
    {
      v8 = *(__int64 **)(a1 + 16);
      if ( *v8 != a1 + 8 )
        __fastfail(3u);
      *(_QWORD *)a2 = a1 + 8;
      *(_QWORD *)(a2 + 8) = v8;
      *v8 = a2;
      *(_QWORD *)(a1 + 16) = a2;
      *(_DWORD *)(a2 + 56) |= 1u;
      ++*(_DWORD *)a1;
    }
    v9 = (__int64 **)(a2 + 96);
    while ( *v9 != (__int64 *)v9 )
    {
      v10 = (__int64)(*v9 - 2);
      v11 = *(_DWORD *)(v10 + 32) & 4;
      if ( (*(_DWORD *)(v10 + 32) & 2) != 0 )
      {
        v12 = **v9;
        if ( *(__int64 **)(v12 + 8) != *v9 || (v13 = *(__int64 ***)(v10 + 24), *v13 != *v9) )
          __fastfail(3u);
        *v13 = (__int64 *)v12;
        *(_QWORD *)(v12 + 8) = v13;
        *(_DWORD *)(v10 + 32) &= ~2u;
        --*(_DWORD *)(a2 + 88);
      }
      if ( v11 )
      {
        if ( (*(_DWORD *)(v10 + 32) & 1) != 0 )
        {
          v17 = *(_QWORD *)v10;
          if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 || (v18 = *(_QWORD **)(v10 + 8), *v18 != v10) )
            __fastfail(3u);
          *v18 = v17;
          *(_QWORD *)(v17 + 8) = v18;
          *(_DWORD *)(v10 + 32) &= ~1u;
          --*(_DWORD *)(a2 + 60);
          if ( (*(_DWORD *)(v10 + 32) & 4) != 0 )
            --*(_DWORD *)(a2 + 64);
        }
        ExFreePoolWithTag((PVOID)v10, 0);
      }
      else if ( (*(_DWORD *)(v10 + 32) & 1) == 0 )
      {
        v14 = *(__int64 **)(a2 + 80);
        if ( *v14 != a2 + 72 )
          __fastfail(3u);
        *(_QWORD *)v10 = a2 + 72;
        *(_QWORD *)(v10 + 8) = v14;
        *v14 = v10;
        *(_QWORD *)(a2 + 80) = v10;
        *(_DWORD *)(v10 + 32) |= 1u;
        ++*(_DWORD *)(a2 + 60);
      }
    }
  }
  return v2;
}
