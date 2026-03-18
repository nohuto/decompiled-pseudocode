/*
 * XREFs of EtwpValidateFilterDescriptors @ 0x1405C1830
 * Callers:
 *     EtwpValidateEnableNotification @ 0x140553E90 (EtwpValidateEnableNotification.c)
 * Callees:
 *     EtwpAllocateFilter @ 0x1405C19A4 (EtwpAllocateFilter.c)
 */

__int64 __fastcall EtwpValidateFilterDescriptors(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 result; // rax
  unsigned int v6; // ebx
  int v7; // r14d
  int v8; // esi
  __int64 v9; // rdx
  unsigned __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // r10d
  char *v15; // [rsp+20h] [rbp-28h] BYREF
  int v16; // [rsp+28h] [rbp-20h]
  unsigned int v17; // [rsp+2Ch] [rbp-1Ch]

  v2 = a1[29];
  if ( v2 > 8 )
    return 3221225485LL;
  v6 = 16 * v2 + 120;
  if ( v6 > a1[1] )
    return 3221225485LL;
  v7 = 0;
  v8 = 0;
  if ( v2 )
  {
    while ( 1 )
    {
      v9 = (__int64)&a1[4 * v8 + 30];
      v10 = *(_QWORD *)v9;
      if ( *(_QWORD *)v9 < (unsigned __int64)v6 )
        break;
      if ( (a1[20] & 0x20) != 0 )
      {
        v11 = *(_DWORD *)(v9 + 12);
        if ( v11 == -2147479552
          || v11 == -2147483136
          || v11 == -2147482624
          || v11 == -2147483392
          || v11 == 0x80000000
          || v11 == -2147483646 )
        {
          break;
        }
      }
      v12 = *(unsigned int *)(v9 + 8);
      if ( (unsigned int)v12 > 0x400 )
      {
        v13 = *(_DWORD *)(v9 + 12);
        if ( v13 != -2147483392 && v13 != -2147482624 )
          break;
      }
      v14 = *(_DWORD *)(v9 + 12);
      if ( v14 == -2147483392 && (unsigned int)v12 > 0x1000 )
        break;
      if ( v14 == -2147482624 && (unsigned int)v12 > 0x1000 || v10 + v12 < v10 || v10 + v12 > (unsigned int)a1[1] )
        break;
      v7 += v12;
      if ( v14 == -2147483644 )
      {
        *(_QWORD *)(a2 + 56) = v9;
      }
      else
      {
        v16 = *(_DWORD *)(v9 + 8);
        v15 = (char *)a1 + v10;
        v17 = v14;
        result = ((__int64 (__fastcall *)(_QWORD, char **, __int64, _DWORD *))EtwpAllocateFilter)(
                   v14,
                   &v15,
                   a2,
                   a1 + 10);
        if ( (int)result < 0 )
          return result;
      }
      if ( (unsigned int)++v8 >= a1[29] )
        return a1[1] != v7 + v6 ? 0xC000000D : 0;
    }
    return 3221225485LL;
  }
  return a1[1] != v7 + v6 ? 0xC000000D : 0;
}
