/*
 * XREFs of CmpDoAccessCheckOnKCB @ 0x1406916E0
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x140569AAC (CmpVEExecuteCreateLogic.c)
 * Callees:
 *     SepDeleteAccessState @ 0x140081E70 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     SeCreateAccessState @ 0x1404C6430 (SeCreateAccessState.c)
 *     CmpCheckKeyBodyAccess @ 0x140692F64 (CmpCheckKeyBodyAccess.c)
 */

char __fastcall CmpDoAccessCheckOnKCB(__int64 a1, __int64 a2, ACCESS_MASK a3, char a4)
{
  char v4; // si
  _QWORD *v8; // rdi
  char v9; // bl
  __int64 v10; // [rsp+20h] [rbp-1F8h]
  PVOID Object[2]; // [rsp+50h] [rbp-1C8h] BYREF
  _QWORD v12[4]; // [rsp+60h] [rbp-1B8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+80h] [rbp-198h] BYREF
  _QWORD v14[28]; // [rsp+100h] [rbp-118h] BYREF

  v4 = 0;
  if ( (int)ObCreateObjectEx(a4, CmKeyObjectType, 0LL, a4, v10, 96, 0, 0, Object, 0LL) < 0 )
    return 0;
  v8 = Object[0];
  *((_QWORD *)Object[0] + 7) = 0LL;
  v8[8] = 0LL;
  *(_DWORD *)v8 = 1803104306;
  v8[1] = 0LL;
  *((_DWORD *)v8 + 12) = 0;
  v8[10] = v8 + 9;
  v8[9] = v8 + 9;
  LODWORD(Object[0]) = SeCreateAccessState(v12, v14, a3, (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76));
  if ( SLODWORD(Object[0]) >= 0 )
  {
    v8[1] = a1;
    v9 = CmpCheckKeyBodyAccess(v8, (__int64)Object);
    SepDeleteAccessState((__int64)v12);
    SeReleaseSubjectContext(&SubjectContext);
    v8[1] = 0LL;
    v4 = v9;
  }
  ObfDereferenceObject(v8);
  return v4;
}
