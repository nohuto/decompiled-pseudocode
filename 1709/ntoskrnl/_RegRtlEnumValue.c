/*
 * XREFs of _RegRtlEnumValue @ 0x140588538
 * Callers:
 *     _PnpCtxRegEnumValue @ 0x14058469C (_PnpCtxRegEnumValue.c)
 *     _RegRtlCopyTreeInternal @ 0x140785B88 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     ZwEnumerateValueKey @ 0x14017DB20 (ZwEnumerateValueKey.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RegRtlEnumValue(
        void *a1,
        ULONG a2,
        void *a3,
        _DWORD *a4,
        _DWORD *a5,
        void *a6,
        unsigned int *ResultLength)
{
  unsigned int *v8; // r15
  unsigned __int64 v9; // rax
  ULONG Length; // ebx
  unsigned int v13; // r8d
  KEY_VALUE_INFORMATION_CLASS v14; // ebp
  unsigned int v15; // edi
  unsigned int v16; // eax
  unsigned int v17; // r9d
  unsigned int v18; // ecx
  bool v19; // cf
  _DWORD *PoolWithTag; // rsi
  unsigned int v21; // eax
  __int64 v22; // rbx
  size_t v23; // r8
  unsigned int v25; // ecx
  unsigned int v26; // eax
  size_t v27; // r8
  __int64 v28; // rbx

  v8 = ResultLength;
  v9 = 2LL * (unsigned int)*a4;
  Length = -1;
  if ( ResultLength )
  {
    v13 = -1;
    v14 = KeyValueFullInformation;
    if ( v9 <= 0xFFFFFFFF )
      v13 = 2 * *a4;
    v15 = v9 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v9 > 0xFFFFFFFF )
      return v15;
    v16 = v13 + 24;
    v17 = -1;
    if ( v13 + 24 >= v13 )
      v17 = v13 + 24;
    v15 = v16 < v13 ? 0xC0000095 : 0;
    if ( v16 < v13 )
      return v15;
    v18 = v17 + *ResultLength;
    if ( v18 >= v17 )
      Length = v17 + *ResultLength;
    v15 = v18 < v17 ? 0xC0000095 : 0;
    v19 = v18 < v17;
  }
  else
  {
    v14 = KeyValueBasicInformation;
    v25 = -1;
    if ( v9 <= 0xFFFFFFFF )
      v25 = 2 * *a4;
    v15 = v9 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v9 > 0xFFFFFFFF )
      return v15;
    v26 = v25 + 16;
    if ( v25 + 16 >= v25 )
      Length = v25 + 16;
    v15 = v26 < v25 ? 0xC0000095 : 0;
    v19 = v26 < v25;
  }
  if ( !v19 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x4C474552u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    v15 = ZwEnumerateValueKey(a1, a2, v14, PoolWithTag, Length, (PULONG)&ResultLength);
    if ( v15 && v15 != -2147483643 )
      goto LABEL_21;
    if ( v14 )
    {
      if ( a5 )
        *a5 = PoolWithTag[1];
      if ( !v15 && (unsigned int)*a4 >= ((unsigned __int64)(unsigned int)PoolWithTag[4] >> 1) + 1 )
      {
        v21 = PoolWithTag[3];
        if ( *v8 >= v21 )
        {
          v22 = PoolWithTag[4] >> 1;
          *v8 = v21;
          v23 = (unsigned int)PoolWithTag[4];
          *a4 = v22;
          memmove(a3, PoolWithTag + 5, v23);
          *((_WORD *)a3 + v22) = 0;
          memmove(a6, (char *)PoolWithTag + (unsigned int)PoolWithTag[2], (unsigned int)PoolWithTag[3]);
LABEL_21:
          ExFreePoolWithTag(PoolWithTag, 0);
          return v15;
        }
      }
      *a4 = (PoolWithTag[4] >> 1) + 1;
      *v8 = PoolWithTag[3];
    }
    else
    {
      if ( a5 )
        *a5 = PoolWithTag[1];
      if ( !v15 )
      {
        v27 = (unsigned int)PoolWithTag[2];
        if ( (unsigned int)*a4 >= (v27 >> 1) + 1 )
        {
          v28 = (unsigned int)v27 >> 1;
          *a4 = v28;
          memmove(a3, PoolWithTag + 3, v27);
          *((_WORD *)a3 + v28) = 0;
          goto LABEL_21;
        }
      }
      *a4 = (PoolWithTag[2] >> 1) + 1;
    }
    v15 = -1073741789;
    goto LABEL_21;
  }
  return v15;
}
