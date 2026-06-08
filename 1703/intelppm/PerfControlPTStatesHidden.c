/*
 * XREFs of PerfControlPTStatesHidden @ 0x1C0004720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PerfControlPTStatesHidden(__int64 a1, __int64 a2, char a3, char a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rdi
  _QWORD *v7; // r8
  int v8; // eax
  _QWORD *v9; // r8
  __int64 v10; // rcx

  if ( a4 )
  {
    v4 = 0;
    if ( a3 )
    {
      v6 = *(_QWORD *)(a1 + 24);
      if ( *(_DWORD *)(v6 + 64) )
      {
        v7 = (_QWORD *)(*(_QWORD *)(v6 + 48) + 32LL * *(unsigned int *)(v6 + 60));
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v6 + 16))(
          *(unsigned int *)(*(_QWORD *)a1 + 80LL),
          *(_QWORD *)(v6 + 40),
          *v7,
          v7[1]);
      }
      v8 = *(_DWORD *)(v6 + 60);
      if ( v8 )
      {
        v4 = v8 - 1;
        v9 = (_QWORD *)(*(_QWORD *)(v6 + 48) + 32LL * (unsigned int)(v8 - 1));
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v6 + 24))(
          *(unsigned int *)(*(_QWORD *)a1 + 80LL),
          *(_QWORD *)(v6 + 32),
          *v9,
          v9[1]);
      }
      v10 = *(_QWORD *)(v6 + 48) + 32LL * v4;
      *(_DWORD *)(a1 + 16) = v4;
      *(_DWORD *)(a1 + 8) = *(unsigned __int8 *)(v10 + 25);
      *(_DWORD *)(a1 + 12) = *(unsigned __int8 *)(v10 + 24);
    }
  }
}
