/*
 * XREFs of IovpExamineDevObjForwarding @ 0x14076E2BC
 * Callers:
 *     IovpCallDriver1 @ 0x14076D490 (IovpCallDriver1.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     IovUtilGetUpperDeviceObject @ 0x140772D6C (IovUtilGetUpperDeviceObject.c)
 *     IovUtilRelateDeviceObjects @ 0x140772FD0 (IovUtilRelateDeviceObjects.c)
 */

__int64 __fastcall IovpExamineDevObjForwarding(__int64 a1, __int64 a2)
{
  void *UpperDeviceObject; // rax
  void *v5; // rax
  int v6; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    UpperDeviceObject = (void *)IovUtilGetUpperDeviceObject(a1);
    if ( !UpperDeviceObject )
      return 1LL;
    ObfDereferenceObject(UpperDeviceObject);
    return 4LL;
  }
  IovUtilRelateDeviceObjects(a1, a2, &v6);
  switch ( v6 )
  {
    case 0:
      return 2LL;
    case 1:
      return 3LL;
    case 2:
      return 2LL;
    case 3:
    case 4:
      return 3LL;
  }
  if ( v6 != 5 )
    return 2LL;
  v5 = (void *)IovUtilGetUpperDeviceObject(a1);
  if ( !v5 )
    return 5LL;
  ObfDereferenceObject(v5);
  return 6LL;
}
