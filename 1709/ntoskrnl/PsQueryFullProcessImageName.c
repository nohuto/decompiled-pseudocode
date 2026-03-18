/*
 * XREFs of PsQueryFullProcessImageName @ 0x1404CB0E0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 */

__int64 __fastcall PsQueryFullProcessImageName(__int64 a1, _OWORD *a2, void *a3, unsigned int *a4)
{
  const void **v6; // rdx
  unsigned int v7; // ecx
  unsigned __int64 v8; // rax
  unsigned int v9; // ebx
  __int128 v11; // [rsp+28h] [rbp-20h]

  v6 = *(const void ***)(a1 + 1128);
  v7 = *a4;
  *a4 = *((unsigned __int16 *)v6 + 1);
  if ( *((unsigned __int16 *)v6 + 1) > v7 )
  {
    return (unsigned int)-1073741820;
  }
  else
  {
    v11 = *(_OWORD *)v6;
    v8 = (unsigned __int64)*v6 >> 16;
    v9 = 0;
    if ( WORD1(*(_OWORD *)v6) )
      *((_QWORD *)&v11 + 1) = a3;
    else
      *((_QWORD *)&v11 + 1) = 0LL;
    *a2 = v11;
    if ( (_WORD)v8 )
      memmove(a3, v6[1], *((unsigned __int16 *)v6 + 1));
  }
  return v9;
}
