/*
 * XREFs of HUBDESC_GetNextMsOs20Descriptor @ 0x1C0034370
 * Callers:
 *     HUBDSM_InstallingMsOs20RegistryValues @ 0x1C001E7A0 (HUBDSM_InstallingMsOs20RegistryValues.c)
 *     HUBDESC_ValidateMsOs20ConfigurationSubset @ 0x1C00344F0 (HUBDESC_ValidateMsOs20ConfigurationSubset.c)
 *     HUBDESC_ValidateMsOs20FunctionSubset @ 0x1C0034760 (HUBDESC_ValidateMsOs20FunctionSubset.c)
 *     HUBDESC_ValidateMsOs20DescriptorSet @ 0x1C0035238 (HUBDESC_ValidateMsOs20DescriptorSet.c)
 * Callees:
 *     <none>
 */

char __fastcall HUBDESC_GetNextMsOs20Descriptor(unsigned __int64 a1, unsigned __int16 **a2)
{
  unsigned __int16 *v2; // rax
  char v4; // r8
  unsigned __int16 v5; // cx
  unsigned __int16 v7; // cx
  unsigned __int16 *v8; // rcx

  v2 = *a2;
  v4 = 1;
  v5 = (*a2)[1];
  if ( v5 == 2 || v5 == 1 )
  {
    if ( *v2 < 8u || (v7 = v2[3], v7 < 0xCu) )
    {
      *a2 = 0LL;
      return 0;
    }
  }
  else
  {
    v7 = *v2;
    if ( *v2 < 4u )
    {
LABEL_12:
      v4 = 0;
      goto LABEL_13;
    }
  }
  v8 = (unsigned __int16 *)((char *)v2 + v7);
  if ( v8 != (unsigned __int16 *)a1 )
  {
    if ( (unsigned __int64)v8 <= a1 && (unsigned __int64)(v8 + 2) <= a1 && (unsigned __int64)v8 + *v8 <= a1 )
    {
      *a2 = v8;
      return v4;
    }
    goto LABEL_12;
  }
LABEL_13:
  *a2 = 0LL;
  return v4;
}
