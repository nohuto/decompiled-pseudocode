/*
 * XREFs of sub_1800F2E70 @ 0x1800F2E70
 * Callers:
 *     sub_1800F2E10 @ 0x1800F2E10 (sub_1800F2E10.c)
 * Callees:
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
 *     sub_18002B3EC @ 0x18002B3EC (sub_18002B3EC.c)
 *     sub_18004FBB8 @ 0x18004FBB8 (sub_18004FBB8.c)
 *     sub_180050068 @ 0x180050068 (sub_180050068.c)
 *     ZwQueryVirtualMemory @ 0x18009AF20 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall sub_1800F2E70(__int64 a1)
{
  __int64 v2; // r14
  int VirtualMemory; // ebx
  _DWORD *v4; // rax
  int v5; // eax
  __int64 v6; // rsi
  _DWORD *i; // rsi
  _QWORD *j; // rdi
  __int64 result; // rax
  unsigned __int64 v10; // [rsp+30h] [rbp-50h]
  char v11; // [rsp+40h] [rbp-40h]
  __int64 v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+70h] [rbp-10h]
  int v14; // [rsp+C8h] [rbp+48h] BYREF
  int v15; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v16; // [rsp+D8h] [rbp+58h] BYREF

  v2 = 0LL;
  do
  {
    VirtualMemory = ZwQueryVirtualMemory();
    if ( VirtualMemory < 0 )
      break;
    if ( v13 == 0x1000000 )
    {
      VirtualMemory = ZwQueryVirtualMemory();
      if ( VirtualMemory >= 0 )
      {
        if ( v10 )
        {
          if ( (v11 & 2) == 0 && (v11 & 1) == 0 )
          {
            v4 = sub_18002B3EC(v10);
            if ( !v4 || *v4 < 0x94u || (v4[36] & 0x4000) == 0 )
            {
              v5 = sub_18001014C(v10, 1, 1u, &v15, &v16);
              v6 = v16;
              if ( v5 < 0 )
                v6 = 0LL;
              v16 = v6;
              if ( v6 )
              {
                for ( i = (_DWORD *)(v6 + 12); *i; i += 5 )
                {
                  for ( j = (_QWORD *)(v10 + (unsigned int)i[1]); *j; ++j )
                  {
                    if ( *j == a1 && (unsigned int)sub_180050068(a1, &v14) != 1 && (v14 & 0x10) != 0 )
                    {
                      result = sub_18004FBB8(a1, 4u);
                      VirtualMemory = result;
                      if ( (int)result >= 0 )
                        return result;
                      break;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v2 += v12;
  }
  while ( VirtualMemory >= 0 );
  return (unsigned int)VirtualMemory;
}
