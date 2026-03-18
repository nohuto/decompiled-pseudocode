/*
 * XREFs of VrpPostOpenOrCreate @ 0x14067BEA8
 * Callers:
 *     RegistryCallback @ 0x140678E30 (RegistryCallback.c)
 * Callees:
 *     EtwActivityIdControl @ 0x140024570 (EtwActivityIdControl.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmSetCallbackObjectContext @ 0x140660300 (CmSetCallbackObjectContext.c)
 *     VrpAllocateKeyContext @ 0x1406794D0 (VrpAllocateKeyContext.c)
 *     VrpFreeCallbackContext @ 0x140679594 (VrpFreeCallbackContext.c)
 *     VrpFreeKeyContext @ 0x1406795DC (VrpFreeKeyContext.c)
 *     VrpBuildKeyPath @ 0x14067E57C (VrpBuildKeyPath.c)
 */

__int64 __fastcall VrpPostOpenOrCreate(__int64 *a1, void *a2)
{
  __int64 v4; // r15
  unsigned __int16 *v5; // r13
  NTSTATUS v6; // r14d
  int v7; // eax
  __int64 v8; // rbx
  unsigned __int16 **v9; // rdi
  UNICODE_STRING *KeyContext; // rax
  UNICODE_STRING *v11; // rsi
  unsigned __int16 *v12; // rax
  unsigned __int16 *v13; // rcx
  bool v14; // zf
  __int64 v15; // rax
  int v16; // edx
  unsigned __int16 *v17; // rcx
  int v18; // eax
  void *v19; // rcx
  unsigned __int16 *v20; // rax
  __int64 v21; // rax
  int v22; // edx
  PVOID OldContext; // [rsp+30h] [rbp-59h] BYREF
  GUID ActivityId; // [rsp+38h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  int *v27; // [rsp+70h] [rbp-19h]
  int v28; // [rsp+78h] [rbp-11h]
  int v29; // [rsp+7Ch] [rbp-Dh]
  __int64 v30; // [rsp+80h] [rbp-9h]
  int v31; // [rsp+88h] [rbp-1h] BYREF
  int v32; // [rsp+8Ch] [rbp+3h]
  PVOID *p_OldContext; // [rsp+90h] [rbp+7h]
  int v34; // [rsp+98h] [rbp+Fh]
  int v35; // [rsp+9Ch] [rbp+13h]

  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v4 = *a1;
  v5 = (unsigned __int16 *)&EmptyUnicodeString;
  v6 = 0;
  v7 = *(_DWORD *)(*a1 + 8);
  v8 = *(_QWORD *)(*a1 + 32);
  v9 = *(unsigned __int16 ***)(v4 + 16);
  if ( v7 >= 0 && v7 != 260 )
  {
    if ( !v8 )
      return (unsigned int)v6;
    KeyContext = (UNICODE_STRING *)VrpAllocateKeyContext(a2);
    v11 = KeyContext;
    if ( !KeyContext )
    {
      v6 = -1073741670;
LABEL_8:
      if ( stru_14033C400.LevelPlus1 > 2 )
      {
        v12 = *v9;
        v13 = (unsigned __int16 *)&EmptyUnicodeString;
        v14 = *((_QWORD *)*v9 + 1) == 0LL;
        LODWORD(OldContext) = v6;
        if ( !v14 )
          v13 = v12;
        v15 = *((_QWORD *)v13 + 1);
        v16 = *v13;
        v29 = 0;
        v32 = 0;
        v35 = 0;
        v30 = v15;
        p_OldContext = &OldContext;
        v27 = &v31;
        v28 = 2;
        v31 = v16;
        v34 = 4;
        TlgWrite(&stru_14033C400, &unk_1402AB631, &ActivityId, 0LL, 5u, &pData);
      }
      if ( v11 )
        VrpFreeKeyContext(v11);
      goto LABEL_14;
    }
    v6 = VrpBuildKeyPath(0LL, (PCUNICODE_STRING)(v8 + 48), KeyContext + 1);
    if ( v6 < 0 )
      goto LABEL_8;
    *(_DWORD *)&v11[2].Length = *(_DWORD *)(v8 + 64);
    v6 = CmSetCallbackObjectContext(*(PVOID *)v9[9], &gCallbackCookie, v11, &OldContext);
    if ( v6 < 0 )
      goto LABEL_8;
  }
LABEL_14:
  if ( v8 )
  {
    v17 = v9[1];
    if ( v17 )
      ObfDereferenceObject(v17);
    v9[1] = *(unsigned __int16 **)v8;
    *(_QWORD *)v8 = 0LL;
    v18 = *(_DWORD *)(v4 + 8);
    if ( v18 == 260 || v18 == 872 )
    {
      if ( stru_14033C400.LevelPlus1 > 5 )
      {
        v20 = *v9;
        v14 = *((_QWORD *)*v9 + 1) == 0LL;
        LODWORD(OldContext) = v6;
        if ( !v14 )
          v5 = v20;
        v21 = *((_QWORD *)v5 + 1);
        v22 = *v5;
        v29 = 0;
        v32 = 0;
        v35 = 0;
        v30 = v21;
        p_OldContext = &OldContext;
        v27 = &v31;
        v28 = 2;
        v31 = v22;
        v34 = 4;
        TlgWrite(&stru_14033C400, &unk_1402AB922, &ActivityId, 0LL, 5u, &pData);
      }
    }
    else
    {
      v19 = (void *)*((_QWORD *)*v9 + 1);
      if ( v19 )
        ExFreePoolWithTag(v19, 0);
      *(_OWORD *)*v9 = *(_OWORD *)(v8 + 16);
      *(_OWORD *)v9[14] = *(_OWORD *)(v8 + 32);
      *(_QWORD *)(v8 + 24) = 0LL;
      *(_QWORD *)(v8 + 40) = 0LL;
    }
    VrpFreeCallbackContext((_QWORD *)v8);
  }
  return (unsigned int)v6;
}
