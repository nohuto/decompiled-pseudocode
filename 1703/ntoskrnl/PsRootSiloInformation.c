/*
 * XREFs of PsRootSiloInformation @ 0x1406DE440
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x1400EDEE0 (PsGetCurrentSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     PspGetNextSilo @ 0x14054B0C4 (PspGetNextSilo.c)
 */

__int64 __fastcall PsRootSiloInformation(_DWORD *a1, unsigned int a2, unsigned int *a3)
{
  unsigned __int64 v3; // r12
  unsigned int v5; // edi
  unsigned __int64 CurrentSilo; // r15
  __int64 v8; // rsi
  int v9; // ebx
  void *i; // rcx
  _DWORD *NextSilo; // rax
  _DWORD *v12; // r8

  v3 = a2;
  v5 = 4;
  if ( a2 < 4 )
    return 3221225507LL;
  CurrentSilo = PsGetCurrentSilo();
  v8 = 0LL;
  v9 = 0;
  for ( i = 0LL; ; i = v12 )
  {
    NextSilo = PspGetNextSilo(i, 0);
    v12 = NextSilo;
    if ( !NextSilo )
      break;
    if ( NextSilo != (_DWORD *)CurrentSilo )
    {
      if ( CurrentSilo )
      {
        while ( NextSilo != (_DWORD *)CurrentSilo )
        {
          NextSilo = (_DWORD *)*((_QWORD *)NextSilo + 134);
          if ( !NextSilo )
            goto LABEL_13;
        }
      }
      if ( (unsigned __int64)v5 + 4 > v3 )
      {
        v9 = -1073741789;
        ObfDereferenceObjectWithTag(v12, 0x6E457350u);
        break;
      }
      a1[v8 + 1] = v12[305];
      v5 += 4;
      v8 = (unsigned int)(v8 + 1);
    }
LABEL_13:
    ;
  }
  if ( v9 >= 0 )
  {
    *a1 = v8;
    *a3 = v5;
  }
  return (unsigned int)v9;
}
