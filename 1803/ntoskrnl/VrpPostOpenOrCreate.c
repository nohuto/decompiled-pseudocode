/*
 * XREFs of VrpPostOpenOrCreate @ 0x14070AD00
 * Callers:
 *     VrpRegistryCallback @ 0x140707D90 (VrpRegistryCallback.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     EtwActivityIdControl @ 0x14012A620 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmSetCallbackObjectContext @ 0x1406ED660 (CmSetCallbackObjectContext.c)
 *     CmAllocateExtraParameter @ 0x1406EEDC0 (CmAllocateExtraParameter.c)
 *     CmRetrieveExtraParameter @ 0x1406EEE20 (CmRetrieveExtraParameter.c)
 *     CmpFindExtraParameterInBlock @ 0x1406EEEC0 (CmpFindExtraParameterInBlock.c)
 *     CmpFreeExtraParameter @ 0x1406EEEF8 (CmpFreeExtraParameter.c)
 *     VrpAllocateKeyContext @ 0x140708118 (VrpAllocateKeyContext.c)
 *     VrpFreeCallbackContext @ 0x1407081F8 (VrpFreeCallbackContext.c)
 *     VrpFreeKeyContext @ 0x140708240 (VrpFreeKeyContext.c)
 *     VrpBuildKeyPath @ 0x14070DD28 (VrpBuildKeyPath.c)
 *     VrpCountPathComponents @ 0x14070DEDC (VrpCountPathComponents.c)
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
  UNICODE_STRING *ExtraParameter; // rax
  int ExtraParameterInBlock; // eax
  __int64 v15; // rcx
  _QWORD *v16; // r11
  _QWORD *v17; // rax
  UNICODE_STRING *KeyContext; // rax
  UNICODE_STRING *v19; // r12
  unsigned __int16 *v20; // rax
  unsigned __int16 *v21; // rcx
  bool v22; // zf
  __int64 v23; // rax
  int v24; // edx
  unsigned __int16 *v25; // rcx
  int v26; // eax
  unsigned __int16 *v27; // rax
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
    ExtraParameter = (UNICODE_STRING *)CmAllocateExtraParameter();
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
      v17 = *(_QWORD **)(v15 + 8);
      if ( *v17 != v15 )
        __fastfail(3u);
      *v16 = v15;
      v12 = 0;
      v16[1] = v17;
      *v17 = v16;
      *(_QWORD *)(v15 + 8) = v16;
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
    if ( stru_1403970D0.LevelPlus1 > 2 )
    {
      v20 = *v11;
      v21 = (unsigned __int16 *)&EmptyUnicodeString;
      v22 = *((_QWORD *)*v11 + 1) == 0LL;
      LODWORD(OldContext) = v12;
      if ( !v22 )
        v21 = v20;
      v23 = *((_QWORD *)v21 + 1);
      v24 = *v21;
      v40 = 0;
      v43 = 0;
      v46 = 0;
      v41 = v23;
      p_OldContext = &OldContext;
      v38 = &v42;
      v39 = 2;
      v42 = v24;
      v45 = 4;
      TlgWrite(&stru_1403970D0, &unk_140309173, &ActivityId, 0LL, 5u, &pData);
    }
    if ( v6 )
      VrpFreeKeyContext(v6);
    if ( v8 )
      CmpFreeExtraParameter(&v8[-3].Length);
    goto LABEL_29;
  }
  v19 = KeyContext + 1;
  v12 = VrpBuildKeyPath(0LL, (PCUNICODE_STRING)(v10 + 48), KeyContext + 1);
  if ( v12 < 0 )
    goto LABEL_21;
  *(_DWORD *)(&v6[2].MaximumLength + 1) = *(_DWORD *)(v10 + 64);
  v6[2].Length = VrpCountPathComponents(v19);
  v12 = CmSetCallbackObjectContext(*(PVOID *)v11[9], &VrpCallbackCookie, v6, &OldContext);
  if ( v12 < 0 )
    goto LABEL_21;
LABEL_29:
  if ( v10 )
  {
    v25 = v11[1];
    if ( v25 )
      ObfDereferenceObject(v25);
    v11[1] = *(unsigned __int16 **)v10;
    *(_QWORD *)v10 = 0LL;
    v26 = *(_DWORD *)(v35 + 8);
    if ( v26 == 260 || v26 == 872 )
    {
      if ( stru_1403970D0.LevelPlus1 > 5 )
      {
        v29 = *v11;
        v30 = (unsigned __int16 *)&EmptyUnicodeString;
        v22 = *((_QWORD *)*v11 + 1) == 0LL;
        LODWORD(OldContext) = v12;
        if ( !v22 )
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
        TlgWrite(&stru_1403970D0, &unk_140308E55, &ActivityId, 0LL, 5u, &pData);
      }
    }
    else
    {
      v27 = *v11;
      v28 = (void *)*((_QWORD *)*v11 + 1);
      if ( v28 )
      {
        ExFreePoolWithTag(v28, 0);
        v27 = *v11;
      }
      *(_OWORD *)v27 = *(_OWORD *)(v10 + 16);
      *(_OWORD *)v11[14] = *(_OWORD *)(v10 + 32);
      *(_QWORD *)(v10 + 24) = 0LL;
      *(_QWORD *)(v10 + 40) = 0LL;
    }
    VrpFreeCallbackContext((_QWORD *)v10);
  }
  return (unsigned int)v12;
}
