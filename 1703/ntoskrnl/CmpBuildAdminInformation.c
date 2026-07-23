/*
 * XREFs of CmpBuildAdminInformation @ 0x14056AEC0
 * Callers:
 *     CmpCheckAdminAccess @ 0x14056ADE8 (CmpCheckAdminAccess.c)
 * Callees:
 *     RtlLengthSid @ 0x140088130 (RtlLengthSid.c)
 *     RtlSidHashInitialize @ 0x140093A10 (RtlSidHashInitialize.c)
 *     RtlEqualSid @ 0x1400EDD10 (RtlEqualSid.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlCopySidAndAttributesArray @ 0x14046ED30 (RtlCopySidAndAttributesArray.c)
 *     SeQueryInformationToken @ 0x1404FE620 (SeQueryInformationToken.c)
 *     PsReferenceImpersonationTokenEx @ 0x14050C610 (PsReferenceImpersonationTokenEx.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 *     RtlCopyLuidAndAttributesArray @ 0x14056B1C0 (RtlCopyLuidAndAttributesArray.c)
 */

__int64 __fastcall CmpBuildAdminInformation(_QWORD *a1)
{
  void *v1; // rbx
  int v2; // r15d
  unsigned int **v3; // r12
  PSE_EXPORTS v4; // rdx
  unsigned int v5; // ebx
  unsigned int v6; // r13d
  unsigned int v7; // esi
  int v8; // edi
  __int64 v9; // r14
  unsigned int v10; // r12d
  PSE_EXPORTS v11; // r15
  ULONG v12; // ebx
  unsigned int *v13; // rax
  int v14; // r8d
  unsigned int v15; // eax
  unsigned int v16; // edi
  char *PoolWithTag; // rax
  char *v18; // r14
  ULONG *v19; // rdi
  unsigned int v20; // r8d
  ULONG v21; // edx
  __int64 v22; // rbx
  __int64 v23; // rbx
  ULONG v24; // ecx
  __int64 v26; // rcx
  _SID_AND_ATTRIBUTES *v27; // r14
  __int64 v28; // r15
  PSE_EXPORTS v29; // [rsp+40h] [rbp-29h] BYREF
  PSID RemainingSidArea; // [rsp+48h] [rbp-21h] BYREF
  PVOID TokenInformation; // [rsp+50h] [rbp-19h] BYREF
  _SID_AND_ATTRIBUTES Src[6]; // [rsp+58h] [rbp-11h] BYREF
  unsigned int v34; // [rsp+D8h] [rbp+6Fh] BYREF
  PSID Sid2; // [rsp+E0h] [rbp+77h] BYREF
  ULONG SidAreaSize; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = PsReferenceImpersonationTokenEx((__int64)KeGetCurrentThread(), 1, &Sid2, (bool *)&v34, (int *)&v29, 0LL);
  if ( !v1 )
    v1 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
  if ( !v1 )
    return 3221225626LL;
  v34 = SeQueryInformationToken(v1, TokenAccessInformation, &TokenInformation);
  v2 = v34;
  ObfDereferenceObject(v1);
  if ( v2 >= 0 )
  {
    v3 = (unsigned int **)TokenInformation;
    v4 = SeExports;
    v5 = 0;
    v6 = -1;
    v29 = SeExports;
    v7 = -1;
    v8 = 16 * **(_DWORD **)TokenInformation;
    if ( **(_DWORD **)TokenInformation )
    {
      v9 = *(_QWORD *)(*(_QWORD *)TokenInformation + 8LL);
      v10 = **(_DWORD **)TokenInformation;
      v11 = SeExports;
      do
      {
        Sid2 = *(PSID *)v9;
        RemainingSidArea = Sid2;
        v8 += RtlLengthSid(Sid2);
        if ( v6 == -1 && RtlEqualSid(v11->SeAliasAdminsSid, Sid2) )
        {
          v6 = v5;
        }
        else if ( v7 == -1 && (*(_BYTE *)(v9 + 8) & 0x60) == 0x60 )
        {
          v7 = v5;
        }
        ++v5;
        v9 += 16LL;
      }
      while ( v5 < v10 );
      v2 = v34;
      v3 = (unsigned int **)TokenInformation;
      v4 = v29;
    }
    v12 = 0;
    if ( v6 == -1 )
    {
      v12 = 1;
      Src[0].Sid = v4->SeAliasAdminsSid;
      Src[0].Attributes = 7;
    }
    if ( v7 == -1 )
    {
      v26 = v12++;
      Src[v26].Sid = v4->SeHighMandatorySid;
      Src[v26].Attributes = 96;
    }
    if ( v12 )
    {
      v8 += 16 * v12;
      v27 = Src;
      v28 = v12;
      do
      {
        v8 += RtlLengthSid(v27->Sid);
        ++v27;
        --v28;
      }
      while ( v28 );
      v2 = v34;
    }
    v13 = v3[2];
    v34 = (v8 + 7) & 0xFFFFFFF8;
    v14 = 12 * *v13;
    v15 = v14 + v34 + 920 - 12;
    if ( !v14 )
      v15 = v34 + 920;
    v16 = v15;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v15, 0x20204D43u);
    v18 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v16);
      v19 = (ULONG *)(v18 + 88);
      v20 = v34;
      *((_QWORD *)v18 + 3) = v3[3];
      *((_DWORD *)v18 + 8) = *((_DWORD *)v3 + 8);
      *((_DWORD *)v18 + 9) = *((_DWORD *)v3 + 9);
      *((_DWORD *)v18 + 10) = *((_DWORD *)v3 + 10);
      *((_DWORD *)v18 + 11) = *((_DWORD *)v3 + 11) & 0xFFFF9FFF | 0x2000;
      v21 = v12 + **v3;
      *((_QWORD *)v18 + 12) = v18 + 360;
      *((_DWORD *)v18 + 22) = v21;
      RtlCopySidAndAttributesArray(
        **v3,
        *((PSID_AND_ATTRIBUTES *)*v3 + 1),
        v20 - 16 * v21,
        (PSID_AND_ATTRIBUTES)(v18 + 360),
        &v18[16 * v21 + 360],
        &RemainingSidArea,
        &SidAreaSize);
      if ( v6 != -1 )
        *(_DWORD *)(*((_QWORD *)v18 + 12) + 16LL * v6 + 8) = 7;
      if ( v7 != -1 )
        *(_DWORD *)(*((_QWORD *)v18 + 12) + 16LL * v7 + 8) = 96;
      if ( v12 )
        RtlCopySidAndAttributesArray(
          v12,
          Src,
          SidAreaSize,
          (PSID_AND_ATTRIBUTES)(*((_QWORD *)v18 + 12) + 16LL * **v3),
          RemainingSidArea,
          &RemainingSidArea,
          &SidAreaSize);
      RtlSidHashInitialize(*((PSID_AND_ATTRIBUTES *)v18 + 12), *v19, (PSID_AND_ATTRIBUTES_HASH)(v18 + 88));
      v22 = v34;
      *(_QWORD *)v18 = v19;
      v23 = *((_QWORD *)v18 + 12) + v22;
      *(_DWORD *)v23 = 0;
      *(_QWORD *)(v23 + 8) = 0LL;
      *((_QWORD *)v18 + 1) = v23;
      v23 += 272LL;
      *(_DWORD *)v23 = 0;
      *(_QWORD *)(v23 + 8) = 0LL;
      *((_QWORD *)v18 + 8) = v23;
      v23 += 272LL;
      *((_QWORD *)v18 + 7) = 0LL;
      v24 = *v3[2];
      *(_DWORD *)v23 = v24;
      RtlCopyLuidAndAttributesArray(v24, (PLUID_AND_ATTRIBUTES)(v3[2] + 1), (PLUID_AND_ATTRIBUTES)(v23 + 4));
      *((_QWORD *)v18 + 2) = v23;
      *a1 = v18;
    }
    else
    {
      v2 = -1073741670;
    }
    ExFreePoolWithTag(v3, 0);
  }
  return (unsigned int)v2;
}
