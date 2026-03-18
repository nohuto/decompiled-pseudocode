/*
 * XREFs of SeObjectReferenceAuditAlarm @ 0x1404852E4
 * Callers:
 *     ObpCheckObjectReference @ 0x140484944 (ObpCheckObjectReference.c)
 * Callees:
 *     SepAdtAuditThisEventWithContext @ 0x14046BDC0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14072A9D8 (SepAdtObjectReferenceAuditAlarm.c)
 *     SeExamineSacl @ 0x14072CC70 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x140730C80 (SeExamineGlobalSacl.c)
 */

void __fastcall SeObjectReferenceAuditAlarm(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _SECURITY_SUBJECT_CONTEXT *a4,
        ACCESS_MASK DesiredAccess,
        BOOLEAN GenerateAlarm,
        BOOLEAN a7,
        char a8)
{
  BOOLEAN AccessGranted; // si
  PACCESS_TOKEN ClientToken; // r8
  __int16 v13; // ax
  __int64 v14; // rdx
  ACL *v15; // rdx
  __int64 v16; // rax
  ACL *v17; // rcx
  PACCESS_TOKEN PrimaryToken; // r8
  __int16 v19; // ax
  __int64 v20; // rax
  ACL *v21; // rdx
  __int64 v22; // r9
  __int64 GenerateAudit; // [rsp+60h] [rbp+8h] BYREF

  GenerateAudit = a1;
  LOBYTE(GenerateAudit) = 0;
  GenerateAlarm = 0;
  if ( !a8 )
    return;
  if ( !a3 )
    return;
  AccessGranted = a7;
  if ( !(unsigned __int8)SepAdtAuditThisEventWithContext(120LL, a7, 0, a4) )
    return;
  ClientToken = a4->ClientToken;
  if ( !a4->ClientToken )
    ClientToken = a4->PrimaryToken;
  v13 = *(_WORD *)(a3 + 2);
  if ( (v13 & 0x10) == 0 )
    goto LABEL_11;
  if ( v13 >= 0 )
  {
    v15 = *(ACL **)(a3 + 24);
    goto LABEL_13;
  }
  v14 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v14 )
    v15 = (ACL *)(a3 + v14);
  else
LABEL_11:
    v15 = 0LL;
LABEL_13:
  if ( (v13 & 0x10) == 0 )
    goto LABEL_17;
  if ( v13 >= 0 )
  {
    v17 = *(ACL **)(a3 + 24);
    goto LABEL_19;
  }
  v16 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v16 )
    v17 = (ACL *)(a3 + v16);
  else
LABEL_17:
    v17 = 0LL;
LABEL_19:
  SeExamineSacl(v17, v15, ClientToken, DesiredAccess, AccessGranted, (PBOOLEAN)&GenerateAudit, &GenerateAlarm);
  PrimaryToken = a4->ClientToken;
  if ( !a4->ClientToken )
    PrimaryToken = a4->PrimaryToken;
  v19 = *(_WORD *)(a3 + 2);
  if ( (v19 & 0x10) == 0 )
    goto LABEL_25;
  if ( v19 >= 0 )
  {
    v21 = *(ACL **)(a3 + 24);
    goto LABEL_27;
  }
  v20 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v20 )
    v21 = (ACL *)(a3 + v20);
  else
LABEL_25:
    v21 = 0LL;
LABEL_27:
  SeExamineGlobalSacl(
    (PUNICODE_STRING)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a2 - 48) >> 8)]
                    + 16),
    v21,
    PrimaryToken,
    DesiredAccess,
    AccessGranted,
    (PBOOLEAN)&GenerateAudit,
    &GenerateAlarm);
  if ( (_BYTE)GenerateAudit || GenerateAlarm )
  {
    LOBYTE(v22) = AccessGranted;
    SepAdtObjectReferenceAuditAlarm(a2, a4, DesiredAccess, v22);
  }
}
