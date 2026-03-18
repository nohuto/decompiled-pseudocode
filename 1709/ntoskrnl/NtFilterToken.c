/*
 * XREFs of NtFilterToken @ 0x14045ACFC
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     SepFilterToken @ 0x14045B120 (SepFilterToken.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14045DA2C (SeReleaseLuidAndAttributesArray.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140484B90 (SepAppendAceToTokenObjectAcl.c)
 *     SeCaptureSidAndAttributesArray @ 0x140488B20 (SeCaptureSidAndAttributesArray.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14053A0EC (SeCaptureLuidAndAttributesArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtFilterToken(
        HANDLE ExistingTokenHandle,
        ULONG Flags,
        PTOKEN_GROUPS SidsToDisable,
        PTOKEN_PRIVILEGES PrivilegesToDelete,
        PTOKEN_GROUPS RestrictedSids,
        PHANDLE NewTokenHandle)
{
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v8; // rcx
  ULONG v9; // ecx
  int inserted; // edi
  PVOID v11; // r14
  int Object; // [rsp+20h] [rbp-C8h]
  int HandleInformation; // [rsp+28h] [rbp-C0h]
  int v15; // [rsp+30h] [rbp-B8h]
  ULONG GroupCount; // [rsp+68h] [rbp-80h]
  ULONG v17; // [rsp+6Ch] [rbp-7Ch]
  UINT uAddend[2]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v19; // [rsp+78h] [rbp-70h] BYREF
  ULONG v20; // [rsp+80h] [rbp-68h]
  __int64 v21; // [rsp+84h] [rbp-64h] BYREF
  __int64 v22; // [rsp+90h] [rbp-58h] BYREF
  __int64 v23; // [rsp+98h] [rbp-50h] BYREF
  PVOID v24; // [rsp+A0h] [rbp-48h] BYREF
  PVOID v25; // [rsp+A8h] [rbp-40h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-38h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v27; // [rsp+B8h] [rbp-30h] BYREF
  ULONG v29; // [rsp+F8h] [rbp+10h]

  v29 = Flags;
  v17 = 0;
  v19 = 0LL;
  uAddend[0] = 0;
  GroupCount = 0;
  v22 = 0LL;
  v21 = 0LL;
  uAddend[1] = 0;
  v23 = 0LL;
  v26 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)NewTokenHandle < 0x7FFFFFFF0000LL )
    v8 = (__int64)NewTokenHandle;
  *(_QWORD *)v8 = *(_QWORD *)v8;
  if ( SidsToDisable )
  {
    if ( ((unsigned __int8)SidsToDisable & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    GroupCount = SidsToDisable->GroupCount;
    v9 = 0;
    v20 = 0;
    while ( v9 < GroupCount )
    {
      *(&SidsToDisable->GroupCount + 4 * ++v9) = 0;
      v20 = v9;
    }
    inserted = SeCaptureSidAndAttributesArray(
                 SidsToDisable->Groups,
                 0,
                 HandleInformation,
                 v15,
                 (__int64)&v22,
                 (__int64)&v21);
  }
  else
  {
    inserted = 0;
  }
  if ( inserted >= 0 )
  {
    if ( PrivilegesToDelete )
    {
      if ( ((unsigned __int8)PrivilegesToDelete & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      uAddend[1] = PrivilegesToDelete->PrivilegeCount;
      inserted = SeCaptureLuidAndAttributesArray(
                   PrivilegesToDelete->Privileges,
                   Object,
                   HandleInformation,
                   v15,
                   (__int64)&v23,
                   (__int64)&v21 + 4);
    }
    if ( inserted >= 0 && RestrictedSids )
    {
      if ( ((unsigned __int8)RestrictedSids & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = RestrictedSids->GroupCount;
      inserted = SeCaptureSidAndAttributesArray(
                   RestrictedSids->Groups,
                   0,
                   HandleInformation,
                   v15,
                   (__int64)&v19,
                   (__int64)uAddend);
    }
  }
  if ( inserted >= 0 )
  {
    *(_QWORD *)&Flags = 0LL;
    while ( Flags < v17 )
    {
      if ( *(_DWORD *)(v19 + 16LL * Flags + 8) )
      {
        inserted = -1073741811;
        goto LABEL_32;
      }
      *(_QWORD *)&Flags = Flags + 1;
    }
    inserted = ObReferenceObjectByHandle(
                 ExistingTokenHandle,
                 2u,
                 (POBJECT_TYPE)SeTokenObjectType,
                 PreviousMode,
                 &v25,
                 &v27);
    if ( inserted >= 0 )
    {
      v24 = 0LL;
      LOBYTE(Flags) = PreviousMode;
      inserted = SepFilterToken(
                   (int)v25,
                   Flags,
                   v29,
                   GroupCount,
                   v22,
                   uAddend[1],
                   v23,
                   v17,
                   v19,
                   uAddend[0],
                   (__int64)&v24);
      if ( inserted >= 0 )
      {
        v11 = v24;
        inserted = ObInsertObjectEx(v24, 0LL, 0, 0LL, (__int64)&v26);
        if ( inserted >= 0 )
        {
          SepAppendAceToTokenObjectAcl(v11, 8LL, SeAliasAdminsSid);
          ObfDereferenceObject(v11);
        }
      }
      ObfDereferenceObject(v25);
      if ( inserted >= 0 )
        *NewTokenHandle = (HANDLE)v26;
    }
  }
LABEL_32:
  if ( v22 )
  {
    LOBYTE(Flags) = PreviousMode;
    SeReleaseLuidAndAttributesArray(v22, *(_QWORD *)&Flags);
  }
  if ( v23 )
  {
    LOBYTE(Flags) = PreviousMode;
    SeReleaseLuidAndAttributesArray(v23, *(_QWORD *)&Flags);
  }
  if ( v19 )
  {
    LOBYTE(Flags) = PreviousMode;
    SeReleaseLuidAndAttributesArray(v19, *(_QWORD *)&Flags);
  }
  return inserted;
}
