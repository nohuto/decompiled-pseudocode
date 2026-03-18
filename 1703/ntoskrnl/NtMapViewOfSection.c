/*
 * XREFs of NtMapViewOfSection @ 0x1404C9130
 * Callers:
 *     <none>
 * Callees:
 *     RtlFindMostSignificantBit @ 0x14007D560 (RtlFindMostSignificantBit.c)
 *     MiSectionControlArea @ 0x1400CDE10 (MiSectionControlArea.c)
 *     MiMakeProtectionMask @ 0x1400CE440 (MiMakeProtectionMask.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     DbgkMapViewOfSection @ 0x1404C95A0 (DbgkMapViewOfSection.c)
 *     EtwTiLogMapExecView @ 0x1404C962C (EtwTiLogMapExecView.c)
 *     MiMapViewOfSection @ 0x1405198A0 (MiMapViewOfSection.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
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
  ULONG_PTR v10; // r13
  int ProtectionMask; // eax
  unsigned __int64 *v13; // r8
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v15; // rcx
  PSIZE_T v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  NTSTATUS result; // eax
  _QWORD *v21; // rsi
  int v22; // ebx
  PVOID v23; // rdi
  unsigned __int64 v24; // r15
  int v25; // r8d
  int v26; // eax
  void *v27; // r12
  ACCESS_MASK DesiredAccess; // [rsp+64h] [rbp-84h]
  LONGLONG QuadPart; // [rsp+68h] [rbp-80h] BYREF
  int v30; // [rsp+70h] [rbp-78h]
  unsigned __int64 v31; // [rsp+78h] [rbp-70h] BYREF
  PVOID v32; // [rsp+80h] [rbp-68h] BYREF
  unsigned __int64 v33; // [rsp+88h] [rbp-60h]
  ULONG_PTR v34; // [rsp+90h] [rbp-58h] BYREF
  PVOID Object; // [rsp+98h] [rbp-50h] BYREF
  KPROCESSOR_MODE v38; // [rsp+108h] [rbp+20h]

  v10 = ZeroBits;
  if ( ZeroBits >= 0x20 )
  {
    v10 = 63 - RtlFindMostSignificantBit(ZeroBits);
  }
  else if ( ZeroBits )
  {
    v10 = ZeroBits + 32;
  }
  if ( v10 > 0x35 )
    return -1073741582;
  if ( (unsigned int)(InheritDisposition - 1) > 1 )
    return -1073741578;
  if ( (AllocationType & 0x9F2FDF80) != 0 )
    return -1073741577;
  ProtectionMask = MiMakeProtectionMask(AccessProtection & 0xBFFFFFFF);
  if ( ProtectionMask == -1 )
    return -1073741755;
  v30 = ProtectionMask & 7;
  DesiredAccess = MmMakeSectionAccess[ProtectionMask & 7];
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v38 = PreviousMode;
  if ( PreviousMode )
  {
    v15 = (__int64)v13;
    if ( (unsigned __int64)v13 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    v16 = ViewSize;
    v17 = (__int64)ViewSize;
    if ( (unsigned __int64)ViewSize >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v17 = *(_QWORD *)v17;
  }
  else
  {
    v16 = ViewSize;
  }
  if ( SectionOffset )
  {
    if ( PreviousMode )
    {
      v18 = (__int64)SectionOffset;
      if ( ((unsigned __int8)SectionOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)SectionOffset >= 0x7FFFFFFF0000LL )
        v18 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v18 = *(_BYTE *)v18;
      *(_BYTE *)(v18 + 7) = *(_BYTE *)(v18 + 7);
    }
    QuadPart = SectionOffset->QuadPart;
  }
  else
  {
    QuadPart = 0LL;
  }
  v31 = *v13;
  v19 = *v16;
  v33 = v19;
  v34 = v19;
  if ( v31 > 0x7FFFFFFDFFFFLL || v19 > 0x7FFFFFFE0000LL - v31 )
    return -1073741583;
  if ( v19 + v31 > 0xFFFFFFFFFFFFFFFFuLL >> v10 )
    return -1073741582;
  result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2002152781, (__int64)&v32, 0LL, 0LL);
  if ( result >= 0 )
  {
    v21 = v32;
    if ( (AllocationType & 0x40000000) != 0 && !*((_QWORD *)v32 + 226) )
    {
      v22 = -1073741577;
      goto LABEL_43;
    }
    v22 = ObReferenceObjectByHandle(SectionHandle, DesiredAccess, MmSectionObjectType, PreviousMode, &Object, 0LL);
    if ( v22 < 0 )
    {
LABEL_43:
      ObfDereferenceObjectWithTag(v21, 0x77566D4Du);
      return v22;
    }
    v23 = Object;
    v24 = MiSectionControlArea((__int64)Object);
    v25 = *(_DWORD *)(v24 + 56);
    if ( (v25 & 0x20) == 0 && (AllocationType & 0x800000) != 0 )
    {
      v22 = -1073741577;
    }
    else if ( (v25 & 0x400) != 0 )
    {
      LODWORD(QuadPart) = QuadPart & 0xFFFFF000;
      if ( !v38 || QuadPart + v33 <= BugCheckParameter3 << 12 )
        goto LABEL_36;
      v22 = -1073741580;
    }
    else
    {
      if ( (AllocationType & 0x40000000) != 0 || !(_WORD)v31 && (!SectionOffset || !(_WORD)QuadPart) )
      {
LABEL_36:
        v26 = MiMapViewOfSection(
                (_DWORD)v23,
                (_DWORD)v21,
                (unsigned int)&v31,
                v10,
                CommitSize,
                (__int64)&QuadPart,
                (__int64)&v34,
                InheritDisposition,
                AllocationType,
                AccessProtection,
                2,
                0LL);
        v22 = v26;
        v27 = (void *)v31;
        if ( v26 < 0 )
        {
          if ( v31 )
            ++dword_14036CA30;
          else
            ++dword_14036CA2C;
        }
        if ( v26 >= 0 )
        {
          if ( (*(_DWORD *)(v24 + 56) & 0x20) != 0 && !v21[90] )
            DbgkMapViewOfSection(v21);
          if ( (v30 & 2) != 0 && v38 == 1 )
            EtwTiLogMapExecView((_DWORD)v21, (_DWORD)v27, v33, AllocationType, AccessProtection);
          *ViewSize = v34;
          *BaseAddress = v27;
          if ( SectionOffset )
            SectionOffset->QuadPart = QuadPart;
        }
        goto LABEL_42;
      }
      v22 = -1073741280;
    }
LABEL_42:
    ObfDereferenceObject(v23);
    goto LABEL_43;
  }
  return result;
}
