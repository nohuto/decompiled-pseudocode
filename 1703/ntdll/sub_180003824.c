/*
 * XREFs of sub_180003824 @ 0x180003824
 * Callers:
 *     LdrUnloadAlternateResourceModuleEx @ 0x180010CF0 (LdrUnloadAlternateResourceModuleEx.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_180003824(int a1)
{
  unsigned int v1; // edx
  _DWORD *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax

  if ( BaseAddress && (v1 = 0, dword_18015A268) )
  {
    v2 = (char *)BaseAddress + 60;
    while ( *(v2 - 1) != a1 && *v2 != a1 )
    {
      ++v1;
      v2 += 18;
      if ( v1 >= dword_18015A268 )
        goto LABEL_7;
    }
    return 1;
  }
  else
  {
LABEL_7:
    if ( qword_18015A258 == (PVOID)-1LL )
      return sub_1800E20D4();
    if ( qword_18015A258
      && ((v3 = *((_QWORD *)qword_18015A258 + 2)) == 0
       || (v4 = *(_QWORD *)(v3 + 24)) == 0
       || (*(_DWORD *)(v4 + 48) & 0x100000) != 0) )
    {
      return sub_1800E20D4();
    }
    else
    {
      return sub_180003890();
    }
  }
}
