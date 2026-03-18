/*
 * XREFs of ?DpiBrightnessQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_QUERY_INTERFACE@@@Z @ 0x1C02017BC
 * Callers:
 *     DpiPdoDispatchPnp @ 0x1C009E8D0 (DpiPdoDispatchPnp.c)
 * Callees:
 *     memmove @ 0x1C001C600 (memmove.c)
 */

__int64 __fastcall DpiBrightnessQueryInterface(_QWORD *Object, struct _QUERY_INTERFACE *a2)
{
  __int64 v2; // rdi
  _WORD *v5; // rdx
  __int64 v7; // rdx
  PINTERFACE Interface; // rax

  v2 = Object[8];
  if ( RtlCompareMemory(a2->InterfaceType, &GUID_DEVINTERFACE_BRIGHTNESS_3, 0x10uLL) == 16
    && a2->Version == 3
    && a2->Size == 72 )
  {
    v5 = (_WORD *)(v2 + 4344);
LABEL_5:
    a2->InterfaceSpecificData = 0LL;
    if ( !*v5 )
      return 3221225659LL;
    memmove(a2->Interface, v5, (unsigned __int16)*v5);
    goto LABEL_8;
  }
  if ( RtlCompareMemory(a2->InterfaceType, &GUID_DEVINTERFACE_BRIGHTNESS_2, 0x10uLL) == 16
    && a2->Version == 2
    && a2->Size == 88 )
  {
    v5 = (_WORD *)(v2 + 4416);
    goto LABEL_5;
  }
  if ( RtlCompareMemory(a2->InterfaceType, &GUID_DEVINTERFACE_BRIGHTNESS, 0x10uLL) == 16
    && a2->Version == 1
    && a2->Size == 56 )
  {
    a2->InterfaceSpecificData = 0LL;
    v7 = 0LL;
    if ( *(_WORD *)(v2 + 4562) == 2 )
      v7 = v2 + 4560;
    if ( v7 )
    {
      Interface = a2->Interface;
      *(_OWORD *)&Interface->Size = *(_OWORD *)(v2 + 4504);
      *(_OWORD *)&Interface->InterfaceReference = *(_OWORD *)(v2 + 4520);
      *(_OWORD *)&Interface[1].Size = *(_OWORD *)(v2 + 4536);
      Interface[1].InterfaceReference = *(PINTERFACE_REFERENCE *)(v2 + 4552);
LABEL_8:
      ObfReferenceObject(Object);
      return 0LL;
    }
  }
  return 3221226098LL;
}
