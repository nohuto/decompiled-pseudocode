/*
 * XREFs of NtQuerySection @ 0x1405872D4
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MmGetSectionInformation @ 0x14048C730 (MmGetSectionInformation.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtQuerySection(
        HANDLE SectionHandle,
        SECTION_INFORMATION_CLASS SectionInformationClass,
        PVOID SectionInformation,
        SIZE_T Length,
        PSIZE_T ResultLength)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v10; // rcx
  SIZE_T v11; // rbx
  NTSTATUS v12; // edi
  SECTION_INFORMATION_CLASS v13; // edx
  PVOID v14; // rsi
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(SectionInformation, Length, 4u);
    if ( ResultLength )
    {
      v10 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ResultLength < 0x7FFFFFFF0000LL )
        v10 = (__int64)ResultLength;
      *(_QWORD *)v10 = *(_QWORD *)v10;
    }
  }
  if ( SectionInformationClass )
  {
    if ( SectionInformationClass == SectionImageInformation )
    {
      v11 = 64LL;
    }
    else
    {
      if ( SectionInformationClass != SectionRelocationInformation
        && SectionInformationClass != SectionOriginalBaseInformation )
      {
        return -1073741821;
      }
      v11 = 8LL;
    }
  }
  else
  {
    v11 = 24LL;
  }
  if ( Length < v11 )
    return -1073741820;
  v12 = ObReferenceObjectByHandle(SectionHandle, 1u, MmSectionObjectType, PreviousMode, &Object, 0LL);
  if ( v12 >= 0 )
  {
    v13 = SectionInformationClass;
    v14 = Object;
    v12 = MmGetSectionInformation((__int64)Object, v13, (__int64)SectionInformation);
    if ( v12 >= 0 )
    {
      if ( ResultLength )
        *ResultLength = v11;
    }
    ObfDereferenceObject(v14);
  }
  return v12;
}
