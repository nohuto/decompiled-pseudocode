/*
 * XREFs of InitializeWin32CrossSessionGlobals @ 0x1C011A2F0
 * Callers:
 *     <none>
 * Callees:
 *     ZwWin32CreateSectionRetainHandle @ 0x1C0028344 (ZwWin32CreateSectionRetainHandle.c)
 */

NTSTATUS __fastcall InitializeWin32CrossSessionGlobals(__int64 a1, __int64 a2)
{
  NTSTATUS v2; // ebx
  int v4; // [rsp+28h] [rbp-11h]
  void *v5; // [rsp+38h] [rbp-1h]
  int v6; // [rsp+40h] [rbp+7h]
  int v7; // [rsp+50h] [rbp+17h] BYREF
  const wchar_t *v8; // [rsp+58h] [rbp+1Fh]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+27h] BYREF
  void *SectionHandle; // [rsp+A0h] [rbp+67h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+6Fh] BYREF
  ULONG_PTR ViewSize; // [rsp+B0h] [rbp+77h] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  v8 = L"\\Win32kCrossSessionGlobals";
  v7 = 3538996;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v7;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 66112;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( gSessionId == gServiceSessionId )
  {
    SectionHandle = (void *)48;
    v2 = ZwWin32CreateSectionRetainHandle(
           &gxsSection,
           a2,
           &ObjectAttributes,
           (union _LARGE_INTEGER *)&SectionHandle,
           4u,
           v4,
           0LL,
           v5,
           v6,
           &gxsSectionHandle);
  }
  else
  {
    v2 = ZwOpenSection(&SectionHandle, 4u, &ObjectAttributes);
    if ( v2 < 0 )
      return v2;
    v2 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
    gxsSection = Object;
    ZwClose(SectionHandle);
  }
  if ( v2 >= 0 )
  {
    ViewSize = 48LL;
    return MmMapViewInSessionSpace(gxsSection, &gpxsGlobals, &ViewSize);
  }
  return v2;
}
