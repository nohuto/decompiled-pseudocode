/*
 * XREFs of sub_180104908 @ 0x180104908
 * Callers:
 *     RtlProtectHeap @ 0x18002A2B0 (RtlProtectHeap.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009AF20 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x18009B4C0 (ZwProtectVirtualMemory.c)
 *     sub_180105554 @ 0x180105554 (sub_180105554.c)
 *     sub_1801059D8 @ 0x1801059D8 (sub_1801059D8.c)
 */

__int64 __fastcall sub_180104908(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rcx
  bool v7; // zf
  char v8; // r8
  unsigned __int64 i; // rcx
  unsigned __int64 v10; // rdx

  v2 = a2;
  result = ZwQueryVirtualMemory();
  if ( (int)result >= 0 )
  {
    result = ZwProtectVirtualMemory();
    if ( (int)result >= 0 )
    {
      result = sub_1801059D8(a1 + 112, (unsigned int)v2);
      if ( (int)result >= 0 )
      {
        result = sub_1801059D8(a1 + 232, (unsigned int)v2);
        if ( (int)result >= 0 )
        {
          v5 = *(_QWORD *)(a1 + 80);
          if ( !v5 )
            return 0LL;
          while ( 1 )
          {
LABEL_8:
            result = sub_180105554(v5, v2);
            if ( (int)result < 0 )
              return result;
            v6 = *(_QWORD *)v5;
            if ( !*(_QWORD *)v5 )
              break;
            v7 = (*(_BYTE *)(a1 + 88) & 1) == 0;
LABEL_13:
            if ( v7 )
              v5 = v6;
            else
              v5 ^= v6;
          }
          v6 = *(_QWORD *)(v5 + 8);
          v8 = *(_BYTE *)(a1 + 88) & 1;
          if ( v6 )
          {
            v7 = v8 == 0;
            goto LABEL_13;
          }
          for ( i = v5; ; v5 = i )
          {
            i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v8 )
            {
              if ( !i )
                return result;
              i ^= v5;
            }
            if ( !i )
              return result;
            v10 = *(_QWORD *)(i + 8);
            if ( v8 )
            {
              if ( !v10 )
                continue;
              v10 ^= i;
            }
            if ( v10 && v10 != v5 )
            {
              v5 = v10;
              goto LABEL_8;
            }
          }
        }
      }
    }
  }
  return result;
}
