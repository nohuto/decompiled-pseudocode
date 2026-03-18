/*
 * XREFs of IovpExamineDevObjForwarding @ 0x1407AFF84
 * Callers:
 *     IovpCallDriver1 @ 0x1407AF150 (IovpCallDriver1.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     IovUtilGetUpperDeviceObject @ 0x1407B4B2C (IovUtilGetUpperDeviceObject.c)
 *     IovUtilRelateDeviceObjects @ 0x1407B4D90 (IovUtilRelateDeviceObjects.c)
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
