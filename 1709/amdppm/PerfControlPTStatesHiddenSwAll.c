/*
 * XREFs of PerfControlPTStatesHiddenSwAll @ 0x1C0009850
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PerfControlPTStatesHiddenSwAll(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r14
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // r8
  void (__fastcall *v14)(_QWORD, __int64, _QWORD, _QWORD, _BYTE); // rax
  __int64 v15; // rdx
  void (__fastcall *v16)(_QWORD, __int64, _QWORD, _QWORD, int); // rax
  __int64 v17; // rdx
  int v18; // [rsp+20h] [rbp-18h]
  __int64 v19; // [rsp+40h] [rbp+8h]

  if ( a4 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    return;
  }
  v5 = *a2;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = 32LL * (unsigned int)*a2;
  v19 = *a2;
  v8 = *(_QWORD *)(v6 + 48);
  v9 = v8 + v7;
  v10 = *(unsigned __int8 *)(v9 + 25);
  if ( *(_DWORD *)(a1 + 8) != v10 )
  {
    if ( v10 == 1 )
    {
      if ( *(_DWORD *)(v6 + 64) )
      {
        v12 = *(_DWORD *)(v6 + 60);
LABEL_9:
        v13 = v8 + 32LL * v12;
        if ( v13 )
        {
          if ( *(_BYTE *)(v13 + 25) == 1 )
          {
            v14 = *(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _BYTE))(v6 + 24);
            v15 = *(_QWORD *)(v6 + 32);
          }
          else
          {
            v14 = *(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _BYTE))(v6 + 16);
            v15 = *(_QWORD *)(v6 + 40);
          }
          v14(*(unsigned int *)(*(_QWORD *)a1 + 80LL), v15, *(_QWORD *)v13, *(_QWORD *)(v13 + 8), BYTE4(v5) & 1);
        }
      }
    }
    else
    {
      v11 = *(_DWORD *)(v6 + 60);
      if ( v11 )
      {
        v12 = v11 - 1;
        goto LABEL_9;
      }
    }
  }
  if ( *(_BYTE *)(v9 + 25) == 1 )
  {
    v16 = *(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int))(v6 + 24);
    v17 = *(_QWORD *)(v6 + 32);
  }
  else
  {
    v16 = *(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int))(v6 + 16);
    v17 = *(_QWORD *)(v6 + 40);
  }
  LOBYTE(v18) = BYTE4(v19) & 1;
  v16(*(unsigned int *)(*(_QWORD *)a1 + 80LL), v17, *(_QWORD *)v9, *(_QWORD *)(v9 + 8), v18);
  *(_DWORD *)(a1 + 16) = v5;
  *(_DWORD *)(a1 + 8) = *(unsigned __int8 *)(v9 + 25);
  *(_DWORD *)(a1 + 12) = *(unsigned __int8 *)(v9 + 24);
}
