/*
 * XREFs of EtwpValidateTraceControlFilterDescriptors @ 0x14075141C
 * Callers:
 *     EtwpNotifyGuid @ 0x1404EDE90 (EtwpNotifyGuid.c)
 * Callees:
 *     EtwpAllocateFilter @ 0x140750414 (EtwpAllocateFilter.c)
 */

__int64 __fastcall EtwpValidateTraceControlFilterDescriptors(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v4; // r12
  __int64 result; // rax
  int v9; // r14d
  unsigned int v10; // edi
  unsigned int v11; // ebp
  unsigned __int64 v12; // rax
  unsigned int *i; // rbx
  unsigned __int64 v14; // r8
  int v15; // r10d
  __int64 v16; // rdx
  __int64 v17; // [rsp+20h] [rbp-38h] BYREF
  int v18; // [rsp+28h] [rbp-30h]
  int v19; // [rsp+2Ch] [rbp-2Ch]

  v4 = a3;
  if ( a1 > 0xD )
    return 3221225485LL;
  v9 = 0;
  v10 = 16 * a1;
  v11 = 0;
  if ( a1 )
  {
    v12 = v10;
    for ( i = (unsigned int *)(a2 + 8); ; i += 4 )
    {
      v14 = *((_QWORD *)i - 1);
      if ( v14 < v12 )
        break;
      v15 = i[1];
      if ( v15 == -2147479552 )
        break;
      if ( v15 == -2147483136 )
        break;
      if ( v15 == -2147482624 )
        break;
      if ( v15 == -2147483392 )
        break;
      if ( v15 == 0x80000000 )
        break;
      if ( v15 == -2147483646 )
        break;
      v16 = *i;
      if ( (unsigned int)v16 > 0x400 || v14 + v16 > v4 )
        break;
      v9 += v16;
      if ( v15 == -2147483644 )
      {
        *(_QWORD *)(a4 + 72) = a2 + 16LL * v11;
      }
      else
      {
        v18 = *i;
        v17 = v14 + a2;
        v19 = v15;
        result = EtwpAllocateFilter(v15, &v17, a4, 0LL);
        if ( (int)result < 0 )
          return result;
      }
      ++v11;
      v12 = v10;
      if ( v11 >= a1 )
        return (unsigned int)v4 < v9 + v10 ? 0xC000000D : 0;
    }
    return 3221225485LL;
  }
  return (unsigned int)v4 < v9 + v10 ? 0xC000000D : 0;
}
