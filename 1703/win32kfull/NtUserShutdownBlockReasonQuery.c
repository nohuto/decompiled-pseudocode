/*
 * XREFs of NtUserShutdownBlockReasonQuery @ 0x1C0110730
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyW @ 0x1C003767C (RtlStringCchCopyW.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 */

__int64 __fastcall NtUserShutdownBlockReasonQuery(__int64 a1, volatile void *a2, unsigned int *a3)
{
  __int64 v6; // rax
  unsigned int *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // edi
  const wchar_t *Prop; // r15
  unsigned int *v14; // rax
  __int64 v15; // rax
  unsigned int v16; // ebx

  EnterSharedCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v11 = 0;
  if ( v6 )
  {
    Prop = (const wchar_t *)GetProp(v6, gatomShutdownBlockingReason, 1);
    if ( !Prop )
    {
LABEL_3:
      UserSetLastError(87LL);
      goto LABEL_4;
    }
    v14 = a3;
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      v14 = (unsigned int *)W32UserProbeAddress;
    v8 = *v14;
    if ( (unsigned int)v8 > 0x101 )
      v8 = 257LL;
    if ( a2 )
    {
      if ( !(_DWORD)v8 )
        goto LABEL_3;
      v16 = v8;
      ProbeForWrite(a2, 2 * v8, 2u);
      RtlStringCchCopyW((NTSTRSAFE_PWSTR)a2, v16, Prop);
    }
    v7 = a3;
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      v7 = (unsigned int *)W32UserProbeAddress;
    *v7 = *v7;
    v15 = -1LL;
    do
      ++v15;
    while ( Prop[v15] );
    *a3 = v15 + 1;
    v11 = 1;
  }
LABEL_4:
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
