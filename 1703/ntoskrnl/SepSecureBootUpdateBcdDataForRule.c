/*
 * XREFs of SepSecureBootUpdateBcdDataForRule @ 0x1406F82BC
 * Callers:
 *     SepSecureBootCorrectBcd @ 0x1406F7E44 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BiDeleteElement @ 0x14058A31C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14058B49C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14058B67C (BcdGetElementDataWithFlags.c)
 *     SepSecureBootGetPolicyDefaultValue @ 0x1406F812C (SepSecureBootGetPolicyDefaultValue.c)
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1406F8418 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 */

__int64 __fastcall SepSecureBootUpdateBcdDataForRule(__int64 a1, void *a2, BCD_FLAGS a3)
{
  _WORD *v3; // rsi
  char *PoolWithTag; // rdi
  int PolicyDefaultValue; // ebx
  ULONG v8; // edx
  char *p_Buffer; // r15
  NTSTATUS ElementDataWithFlags; // eax
  __int64 v11; // rdx
  BCD_FLAGS v12; // r8d
  BCD_FLAGS v13; // r8d
  ULONG BufferSize; // [rsp+70h] [rbp+8h] BYREF
  char Buffer; // [rsp+80h] [rbp+18h] BYREF
  PVOID v17; // [rsp+88h] [rbp+20h] BYREF

  v3 = (_WORD *)(qword_14038C450 + *(unsigned int *)(a1 + 8));
  PoolWithTag = 0LL;
  PolicyDefaultValue = 0;
  if ( (*(_BYTE *)v3 & 0x1F) == 8 )
  {
    if ( !v3[1] )
    {
      PolicyDefaultValue = BiDeleteElement(a2, *(_DWORD *)(a1 + 4));
      if ( PolicyDefaultValue == -1073741275 )
        return 0;
    }
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 4);
    BufferSize = 8;
    p_Buffer = &Buffer;
    ElementDataWithFlags = BcdGetElementDataWithFlags(a2, v8, a3, &Buffer, &BufferSize);
    PolicyDefaultValue = ElementDataWithFlags;
    if ( ElementDataWithFlags != -1073741789 && ElementDataWithFlags != -2147483643 )
      goto LABEL_19;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, BufferSize, 0x62536553u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    p_Buffer = PoolWithTag;
    PolicyDefaultValue = BcdGetElementDataWithFlags(a2, *(_DWORD *)(a1 + 4), v12, PoolWithTag, &BufferSize);
    if ( PolicyDefaultValue >= 0 )
    {
LABEL_19:
      if ( PolicyDefaultValue < 0
        || (PolicyDefaultValue = SepSecureBootValidateBcdDataAgainstBcdRule(a1, p_Buffer, BufferSize),
            PolicyDefaultValue < 0) )
      {
        PolicyDefaultValue = SepSecureBootGetPolicyDefaultValue(v3, v11, &v17, &BufferSize);
        if ( PolicyDefaultValue >= 0 )
          PolicyDefaultValue = BcdSetElementDataWithFlags(a2, *(_DWORD *)(a1 + 4), v13, v17, BufferSize);
      }
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x62536553u);
  }
  return (unsigned int)PolicyDefaultValue;
}
