/*
 * XREFs of UmfdDispatchWinLogonEscape @ 0x1C013F454
 * Callers:
 *     NtGdiExtEscape @ 0x1C0090BE0 (NtGdiExtEscape.c)
 * Callees:
 *     ??0ExclusiveWinlognRequestLock@@QEAA@XZ @ 0x1C013F38C (--0ExclusiveWinlognRequestLock@@QEAA@XZ.c)
 *     ??1ExclusiveWinlognRequestLock@@QEAA@XZ @ 0x1C013F3B0 (--1ExclusiveWinlognRequestLock@@QEAA@XZ.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1C013FD18 (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C013FE28 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 */

void __fastcall UmfdDispatchWinLogonEscape(unsigned __int64 a1)
{
  HANDLE Handle[2]; // [rsp+28h] [rbp-20h]
  char v2; // [rsp+58h] [rbp+10h] BYREF

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a1 + 16 > W32UserProbeAddress || a1 + 16 < a1 )
    *W32UserProbeAddress = 0;
  *(_OWORD *)Handle = *(_OWORD *)a1;
  ExclusiveWinlognRequestLock::ExclusiveWinlognRequestLock((ExclusiveWinlognRequestLock *)&v2);
  if ( LODWORD(Handle[0]) )
  {
    if ( LODWORD(Handle[0]) == 1 )
      UmfdHostLifeTimeManager::TerminateUmfdHost(LODWORD(Handle[1]) != 0);
  }
  else
  {
    UmfdHostLifeTimeManager::InitializeUmfdAndRegisterHost(Handle[1]);
  }
  ExclusiveWinlognRequestLock::~ExclusiveWinlognRequestLock((ExclusiveWinlognRequestLock *)&v2);
}
