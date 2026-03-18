/*
 * XREFs of AMLIApplyNamespaceOverride @ 0x1C001358C
 * Callers:
 *     ParseLoad @ 0x1C0013100 (ParseLoad.c)
 *     ParseUnload @ 0x1C0063C40 (ParseUnload.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C001B118 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C001B6A4 (GetNameSpaceObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C005CCD0 (AMLIApplyNextNamespaceOverride.c)
 */

__int64 AMLIApplyNamespaceOverride()
{
  int NameSpaceObject; // ebx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // [rsp+30h] [rbp+8h]

  if ( (gOverrideFlags & 0x20) != 0 && gpnsNameSpaceOverrideRoot )
  {
    NameSpaceObject = GetNameSpaceObject((void *)"\\");
    if ( NameSpaceObject >= 0 )
    {
      NameSpaceObject = AMLIApplyNextNamespaceOverride(gpnsNameSpaceOverrideRoot, v4);
      DereferenceObjectEx(v4, 0LL, v2, v3);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)NameSpaceObject;
}
