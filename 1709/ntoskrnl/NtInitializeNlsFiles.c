/*
 * XREFs of NtInitializeNlsFiles @ 0x14045DFB4
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ZwQueryDefaultLocale @ 0x14017DB60 (ZwQueryDefaultLocale.c)
 *     ExpGetGlobalLocaleSection @ 0x14045DD20 (ExpGetGlobalLocaleSection.c)
 *     MmMapViewOfSection @ 0x140460870 (MmMapViewOfSection.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtInitializeNlsFiles(
        PVOID *BaseAddress,
        PLCID DefaultLocaleId,
        PLARGE_INTEGER DefaultCasingTableSize,
        PULONG CurrentNLSVersion)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  NTSTATUS result; // eax
  NTSTATUS v11; // ebx
  _DWORD v12[2]; // [rsp+58h] [rbp-30h] BYREF
  PVOID Object; // [rsp+60h] [rbp-28h] BYREF
  void *v14; // [rsp+68h] [rbp-20h] BYREF
  __int64 v15; // [rsp+70h] [rbp-18h] BYREF
  DWORD DefaultLocaleIda; // [rsp+A8h] [rbp+20h] BYREF

  if ( !KeGetCurrentThread()->PreviousMode )
    return -1073741637;
  v7 = 0x7FFFFFFF0000LL;
  v8 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)BaseAddress < 0x7FFFFFFF0000LL )
    v8 = (__int64)BaseAddress;
  *(_QWORD *)v8 = *(_QWORD *)v8;
  v9 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)DefaultLocaleId < 0x7FFFFFFF0000LL )
    v9 = (__int64)DefaultLocaleId;
  *(_DWORD *)v9 = *(_DWORD *)v9;
  if ( ((unsigned __int8)DefaultCasingTableSize & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)DefaultCasingTableSize < 0x7FFFFFFF0000LL )
    v7 = (__int64)DefaultCasingTableSize;
  *(_BYTE *)v7 = *(_BYTE *)v7;
  *(_BYTE *)(v7 + 7) = *(_BYTE *)(v7 + 7);
  result = ZwQueryDefaultLocale(0, &DefaultLocaleIda);
  if ( result >= 0 )
  {
    result = ExpGetGlobalLocaleSection(&Object);
    if ( result >= 0 )
    {
      v14 = 0LL;
      v12[0] = 0;
      v12[1] = 0;
      v15 = 0LL;
      v11 = MmMapViewOfSection(
              (_DWORD)Object,
              KeGetCurrentThread()->ApcState.Process,
              (unsigned int)&v14,
              0,
              0LL,
              (__int64)v12,
              (__int64)&v15,
              1,
              0x400000,
              2);
      ObfDereferenceObject(Object);
      if ( v11 >= 0 )
      {
        *BaseAddress = v14;
        *DefaultLocaleId = DefaultLocaleIda;
        DefaultCasingTableSize->QuadPart = NlsDefaultCasingTableSize;
      }
      return v11;
    }
  }
  return result;
}
