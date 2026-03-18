/*
 * XREFs of EtwpValidateFilterDescriptors @ 0x1407B1FCC
 * Callers:
 *     EtwpValidateEnableNotification @ 0x14058DA84 (EtwpValidateEnableNotification.c)
 * Callees:
 *     EtwpAllocateFilter @ 0x1407B10E0 (EtwpAllocateFilter.c)
 */

__int64 __fastcall EtwpValidateFilterDescriptors(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 result; // rax
  unsigned int v6; // ecx
  unsigned int v7; // edi
  int v8; // r14d
  int v9; // esi
  __int64 v10; // rdx
  unsigned __int64 v11; // r10
  int v12; // eax
  __int64 v13; // r8
  int v14; // eax
  int v15; // ecx
  char *v16; // [rsp+20h] [rbp-28h] BYREF
  int v17; // [rsp+28h] [rbp-20h]
  int v18; // [rsp+2Ch] [rbp-1Ch]

  v2 = a1[29];
  if ( v2 > 0xD )
    return 3221225485LL;
  v6 = a1[1];
  v7 = 16 * v2 + 120;
  if ( v7 > v6 )
    return 3221225485LL;
  v8 = 0;
  v9 = 0;
  if ( v2 )
  {
    while ( 1 )
    {
      v10 = (__int64)&a1[4 * v9 + 30];
      v11 = *(_QWORD *)v10;
      if ( *(_QWORD *)v10 < (unsigned __int64)v7 )
        break;
      if ( (a1[20] & 0x20) != 0 )
      {
        v12 = *(_DWORD *)(v10 + 12);
        if ( v12 == -2147479552
          || v12 == -2147483136
          || v12 == -2147482624
          || v12 == -2147475456
          || v12 == -2147483392
          || v12 == 0x80000000
          || v12 == -2147483646 )
        {
          break;
        }
      }
      v13 = *(unsigned int *)(v10 + 8);
      if ( (unsigned int)v13 > 0x400 )
      {
        v14 = *(_DWORD *)(v10 + 12);
        if ( v14 != -2147483392 && v14 != -2147482624 )
          break;
      }
      v15 = *(_DWORD *)(v10 + 12);
      if ( v15 == -2147483392 && (unsigned int)v13 > 0x1000 )
        break;
      if ( (v15 == -2147482624 || v15 == -2147475456) && (unsigned int)v13 > 0x1000 )
        break;
      if ( v11 + v13 < v11 || v11 + v13 > (unsigned int)a1[1] )
        break;
      v8 += v13;
      if ( v15 == -2147483644 )
      {
        *(_QWORD *)(a2 + 72) = v10;
      }
      else if ( v15 == -2147467264 )
      {
        *(_QWORD *)(a2 + 56) = v10;
      }
      else
      {
        v17 = *(_DWORD *)(v10 + 8);
        v16 = (char *)a1 + v11;
        v18 = v15;
        result = EtwpAllocateFilter(v15, &v16, a2, (__int64)(a1 + 10));
        if ( (int)result < 0 )
          return result;
      }
      if ( (unsigned int)++v9 >= a1[29] )
      {
        v6 = a1[1];
        return v6 != v8 + v7 ? 0xC000000D : 0;
      }
    }
    return 3221225485LL;
  }
  return v6 != v8 + v7 ? 0xC000000D : 0;
}
