/*
 * XREFs of _CcdOpenRegistrySubkey_0 @ 0x1C00B0370
 * Callers:
 *     ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C00AED38 (--$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCO.c)
 *     ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C00AF934 (--$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOP.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00B0318 (_CcdOpenRegistrySubkey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CcdOpenRegistrySubkey_0(
        void **a1,
        ACCESS_MASK a2,
        void *a3,
        struct _UNICODE_STRING *a4,
        PULONG Disposition)
{
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  ObjectAttributes.RootDirectory = a3;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a4;
  if ( Disposition )
    return ZwCreateKey(a1, a2, &ObjectAttributes, 0, 0LL, 0, Disposition);
  else
    return ZwOpenKey(a1, a2, &ObjectAttributes);
}
