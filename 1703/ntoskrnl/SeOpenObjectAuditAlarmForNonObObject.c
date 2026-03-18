/*
 * XREFs of SeOpenObjectAuditAlarmForNonObObject @ 0x1405D47B0
 * Callers:
 *     <none>
 * Callees:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14046C68C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x14046C810 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1406F3178 (SepAdtOpenObjectAuditAlarm.c)
 *     SeExamineSacl @ 0x1406F5210 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x1406F9224 (SeExamineGlobalSacl.c)
 */

void __fastcall SeOpenObjectAuditAlarmForNonObObject(
        PUNICODE_STRING ObjectType,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned int *a5,
        struct _SECURITY_SUBJECT_CONTEXT *a6,
        int a7,
        int a8,
        int *a9,
        BOOLEAN GenerateAudit,
        _BYTE *a11)
{
  BOOLEAN AccessGranted; // si
  __int64 *v12; // rdi
  unsigned __int16 *v14; // rbx
  BOOLEAN v16; // al
  int v17; // r12d
  void *v18; // r8
  __int64 v19; // rbx
  __int16 v20; // cx
  unsigned int v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  ACL *v24; // rdx
  __int64 v25; // rax
  ACL *v26; // rcx
  int v27; // r14d
  ACCESS_MASK v28; // ebp
  void *v29; // r8
  ACL *v30; // rdx
  __int64 v31; // rax
  BOOLEAN GenerateAlarm[72]; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v33; // [rsp+F8h] [rbp+10h] BYREF
  unsigned __int16 *v34; // [rsp+100h] [rbp+18h]

  v34 = a3;
  v33 = a2;
  AccessGranted = GenerateAudit;
  v12 = (__int64 *)a6;
  v14 = a3;
  GenerateAlarm[0] = 0;
  v16 = SepAdtAuditThisEventWithContext(118LL, GenerateAudit, GenerateAudit == 0, a6);
  v17 = a7;
  GenerateAudit = v16;
  if ( !v16 )
    goto LABEL_2;
  v18 = (void *)*v12;
  if ( !*v12 )
    v18 = (void *)v12[2];
  v19 = (__int64)a5;
  v20 = *((_WORD *)a5 + 1);
  v21 = (unsigned __int16)v20;
  LOWORD(v21) = ~v20;
  v22 = (v21 >> 4) & 1;
  if ( v22 )
    goto LABEL_10;
  if ( v20 >= 0 )
  {
    v24 = (ACL *)*((_QWORD *)a5 + 3);
    goto LABEL_12;
  }
  v23 = a5[3];
  if ( !(_DWORD)v23 )
LABEL_10:
    v24 = 0LL;
  else
    v24 = (ACL *)((char *)a5 + v23);
LABEL_12:
  if ( v22 )
    goto LABEL_16;
  if ( v20 >= 0 )
  {
    v26 = (ACL *)*((_QWORD *)a5 + 3);
    goto LABEL_18;
  }
  v25 = a5[3];
  if ( !(_DWORD)v25 )
LABEL_16:
    v26 = 0LL;
  else
    v26 = (ACL *)((char *)a5 + v25);
LABEL_18:
  v27 = a8;
  v28 = a8 | a7;
  SeExamineSacl(v26, v24, v18, a8 | a7, AccessGranted, &GenerateAudit, GenerateAlarm);
  v29 = (void *)*v12;
  v30 = 0LL;
  if ( !*v12 )
    v29 = (void *)v12[2];
  if ( (~(unsigned __int8)*(_WORD *)(v19 + 2) & 0x10) == 0 )
  {
    if ( *(__int16 *)(v19 + 2) >= 0 )
    {
      v30 = *(ACL **)(v19 + 24);
    }
    else
    {
      v31 = *(unsigned int *)(v19 + 12);
      if ( (_DWORD)v31 )
        v30 = (ACL *)(v19 + v31);
    }
  }
  SeExamineGlobalSacl(ObjectType, v30, v29, v28, AccessGranted, &GenerateAudit, GenerateAlarm);
  if ( GenerateAudit )
  {
    SepAdtOpenObjectAuditAlarm(
      118,
      (int)ObjectType,
      (int)&v33,
      (int)v34,
      (__int64)a4,
      (PVOID)v19,
      *v12,
      v12[2],
      v17,
      v27,
      (__int64)a9,
      AccessGranted,
      (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
      2,
      0LL,
      0,
      0LL,
      0LL,
      0LL);
    *a11 = 1;
    return;
  }
  v14 = v34;
LABEL_2:
  if ( a9 )
  {
    if ( AccessGranted )
      SepAdtPrivilegeObjectAuditAlarm(
        (const int *)ObjectType,
        v14,
        a4,
        v33,
        *v12,
        v12[2],
        (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
        v17,
        a9,
        AccessGranted);
  }
}
