/*
 * XREFs of IopFindLegacyBusDeviceNode @ 0x14055A0F8
 * Callers:
 *     IoTranslateBusAddress @ 0x1401FE440 (IoTranslateBusAddress.c)
 *     IopChildToRootTranslation @ 0x140559470 (IopChildToRootTranslation.c)
 *     IopSetupArbiterAndTranslators @ 0x140559C78 (IopSetupArbiterAndTranslators.c)
 *     PnpReleaseResourcesInternal @ 0x14055A56C (PnpReleaseResourcesInternal.c)
 *     IopDuplicateDetection @ 0x1405DFE78 (IopDuplicateDetection.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall IopFindLegacyBusDeviceNode(unsigned int a1, unsigned int a2)
{
  ULONG_PTR v2; // r8
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
