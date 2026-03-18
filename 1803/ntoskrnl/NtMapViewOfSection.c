/*
 * XREFs of NtMapViewOfSection @ 0x140593910
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     DbgkMapViewOfSection @ 0x1404E91B8 (DbgkMapViewOfSection.c)
 *     EtwTiLogMapExecView @ 0x14057D65C (EtwTiLogMapExecView.c)
 *     MiMapViewOfSectionCommon @ 0x140593B40 (MiMapViewOfSectionCommon.c)
 *     MiValidateZeroBits @ 0x140593D78 (MiValidateZeroBits.c)
 *     MiMapParametersInitialize @ 0x140593DD0 (MiMapParametersInitialize.c)
 *     MiMapViewOfSection @ 0x140593F20 (MiMapViewOfSection.c)
 */

NTSTATUS __stdcall NtMapViewOfSection(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T CommitSize,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        SECTION_INHERIT InheritDisposition,
        ULONG AllocationType,
        ULONG AccessProtection)
{
  int v11; // ebx
  int v12; // esi
  NTSTATUS result; // eax
  __int64 v14; // r12
  ULONG v15; // r13d
  PLARGE_INTEGER v16; // r14
  PSIZE_T v17; // r15
  ULONG v18; // r12d
  void *v19; // rsi
  NTSTATUS v20; // ebx
  void *v21; // rsi
  bool v22; // zf
  __int64 v23; // [rsp+38h] [rbp-F0h]
  void *v24; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-C8h]
  LONGLONG v26; // [rsp+68h] [rbp-C0h] BYREF
  char v27; // [rsp+70h] [rbp-B8h]
  PVOID Object; // [rsp+78h] [rbp-B0h]
  PVOID v29; // [rsp+80h] [rbp-A8h]
  _BYTE v30[24]; // [rsp+90h] [rbp-98h] BYREF
  ULONG_PTR v31; // [rsp+A8h] [rbp-80h]
  char v32; // [rsp+D0h] [rbp-58h]
  __int64 v33; // [rsp+148h] [rbp+20h] BYREF

  v33 = ZeroBits;
  v11 = (int)ProcessHandle;
  v12 = (int)SectionHandle;
  result = MiValidateZeroBits(&v33);
  if ( result >= 0 )
  {
    v14 = v33;
    v15 = AccessProtection;
    v16 = SectionOffset;
    v17 = ViewSize;
    result = MiMapViewOfSectionCommon(
               v11,
               v12,
               0,
               (int)BaseAddress,
               (__int64)ViewSize,
               (__int64)SectionOffset,
               AccessProtection,
               v33,
               KeGetCurrentThread()->PreviousMode,
               &v24);
    if ( result < 0 )
    {
      ++dword_1403CBEC0;
      return result;
    }
    v23 = v14;
    v18 = AllocationType;
    v19 = v24;
    v20 = MiMapParametersInitialize(v30, v25, AllocationType, v15, v23);
    if ( v20 < 0 )
    {
      v22 = v19 == 0LL;
    }
    else
    {
      v20 = MiMapViewOfSection(
              (_DWORD)Object,
              (unsigned int)v30,
              (unsigned int)&v24,
              CommitSize,
              (__int64)&v26,
              InheritDisposition,
              0);
      if ( v20 >= 0 )
      {
        v21 = v24;
        if ( (v32 & 4) != 0 )
          DbgkMapViewOfSection((_KPROCESS *)v29, (__int64)Object, v24);
        if ( (v27 & 2) != 0 )
          EtwTiLogMapExecView((__int64)v29, (__int64)v21, v25, v18, v15);
        *v17 = v31;
        *BaseAddress = v21;
        if ( v16 )
          v16->QuadPart = v26;
        goto LABEL_11;
      }
      v22 = v24 == 0LL;
    }
    if ( v22 )
      ++dword_1403CBEC0;
    else
      ++dword_1403CBEC4;
LABEL_11:
    ObfDereferenceObject(Object);
    ObfDereferenceObjectWithTag(v29, 0x77566D4Du);
    return v20;
  }
  return result;
}
