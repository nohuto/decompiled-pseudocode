/*
 * XREFs of NtQuerySection @ 0x14057121C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     MmGetSectionInformation @ 0x1404F91C0 (MmGetSectionInformation.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtQuerySection(
        HANDLE SectionHandle,
        SECTION_INFORMATION_CLASS SectionInformationClass,
        PVOID SectionInformation,
        SIZE_T Length,
        PSIZE_T ResultLength)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v9; // rcx
  SIZE_T v10; // rbx
  NTSTATUS v11; // edi
  SECTION_INFORMATION_CLASS v12; // edx
  PVOID v13; // rsi
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(SectionInformation, Length, 4u);
    if ( ResultLength )
    {
      v9 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ResultLength < 0x7FFFFFFF0000LL )
        v9 = (__int64)ResultLength;
      *(_QWORD *)v9 = *(_QWORD *)v9;
    }
  }
  if ( SectionInformationClass )
  {
    if ( SectionInformationClass == SectionImageInformation )
    {
      v10 = 64LL;
    }
    else
    {
      if ( SectionInformationClass != SectionRelocationInformation
        && SectionInformationClass != SectionOriginalBaseInformation )
      {
        return -1073741821;
      }
      v10 = 8LL;
    }
  }
  else
  {
    v10 = 24LL;
  }
  if ( Length < v10 )
    return -1073741820;
  v11 = ObReferenceObjectByHandle(SectionHandle, 1u, MmSectionObjectType, PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    v12 = SectionInformationClass;
    v13 = Object;
    v11 = MmGetSectionInformation((__int64)Object, v12);
    if ( v11 >= 0 )
    {
      if ( ResultLength )
        *ResultLength = v10;
    }
    ObfDereferenceObject(v13);
  }
  return v11;
}
