/*
 * XREFs of NtUserShutdownBlockReasonQuery @ 0x1C011A810
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     RtlStringCchCopyW @ 0x1C009DD08 (RtlStringCchCopyW.c)
 */

__int64 __fastcall NtUserShutdownBlockReasonQuery(__int64 a1, volatile void *a2, unsigned int *a3)
{
  __int64 v6; // rax
  _DWORD *v7; // rdx
  ULONG64 v8; // rcx
  int v9; // edi
  __int64 v10; // rdx
  const wchar_t *Prop; // r15
  unsigned int *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // ebx

  EnterSharedCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v9 = 0;
  if ( v6 )
  {
    Prop = (const wchar_t *)GetProp(v6, gatomShutdownBlockingReason, 1);
    if ( !Prop )
    {
LABEL_3:
      UserSetLastError(87LL, v10);
      goto LABEL_4;
    }
    v13 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v13 = (unsigned int *)MmUserProbeAddress;
    v14 = *v13;
    if ( (unsigned int)v14 > 0x101 )
      v14 = 257LL;
    if ( a2 )
    {
      if ( !(_DWORD)v14 )
        goto LABEL_3;
      v16 = v14;
      ProbeForWrite(a2, 2 * v14, 2u);
      RtlStringCchCopyW((NTSTRSAFE_PWSTR)a2, v16, Prop);
    }
    v8 = MmUserProbeAddress;
    v7 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v7 = (_DWORD *)MmUserProbeAddress;
    *v7 = *v7;
    v15 = -1LL;
    do
      ++v15;
    while ( Prop[v15] );
    *a3 = v15 + 1;
    v9 = 1;
  }
LABEL_4:
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
