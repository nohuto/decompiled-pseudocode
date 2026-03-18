/*
 * XREFs of IopFindLegacyBusDeviceNode @ 0x1405B2450
 * Callers:
 *     IoTranslateBusAddress @ 0x1401F8330 (IoTranslateBusAddress.c)
 *     PnpReleaseResourcesInternal @ 0x140596908 (PnpReleaseResourcesInternal.c)
 *     IopChildToRootTranslation @ 0x1405B17E8 (IopChildToRootTranslation.c)
 *     IopSetupArbiterAndTranslators @ 0x1405B1FC8 (IopSetupArbiterAndTranslators.c)
 *     IopDuplicateDetection @ 0x1405D4F5C (IopDuplicateDetection.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall IopFindLegacyBusDeviceNode(unsigned int a1, unsigned int a2)
{
  __int64 v2; // r8
  int v5; // eax
  _QWORD **v6; // r10
  _QWORD *i; // rax
  unsigned int v8; // edx

  v2 = IopRootDeviceNode;
  if ( a1 != 15 && a1 <= 0x11 )
  {
    v5 = 1;
    if ( a1 != 2 )
      v5 = a1;
    v6 = (_QWORD **)((char *)&IopLegacyBusInformationTable + 16 * v5);
    for ( i = *v6; i != v6; i = (_QWORD *)*i )
    {
      v8 = *((_DWORD *)i - 43);
      if ( v8 == a2 )
        return i - 78;
      if ( v8 > a2 )
        return (_QWORD *)v2;
    }
  }
  return (_QWORD *)v2;
}
