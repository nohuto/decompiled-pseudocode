/*
 * XREFs of VrpPreOpenOrCreate @ 0x1406A7B04
 * Callers:
 *     VrpRegistryCallback @ 0x1406A3720 (VrpRegistryCallback.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     EtwActivityIdControl @ 0x14010EE00 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmAllocateExtraParameter @ 0x14068A998 (CmAllocateExtraParameter.c)
 *     CmpFindExtraParameterInBlock @ 0x14068AA94 (CmpFindExtraParameterInBlock.c)
 *     CmpFreeExtraParameter @ 0x14068AACC (CmpFreeExtraParameter.c)
 *     VrpTranslatePath @ 0x1406A831C (VrpTranslatePath.c)
 *     VrpBuildKeyPath @ 0x1406A95FC (VrpBuildKeyPath.c)
 */

__int64 __fastcall VrpPreOpenOrCreate(PCUNICODE_STRING **a1, void *a2)
{
  PCUNICODE_STRING *v3; // rdi
  UNICODE_STRING *v4; // rsi
  _QWORD *ExtraParameter; // r14
  PCUNICODE_STRING v6; // rbx
  _OWORD *v7; // r15
  _OWORD *v8; // r13
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r15d
  PCUNICODE_STRING v13; // rax
  unsigned __int16 *p_Length; // rdx
  bool v15; // zf
  int v16; // ecx
  __int128 v18; // xmm0
  PCUNICODE_STRING **v19; // r15
  int ExtraParameterInBlock; // eax
  __int64 v21; // rcx
  _QWORD *v22; // r11
  _QWORD *v23; // rax
  wchar_t *Buffer; // rcx
  UNICODE_STRING *PoolWithTag; // rax
  UNICODE_STRING v26; // xmm1
  UNICODE_STRING v27; // xmm0
  const UNICODE_STRING *v28; // rax
  UNICODE_STRING v29; // xmm1
  PCUNICODE_STRING v30; // rax
  unsigned __int16 *v31; // rdx
  int v32; // ecx
  __int64 v33; // [rsp+40h] [rbp-99h] BYREF
  PVOID Object; // [rsp+48h] [rbp-91h] BYREF
  PVOID v35[2]; // [rsp+50h] [rbp-89h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-79h] BYREF
  PCUNICODE_STRING **v37; // [rsp+70h] [rbp-69h] BYREF
  __int64 v38[2]; // [rsp+78h] [rbp-61h] BYREF
  GUID ActivityId; // [rsp+88h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-39h] BYREF
  int *v41; // [rsp+C0h] [rbp-19h]
  __int64 v42; // [rsp+C8h] [rbp-11h]
  __int64 v43; // [rsp+D0h] [rbp-9h]
  int v44; // [rsp+D8h] [rbp-1h] BYREF
  int v45; // [rsp+DCh] [rbp+3h]
  __int64 *v46; // [rsp+E0h] [rbp+7h]
  __int64 v47; // [rsp+E8h] [rbp+Fh]

  v37 = a1;
  v35[0] = 0LL;
  v35[1] = 0LL;
  v3 = *a1;
  P[0] = 0LL;
  v4 = 0LL;
  P[1] = 0LL;
  ExtraParameter = 0LL;
  v38[0] = 0LL;
  v6 = *v3;
  v7 = v3[11];
  v8 = v3[1];
  v38[1] = 0LL;
  LODWORD(v33) = 0;
  Object = 0LL;
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  if ( v6->Length && *v6->Buffer == 92 )
  {
    v9 = VrpBuildKeyPath(0LL, *v3, (PUNICODE_STRING)v35);
    if ( v9 < 0 )
    {
LABEL_41:
      if ( v9 >= 0 )
        return (unsigned int)v9;
      goto LABEL_42;
    }
  }
  else
  {
    if ( !v7 )
      return 0;
    v9 = VrpBuildKeyPath(
           (PCUNICODE_STRING)((unsigned __int64)(v7 + 1) & -(__int64)(v7 != 0LL)),
           *v3,
           (PUNICODE_STRING)v35);
    if ( v9 < 0 )
      goto LABEL_42;
  }
  v10 = VrpTranslatePath(a2, (__int64)P, (__int64)&Object, (__int64)v38, (__int64)&v33);
  v9 = v10;
  if ( v10 == -1073741772 )
    return 0;
  if ( v10 >= 0 )
  {
    v12 = v33;
    if ( (v33 & 4) == 0 )
    {
      *((_WORD *)Object + 25) = *((_WORD *)v8 + 25);
      PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x67655256u);
      v4 = PoolWithTag;
      if ( PoolWithTag )
      {
        v26 = *(UNICODE_STRING *)v35;
        v3[10] = PoolWithTag;
        *(_QWORD *)&PoolWithTag->Length = v3[1];
        PoolWithTag[1] = **v3;
        v27 = *v3[14];
        v28 = (const UNICODE_STRING *)Object;
        v4[3] = v26;
        *(_DWORD *)&v4[4].Length = v12;
        v29 = *(UNICODE_STRING *)v38;
        v4->Buffer = (wchar_t *)a2;
        v4[2] = v27;
        v3[1] = v28;
        **v3 = *(PCUNICODE_STRING)P;
        *v3[14] = v29;
        goto LABEL_41;
      }
LABEL_13:
      v9 = -1073741670;
      goto LABEL_14;
    }
    ExtraParameter = CmAllocateExtraParameter(v11);
    if ( !ExtraParameter )
      goto LABEL_13;
    ObfReferenceObjectWithTag(a2, 0x67655256u);
    v18 = *(_OWORD *)v35;
    *ExtraParameter = a2;
    *((_DWORD *)ExtraParameter + 2) = v12 & 0xFFFFFFFB;
    *((_OWORD *)ExtraParameter + 1) = v18;
    RtlInitUnicodeString((PUNICODE_STRING)v35, 0LL);
    v19 = v37;
    ExtraParameterInBlock = CmpFindExtraParameterInBlock(v37[2], ExtraParameter - 4, &v37);
    v9 = ExtraParameterInBlock;
    if ( ExtraParameterInBlock < 0 )
    {
      if ( ExtraParameterInBlock == -1073741772 )
      {
        v23 = *(_QWORD **)(v21 + 8);
        if ( *v23 != v21 )
          __fastfail(3u);
        *v22 = v21;
        v9 = 0;
        v22[1] = v23;
        *v23 = v22;
        *(_QWORD *)(v21 + 8) = v22;
      }
      if ( v9 >= 0 )
      {
        ExtraParameter = 0LL;
        Buffer = (*v3)->Buffer;
        if ( Buffer )
          ExFreePoolWithTag(Buffer, 0x67655256u);
        **v3 = *(PCUNICODE_STRING)P;
        RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
        *((_DWORD *)v19 + 2) = 872;
        v9 = -1073740541;
        goto LABEL_43;
      }
    }
    else
    {
      v9 = -1073741771;
    }
  }
