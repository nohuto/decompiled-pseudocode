/*
 * XREFs of _PnpRegQueryValueIndirect @ 0x140484BF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbLengthW @ 0x14003D760 (RtlStringCbLengthW.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _PnpParseIndirectResourceString @ 0x140428980 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x1404426DC (_PnpParseIndirectInfString.c)
 *     _RegRtlQueryValue @ 0x140483F04 (_RegRtlQueryValue.c)
 */

__int64 __fastcall PnpRegQueryValueIndirect(
        size_t a1,
        void *a2,
        const WCHAR *a3,
        unsigned int *a4,
        unsigned __int64 a5,
        __int64 a6,
        bool *a7)
{
  void *v7; // rbx
  unsigned int *v9; // rsi
  PVOID PoolWithTag; // rdi
  bool *v13; // r14
  unsigned int Value; // ebp
  unsigned int v16; // ecx
  unsigned int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // eax
  size_t pcbLength; // [rsp+60h] [rbp+8h] BYREF

  pcbLength = a1;
  v7 = (void *)a5;
  v9 = (unsigned int *)a6;
  PoolWithTag = 0LL;
  if ( a5 )
    v7 = (void *)(-(__int64)(*(_DWORD *)a6 != 0) & a5);
  else
    *(_DWORD *)a6 = 0;
  v13 = a7;
  if ( a7 )
    *a7 = 0;
  *a4 = 0;
  Value = RegRtlQueryValue(a2, a3, a4, v7, v9);
  if ( Value && Value != -1073741789 || !v13 )
    return Value;
  v16 = *a4;
  if ( *a4 > 3 )
  {
    if ( v16 <= 6 )
      goto LABEL_22;
    if ( v16 != 7 )
    {
      if ( v16 - 8 > 3 )
      {
        *v13 = (_WORD)v16 == 25;
        return Value;
      }
LABEL_22:
      *v13 = 0;
      return Value;
    }
  }
  v17 = *v9;
  if ( Value )
  {
    if ( v17 <= 0xFFFE )
    {
      while ( 1 )
      {
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v17, 0x52504E50u);
        if ( !PoolWithTag )
          break;
        LODWORD(pcbLength) = v17;
        v22 = RegRtlQueryValue(a2, a3, 0LL, PoolWithTag, (unsigned int *)&pcbLength);
        if ( v22 != -1073741789 )
          goto LABEL_33;
        if ( (unsigned int)pcbLength <= v17 )
        {
          v22 = -1073741595;
LABEL_33:
          if ( v22 )
            goto LABEL_20;
          v7 = PoolWithTag;
          goto LABEL_17;
        }
        v17 = pcbLength;
        if ( (unsigned int)pcbLength > 0xFFFE )
          goto LABEL_20;
      }
    }
  }
  else
  {
LABEL_17:
    if ( RtlStringCbLengthW((STRSAFE_PCNZWCH)v7, v17, &pcbLength) >= 0
      && (PnpParseIndirectInfString((const wchar_t *)v7, v18, v19)
       || PnpParseIndirectResourceString((const wchar_t *)v7, v20, v21)) )
    {
      *v13 = 1;
    }
LABEL_20:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return Value;
}
