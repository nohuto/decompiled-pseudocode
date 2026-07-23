/*
 * XREFs of WerpCreateCrashDataSection @ 0x1800DD624
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DC850 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DCD18 (RtlReportExceptionHelper.c)
 * Callees:
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A05C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A0A00 (NtCreateSection.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall WerpCreateCrashDataSection(HANDLE *a1, PVOID *a2)
{
  NTSTATUS v4; // ebx
  HANDLE v5; // rcx
  PVOID v6; // rdx
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  PVOID BaseAddress; // [rsp+B0h] [rbp+30h] BYREF
  HANDLE SectionHandle; // [rsp+B8h] [rbp+38h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+C0h] [rbp+40h] BYREF
  ULONG_PTR ViewSize; // [rsp+C8h] [rbp+48h] BYREF

  ObjectAttributes.Length = 0;
  memset(&ObjectAttributes.RootDirectory, 0, 0x28uLL);
  SectionHandle = 0LL;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  if ( a1 )
    *a1 = 0LL;
  if ( a2 )
    *a2 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Attributes = 2;
      ObjectAttributes.ObjectName = 0LL;
      MaximumSize.QuadPart = 1640LL;
      v4 = NtCreateSection(&SectionHandle, 0xF0007u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL);
      if ( v4 < 0
        || (v4 = ZwMapViewOfSection(
                   SectionHandle,
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   &BaseAddress,
                   0LL,
                   0LL,
                   0LL,
                   &ViewSize,
                   ViewShare,
                   0,
                   4u),
            v4 < 0) )
      {
        v5 = SectionHandle;
        v6 = BaseAddress;
      }
      else
      {
        memset(BaseAddress, 0, 0xF0uLL);
        v5 = 0LL;
        *a1 = SectionHandle;
        v6 = 0LL;
        v4 = 0;
        *a2 = BaseAddress;
        SectionHandle = 0LL;
        BaseAddress = 0LL;
      }
      if ( v6 )
      {
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v6);
        v5 = SectionHandle;
        BaseAddress = 0LL;
      }
      if ( v5 )
        NtClose(v5);
    }
    else
    {
      return (unsigned int)-1073741584;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)v4;
}
