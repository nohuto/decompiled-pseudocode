/*
 * XREFs of _PnpRegQueryValueIndirect @ 0x140522A20
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbLengthW @ 0x1400E0214 (RtlStringCbLengthW.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _RegRtlQueryValue @ 0x140521C44 (_RegRtlQueryValue.c)
 *     _PnpParseIndirectResourceString @ 0x140566914 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x14057D4DC (_PnpParseIndirectInfString.c)
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
  int v18; // eax
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
        v18 = RegRtlQueryValue(a2, a3, 0LL, PoolWithTag, (unsigned int *)&pcbLength);
        if ( v18 != -1073741789 )
          goto LABEL_33;
        if ( (unsigned int)pcbLength <= v17 )
        {
          v18 = -1073741595;
LABEL_33:
          if ( v18 )
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
      && ((unsigned __int8)PnpParseIndirectInfString(v7) || (unsigned __int8)PnpParseIndirectResourceString(v7)) )
    {
      *v13 = 1;
    }
LABEL_20:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return Value;
}
