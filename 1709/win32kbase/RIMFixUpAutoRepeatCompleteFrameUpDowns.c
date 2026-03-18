/*
 * XREFs of RIMFixUpAutoRepeatCompleteFrameUpDowns @ 0x1C010D3B4
 * Callers:
 *     rimDispatchCompleteFrame @ 0x1C010BA6C (rimDispatchCompleteFrame.c)
 * Callees:
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

unsigned __int64 __fastcall RIMFixUpAutoRepeatCompleteFrameUpDowns(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  unsigned int v5; // ebp
  int v6; // r8d
  unsigned int i; // edx
  __int64 v9; // r9
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // eax
  unsigned __int64 result; // rax
  __int64 v14; // rdx
  _DWORD *v15; // rcx
  unsigned int v16; // edx
  unsigned int v17; // edi
  __int64 v18; // r8

  v4 = 0;
  v5 = 0;
  v6 = 0;
  for ( i = 0; i < *(_DWORD *)(a3 + 24); ++i )
  {
    v9 = *(_QWORD *)(a3 + 88);
    v10 = 168LL * i;
    v11 = *(_DWORD *)(v10 + v9 + 28);
    if ( (v11 & 0x10000) != 0 )
    {
      v12 = v11 & 0xFFFCFFFF | 0x20000;
      *(_DWORD *)(v10 + v9 + 28) = v12;
      if ( (v12 & 0x2000) != 0 )
        v6 = 1;
    }
  }
  if ( *(_QWORD *)(a1 + 768) && v6 )
    PoLatencySensitivityHint(2LL);
  result = *(unsigned int *)(a3 + 24);
  if ( (_DWORD)result )
  {
    v14 = (unsigned int)result;
    v15 = (_DWORD *)(*(_QWORD *)(a3 + 88) + 28LL);
    do
    {
      result = v5 + 1;
      if ( (*v15 & 0x40000) == 0 )
        result = v5;
      v15 += 42;
      v5 = result;
      --v14;
    }
    while ( v14 );
    if ( (_DWORD)result )
    {
      do
      {
        v16 = *(_DWORD *)(a3 + 24);
        v17 = 0;
        if ( v16 )
        {
          v18 = *(_QWORD *)(a3 + 88);
          while ( 1 )
          {
            result = v17;
            if ( (*(_DWORD *)(168LL * v17 + v18 + 28) & 0x40000) != 0 )
              break;
            if ( ++v17 >= v16 )
              goto LABEL_26;
          }
          result = v17;
          ++v4;
          if ( *(_QWORD *)(a3 + 72) == v18 + 168LL * v17 )
            *(_QWORD *)(a3 + 72) = 0LL;
          if ( v17 < v16 )
          {
            do
            {
              result = (unsigned int)(*(_DWORD *)(a3 + 24) - 1);
              if ( v17 < (unsigned int)result )
                result = (unsigned __int64)memmove(
                                             (void *)(*(_QWORD *)(a3 + 88) + 168LL * v17),
                                             (const void *)(*(_QWORD *)(a3 + 88) + 168LL * (v17 + 1)),
                                             0xA8uLL);
              ++v17;
            }
            while ( v17 < *(_DWORD *)(a3 + 24) );
          }
        }
LABEL_26:
        ;
      }
      while ( v4 < v5 );
      *(_DWORD *)(a3 + 24) -= v4;
    }
  }
  return result;
}
