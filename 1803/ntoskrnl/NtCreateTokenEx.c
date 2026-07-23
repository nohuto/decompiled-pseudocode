/*
 * XREFs of NtCreateTokenEx @ 0x140542F04
 * Callers:
 *     NtCreateToken @ 0x14079222C (NtCreateToken.c)
 * Callees:
 *     SepCreateTokenEx @ 0x14009FEE4 (SepCreateTokenEx.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSecurityQos @ 0x1404DD1DC (SeCaptureSecurityQos.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1404ECAE0 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureLuidAndAttributesArray @ 0x1404ECB00 (SeCaptureLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140543A30 (SeCaptureSidAndAttributesArray.c)
 *     SeReleaseSid @ 0x140543EF0 (SeReleaseSid.c)
 *     SeCaptureSid @ 0x140543F18 (SeCaptureSid.c)
 *     SeReleaseAcl @ 0x140544018 (SeReleaseAcl.c)
 *     SeCaptureAcl @ 0x140544AC4 (SeCaptureAcl.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x1405457FC (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140545A44 (SepCaptureTokenSecurityAttributesInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtCreateTokenEx(
        PHANDLE TokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        TOKEN_TYPE Type,
        PLUID AuthenticationId,
        PLARGE_INTEGER ExpirationTime,
        PTOKEN_USER User,
        PTOKEN_GROUPS Groups,
        PTOKEN_PRIVILEGES Privileges,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION UserAttributes,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION DeviceAttributes,
        PTOKEN_GROUPS DeviceGroups,
        PTOKEN_MANDATORY_POLICY MandatoryPolicy,
        PTOKEN_OWNER Owner,
        PTOKEN_PRIMARY_GROUP PrimaryGroup,
        PTOKEN_DEFAULT_DACL DefaultDacl,
        PTOKEN_SOURCE Source)
{
  PHANDLE v18; // rbx
  char PreviousMode; // si
  __int64 v20; // rcx
  PTOKEN_OWNER v21; // r12
  PTOKEN_DEFAULT_DACL v22; // r13
  PTOKEN_GROUPS v23; // r14
  PTOKEN_SECURITY_ATTRIBUTES_INFORMATION v24; // r15
  NTSTATUS result; // eax
  __int64 v26; // rdx
  NTSTATUS v27; // edi
  __int64 v28; // r8
  __int64 v29; // r9
  ULONG v30; // ebx
  POOL_TYPE PoolType; // [rsp+20h] [rbp-198h]
  int v32; // [rsp+28h] [rbp-190h]
  int v33; // [rsp+28h] [rbp-190h]
  int v34; // [rsp+30h] [rbp-188h]
  int v35; // [rsp+30h] [rbp-188h]
  char v36; // [rsp+C0h] [rbp-F8h] BYREF
  char v37; // [rsp+C1h] [rbp-F7h]
  char v38; // [rsp+C2h] [rbp-F6h]
  NTSTATUS v39; // [rsp+C4h] [rbp-F4h]
  __int64 v40; // [rsp+C8h] [rbp-F0h] BYREF
  int GroupCount; // [rsp+D0h] [rbp-E8h]
  int PrivilegeCount; // [rsp+D4h] [rbp-E4h]
  ULONG Count; // [rsp+D8h] [rbp-E0h]
  __int64 v44; // [rsp+E0h] [rbp-D8h] BYREF
  __int64 v45; // [rsp+E8h] [rbp-D0h] BYREF
  __int64 v46; // [rsp+F0h] [rbp-C8h] BYREF
  PSID v47; // [rsp+F8h] [rbp-C0h] BYREF
  __int64 v48; // [rsp+100h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+108h] [rbp-B0h] BYREF
  __int64 v50; // [rsp+110h] [rbp-A8h] BYREF
  PVOID P; // [rsp+118h] [rbp-A0h] BYREF
  PVOID v52; // [rsp+120h] [rbp-98h] BYREF
  __int64 v53; // [rsp+128h] [rbp-90h] BYREF
  __int64 v54; // [rsp+130h] [rbp-88h] BYREF
  int v55[2]; // [rsp+138h] [rbp-80h] BYREF
  __int64 v56; // [rsp+140h] [rbp-78h] BYREF
  __int64 QuadPart; // [rsp+148h] [rbp-70h] BYREF
  __int64 v58; // [rsp+150h] [rbp-68h] BYREF
  _BYTE v59[4]; // [rsp+158h] [rbp-60h] BYREF
  int v60; // [rsp+15Ch] [rbp-5Ch]
  __int64 v61[2]; // [rsp+168h] [rbp-50h] BYREF

  v18 = TokenHandle;
  *(_QWORD *)v55 = 0LL;
  v36 = 0;
  v44 = 0LL;
  v53 = 0LL;
  Count = 0;
  v45 = 0LL;
  v40 = 0LL;
  PrivilegeCount = 0;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v37 = 0;
  P = 0LL;
  v52 = 0LL;
  GroupCount = 0;
  v50 = 0LL;
  LODWORD(v54) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v38 = PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
    return -1073741727;
  if ( PreviousMode )
  {
    v20 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v18 < 0x7FFFFFFF0000LL )
      v20 = (__int64)v18;
    *(_QWORD *)v20 = *(_QWORD *)v20;
    if ( ((unsigned __int8)ExpirationTime & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)Groups & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)Privileges & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)Source & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v21 = Owner;
    if ( Owner && ((unsigned __int8)Owner & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)PrimaryGroup & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v22 = DefaultDacl;
    if ( DefaultDacl && ((unsigned __int8)DefaultDacl & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( ((unsigned __int8)AuthenticationId & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( MandatoryPolicy && ((unsigned __int8)MandatoryPolicy & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v23 = DeviceGroups;
    if ( DeviceGroups && ((unsigned __int8)DeviceGroups & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( DeviceAttributes && ((unsigned __int8)DeviceAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v24 = UserAttributes;
    if ( UserAttributes && ((unsigned __int8)UserAttributes & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  else
  {
    v22 = DefaultDacl;
    v21 = Owner;
    v23 = DeviceGroups;
    v24 = UserAttributes;
  }
  if ( (unsigned int)(Type - 1) > 1 )
    return -1073741656;
  result = SeCaptureSecurityQos((__int64)ObjectAttributes, PreviousMode, &v36, (__int64)v59);
  if ( result >= 0 )
  {
    if ( !v36 && Type == TokenImpersonation )
      return -1073741659;
    v39 = 0;
    v58 = (__int64)*AuthenticationId;
    QuadPart = ExpirationTime->QuadPart;
    v27 = SeCaptureSidAndAttributesArray(User, 0, v32, v34, (__int64)&v44, (__int64)&v53);
    v39 = v27;
    if ( v27 >= 0 )
    {
      Count = Groups->GroupCount;
      v30 = Count;
      v27 = SeCaptureSidAndAttributesArray(Groups->Groups, 0, v33, v35, (__int64)&v45, (__int64)&v40);
      v39 = v27;
      LODWORD(v40) = (-16 * v30 + v40 + 3) & 0xFFFFFFFC;
      v18 = TokenHandle;
    }
    if ( v27 >= 0 )
    {
      PrivilegeCount = Privileges->PrivilegeCount;
      v27 = SeCaptureLuidAndAttributesArray(
              (char *)Privileges->Privileges,
              PrivilegeCount,
              PreviousMode,
              v29,
              PoolType,
              v33,
              v35,
              &v46,
              (_DWORD *)&v53 + 1);
      v39 = v27;
    }
    if ( v21 )
    {
      if ( v27 < 0 )
      {
LABEL_50:
        if ( v22 && v27 >= 0 && v22->DefaultDacl )
        {
          v27 = SeCaptureAcl(v22->DefaultDacl, NonPagedPoolNx, v33, (__int64)&v49, (__int64)&v56);
          v39 = v27;
        }
        *(struct _TOKEN_SOURCE *)v61 = *Source;
        if ( v23 && v27 >= 0 )
        {
          GroupCount = v23->GroupCount;
          v27 = SeCaptureSidAndAttributesArray(v23->Groups, 0, v33, v35, (__int64)&v50, (__int64)&v54);
          v39 = v27;
        }
        if ( v24 && v27 >= 0 )
        {
          LOBYTE(v26) = PreviousMode;
          v27 = SepCaptureTokenSecurityAttributesInformation(v24, v26, 0LL, &P);
          v39 = v27;
        }
        if ( DeviceAttributes && v27 >= 0 )
        {
          LOBYTE(v26) = PreviousMode;
          v27 = SepCaptureTokenSecurityAttributesInformation(DeviceAttributes, v26, 0LL, &v52);
          v39 = v27;
        }
        if ( MandatoryPolicy && v27 >= 0 )
        {
          HIDWORD(v40) = (_TOKEN_MANDATORY_POLICY)MandatoryPolicy->Policy;
          v37 = 1;
        }
        if ( v27 >= 0 )
          v27 = SepCreateTokenEx(
                  (HANDLE *)v55,
                  PreviousMode,
                  DesiredAccess,
                  (__int64)ObjectAttributes,
                  Type,
                  v60,
                  (__int64)&v58,
                  &QuadPart,
                  (_SID_AND_ATTRIBUTES *)v44,
                  Count,
                  (_SID_AND_ATTRIBUTES *)v45,
                  v40,
                  PrivilegeCount,
                  (char **)v46,
                  v47,
                  (void *)v48,
                  (void *)v49,
                  v61,
                  (__int64)P,
                  (__int64)v52,
                  GroupCount,
                  v50,
                  (_DWORD *)(((unsigned __int64)&v40 + 4) & -(__int64)(v37 != 0)),
                  0);
        if ( v44 )
          SeReleaseLuidAndAttributesArray((void *)v44, PreviousMode);
        if ( v45 )
          SeReleaseLuidAndAttributesArray((void *)v45, PreviousMode);
        if ( v46 )
          SeReleaseLuidAndAttributesArray((void *)v46, PreviousMode);
        if ( v47 )
        {
          LOBYTE(v28) = 1;
          LOBYTE(v26) = PreviousMode;
          SeReleaseSid(v47, v26, v28);
        }
        if ( v48 )
        {
          LOBYTE(v28) = 1;
          LOBYTE(v26) = PreviousMode;
          SeReleaseSid(v48, v26, v28);
        }
        if ( v49 )
        {
          LOBYTE(v26) = PreviousMode;
          SeReleaseAcl(v49, v26);
        }
        if ( v50 )
          SeReleaseLuidAndAttributesArray((void *)v50, PreviousMode);
        if ( P )
          SepFreeCapturedTokenSecurityAttributesInformation(P);
        if ( v52 )
          SepFreeCapturedTokenSecurityAttributesInformation(v52);
        if ( v27 >= 0 )
          *v18 = *(HANDLE *)v55;
        return v27;
      }
      v27 = SeCaptureSid(v21->Owner, PoolType, 1, (__int64)&v47);
      v39 = v27;
    }
    if ( v27 >= 0 )
    {
      v27 = SeCaptureSid(PrimaryGroup->PrimaryGroup, PoolType, 1, (__int64)&v48);
      v39 = v27;
    }
    goto LABEL_50;
  }
  return result;
}
