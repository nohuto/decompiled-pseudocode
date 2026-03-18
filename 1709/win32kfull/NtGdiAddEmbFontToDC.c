/*
 * XREFs of NtGdiAddEmbFontToDC @ 0x1C02579D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0017300 (--1DCOBJ@@QEAA@XZ.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C011C2B8 (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C014320C (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ?VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C024B374 (-VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z.c)
 *     ?bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C0288710 (-bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z.c)
 */

__int64 __fastcall NtGdiAddEmbFontToDC(HDC a1, __int64 *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  struct PFF *PFFFromId; // rdi
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  struct PFT **v7; // [rsp+58h] [rbp+20h] BYREF

  v2 = *a2;
  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  if ( v6[0] )
  {
    GreAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v7, (struct PFT *)gpPFTPrivate);
    if ( v7 )
    {
      PFFFromId = GetPFFFromId(gpPFTPrivate, v2, 0LL);
      if ( (unsigned int)PUBLIC_PFTOBJ::VerifyPFF(&v7, PFFFromId) )
        v3 = XDCOBJ::bAddRemoteFont((XDCOBJ *)v6, PFFFromId);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v6);
  return v3;
}
