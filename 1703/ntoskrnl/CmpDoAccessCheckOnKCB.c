/*
 * XREFs of CmpDoAccessCheckOnKCB @ 0x1406671C0
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x1404D3F0C (CmpVEExecuteCreateLogic.c)
 * Callees:
 *     SepDeleteAccessState @ 0x1400EE7C0 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     SeCreateAccessState @ 0x1404F4470 (SeCreateAccessState.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     CmpCheckKeyBodyAccess @ 0x14056C688 (CmpCheckKeyBodyAccess.c)
 */

BOOLEAN __fastcall CmpDoAccessCheckOnKCB(__int64 a1, __int64 a2, ACCESS_MASK a3, char a4)
{
  BOOLEAN v4; // si
  _QWORD *v10; // rdi
  BOOLEAN v11; // bl
  __int64 v12; // [rsp+20h] [rbp-1F8h]
  PVOID Object[2]; // [rsp+50h] [rbp-1C8h] BYREF
  struct _ACCESS_STATE AccessState; // [rsp+60h] [rbp-1B8h] BYREF
  __int64 v15[28]; // [rsp+100h] [rbp-118h] BYREF

  v4 = 0;
  if ( (int)ObCreateObjectEx(a4, CmKeyObjectType, 0, a4, v12, 88, 0, 0, Object, 0LL) < 0 )
    return 0;
  v10 = Object[0];
  *((_QWORD *)Object[0] + 7) = 0LL;
  v10[8] = 0LL;
  *(_DWORD *)v10 = 1803104306;
  v10[1] = 0LL;
  *((_DWORD *)v10 + 12) = 0;
  v10[10] = v10 + 9;
  v10[9] = v10 + 9;
  LODWORD(Object[0]) = SeCreateAccessState(&AccessState, v15, a3, (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76));
  if ( SLODWORD(Object[0]) >= 0 )
  {
    v10[1] = a1;
    v11 = CmpCheckKeyBodyAccess(v10, a2, &AccessState, a4, (NTSTATUS *)Object);
    SepDeleteAccessState((__int64)&AccessState);
    SeReleaseSubjectContext(&AccessState.SubjectSecurityContext);
    v10[1] = 0LL;
    v4 = v11;
  }
  ObfDereferenceObject(v10);
  return v4;
}
