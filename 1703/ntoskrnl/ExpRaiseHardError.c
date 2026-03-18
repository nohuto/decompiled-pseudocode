/*
 * XREFs of ExpRaiseHardError @ 0x140427D10
 * Callers:
 *     NtRaiseHardError @ 0x140427B08 (NtRaiseHardError.c)
 *     ExRaiseHardError @ 0x14071ED80 (ExRaiseHardError.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400F0FA0 (PsIsCurrentThreadInServerSilo.c)
 *     KeIsAttachedProcess @ 0x1400FCB20 (KeIsAttachedProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExpSystemErrorHandler @ 0x14018AB00 (ExpSystemErrorHandler.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     LpcRequestWaitReplyPortEx @ 0x140470A50 (LpcRequestWaitReplyPortEx.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     PsCaptureExceptionPort @ 0x14053F0F0 (PsCaptureExceptionPort.c)
 */

__int64 __fastcall ExpRaiseHardError(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        const void *a4,
        __int64 a5,
        int a6,
        unsigned int *a7)
{
  _KPROCESS **CurrentServerSiloGlobals; // r13
  KPROCESSOR_MODE PreviousMode; // di
  char v11; // dl
  _KPROCESS *Process; // r10
  int v13; // r11d
  _KPROCESS *v14; // rdi
  char v15; // si
  unsigned int v16; // r13d
  _BYTE *Teb; // rcx
  int v19; // eax
  int v20; // r14d
  unsigned int v21; // ecx
  _DWORD v24[12]; // [rsp+80h] [rbp-2F8h] BYREF
  __int64 v25; // [rsp+B0h] [rbp-2C8h]
  int v26; // [rsp+B8h] [rbp-2C0h]
  unsigned int v27; // [rsp+BCh] [rbp-2BCh]
  unsigned int v28; // [rsp+C0h] [rbp-2B8h]
  unsigned int v29; // [rsp+C4h] [rbp-2B4h]
  char v30[616]; // [rsp+C8h] [rbp-2B0h] BYREF

  CurrentServerSiloGlobals = (_KPROCESS **)PsGetCurrentServerSiloGlobals();
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *a7 = 0;
  if ( a2 > 0x4D )
    return 3221225485LL;
  v11 = 0;
  if ( a6 == 6 )
  {
    if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
      return 3221225569LL;
    if ( !PsIsCurrentThreadInServerSilo() )
      ExReadyForErrors = 0;
    *((_DWORD *)CurrentServerSiloGlobals + 224) = 2;
    v11 = 1;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v13 = *(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x10;
  if ( !v13 && (a1 & 0xC0000000) == 0xC0000000 && (!*((_DWORD *)CurrentServerSiloGlobals + 224) || v11) )
  {
    ExpSystemErrorHandler(a1, a2, a3, a5, PreviousMode != 0);
    return 0LL;
  }
  if ( Process == CurrentServerSiloGlobals[110] )
  {
    if ( (a1 & 0xC0000000) == 0xC0000000 )
      ExpSystemErrorHandler(a1, a2, a3, a5, PreviousMode != 0);
    goto LABEL_13;
  }
  v14 = 0LL;
  v15 = 0;
  if ( !v13 && ((Process[1].ThreadSeed[2] & 1) != 0 || (a1 & 0x10000000) != 0) )
  {
    v14 = (_KPROCESS *)PsCaptureExceptionPort(Process);
    if ( v14 )
      v15 = 1;
    else
      v14 = CurrentServerSiloGlobals[111];
  }
  if ( v14
    && ((KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeIsAttachedProcess()
      ? (Teb = 0LL)
      : (Teb = KeGetCurrentThread()->Teb),
        Teb) )
  {
    v19 = 0;
    if ( (Teb[5808] & 0x10) != 0 )
      v19 = -1073741823;
    v16 = a3;
    if ( v19 < 0 )
    {
      if ( v15 == 1 )
        ObfDereferenceObject(v14);
      v14 = 0LL;
    }
  }
  else
  {
    v16 = a3;
  }
  if ( !v14 )
  {
LABEL_13:
    *a7 = 0;
    return 0LL;
  }
  v24[0] = 7340104;
  v24[1] = 9;
  v24[10] = a1 & 0xEFFFFFFF;
  v26 = a6;
  v29 = v16;
  v28 = a2;
  if ( a4 )
    memmove(v30, a4, 8LL * a2);
  v25 = MEMORY[0xFFFFF78000000014];
  v20 = LpcRequestWaitReplyPortEx(v14, v24, v24);
  if ( v15 == 1 )
    ObfDereferenceObject(v14);
  if ( v20 >= 0 )
  {
    v21 = v27;
    if ( v27 > 0xA )
      v21 = 0;
    *a7 = v21;
  }
  return (unsigned int)v20;
}
