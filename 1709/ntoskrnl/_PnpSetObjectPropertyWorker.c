/*
 * XREFs of _PnpSetObjectPropertyWorker @ 0x14052FA38
 * Callers:
 *     _PnpSetObjectProperty @ 0x14052F8B4 (_PnpSetObjectProperty.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     _PnpOpenObjectRegKey @ 0x1405264F8 (_PnpOpenObjectRegKey.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x14052DA0C (_PnpObjectRaisePropertyChangeEvent.c)
 *     _PnpValidatePropertyData @ 0x14052FC20 (_PnpValidatePropertyData.c)
 *     _PnpSetMappedPropertyDispatch @ 0x14052FE78 (_PnpSetMappedPropertyDispatch.c)
 *     _PnpSetGenericStoreProperty @ 0x14052FF4C (_PnpSetGenericStoreProperty.c)
 */

__int64 __fastcall PnpSetObjectPropertyWorker(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        ULONG SecurityDescriptorLength,
        int a10)
{
  void *v14; // r12
  int v15; // ebx
  int v16; // edx
  __int64 v17; // r9
  HANDLE Handle[2]; // [rsp+50h] [rbp-38h] BYREF

  Handle[0] = 0LL;
  if ( (_WORD)a10 || !a8 && SecurityDescriptorLength )
    return (unsigned int)-1073741811;
  v14 = (void *)(a8 & -(__int64)(SecurityDescriptorLength != 0));
  v15 = PnpValidatePropertyData(v14, SecurityDescriptorLength);
  if ( v15 >= 0 )
  {
    v15 = PnpSetMappedPropertyDispatch(a1, a2, a3, a4, a5, a6, a7, (__int64)v14, SecurityDescriptorLength, a10);
    if ( v15 >= 0 && (int)a3 >= 6 )
      PnpObjectRaisePropertyChangeEvent(a1, a2, a3, a4, a5, a6);
    if ( v15 == -1073741802 )
    {
      if ( a4 )
      {
        v16 = a4;
        goto LABEL_8;
      }
      v15 = PnpOpenObjectRegKey(a1, a2, a3, 33554439, 0, (__int64)Handle, 0LL, 0);
      if ( v15 >= 0 )
      {
        v16 = (int)Handle[0];
LABEL_8:
        v15 = PnpSetGenericStoreProperty(a1, v16, a5, a6, a7, (__int64)v14, SecurityDescriptorLength);
        if ( v15 >= 0 )
        {
          v17 = (__int64)Handle[0];
          if ( a4 )
            v17 = a4;
          PnpObjectRaisePropertyChangeEvent(a1, a2, a3, v17, a5, a6);
        }
      }
    }
  }
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v15;
}
