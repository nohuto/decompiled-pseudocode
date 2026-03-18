/*
 * XREFs of PiDevCfgCompareDrivers @ 0x14014FBC4
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x14058EEF8 (PiDevCfgFindDeviceDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDevCfgCompareDrivers(__int64 a1, __int64 a2)
{
  int v2; // r9d
  unsigned int v3; // r8d
  __int64 result; // rax
  unsigned int v5; // eax
  unsigned int v6; // r8d
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r8

  v2 = *(_DWORD *)(a1 + 168);
  v3 = *(_DWORD *)(a2 + 168);
  if ( (v2 & 4) != 0 )
  {
    result = ((v3 >> 2) & 1) == 0;
  }
  else
  {
    if ( (v3 & 4) != 0 )
      return 0xFFFFFFFFLL;
    result = 0LL;
  }
  if ( (_DWORD)result )
    return result;
  if ( (v2 & 2) != 0 )
  {
    result = (unsigned int)((v3 & 2) != 0) - 1;
    goto LABEL_8;
  }
  if ( (v3 & 2) == 0 )
  {
    result = 0LL;
LABEL_8:
    if ( (_DWORD)result )
      return result;
    v5 = *(_DWORD *)(a1 + 108);
    v6 = *(_DWORD *)(a2 + 108);
    if ( v5 >= v6 )
    {
      if ( v5 != v6 )
        return 1LL;
      v7 = *(_QWORD *)(a1 + 112);
      v8 = *(_QWORD *)(a2 + 112);
      if ( v7 <= v8 )
      {
        if ( v7 != v8 )
          return 1LL;
        v9 = *(_QWORD *)(a1 + 120);
        v10 = *(_QWORD *)(a2 + 120);
        if ( v9 <= v10 )
        {
          if ( v9 != v10 )
            return 1LL;
          if ( !*(_QWORD *)(a1 + 136) )
            return *(_QWORD *)(a2 + 136) != 0;
          if ( *(_QWORD *)(a2 + 136) )
            return 0LL;
        }
      }
    }
    return 0xFFFFFFFFLL;
  }
  return 1LL;
}
