/*
 * XREFs of _RegRtlEnumValue @ 0x140445A14
 * Callers:
 *     _PnpCtxRegEnumValue @ 0x1404E67DC (_PnpCtxRegEnumValue.c)
 *     _RegRtlCopyTreeInternal @ 0x140741D70 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     ZwEnumerateValueKey @ 0x14017E1A0 (ZwEnumerateValueKey.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RegRtlEnumValue(
        void *a1,
        ULONG a2,
        void *a3,
        unsigned int *a4,
        _DWORD *a5,
        void *a6,
        unsigned int *ResultLength)
{
  unsigned int *v7; // r15
  ULONG Length; // ebx
  KEY_VALUE_INFORMATION_CLASS v12; // ebp
  unsigned __int64 v13; // r9
  unsigned int v14; // edi
  unsigned int v15; // eax
  unsigned int v16; // r8d
  unsigned int v17; // ecx
  bool v18; // cf
  _DWORD *PoolWithTag; // rsi
  unsigned int v20; // ebx
  unsigned int v21; // eax
  size_t v22; // r8
  unsigned int v23; // ebx
  unsigned __int64 v25; // rcx
  unsigned int v26; // eax
  size_t v27; // r8
  __int64 v28; // rbx

  v7 = ResultLength;
  Length = -1;
  if ( ResultLength )
  {
    v12 = KeyValueFullInformation;
    v13 = 2LL * *a4;
    if ( v13 > 0xFFFFFFFF )
    {
      LODWORD(v13) = -1;
      v14 = -1073741675;
    }
    else
    {
      v14 = 0;
    }
    if ( (v14 & 0x80000000) != 0 )
      return v14;
    v15 = v13 + 24;
    v16 = -1;
    if ( (int)v13 + 24 >= (unsigned int)v13 )
      v16 = v13 + 24;
    v14 = v15 < (unsigned int)v13 ? 0xC0000095 : 0;
    if ( v15 < (unsigned int)v13 )
      return v14;
    v17 = v16 + *ResultLength;
    if ( v17 >= v16 )
      Length = v16 + *ResultLength;
    v14 = v17 < v16 ? 0xC0000095 : 0;
    v18 = v17 < v16;
  }
  else
  {
    v12 = KeyValueBasicInformation;
    v25 = 2LL * *a4;
    if ( v25 > 0xFFFFFFFF )
    {
      LODWORD(v25) = -1;
      v14 = -1073741675;
    }
    else
    {
      v14 = 0;
    }
    if ( (v14 & 0x80000000) != 0 )
      return v14;
    v26 = v25 + 16;
    if ( (int)v25 + 16 >= (unsigned int)v25 )
      Length = v25 + 16;
    v14 = v26 < (unsigned int)v25 ? 0xC0000095 : 0;
    v18 = v26 < (unsigned int)v25;
  }
  if ( !v18 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x4C474552u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    v14 = ZwEnumerateValueKey(a1, a2, v12, PoolWithTag, Length, (PULONG)&ResultLength);
    if ( v14 && v14 != -2147483643 )
      goto LABEL_21;
    if ( v12 )
    {
      if ( a5 )
        *a5 = PoolWithTag[1];
      if ( !v14 )
      {
        v20 = PoolWithTag[4];
        if ( *a4 >= ((unsigned __int64)v20 >> 1) + 1 )
        {
          v21 = PoolWithTag[3];
          if ( *v7 >= v21 )
          {
            *v7 = v21;
            v22 = (unsigned int)PoolWithTag[4];
            v23 = v20 >> 1;
            *a4 = v23;
            memmove(a3, PoolWithTag + 5, v22);
            *((_WORD *)a3 + v23) = 0;
            memmove(a6, (char *)PoolWithTag + (unsigned int)PoolWithTag[2], (unsigned int)PoolWithTag[3]);
LABEL_21:
            ExFreePoolWithTag(PoolWithTag, 0);
            return v14;
          }
        }
      }
      *a4 = (PoolWithTag[4] >> 1) + 1;
      *v7 = PoolWithTag[3];
    }
    else
    {
      if ( a5 )
        *a5 = PoolWithTag[1];
      if ( !v14 )
      {
        v27 = (unsigned int)PoolWithTag[2];
        if ( *a4 >= (v27 >> 1) + 1 )
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
    v14 = -1073741789;
    goto LABEL_21;
  }
  return v14;
}
