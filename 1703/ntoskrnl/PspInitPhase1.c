/*
 * XREFs of PspInitPhase1 @ 0x14081A1E8
 * Callers:
 *     PsInitSystem @ 0x140809E88 (PsInitSystem.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 * Callees:
 *     strcpy_s @ 0x14016FFF0 (strcpy_s.c)
 *     VslRegisterSecureSystemProcess @ 0x1401ED864 (VslRegisterSecureSystemProcess.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ExRegisterHost @ 0x1405C4EFC (ExRegisterHost.c)
 *     PsCreateMinimalProcess @ 0x1405D991C (PsCreateMinimalProcess.c)
 *     PspInitializeDesktopActivityModeratorCallouts @ 0x14081A4BC (PspInitializeDesktopActivityModeratorCallouts.c)
 */

char __fastcall PspInitPhase1(__int64 a1, __int64 a2)
{
  NTSTATUS v3; // eax
  int v4; // [rsp+40h] [rbp-30h] BYREF
  __int16 v5; // [rsp+44h] [rbp-2Ch]
  int v6; // [rsp+48h] [rbp-28h]
  __int64 v7; // [rsp+50h] [rbp-20h]
  __int64 v8; // [rsp+58h] [rbp-18h]
  __int64 v9; // [rsp+60h] [rbp-10h]
  HANDLE Handle; // [rsp+80h] [rbp+10h] BYREF
  PVOID Object; // [rsp+88h] [rbp+18h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v5 = 1;
  v6 = 1;
  v4 = 65540;
  if ( (int)ExRegisterHost(&PspNetRateControlExtensionHost, a2, (unsigned __int16 *)&v4) < 0 )
  {
    PspNetRateControlExtensionHost = 0LL;
  }
  else if ( (int)PspInitializeDesktopActivityModeratorCallouts() >= 0 )
  {
    if ( !VslVsmEnabled )
      return 1;
    Handle = 0LL;
    if ( (int)PsCreateMinimalProcess(
                PsInitialSystemProcess,
                0LL,
                BYTE2(PsInitialSystemProcess[2].ActiveProcessors.Bitmap[0]),
                0LL,
                0,
                0LL,
                &Handle) >= 0 )
    {
      v3 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
      PsSecureSystemProcess = (ULONG_PTR)Object;
      if ( v3 >= 0 )
      {
        strcpy_s((char *)Object + 1104, 0xFuLL, "Secure System");
        if ( VslRegisterSecureSystemProcess() >= 0 )
          return 1;
      }
    }
  }
  return 0;
}
