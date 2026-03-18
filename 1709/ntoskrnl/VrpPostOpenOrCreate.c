/*
 * XREFs of VrpPostOpenOrCreate @ 0x1406A6674
 * Callers:
 *     VrpRegistryCallback @ 0x1406A3720 (VrpRegistryCallback.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     EtwActivityIdControl @ 0x14010EE00 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmSetCallbackObjectContext @ 0x140689270 (CmSetCallbackObjectContext.c)
 *     CmAllocateExtraParameter @ 0x14068A998 (CmAllocateExtraParameter.c)
 *     CmRetrieveExtraParameter @ 0x14068A9F4 (CmRetrieveExtraParameter.c)
 *     CmpFindExtraParameterInBlock @ 0x14068AA94 (CmpFindExtraParameterInBlock.c)
 *     CmpFreeExtraParameter @ 0x14068AACC (CmpFreeExtraParameter.c)
 *     VrpAllocateKeyContext @ 0x1406A3AA8 (VrpAllocateKeyContext.c)
 *     VrpFreeCallbackContext @ 0x1406A3B88 (VrpFreeCallbackContext.c)
 *     VrpFreeKeyContext @ 0x1406A3BD0 (VrpFreeKeyContext.c)
 *     VrpBuildKeyPath @ 0x1406A95FC (VrpBuildKeyPath.c)
 *     VrpCountPathComponents @ 0x1406A97B0 (VrpCountPathComponents.c)
 */

