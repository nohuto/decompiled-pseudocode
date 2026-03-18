/*
 * XREFs of NtGdiAddEmbFontToDC @ 0x1C0255ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C007E0B0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C010BCA4 (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C013C384 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     TraceGreReleaseSemaphore @ 0x1C013E728 (TraceGreReleaseSemaphore.c)
 *     ?VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C02499AC (-VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z.c)
 *     TraceGreAcquireSemaphoreEx @ 0x1C024A52C (TraceGreAcquireSemaphoreEx.c)
 *     ?bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C028BC00 (-bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z.c)
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
    TraceGreAcquireSemaphoreEx((__int64)L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v7, (struct PFT *)gpPFTPrivate);
    if ( v7 )
    {
      PFFFromId = GetPFFFromId(gpPFTPrivate, v2, 0LL);
      if ( (unsigned int)PUBLIC_PFTOBJ::VerifyPFF(&v7, PFFFromId) )
        v3 = XDCOBJ::bAddRemoteFont((XDCOBJ *)v6, PFFFromId);
    }
    TraceGreReleaseSemaphore((__int64)L"ghsemPublicPFT", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v6);
  return v3;
}
