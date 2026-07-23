/*
 * XREFs of NtQueryLicenseValue @ 0x1404A7D10
 * Callers:
 *     MiMemoryLicense @ 0x14081302C (MiMemoryLicense.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExQueryLicenseValueInternal @ 0x1404A7FE0 (ExQueryLicenseValueInternal.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtQueryLicenseValue(
        PUNICODE_STRING ValueName,
        PULONG Type,
        PVOID Data,
        ULONG DataSize,
        PULONG ResultDataSize)
{
  SIZE_T v5; // r12
  NTSTATUS LicenseValueInternal; // ebx
  char PreviousMode; // dl
  PULONG v10; // r15
  int v11; // eax
  wchar_t *Buffer; // rcx
  unsigned __int64 v13; // rdx
  PVOID PoolWithTag; // rax
  void *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // eax
  _DWORD Size[3]; // [rsp+34h] [rbp-64h] BYREF
  PVOID P; // [rsp+40h] [rbp-58h]
  int v22; // [rsp+48h] [rbp-50h] BYREF
  void *Src; // [rsp+50h] [rbp-48h]
  ULONG v24; // [rsp+A0h] [rbp+8h] BYREF
  PULONG v25; // [rsp+A8h] [rbp+10h]
  PVOID v26; // [rsp+B0h] [rbp+18h]
  ULONG v27; // [rsp+B8h] [rbp+20h]

  v27 = DataSize;
  v26 = Data;
  v25 = Type;
  v5 = DataSize;
  LicenseValueInternal = 0;
  P = 0LL;
  *(_QWORD *)&Size[1] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( ValueName && (v10 = ResultDataSize) != 0LL && (Data || !DataSize) )
  {
    if ( DataSize > 0x800000 )
    {
      LicenseValueInternal = -1073741801;
    }
    else if ( PreviousMode )
    {
      if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
        ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
      v11 = *(_DWORD *)&ValueName->Length;
      v22 = *(_DWORD *)&ValueName->Length;
      Buffer = ValueName->Buffer;
      Src = Buffer;
      if ( Buffer && (_WORD)v11 && (v11 & 1) == 0 )
      {
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v13 = (unsigned __int64)Buffer + (unsigned __int16)v11;
        if ( v13 > 0x7FFFFFFF0000LL || v13 < (unsigned __int64)Buffer )
          MEMORY[0x7FFFFFFF0000] = 0;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v22, 0x20534C53u);
        P = PoolWithTag;
        if ( PoolWithTag )
        {
          v15 = PoolWithTag;
          memmove(PoolWithTag, Src, (unsigned __int16)v22);
          Src = v15;
          if ( Type )
          {
            v16 = (__int64)Type;
            if ( (unsigned __int64)Type >= 0x7FFFFFFF0000LL )
              v16 = 0x7FFFFFFF0000LL;
            *(_DWORD *)v16 = *(_DWORD *)v16;
            v24 = *Type;
          }
          if ( Data
            && (_DWORD)v5
            && (ProbeForWrite(Data, v5, 1u),
                (*(_QWORD *)&Size[1] = ExAllocatePoolWithTag(PagedPool, v5, 0x20534C53u)) == 0LL) )
          {
            LicenseValueInternal = -1073741801;
          }
          else
          {
            v17 = (__int64)v10;
            if ( (unsigned __int64)v10 >= 0x7FFFFFFF0000LL )
              v17 = 0x7FFFFFFF0000LL;
            *(_DWORD *)v17 = *(_DWORD *)v17;
            Size[0] = *v10;
          }
        }
        else
        {
          LicenseValueInternal = -1073741801;
        }
      }
      else
      {
        LicenseValueInternal = -1073741811;
      }
      if ( LicenseValueInternal >= 0 )
      {
        LicenseValueInternal = ExQueryLicenseValueInternal(
                                 (unsigned int)&v22,
                                 (unsigned int)&v24,
                                 Size[1],
                                 v5,
                                 (__int64)Size);
        if ( Type )
          *Type = v24;
        v18 = Size[0];
        *v10 = Size[0];
        if ( LicenseValueInternal >= 0 && Data )
        {
          if ( (unsigned int)v5 < v18 )
            LicenseValueInternal = -1073741789;
          else
            memmove(Data, *(const void **)&Size[1], v18);
        }
      }
    }
    else
    {
      LicenseValueInternal = ExQueryLicenseValueInternal(
                               (_DWORD)ValueName,
                               (_DWORD)Type,
                               (_DWORD)Data,
                               DataSize,
                               (__int64)ResultDataSize);
    }
  }
  else
  {
    LicenseValueInternal = -1073741811;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( *(_QWORD *)&Size[1] )
    ExFreePoolWithTag(*(PVOID *)&Size[1], 0);
  return LicenseValueInternal;
}
