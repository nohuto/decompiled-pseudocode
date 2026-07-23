/*
 * XREFs of CmpBuildAdminInformation @ 0x140690E6C
 * Callers:
 *     CmpCheckAdminAccess @ 0x1406913A0 (CmpCheckAdminAccess.c)
 * Callees:
 *     RtlLengthSid @ 0x140019280 (RtlLengthSid.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlEqualSid @ 0x140087C60 (RtlEqualSid.c)
 *     RtlSidHashInitialize @ 0x140089560 (RtlSidHashInitialize.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlCopySidAndAttributesArray @ 0x14045C7B0 (RtlCopySidAndAttributesArray.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 *     PsReferenceImpersonationTokenEx @ 0x14049D120 (PsReferenceImpersonationTokenEx.c)
 *     SeQueryInformationToken @ 0x1404A6E30 (SeQueryInformationToken.c)
 *     RtlCopyLuidAndAttributesArray @ 0x1407218E0 (RtlCopyLuidAndAttributesArray.c)
 */

__int64 __fastcall CmpBuildAdminInformation(_QWORD *a1)
{
  void *v1; // rbx
  int v3; // r15d
  unsigned int **v4; // r12
  unsigned int v5; // ebx
  unsigned int v6; // r13d
  unsigned int v7; // esi
  _DWORD *v8; // r14
  int v9; // edi
  __int64 v10; // r14
  PSE_EXPORTS v11; // r15
  unsigned int v12; // r12d
  ULONG v13; // ebx
  __int64 v14; // rdx
  _SID_AND_ATTRIBUTES *v15; // r14
  __int64 v16; // r12
  unsigned int *v17; // rax
  int v18; // r8d
  unsigned int v19; // eax
  unsigned int v20; // edi
  char *PoolWithTag; // rax
  char *v22; // r14
  ULONG *v23; // rdi
  int v24; // r8d
  ULONG v25; // edx
  __int64 v26; // rbx
  __int64 v27; // rbx
  ULONG v28; // ecx
  int v29; // [rsp+40h] [rbp-29h] BYREF
  PVOID TokenInformation; // [rsp+48h] [rbp-21h] BYREF
  PSID RemainingSidArea; // [rsp+50h] [rbp-19h] BYREF
  _SID_AND_ATTRIBUTES Src[6]; // [rsp+58h] [rbp-11h] BYREF
  PSID Sid2; // [rsp+D8h] [rbp+6Fh] BYREF
  NTSTATUS v35; // [rsp+E0h] [rbp+77h] BYREF
  ULONG SidAreaSize; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = PsReferenceImpersonationTokenEx((__int64)KeGetCurrentThread(), 1, &v35, (bool *)&Sid2, &v29, 0LL);
  if ( !v1 )
    v1 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
  if ( !v1 )
    return 3221225626LL;
  v35 = SeQueryInformationToken(v1, TokenAccessInformation, &TokenInformation);
  v3 = v35;
  ObfDereferenceObject(v1);
  if ( v3 >= 0 )
  {
    v4 = (unsigned int **)TokenInformation;
    v5 = 0;
    v6 = -1;
    v7 = -1;
    v8 = *(_DWORD **)TokenInformation;
    v9 = 16 * **(_DWORD **)TokenInformation;
    LODWORD(Sid2) = **(_DWORD **)TokenInformation;
    if ( (_DWORD)Sid2 )
    {
      v10 = *((_QWORD *)v8 + 1);
      v11 = SeExports;
      v12 = (unsigned int)Sid2;
      do
      {
        Sid2 = *(PSID *)v10;
        RemainingSidArea = Sid2;
        v9 += RtlLengthSid(Sid2);
        if ( v6 == -1 && RtlEqualSid(v11->SeAliasAdminsSid, Sid2) )
        {
          v6 = v5;
        }
        else if ( v7 == -1 && (*(_BYTE *)(v10 + 8) & 0x60) == 0x60 )
        {
          v7 = v5;
        }
        ++v5;
        v10 += 16LL;
      }
      while ( v5 < v12 );
      v3 = v35;
      v4 = (unsigned int **)TokenInformation;
    }
    v13 = 0;
    if ( v6 == -1 )
    {
      v13 = 1;
      Src[0].Attributes = 7;
      Src[0].Sid = SeExports->SeAliasAdminsSid;
    }
    if ( v7 == -1 )
    {
      v14 = v13++;
      Src[v14].Sid = SeExports->SeHighMandatorySid;
      Src[v14].Attributes = 96;
    }
    if ( v13 )
    {
      v9 += 16 * v13;
      v15 = Src;
      v16 = v13;
      do
      {
        v9 += RtlLengthSid(v15->Sid);
        ++v15;
        --v16;
      }
      while ( v16 );
      v4 = (unsigned int **)TokenInformation;
    }
    v17 = v4[2];
    LODWORD(Sid2) = (v9 + 7) & 0xFFFFFFF8;
    v18 = 12 * *v17;
    v19 = v18 + (_DWORD)Sid2 + 920 - 12;
    if ( !v18 )
      v19 = (_DWORD)Sid2 + 920;
    v20 = v19;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v19, 0x20204D43u);
    v22 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v20);
      v23 = (ULONG *)(v22 + 88);
      v24 = (int)Sid2;
      *((_QWORD *)v22 + 3) = v4[3];
      *((_DWORD *)v22 + 8) = *((_DWORD *)v4 + 8);
      *((_DWORD *)v22 + 9) = *((_DWORD *)v4 + 9);
      *((_DWORD *)v22 + 10) = *((_DWORD *)v4 + 10);
      *((_DWORD *)v22 + 11) = *((_DWORD *)v4 + 11) & 0xFFFF9FFF | 0x2000;
      v25 = v13 + **v4;
      *((_QWORD *)v22 + 12) = v22 + 360;
      *((_DWORD *)v22 + 22) = v25;
      RtlCopySidAndAttributesArray(
        **v4,
        *((PSID_AND_ATTRIBUTES *)*v4 + 1),
        v24 - 16 * v25,
        (PSID_AND_ATTRIBUTES)(v22 + 360),
        &v22[16 * v25 + 360],
        &RemainingSidArea,
        &SidAreaSize);
      if ( v6 != -1 )
        *(_DWORD *)(*((_QWORD *)v22 + 12) + 16LL * v6 + 8) = 7;
      if ( v7 != -1 )
        *(_DWORD *)(*((_QWORD *)v22 + 12) + 16LL * v7 + 8) = 96;
      if ( v13 )
        RtlCopySidAndAttributesArray(
          v13,
          Src,
          SidAreaSize,
          (PSID_AND_ATTRIBUTES)(*((_QWORD *)v22 + 12) + 16LL * **v4),
          RemainingSidArea,
          &RemainingSidArea,
          &SidAreaSize);
      RtlSidHashInitialize(*((PSID_AND_ATTRIBUTES *)v22 + 12), *v23, (PSID_AND_ATTRIBUTES_HASH)(v22 + 88));
      v26 = (unsigned int)Sid2;
      *(_QWORD *)v22 = v23;
      v27 = *((_QWORD *)v22 + 12) + v26;
      *(_DWORD *)v27 = 0;
      *(_QWORD *)(v27 + 8) = 0LL;
      *((_QWORD *)v22 + 1) = v27;
      v27 += 272LL;
      *(_DWORD *)v27 = 0;
      *(_QWORD *)(v27 + 8) = 0LL;
      *((_QWORD *)v22 + 8) = v27;
      v27 += 272LL;
      *((_QWORD *)v22 + 7) = 0LL;
      v28 = *v4[2];
      *(_DWORD *)v27 = v28;
      RtlCopyLuidAndAttributesArray(v28, (PLUID_AND_ATTRIBUTES)(v4[2] + 1), (PLUID_AND_ATTRIBUTES)(v27 + 4));
      *((_QWORD *)v22 + 2) = v27;
      *a1 = v22;
    }
    else
    {
      v3 = -1073741670;
    }
    ExFreePoolWithTag(v4, 0);
  }
  return (unsigned int)v3;
}