__int64 __fastcall VrpPostOpenOrCreate(__int64 *a1, void *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  UNICODE_STRING *v6; // rsi
  __int64 v7; // r14
  UNICODE_STRING *v8; // r13
  int v9; // ebx
  __int64 v10; // rdi
  unsigned __int16 **v11; // r15
  NTSTATUS v12; // ebx
  __int64 v13; // rcx
  UNICODE_STRING *ExtraParameter; // rax
  int ExtraParameterInBlock; // eax
  __int64 v16; // rcx
  _QWORD *v17; // r11
  _QWORD *v18; // rax
  UNICODE_STRING *KeyContext; // rax
  UNICODE_STRING *v20; // r12
  unsigned __int16 *v21; // rax
  unsigned __int16 *v22; // rcx
  bool v23; // zf
  __int64 v24; // rax
  int v25; // edx
  unsigned __int16 *v26; // rcx
  int v27; // eax
  void *v28; // rcx
  unsigned __int16 *v29; // rax
  unsigned __int16 *v30; // rcx
  __int64 v31; // rax
  int v32; // edx
  PVOID OldContext; // [rsp+30h] [rbp-59h] BYREF
  __int64 v35; // [rsp+38h] [rbp-51h]
  GUID ActivityId; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  int *v38; // [rsp+70h] [rbp-19h]
  int v39; // [rsp+78h] [rbp-11h]
  int v40; // [rsp+7Ch] [rbp-Dh]
  __int64 v41; // [rsp+80h] [rbp-9h]
  int v42; // [rsp+88h] [rbp-1h] BYREF
  int v43; // [rsp+8Ch] [rbp+3h]
  PVOID *p_OldContext; // [rsp+90h] [rbp+7h]
  int v45; // [rsp+98h] [rbp+Fh]
  int v46; // [rsp+9Ch] [rbp+13h]

  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v5 = *a1;
  v6 = 0LL;
  v7 = a1[1];
  v8 = 0LL;
  OldContext = 0LL;
  v35 = v5;
  v9 = *(_DWORD *)(v5 + 8);
  v10 = *(_QWORD *)(v5 + 32);
  v11 = *(unsigned __int16 ***)(v5 + 16);
  if ( v9 < 0 || (CmRetrieveExtraParameter(*(_QWORD *)(v7 + 16), v4), v9 == 260) )
  {
LABEL_2:
    v12 = 0;
    goto LABEL_29;
  }
  if ( v9 == 872 )
  {
    if ( !v10 )
      return 0;
    ExtraParameter = (UNICODE_STRING *)CmAllocateExtraParameter(v13);
    v8 = ExtraParameter;
    if ( !ExtraParameter )
      goto LABEL_8;
    v12 = VrpBuildKeyPath(0LL, (PCUNICODE_STRING)(v10 + 48), ExtraParameter + 1);
    if ( v12 < 0 )
      goto LABEL_21;
    ObfReferenceObjectWithTag(*(PVOID *)(v10 + 8), 0x67655256u);
    *(_QWORD *)&v8->Length = *(_QWORD *)(v10 + 8);
    LODWORD(v8->Buffer) = *(_DWORD *)(v10 + 64);
    ExtraParameterInBlock = CmpFindExtraParameterInBlock(*(_QWORD **)(v7 + 16), &v8[-2].Length, &OldContext);
    v12 = ExtraParameterInBlock;
    if ( ExtraParameterInBlock >= 0 )
    {
      v12 = -1073741771;
      goto LABEL_21;
    }
    if ( ExtraParameterInBlock == -1073741772 )
    {
      v18 = *(_QWORD **)(v16 + 8);
      if ( *v18 != v16 )
        __fastfail(3u);
      *v17 = v16;
      v12 = 0;
      v17[1] = v18;
      *v18 = v17;
      *(_QWORD *)(v16 + 8) = v17;
    }
    if ( v12 < 0 )
      goto LABEL_21;
    goto LABEL_2;
  }
  KeyContext = (UNICODE_STRING *)VrpAllocateKeyContext(a2);
  v6 = KeyContext;
  if ( !KeyContext )
  {
LABEL_8:
    v12 = -1073741670;
LABEL_21:
    if ( stru_140354A30.LevelPlus1 > 2 )
    {
      v21 = *v11;
      v22 = (unsigned __int16 *)&EmptyUnicodeString;
      v23 = *((_QWORD *)*v11 + 1) == 0LL;
      LODWORD(OldContext) = v12;
      if ( !v23 )
        v22 = v21;
      v24 = *((_QWORD *)v22 + 1);
      v25 = *v22;
      v40 = 0;
      v43 = 0;
      v46 = 0;
      v41 = v24;
      p_OldContext = &OldContext;
      v38 = &v42;
      v39 = 2;
      v42 = v25;
      v45 = 4;
      TlgWrite(&stru_140354A30, &unk_1402CF7A7, &ActivityId, 0LL, 5u, &pData);
    }
    if ( v6 )
      VrpFreeKeyContext(v6);
    if ( v8 )
      CmpFreeExtraParameter(&v8[-3].Length);
    goto LABEL_29;
  }
  v20 = KeyContext + 1;
  v12 = VrpBuildKeyPath(0LL, (PCUNICODE_STRING)(v10 + 48), KeyContext + 1);
  if ( v12 < 0 )
    goto LABEL_21;
  *(_DWORD *)(&v6[2].MaximumLength + 1) = *(_DWORD *)(v10 + 64);
  v6[2].Length = VrpCountPathComponents(v20);
  v12 = CmSetCallbackObjectContext(*(PVOID *)v11[9], &VrpCallbackCookie, v6, &OldContext);
  if ( v12 < 0 )
    goto LABEL_21;
LABEL_29:
  if ( v10 )
  {
    v26 = v11[1];
    if ( v26 )
      ObfDereferenceObject(v26);
    v11[1] = *(unsigned __int16 **)v10;
    *(_QWORD *)v10 = 0LL;
    v27 = *(_DWORD *)(v35 + 8);
    if ( v27 == 260 || v27 == 872 )
    {
      if ( stru_140354A30.LevelPlus1 > 5 )
      {
        v29 = *v11;
        v30 = (unsigned __int16 *)&EmptyUnicodeString;
        v23 = *((_QWORD *)*v11 + 1) == 0LL;
        LODWORD(OldContext) = v12;
        if ( !v23 )
          v30 = v29;
        v31 = *((_QWORD *)v30 + 1);
        v32 = *v30;
        v40 = 0;
        v43 = 0;
        v46 = 0;
        v41 = v31;
        p_OldContext = &OldContext;
        v38 = &v42;
        v39 = 2;
        v42 = v32;
        v45 = 4;
        TlgWrite(&stru_140354A30, &unk_1402CF489, &ActivityId, 0LL, 5u, &pData);
      }
    }
    else
    {
      v28 = (void *)*((_QWORD *)*v11 + 1);
      if ( v28 )
        ExFreePoolWithTag(v28, 0);
      *(_OWORD *)*v11 = *(_OWORD *)(v10 + 16);
      *(_OWORD *)v11[14] = *(_OWORD *)(v10 + 32);
      *(_QWORD *)(v10 + 24) = 0LL;
      *(_QWORD *)(v10 + 40) = 0LL;
    }
    VrpFreeCallbackContext((_QWORD *)v10);
  }
  return (unsigned int)v12;
}
