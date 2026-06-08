/*
 * XREFs of ValidatePssSymmetry @ 0x1C0028C00
 * Callers:
 *     ValidatePerfDomainSymmetry @ 0x1C0028640 (ValidatePerfDomainSymmetry.c)
 * Callees:
 *     WPP_RECORDER_SF_ddsdd @ 0x1C000A1DC (WPP_RECORDER_SF_ddsdd.c)
 *     WPP_RECORDER_SF_ddsddd @ 0x1C000A38C (WPP_RECORDER_SF_ddsddd.c)
 */

__int64 __fastcall ValidatePssSymmetry(char a1, unsigned int *a2, __int64 a3, _DWORD *a4, const char *a5)
{
  char v5; // di
  unsigned int v8; // ebx
  unsigned int v9; // r10d
  __int64 v10; // rdx
  _DWORD *v11; // rcx
  __int64 v12; // r8
  int v14; // [rsp+20h] [rbp-48h]

  v5 = a3;
  v8 = -1073741823;
  if ( a2 && a4 )
  {
    v9 = *a2;
    if ( *a2 == *a4 )
    {
      v10 = 0LL;
      if ( v9 )
      {
        v11 = a4 + 2;
        v12 = (char *)a2 - (char *)a4;
        while ( *(_DWORD *)((char *)v11 + v12) == *v11 )
        {
          v10 = (unsigned int)(v10 + 1);
          v11 += 12;
          if ( (unsigned int)v10 >= v9 )
            return 0;
        }
        WPP_RECORDER_SF_ddsddd((__int64)WPP_GLOBAL_Control->DeviceExtension, v10, v12, (__int64)a4, v14, a1, v5, a5);
      }
      else
      {
        return 0;
      }
    }
    else
    {
      WPP_RECORDER_SF_ddsdd((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)a2, a3, (__int64)a4, v14, a1, a3, a5);
    }
  }
  return v8;
}