LABEL_42:
  if ( v9 != -1073740541 )
  {
LABEL_14:
    if ( stru_140354A30.LevelPlus1 > 2 )
    {
      v13 = *v3;
      p_Length = (unsigned __int16 *)&EmptyUnicodeString;
      v15 = (*v3)->Buffer == 0LL;
      LODWORD(v33) = v9;
      if ( !v15 )
        p_Length = &v13->Length;
      v16 = *p_Length;
      v43 = *((_QWORD *)p_Length + 1);
      v46 = &v33;
      v41 = &v44;
      v42 = 2LL;
      v44 = v16;
      v45 = 0;
      v47 = 4LL;
      TlgWrite(&stru_140354A30, &unk_1402CF59C, &ActivityId, 0LL, 5u, &pData);
    }
    goto LABEL_18;
  }
LABEL_43:
  if ( stru_140354A30.LevelPlus1 > 5 )
  {
    v30 = *v3;
    v31 = (unsigned __int16 *)&EmptyUnicodeString;
    v15 = (*v3)->Buffer == 0LL;
    LODWORD(v33) = -1073740541;
    if ( !v15 )
      v31 = &v30->Length;
    v32 = *v31;
    v43 = *((_QWORD *)v31 + 1);
    v46 = &v33;
    v41 = &v44;
    v42 = 2LL;
    v44 = v32;
    v45 = 0;
    v47 = 4LL;
    TlgWrite(&stru_140354A30, &unk_1402CF55D, &ActivityId, 0LL, 5u, &pData);
  }
LABEL_18:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x67655256u);
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x67655256u);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v35[1] )
    ExFreePoolWithTag(v35[1], 0x67655256u);
  if ( ExtraParameter )
    CmpFreeExtraParameter(ExtraParameter - 6);
  return (unsigned int)v9;
}
