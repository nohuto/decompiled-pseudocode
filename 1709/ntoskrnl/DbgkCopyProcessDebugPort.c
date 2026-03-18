/*
 * XREFs of DbgkCopyProcessDebugPort @ 0x14053A2F4
 * Callers:
 *     PspInsertProcess @ 0x140539300 (PspInsertProcess.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PsTestProtectedProcessIncompatibility @ 0x14053919C (PsTestProtectedProcessIncompatibility.c)
 *     DbgkpMarkProcessPeb @ 0x1406AA048 (DbgkpMarkProcessPeb.c)
 */

__int64 __fastcall DbgkCopyProcessDebugPort(_QWORD *BugCheckParameter1, __int64 a2, char *a3, _BYTE *a4)
{
  char *v5; // rbx
  __int64 v9; // rcx
  NTSTATUS v10; // edi
  __int64 v11; // rax
  __int16 v12; // cx
  int v13; // edi
  char v14[8]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+28h] [rbp-A0h]
  __int64 v16; // [rsp+30h] [rbp-98h]

  BugCheckParameter1[132] = 0LL;
  v5 = a3;
  if ( a3 )
  {
    ObfReferenceObject(a3);
  }
  else
  {
    if ( !*(_QWORD *)(a2 + 1056) )
      goto LABEL_3;
    ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
    v5 = *(char **)(a2 + 1056);
    if ( v5 )
    {
      if ( (*(_DWORD *)(a2 + 772) & 2) != 0 )
        v5 = 0LL;
      else
        ObfReferenceObject(*(PVOID *)(a2 + 1056));
    }
    KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
  }
  if ( !v5 )
    goto LABEL_3;
  LOBYTE(v9) = KeGetCurrentThread()->PreviousMode;
  if ( PsTestProtectedProcessIncompatibility(v9, a2, (__int64)BugCheckParameter1) )
  {
    v10 = -1073740014;
  }
  else if ( (*((_DWORD *)v5 + 24) & 4) == 0
         || (v11 = BugCheckParameter1[133]) != 0 && ((v12 = *(_WORD *)(v11 + 8), v12 == 332) || v12 == 452) )
  {
    if ( (BugCheckParameter1[90] & 1) == 0
      || (v15 = BugCheckParameter1[90], v16 = 1LL, v10 = VslpEnterIumSecureMode(2u, 11LL, 0, (__int64)v14), v10 >= 0) )
    {
      ExAcquireFastMutex((PFAST_MUTEX)(v5 + 24));
      v13 = *((_DWORD *)v5 + 24) & 1;
      if ( !v13 )
        BugCheckParameter1[132] = v5;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 24));
      if ( (_BYTE)v13 )
      {
        ObfDereferenceObject(v5);
        v5 = 0LL;
      }
      if ( v5 )
      {
        DbgkpMarkProcessPeb((ULONG_PTR)BugCheckParameter1);
        *a4 = 1;
        return 0LL;
      }
LABEL_3:
      *a4 = 0;
      return 0LL;
    }
  }
  else
  {
    v10 = -1073741637;
  }
  ObfDereferenceObject(v5);
  return (unsigned int)v10;
}
