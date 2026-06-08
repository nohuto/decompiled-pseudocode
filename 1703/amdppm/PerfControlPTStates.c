/*
 * XREFs of PerfControlPTStates @ 0x1C00092D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall PerfControlPTStates(__int64 a1, _DWORD *a2, char a3, char a4)
{
  _UNKNOWN **result; // rax
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rdi
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  void (__fastcall **v16)(__int64, _QWORD, _QWORD); // rax
  __int64 v17; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  if ( a4 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    return result;
  }
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_QWORD *)(v8 + 48);
  v10 = v9 + 32LL * (unsigned int)*a2;
  v11 = *(unsigned __int8 *)(v10 + 25);
  if ( *(_DWORD *)(a1 + 8) == v11 )
    goto LABEL_15;
  if ( v11 == 1 )
  {
    if ( !*(_DWORD *)(v8 + 64) )
      goto LABEL_15;
    v13 = *(unsigned int *)(v8 + 60);
  }
  else
  {
    v12 = *(_DWORD *)(v8 + 60);
    if ( !v12 )
      goto LABEL_15;
    v13 = (unsigned int)(v12 - 1);
  }
  v14 = v9 + 32 * v13;
  if ( !v14 )
  {
LABEL_15:
    if ( a3 )
    {
      if ( *(_BYTE *)(v10 + 25) == 1 )
      {
        v17 = *(_QWORD *)(v8 + 32);
      }
      else
      {
        v17 = *(_QWORD *)(v8 + 40);
        v8 += 8LL;
      }
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))v8)(v17, *(_QWORD *)v10, *(_QWORD *)(v10 + 8));
    }
    goto LABEL_20;
  }
  if ( a3 )
  {
    if ( *(_BYTE *)(v14 + 25) == 1 )
    {
      v15 = *(_QWORD *)(v8 + 32);
      v16 = (void (__fastcall **)(__int64, _QWORD, _QWORD))v8;
    }
    else
    {
      v15 = *(_QWORD *)(v8 + 40);
      v16 = (void (__fastcall **)(__int64, _QWORD, _QWORD))(v8 + 8);
    }
    (*v16)(v15, *(_QWORD *)v14, *(_QWORD *)(v14 + 8));
    goto LABEL_15;
  }
LABEL_20:
  *(_DWORD *)(a1 + 16) = *a2;
  *(_DWORD *)(a1 + 8) = *(unsigned __int8 *)(v10 + 25);
  result = (_UNKNOWN **)*(unsigned __int8 *)(v10 + 24);
  *(_DWORD *)(a1 + 12) = (_DWORD)result;
  return result;
}
