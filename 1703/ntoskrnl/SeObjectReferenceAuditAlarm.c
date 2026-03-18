/*
 * XREFs of SeObjectReferenceAuditAlarm @ 0x1404F4DA4
 * Callers:
 *     ObpCheckObjectReference @ 0x1404F44E8 (ObpCheckObjectReference.c)
 * Callees:
 *     SepAdtAuditThisEventWithContext @ 0x14046C810 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x1406F2F48 (SepAdtObjectReferenceAuditAlarm.c)
 *     SeExamineSacl @ 0x1406F5210 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x1406F9224 (SeExamineGlobalSacl.c)
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
  __int16 v13; // cx
  unsigned int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  ACL *v17; // rdx
  __int64 v18; // rax
  ACL *v19; // rcx
  PACCESS_TOKEN PrimaryToken; // r8
  __int64 v21; // rax
  ACL *v22; // rdx
  __int64 v23; // r9
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
  v14 = (unsigned __int16)v13;
  LOWORD(v14) = ~v13;
  v15 = (v14 >> 4) & 1;
  if ( v15 )
    goto LABEL_11;
  if ( v13 >= 0 )
  {
    v17 = *(ACL **)(a3 + 24);
    goto LABEL_13;
  }
  v16 = *(unsigned int *)(a3 + 12);
  if ( !(_DWORD)v16 )
LABEL_11:
    v17 = 0LL;
  else
    v17 = (ACL *)(a3 + v16);
LABEL_13:
  if ( v15 )
    goto LABEL_17;
  if ( v13 >= 0 )
  {
    v19 = *(ACL **)(a3 + 24);
    goto LABEL_19;
  }
  v18 = *(unsigned int *)(a3 + 12);
  if ( !(_DWORD)v18 )
LABEL_17:
    v19 = 0LL;
  else
    v19 = (ACL *)(a3 + v18);
LABEL_19:
  SeExamineSacl(v19, v17, ClientToken, DesiredAccess, AccessGranted, (PBOOLEAN)&GenerateAudit, &GenerateAlarm);
  PrimaryToken = a4->ClientToken;
  if ( !a4->ClientToken )
    PrimaryToken = a4->PrimaryToken;
  if ( (~(unsigned __int8)*(_WORD *)(a3 + 2) & 0x10) != 0 )
    goto LABEL_25;
  if ( *(__int16 *)(a3 + 2) >= 0 )
  {
    v22 = *(ACL **)(a3 + 24);
    goto LABEL_27;
  }
  v21 = *(unsigned int *)(a3 + 12);
  if ( !(_DWORD)v21 )
LABEL_25:
    v22 = 0LL;
  else
    v22 = (ACL *)(a3 + v21);
LABEL_27:
  SeExamineGlobalSacl(
    (PUNICODE_STRING)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 - 48 + 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a2 - 48) >> 8)]
                    + 16),
    v22,
    PrimaryToken,
    DesiredAccess,
    AccessGranted,
    (PBOOLEAN)&GenerateAudit,
    &GenerateAlarm);
  if ( (_BYTE)GenerateAudit || GenerateAlarm )
  {
    LOBYTE(v23) = AccessGranted;
    SepAdtObjectReferenceAuditAlarm(a2, a4, DesiredAccess, v23);
  }
}
