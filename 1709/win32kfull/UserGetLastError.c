/*
 * XREFs of UserGetLastError @ 0x1C01445FC
 * Callers:
 *     _lambda_7447beefc42d69fd1fb5049cd3e9ddc4_::operator() @ 0x1C0144454 (_lambda_7447beefc42d69fd1fb5049cd3e9ddc4_--operator().c)
 * Callees:
 *     <none>
 */

__int64 UserGetLastError()
{
  __int64 v0; // rcx
  bool v1; // zf
  struct _NT_TIB *Self; // rax

  if ( (unsigned __int8)KeIsAttachedProcess() )
    return 0LL;
  v1 = PsGetCurrentProcessWow64Process(v0) == 0;
  Self = KeGetPcr()->NtTib.Self;
  if ( v1 )
    return LODWORD(Self[1].Self);
  else
    return HIDWORD(Self[147].StackBase);
}
