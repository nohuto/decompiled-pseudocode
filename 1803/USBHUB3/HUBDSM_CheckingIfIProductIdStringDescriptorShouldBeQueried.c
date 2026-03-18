/*
 * XREFs of HUBDSM_CheckingIfIProductIdStringDescriptorShouldBeQueried @ 0x1C001B830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfIProductIdStringDescriptorShouldBeQueried(__int64 a1)
{
  __int64 v1; // rdx
  _BYTE *v2; // rax
  _WORD *v3; // rdx
  unsigned int v4; // ecx
  unsigned __int64 v5; // rax

  v1 = *(_QWORD *)(a1 + 960);
  if ( (*(_DWORD *)(v1 + 1644) & 1) == 0 )
  {
    v2 = *(_BYTE **)(v1 + 2024);
    if ( v2 )
    {
      if ( *v2 > 2u )
      {
        v3 = v2 + 2;
        v4 = 0;
        v5 = ((unsigned __int64)(unsigned __int8)*v2 - 2) >> 1;
        if ( (_DWORD)v5 )
        {
          while ( *v3 )
          {
            if ( *v3 == 1033 )
              return 4089LL;
            ++v4;
            ++v3;
            if ( v4 >= (unsigned int)v5 )
              return 4061LL;
          }
        }
      }
    }
  }
  return 4061LL;
}
