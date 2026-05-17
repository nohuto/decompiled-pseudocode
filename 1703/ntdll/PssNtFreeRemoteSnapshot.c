/*
 * XREFs of PssNtFreeRemoteSnapshot @ 0x180106810
 * Callers:
 *     sub_1801088FC @ 0x1801088FC (sub_1801088FC.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1800A5A80 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x1800A5AE0 (ZwReadVirtualMemory.c)
 */

__int64 PssNtFreeRemoteSnapshot()
{
  __int64 result; // rax
  __int64 v1; // [rsp+40h] [rbp-C0h]
  int v2; // [rsp+50h] [rbp-B0h]
  char v3; // [rsp+54h] [rbp-ACh]
  __int64 v4; // [rsp+3B8h] [rbp+2B8h]
  __int64 v5; // [rsp+3D0h] [rbp+2D0h]
  __int64 v6; // [rsp+3E8h] [rbp+2E8h]
  __int64 v7; // [rsp+400h] [rbp+300h]
  __int64 v8; // [rsp+420h] [rbp+320h]
  __int64 v9; // [rsp+440h] [rbp+340h]

  result = ZwReadVirtualMemory();
  if ( (int)result >= 0 )
  {
    if ( v1 == 1128 )
    {
      if ( v2 == 1146311504 )
      {
        if ( (v3 & 1) == 0 || (v3 & 2) != 0 )
        {
          return 3221225659LL;
        }
        else
        {
          if ( (v3 & 4) != 0 )
            ZwFreeVirtualMemory();
          if ( v9 )
            ZwDuplicateObject();
          if ( v8 )
            ZwDuplicateObject();
          if ( v6 )
            ZwDuplicateObject();
          if ( v7 )
            ZwDuplicateObject();
          if ( v5 )
            ZwDuplicateObject();
          if ( v4 )
            ZwDuplicateObject();
          ZwFreeVirtualMemory();
          return 0LL;
        }
      }
      else
      {
        return 3221225480LL;
      }
    }
    else
    {
      return 2147483661LL;
    }
  }
  return result;
}
