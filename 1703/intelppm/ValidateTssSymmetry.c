/*
 * XREFs of ValidateTssSymmetry @ 0x1C0027080
 * Callers:
 *     ValidatePerfDomainSymmetry @ 0x1C001AF0C (ValidatePerfDomainSymmetry.c)
 * Callees:
 *     WPP_RECORDER_SF_dddd @ 0x1C0008658 (WPP_RECORDER_SF_dddd.c)
 *     WPP_RECORDER_SF_ddddd @ 0x1C0008760 (WPP_RECORDER_SF_ddddd.c)
 */

__int64 __fastcall ValidateTssSymmetry(__int64 a1, unsigned int *a2, __int64 a3, _DWORD *a4)
{
  unsigned int v5; // ebx
  unsigned int v6; // r10d
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  __int64 v9; // r8
  int v11; // [rsp+20h] [rbp-38h]

  v5 = -1073741823;
  if ( a2 && a4 )
  {
    v6 = *a2;
    if ( *a2 == *a4 )
    {
      v7 = 0LL;
      if ( v6 )
      {
        v8 = a4 + 1;
        v9 = (char *)a2 - (char *)a4;
        while ( *(_DWORD *)((char *)v8 + v9) == *v8 )
        {
          v7 = (unsigned int)(v7 + 1);
          v8 += 5;
          if ( (unsigned int)v7 >= v6 )
            return 0;
        }
        WPP_RECORDER_SF_ddddd((__int64)WPP_GLOBAL_Control->DeviceExtension, v7, v9, (__int64)a4, v11);
      }
      else
      {
        return 0;
      }
    }
    else
    {
      WPP_RECORDER_SF_dddd((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)a2, a3, (__int64)a4, v11);
    }
  }
  return v5;
}
