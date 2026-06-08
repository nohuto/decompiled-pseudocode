/*
 * XREFs of PerfControlPTStatesHiddenSwAll @ 0x1C0003000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PerfControlPTStatesHiddenSwAll(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rbp
  int v9; // edx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // r8
  void (__fastcall *v13)(_QWORD, __int64, _QWORD, _QWORD, _BYTE); // rax
  __int64 v14; // rdx
  void (__fastcall *v15)(_QWORD, __int64, _QWORD, _QWORD, int); // rax
  __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-28h]
  __int64 v18; // [rsp+50h] [rbp+8h]

  if ( a4 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    return;
  }
  v5 = *a2;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = 32LL * (unsigned int)*a2;
  v18 = *a2;
  v8 = *(_QWORD *)(v6 + 48);
  v9 = *(unsigned __int8 *)(v7 + v8 + 25);
  if ( *(_DWORD *)(a1 + 8) != v9 )
  {
    v10 = 0LL;
    if ( v9 == 1 )
    {
      if ( !*(_DWORD *)(v6 + 64) )
        goto LABEL_10;
      v12 = *(unsigned int *)(v6 + 60);
    }
    else
    {
      v11 = *(_DWORD *)(v6 + 60);
      if ( !v11 )
        goto LABEL_10;
      v12 = (unsigned int)(v11 - 1);
    }
    v10 = v8 + 32 * v12;
LABEL_10:
    if ( v10 )
    {
      if ( *(_BYTE *)(v10 + 25) == 1 )
      {
        v13 = *(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _BYTE))(v6 + 24);
        v14 = *(_QWORD *)(v6 + 32);
      }
      else
      {
        v13 = *(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _BYTE))(v6 + 16);
        v14 = *(_QWORD *)(v6 + 40);
      }
      v13(*(unsigned int *)(*(_QWORD *)a1 + 80LL), v14, *(_QWORD *)v10, *(_QWORD *)(v10 + 8), BYTE4(v5) & 1);
      LOBYTE(v9) = *(_BYTE *)(v7 + v8 + 25);
    }
  }
  if ( (_BYTE)v9 == 1 )
  {
    v15 = *(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int))(v6 + 24);
    v16 = *(_QWORD *)(v6 + 32);
  }
  else
  {
    v15 = *(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int))(v6 + 16);
    v16 = *(_QWORD *)(v6 + 40);
  }
  LOBYTE(v17) = BYTE4(v18) & 1;
  v15(*(unsigned int *)(*(_QWORD *)a1 + 80LL), v16, *(_QWORD *)(v7 + v8), *(_QWORD *)(v7 + v8 + 8), v17);
  *(_DWORD *)(a1 + 16) = v5;
  *(_DWORD *)(a1 + 8) = *(unsigned __int8 *)(v7 + v8 + 25);
  *(_DWORD *)(a1 + 12) = *(unsigned __int8 *)(v7 + v8 + 24);
}
