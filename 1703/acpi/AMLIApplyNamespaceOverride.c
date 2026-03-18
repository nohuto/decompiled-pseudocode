/*
 * XREFs of AMLIApplyNamespaceOverride @ 0x1C001D95C
 * Callers:
 *     ParseLoad @ 0x1C001D4D0 (ParseLoad.c)
 *     ParseUnload @ 0x1C0062A70 (ParseUnload.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C00171C0 (GetNameSpaceObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C005CEE0 (AMLIApplyNextNamespaceOverride.c)
 */

__int64 AMLIApplyNamespaceOverride()
{
  int NameSpaceObject; // ebx
  _QWORD *v2; // [rsp+30h] [rbp+8h]

  if ( (gOverrideFlags & 0x20) != 0 && gpnsNameSpaceOverrideRoot )
  {
    NameSpaceObject = GetNameSpaceObject("\\");
    if ( NameSpaceObject >= 0 )
    {
      NameSpaceObject = AMLIApplyNextNamespaceOverride(gpnsNameSpaceOverrideRoot, v2);
      DereferenceObjectEx(v2);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)NameSpaceObject;
}
