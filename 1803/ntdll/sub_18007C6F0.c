/*
 * XREFs of sub_18007C6F0 @ 0x18007C6F0
 * Callers:
 *     sub_180013F50 @ 0x180013F50 (sub_180013F50.c)
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     sub_18001BDD0 @ 0x18001BDD0 (sub_18001BDD0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18007C6F0(__int64 a1, int a2)
{
  int v2; // edx
  unsigned int v3; // edx
  unsigned int v4; // eax
  bool v5; // zf
  int v6; // edx

  v2 = a2 - 1;
  if ( v2 )
  {
    v6 = v2 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
        ++*(_DWORD *)(a1 + 596);
    }
    else
    {
      ++*(_DWORD *)(a1 + 592);
    }
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 584) + 1;
    v4 = *(_DWORD *)(a1 + 588) + 1;
    *(_DWORD *)(a1 + 584) = v3;
    v5 = *(_BYTE *)(a1 + 386) == 2;
    *(_DWORD *)(a1 + 588) = v4;
    if ( !v5 )
    {
      if ( v3 < v4 )
      {
        v3 = 0;
        *(_QWORD *)(a1 + 584) = 0LL;
        v4 = 0;
      }
      if ( v4 >= v3 >> 4 )
        *(_DWORD *)(a1 + 120) |= 0x20000000u;
    }
  }
}
