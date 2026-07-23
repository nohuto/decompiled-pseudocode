/*
 * XREFs of ObpInsertOrLocateNamedObject @ 0x1404D4B8C
 * Callers:
 *     ObpCreateHandle @ 0x1405AB660 (ObpCreateHandle.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x1400610F8 (ObpReleaseLookupContext.c)
 *     RtlGetDaclSecurityDescriptor @ 0x14006CDC0 (RtlGetDaclSecurityDescriptor.c)
 *     ObpDereferenceNamedObject @ 0x1400734F4 (ObpDereferenceNamedObject.c)
 *     ObpReferenceNamedObject @ 0x1400C2A8C (ObpReferenceNamedObject.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     PsGetCurrentSilo @ 0x140105440 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ObpGetObjectSecurity @ 0x1404C1DAC (ObpGetObjectSecurity.c)
 *     ObReleaseObjectSecurity @ 0x1404C3DA0 (ObReleaseObjectSecurity.c)
 *     SeReleaseSecurityDescriptor @ 0x1404C8E50 (SeReleaseSecurityDescriptor.c)
 *     ObpAssignSecurity @ 0x1404D5B78 (ObpAssignSecurity.c)
 *     ObpDecrementHandleCount @ 0x140519894 (ObpDecrementHandleCount.c)
 *     ObpGrantAccess @ 0x14053E3CC (ObpGrantAccess.c)
 *     ObpDeleteDirectoryEntry @ 0x140567F78 (ObpDeleteDirectoryEntry.c)
 *     RtlGetControlSecurityDescriptor @ 0x14057A770 (RtlGetControlSecurityDescriptor.c)
 *     ObpLookupObjectName @ 0x1405A5B90 (ObpLookupObjectName.c)
 *     ObpIncrementHandleCountEx @ 0x1405AB080 (ObpIncrementHandleCountEx.c)
 */

