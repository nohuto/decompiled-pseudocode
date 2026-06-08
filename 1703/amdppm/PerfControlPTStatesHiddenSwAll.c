/*
 * XREFs of PerfControlPTStatesHiddenSwAll @ 0x1C0009490
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PerfControlPTStatesHiddenSwAll(__int64 a1, _DWORD *a2, __int64 a3, char a4)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdi
  int v9; // ecx
  int v10; // eax
  __int64 v11; // r8
  _QWORD *v12; // r8
  unsigned int v13; // r10d
  unsigned int v14; // r10d

  if ( a4 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    return;
  }
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)(v6 + 48);
  v8 = v7 + 32LL * (unsigned int)*a2;
  v9 = *(unsigned __int8 *)(v8 + 25);
  if ( *(_DWORD *)(a1 + 8) != v9 )
  {
    if ( v9 == 1 )
    {
      if ( *(_DWORD *)(v6 + 64) )
      {
        v11 = *(unsigned int *)(v6 + 60);
LABEL_9:
        v12 = (_QWORD *)(v7 + 32 * v11);
        if ( v12 )
        {
          v13 = *(_DWORD *)(*(_QWORD *)a1 + 80LL);
          if ( *((_BYTE *)v12 + 25) == 1 )
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v6 + 24))(v13, *(_QWORD *)(v6 + 32), *v12, v12[1]);
          else
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v6 + 16))(v13, *(_QWORD *)(v6 + 40), *v12, v12[1]);
        }
      }
    }
    else
    {
      v10 = *(_DWORD *)(v6 + 60);
      if ( v10 )
      {
        v11 = (unsigned int)(v10 - 1);
        goto LABEL_9;
      }
    }
  }
  v14 = *(_DWORD *)(*(_QWORD *)a1 + 80LL);
  if ( *(_BYTE *)(v8 + 25) == 1 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v6 + 24))(
      v14,
      *(_QWORD *)(v6 + 32),
      *(_QWORD *)v8,
      *(_QWORD *)(v8 + 8));
  else
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v6 + 16))(
      v14,
      *(_QWORD *)(v6 + 40),
      *(_QWORD *)v8,
      *(_QWORD *)(v8 + 8));
  *(_DWORD *)(a1 + 16) = *a2;
  *(_DWORD *)(a1 + 8) = *(unsigned __int8 *)(v8 + 25);
  *(_DWORD *)(a1 + 12) = *(unsigned __int8 *)(v8 + 24);
}
