/*
 * XREFs of NtDCompositionCreateSharedVisualHandle @ 0x1C013ED00
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C0027630 (-CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 *     CreateSharedResourceObject @ 0x1C008303C (CreateSharedResourceObject.c)
 */

__int64 __fastcall NtDCompositionCreateSharedVisualHandle(CTouchProcessor *a1)
{
  int SharedResourceObject; // edi
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  Object = 0LL;
  Handle = 0LL;
  SharedResourceObject = CreateSharedResourceObject(0x1Fu, (struct DirectComposition::ResourceObject **)&Object);
  if ( SharedResourceObject >= 0 )
  {
    SharedResourceObject = CompositionObject::CreateHandle((CompositionObject *)Object, 1u, 0, 1, &Handle);
    ObfDereferenceObject(Object);
    if ( SharedResourceObject >= 0 )
    {
      if ( a1 >= W32UserProbeAddress )
        a1 = W32UserProbeAddress;
      *(_QWORD *)a1 = Handle;
    }
  }
  return (unsigned int)SharedResourceObject;
}
