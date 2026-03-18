/*
 * XREFs of NtDCompositionCreateSharedVisualHandle @ 0x1C013E150
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C003C810 (-CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 *     CreateSharedResourceObject @ 0x1C008A328 (CreateSharedResourceObject.c)
 */

__int64 __fastcall NtDCompositionCreateSharedVisualHandle(_QWORD *a1)
{
  int SharedResourceObject; // edi
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  Object = 0LL;
  Handle = 0LL;
  SharedResourceObject = CreateSharedResourceObject(0x86u, (struct DirectComposition::ResourceObject **)&Object);
  if ( SharedResourceObject >= 0 )
  {
    SharedResourceObject = CompositionObject::CreateHandle((CompositionObject *)Object, 1u, 0, 1, &Handle);
    ObfDereferenceObject(Object);
    if ( SharedResourceObject >= 0 )
    {
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (_QWORD *)MmUserProbeAddress;
      *a1 = Handle;
    }
  }
  return (unsigned int)SharedResourceObject;
}
