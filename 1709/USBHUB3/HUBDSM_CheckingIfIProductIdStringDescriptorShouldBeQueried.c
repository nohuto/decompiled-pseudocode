/*
 * XREFs of HUBDSM_CheckingIfIProductIdStringDescriptorShouldBeQueried @ 0x1C001AE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfIProductIdStringDescriptorShouldBeQueried(__int64 a1)
{
  __int64 v1; // rdx
  _BYTE *v2; // rax
  int v3; // edx
  unsigned __int64 v4; // rcx
  _WORD *i; // rax

  v1 = *(_QWORD *)(a1 + 960);
  if ( (*(_DWORD *)(v1 + 1644) & 1) == 0 )
  {
    v2 = *(_BYTE **)(v1 + 2024);
    if ( v2 )
    {
      if ( *v2 > 2u )
      {
        v3 = 0;
        v4 = ((unsigned __int64)(unsigned __int8)*v2 - 2) >> 1;
        if ( (_DWORD)v4 )
        {
          for ( i = v2 + 2; *i; ++i )
          {
            if ( *i == 1033 )
              return 4089LL;
            if ( ++v3 >= (unsigned int)v4 )
              return 4061LL;
          }
        }
      }
    }
  }
  return 4061LL;
}
