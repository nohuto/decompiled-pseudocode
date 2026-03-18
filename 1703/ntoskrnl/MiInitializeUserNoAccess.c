/*
 * XREFs of MiInitializeUserNoAccess @ 0x14044D3BC
 * Callers:
 *     MiMapProcessExecutable @ 0x14049A420 (MiMapProcessExecutable.c)
 * Callees:
 *     MiInsertProcessVads @ 0x14049E0E0 (MiInsertProcessVads.c)
 *     MiAllocateVad @ 0x14049E798 (MiAllocateVad.c)
 *     MiReturnProcessVads @ 0x1406B2E0C (MiReturnProcessVads.c)
 */

__int64 __fastcall MiInitializeUserNoAccess(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  unsigned __int64 v4; // rbp
  PVOID v5; // rsi
  bool v7; // zf
  _QWORD *v8; // rdx
  _QWORD *v9; // rdi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  _QWORD *i; // rax
  unsigned __int64 v13; // rcx
  __int64 j; // rbx
  unsigned __int64 v15; // r9
  int v16; // r14d
  unsigned __int64 v17; // rcx
  _QWORD *Vad; // rax
  int inserted; // ebx
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_QWORD **)(a1 + 1576);
  v4 = a2 - 0x10000;
  v5 = 0LL;
  v7 = (*(_DWORD *)(a1 + 772) & 0x200) == 0;
  P = 0LL;
  if ( v7 )
    v4 = a2;
  v8 = 0LL;
  v9 = 0LL;
  while ( v3 )
  {
    v9 = v3;
    v3 = (_QWORD *)*v3;
  }
  while ( 1 )
  {
    if ( v9 )
    {
      v10 = v9[1];
      v11 = (unsigned __int64)v9;
      if ( v10 )
      {
        for ( i = *(_QWORD **)v10; i; i = (_QWORD *)*i )
          v10 = (unsigned __int64)i;
      }
      else
      {
        for ( j = v9[2]; ; j = *(_QWORD *)(v10 + 16) )
        {
          v10 = j & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v10 || *(_QWORD *)v10 == v11 )
            break;
          v11 = v10;
        }
      }
      v13 = (*((unsigned int *)v9 + 6) | ((unsigned __int64)*((unsigned __int8 *)v9 + 32) << 32)) << 12;
      if ( v13 <= v4 )
        goto LABEL_11;
      v15 = v13 - 1;
      v16 = 1;
      if ( v8 )
      {
        v17 = (((*((unsigned int *)v8 + 7) | ((unsigned __int64)*((unsigned __int8 *)v8 + 33) << 32)) << 12) | 0xFFF)
            + 1;
        if ( v17 >= v15 )
          goto LABEL_11;
        if ( v17 < v4 )
          v17 = v4;
      }
      else
      {
        v17 = v4;
      }
    }
    else
    {
      v15 = 0x7FFFFFFEFFFFLL;
      if ( v8 )
        v17 = (((*((unsigned int *)v8 + 7) | ((unsigned __int64)*((unsigned __int8 *)v8 + 33) << 32)) << 12) | 0xFFF)
            + 1;
      else
        v17 = v4;
      if ( v17 >= 0x7FFFFFFEFFFFLL )
        break;
      v10 = 0LL;
      v16 = 2;
    }
    Vad = (_QWORD *)MiAllocateVad(v17, v15, 0LL);
    if ( !Vad )
    {
      inserted = -1073741801;
      goto LABEL_34;
    }
    *Vad = v5;
    v5 = Vad;
    P = Vad;
    if ( v16 == 2 )
      break;
LABEL_11:
    v8 = v9;
    v9 = (_QWORD *)v10;
  }
  inserted = MiInsertProcessVads(a1, &P, a3, v15);
  if ( inserted >= 0 )
    return (unsigned int)inserted;
  v5 = P;
LABEL_34:
  MiReturnProcessVads(v5);
  return (unsigned int)inserted;
}
