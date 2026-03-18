/*
 * XREFs of IopVerifyDriverObjectOnStack @ 0x1401F57BC
 * Callers:
 *     IopGetDriverPathInformation @ 0x1401F5228 (IopGetDriverPathInformation.c)
 * Callees:
 *     IopGetDeviceAttachmentBase @ 0x1400245FC (IopGetDeviceAttachmentBase.c)
 */

char __fastcall IopVerifyDriverObjectOnStack(__int64 a1)
{
  __int64 i; // rax
  __int64 v2; // r8

  for ( i = IopGetDeviceAttachmentBase(a1); i; i = *(_QWORD *)(i + 24) )
  {
    if ( *(_QWORD *)(i + 8) == v2 )
    {
      LOBYTE(i) = 1;
      return i;
    }
  }
  return i;
}
