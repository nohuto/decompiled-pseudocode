/*
 * XREFs of MmCallDllInitialize @ 0x140611478
 * Callers:
 *     MiLoadImportDll @ 0x1406113D4 (MiLoadImportDll.c)
 *     PipInitializeDriverDependentDLLs @ 0x1408B5810 (PipInitializeDriverDependentDLLs.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14006DCF0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400BAE30 (RtlAppendUnicodeStringToString.c)
 *     wcschr @ 0x14018A5C0 (wcschr.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlFindExportedRoutineByName @ 0x140519F90 (RtlFindExportedRoutineByName.c)
 *     VfDriverInitStarting @ 0x14080ED70 (VfDriverInitStarting.c)
 *     VfDriverInitSuccess @ 0x14080F4C4 (VfDriverInitSuccess.c)
 */

__int64 __fastcall MmCallDllInitialize(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 (__fastcall *v5)(UNICODE_STRING *); // r14
  unsigned __int16 v6; // ax
  wchar_t *PoolWithTag; // rax
  wchar_t *v8; // rdi
  unsigned int Length; // esi
  const void *v10; // rdx
  unsigned __int16 v11; // cx
  wchar_t *v12; // rax
  __int64 v13; // rcx
  unsigned int inited; // edi
  int v15; // ebx
  UNICODE_STRING Destination; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING Source; // [rsp+30h] [rbp-10h] BYREF

  result = (__int64)RtlFindExportedRoutineByName(*(PVOID *)(a1 + 48), "DllInitialize");
  v5 = (__int64 (__fastcall *)(UNICODE_STRING *))result;
  if ( result )
  {
    v6 = *(_WORD *)(a1 + 88);
    if ( (unsigned __int16)(v6 + 2) < v6 )
      return 3221225734LL;
    Source.MaximumLength = v6 + 2;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v6 + 2), 0x54446D4Du);
    Source.Buffer = PoolWithTag;
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      v10 = *(const void **)(a1 + 96);
      Source.Length = *(_WORD *)(a1 + 88);
      Length = Source.Length;
      memmove(PoolWithTag, v10, Source.Length);
      v11 = CmRegistryMachineSystemCurrentControlSetServices.Length + Source.Length;
      if ( (unsigned __int16)(CmRegistryMachineSystemCurrentControlSetServices.Length + Source.Length) > CmRegistryMachineSystemCurrentControlSetServices.Length )
      {
        if ( (unsigned __int16)(v11 + 4) < v11 )
        {
          v15 = -1073741562;
        }
        else
        {
          Destination.MaximumLength = v11 + 4;
          Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                            NonPagedPoolNx,
                                            (unsigned __int16)(v11 + 4),
                                            0x54446D4Du);
          if ( Destination.Buffer )
          {
            Destination.Length = CmRegistryMachineSystemCurrentControlSetServices.Length;
            memmove(
              Destination.Buffer,
              CmRegistryMachineSystemCurrentControlSetServices.Buffer,
              CmRegistryMachineSystemCurrentControlSetServices.Length);
            RtlAppendUnicodeToString(&Destination, L"\\");
            v8[(unsigned __int64)Length >> 1] = 0;
            v12 = wcschr(v8, 0x2Eu);
            if ( v12 )
            {
              Source.Length = 2 * (v12 - v8);
              LOWORD(Length) = Source.Length;
            }
            v8[(unsigned __int64)(unsigned __int16)Length >> 1] = 0;
            RtlAppendUnicodeStringToString(&Destination, &Source);
            ExFreePoolWithTag(v8, 0);
            inited = VfDriverInitStarting(v13);
            v15 = v5(&Destination);
            ExFreePoolWithTag(Destination.Buffer, 0);
            if ( v15 >= 0 && !byte_1403CB54C )
              VfDriverInitSuccess(inited, a2);
            return (unsigned int)v15;
          }
          v15 = -1073741670;
        }
        ExFreePoolWithTag(v8, 0);
        return (unsigned int)v15;
      }
      ExFreePoolWithTag(v8, 0);
      return 3221225734LL;
    }
    return 3221225626LL;
  }
  return result;
}