__int64 __fastcall ObpInsertOrLocateNamedObject(
        ULONG_PTR BugCheckParameter1,
        char *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        _DWORD *a6,
        _QWORD *a7)
{
  char *v7; // rsi
  char v10; // al
  __int64 *v12; // rdi
  char v13; // bl
  unsigned __int64 CurrentSilo; // rax
  int v15; // ebx
  PSECURITY_DESCRIPTOR v16; // r15
  __int64 v17; // rcx
  int ObjectSecurity; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  bool v21; // bl
  _OWORD *v22; // rcx
  char *v24; // rdi
  __int64 v25; // r9
  int v26; // eax
  void *v27; // rcx
  __int64 v28; // rdx
  NTSTATUS DaclSecurityDescriptor; // edi
  __int64 v30; // r8
  NTSTATUS ControlSecurityDescriptor; // eax
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  int v40; // [rsp+28h] [rbp-D8h]
  BOOLEAN MemoryAllocated[4]; // [rsp+70h] [rbp-90h] BYREF
  BOOLEAN DaclPresent[2]; // [rsp+74h] [rbp-8Ch] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+78h] [rbp-88h] BYREF
  BOOLEAN DaclDefaulted[4]; // [rsp+80h] [rbp-80h] BYREF
  int v45; // [rsp+84h] [rbp-7Ch]
  ULONG Revision[2]; // [rsp+88h] [rbp-78h] BYREF
  PACL Dacl; // [rsp+90h] [rbp-70h] BYREF
  PVOID v48; // [rsp+98h] [rbp-68h]
  unsigned __int64 v49; // [rsp+A0h] [rbp-60h]
  _QWORD *v50; // [rsp+A8h] [rbp-58h]
  __int64 v51[3]; // [rsp+B0h] [rbp-50h] BYREF
  char v52; // [rsp+CEh] [rbp-32h]
  _OWORD v53[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v54; // [rsp+120h] [rbp+20h]
  __int128 v55; // [rsp+130h] [rbp+30h]
  __int128 v56; // [rsp+140h] [rbp+40h]
  __int128 v57; // [rsp+150h] [rbp+50h]
  __int128 v58; // [rsp+160h] [rbp+60h]
  __int128 v59; // [rsp+170h] [rbp+70h]

  v7 = a2 - 48;
  v50 = a7;
  v48 = a2;
  *a7 = 0LL;
  v10 = *(a2 - 22);
  *(_QWORD *)Revision = a3;
  SecurityDescriptor = 0LL;
  Dacl = 0LL;
  if ( (v10 & 2) != 0 )
    v12 = (__int64 *)&v7[-ObpInfoMaskToOffset[v10 & 3]];
  else
    v12 = 0LL;
  v13 = v7[27];
  CurrentSilo = PsGetCurrentSilo();
  v49 = (unsigned __int64)v7 >> 8;
  v15 = ObpLookupObjectName(
          *((_QWORD *)a6 + 1),
          (v13 & 2) == 0,
          0LL,
          *((_QWORD *)a6 + 5),
          a2,
          CurrentSilo,
          a4,
          (__int64)v51,
          0LL,
          (__int64)&SecurityDescriptor);
  if ( v15 < 0 )
    goto LABEL_42;
  v16 = SecurityDescriptor;
  if ( SecurityDescriptor != v48 )
  {
    v24 = 0LL;
    if ( v52 )
    {
      v24 = (char *)SecurityDescriptor - 48;
      ObpReferenceNamedObject((__int64)SecurityDescriptor - 48);
    }
    ObpReleaseLookupContext((__int64)v51);
    ObpDecrementHandleCount(BugCheckParameter1);
    if ( (*a6 & 0x80u) == 0 )
    {
      if ( v24 )
        ObpDereferenceNamedObject((__int64)v24);
      v15 = -1073741771;
    }
    else
    {
      v26 = *(_DWORD *)(a4 + 24);
      *(_DWORD *)(a4 + 20) = 0;
      *(_DWORD *)(a4 + 16) = v26;
      LOBYTE(v25) = a5;
      v15 = ObpGrantAccess(1LL, v16, a4, v25, *a6, *(_QWORD *)Revision);
      if ( v15 < 0 )
      {
        if ( v24 )
          ObpDereferenceNamedObject((__int64)v24);
      }
      else
      {
        v15 = ObpIncrementHandleCountEx(1, Revision[0], BugCheckParameter1, (_DWORD)v16, a5, *a6, 0LL);
        if ( v24 )
          ObpDereferenceNamedObject((__int64)v24);
        if ( v15 >= 0 )
          goto LABEL_19;
      }
    }
    ObfDereferenceObject(v16);
    return (unsigned int)v15;
  }
  v17 = *v12;
  SecurityDescriptor = 0LL;
  MemoryAllocated[0] = 0;
  v45 = 0;
  if ( v17 )
  {
    if ( (*(_DWORD *)(v17 + 336) & 8) != 0 || ObpObjectSecurityInheritance )
      v45 = 3;
    ObjectSecurity = ObpGetObjectSecurity(v17, &SecurityDescriptor, MemoryAllocated, a5);
    v20 = 0LL;
    v15 = ObjectSecurity;
    if ( ObjectSecurity < 0 )
      goto LABEL_49;
  }
  v21 = 0;
  if ( !*v12 || (*(_DWORD *)(*v12 + 336) & 8) == 0 && !ObpObjectSecurityInheritance )
    goto LABEL_12;
  v27 = *(void **)(a4 + 64);
  if ( !v27 )
    goto LABEL_12;
  DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(v27, DaclPresent, &Dacl, DaclDefaulted);
  if ( DaclSecurityDescriptor >= 0 )
  {
    ControlSecurityDescriptor = RtlGetControlSecurityDescriptor(
                                  *(PSECURITY_DESCRIPTOR *)(a4 + 64),
                                  (PSECURITY_DESCRIPTOR_CONTROL)DaclPresent,
                                  Revision);
    v30 = 0LL;
    DaclSecurityDescriptor = ControlSecurityDescriptor;
    if ( ControlSecurityDescriptor >= 0 )
    {
      if ( !Dacl && (*(_WORD *)DaclPresent & 0x1000) == 0 )
      {
        v32 = *(_OWORD *)(a4 + 16);
        v53[0] = *(_OWORD *)a4;
        v33 = *(_OWORD *)(a4 + 32);
        v53[1] = v32;
        v34 = *(_OWORD *)(a4 + 48);
        v53[2] = v33;
        v35 = *(_OWORD *)(a4 + 64);
        v53[3] = v34;
        v36 = *(_OWORD *)(a4 + 80);
        v54 = v35;
        v37 = *(_OWORD *)(a4 + 96);
        v55 = v36;
        v38 = *(_OWORD *)(a4 + 128);
        v56 = v37;
        v57 = *(_OWORD *)(a4 + 112);
        v39 = *(_OWORD *)(a4 + 144);
        v58 = v38;
        v59 = v39;
        *(_QWORD *)&v54 = 0LL;
        v22 = v53;
        goto LABEL_13;
      }
LABEL_12:
      v22 = (_OWORD *)a4;
LABEL_13:
      if ( !*((_QWORD *)v22 + 8) )
        v21 = v45 != 0;
      LOBYTE(v40) = v21;
      v15 = ObpAssignSecurity(
              v22,
              SecurityDescriptor,
              v48,
              ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ v49 ^ v7[24])],
              v45,
              v40);
      if ( SecurityDescriptor )
      {
        ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated[0]);
        goto LABEL_17;
      }
      if ( v15 >= 0 )
      {
        SeReleaseSecurityDescriptor(*((void **)a6 + 4), *((_BYTE *)a6 + 16), 1);
        *((_QWORD *)a6 + 4) = 0LL;
        *(_QWORD *)(a4 + 64) = 0LL;
LABEL_17:
        if ( v15 >= 0 )
        {
          ObpReleaseLookupContext((__int64)v51);
LABEL_19:
          *v50 = v16;
          return (unsigned int)v15;
        }
      }
LABEL_49:
      ObpDeleteDirectoryEntry(v51, v19, v20);
      ObpReleaseLookupContext((__int64)v51);
LABEL_42:
      ObpDecrementHandleCount(BugCheckParameter1);
      return (unsigned int)v15;
    }
  }
  if ( SecurityDescriptor )
    ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated[0]);
  ObpDeleteDirectoryEntry(v51, v28, v30);
  ObpReleaseLookupContext((__int64)v51);
  ObpDecrementHandleCount(BugCheckParameter1);
  return (unsigned int)DaclSecurityDescriptor;
}
