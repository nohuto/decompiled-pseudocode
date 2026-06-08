/*
 * XREFs of PerfControlPTStates @ 0x1C0002E30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PerfControlPTStates(__int64 a1, unsigned __int64 *a2, char a3, __int64 a4)
{
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rsi
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  void (__fastcall **v15)(__int64, _QWORD, _QWORD, unsigned __int64); // rax
  unsigned __int64 v16; // r9
  __int64 v17; // rcx
  unsigned __int64 v18; // [rsp+50h] [rbp+8h]

  if ( (_BYTE)a4 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    return;
  }
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *a2;
  v8 = *(_QWORD *)(v6 + 48);
  v9 = v8 + 32LL * (unsigned int)*a2;
  v18 = *a2;
  v10 = *(unsigned __int8 *)(v9 + 25);
  if ( *(_DWORD *)(a1 + 8) == v10 )
    goto LABEL_15;
  if ( v10 == 1 )
  {
    if ( !*(_DWORD *)(v6 + 64) )
      goto LABEL_15;
    v12 = *(_DWORD *)(v6 + 60);
  }
  else
  {
    v11 = *(_DWORD *)(v6 + 60);
    if ( !v11 )
      goto LABEL_15;
    v12 = v11 - 1;
  }
  v13 = v8 + 32LL * v12;
  if ( !v13 )
  {
LABEL_15:
    if ( a3 )
    {
      if ( *(_BYTE *)(v9 + 25) == 1 )
      {
        v17 = *(_QWORD *)(v6 + 32);
      }
      else
      {
        v17 = *(_QWORD *)(v6 + 40);
        v6 += 8LL;
      }
      LOBYTE(a4) = BYTE4(v18) & 1;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))v6)(v17, *(_QWORD *)v9, *(_QWORD *)(v9 + 8), a4);
    }
    goto LABEL_20;
  }
  if ( a3 )
  {
    if ( *(_BYTE *)(v13 + 25) == 1 )
    {
      v14 = *(_QWORD *)(v6 + 32);
      v15 = (void (__fastcall **)(__int64, _QWORD, _QWORD, unsigned __int64))v6;
    }
    else
    {
      v14 = *(_QWORD *)(v6 + 40);
      v15 = (void (__fastcall **)(__int64, _QWORD, _QWORD, unsigned __int64))(v6 + 8);
    }
    v16 = HIDWORD(v7);
    LOBYTE(v16) = BYTE4(v7) & 1;
    (*v15)(v14, *(_QWORD *)v13, *(_QWORD *)(v13 + 8), v16);
    goto LABEL_15;
  }
LABEL_20:
  *(_DWORD *)(a1 + 16) = v7;
  *(_DWORD *)(a1 + 8) = *(unsigned __int8 *)(v9 + 25);
  *(_DWORD *)(a1 + 12) = *(unsigned __int8 *)(v9 + 24);
}
