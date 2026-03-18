/*
 * XREFs of ZwWin32CreateSectionRetainHandle @ 0x1C00B6BBC
 * Callers:
 *     ZwWin32CreateSection @ 0x1C00B6B6C (ZwWin32CreateSection.c)
 *     InitializeWin32CrossSessionGlobals @ 0x1C0123F30 (InitializeWin32CrossSessionGlobals.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C0268B70 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ZwWin32CreateSectionRetainHandle(
        _QWORD *a1,
        __int64 a2,
        struct _OBJECT_ATTRIBUTES *a3,
        union _LARGE_INTEGER *a4,
        ULONG SectionPageProtection,
        int a6,
        HANDLE FileHandle,
        PVOID Object,
        int a9,
        PHANDLE SectionHandle)
{
  HANDLE *v11; // rbx
  NTSTATUS result; // eax
  NTSTATUS v13; // edi

  v11 = SectionHandle;
  result = ZwCreateSection(SectionHandle, 0xF001Fu, a3, a4, SectionPageProtection, 0x8000000u, FileHandle);
  if ( result >= 0 )
  {
    v13 = ObReferenceObjectByHandle(*v11, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
    *a1 = Object;
    if ( v13 < 0 )
    {
      ZwClose(*v11);
      *v11 = 0LL;
    }
    return v13;
  }
  return result;
}
