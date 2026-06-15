/*
 * XREFs of ?GetUniqueStreamIdentifier@CVADServer@@QEAA_KXZ @ 0x180025BC4
 * Callers:
 *     ??1CPdcTimerActivation@@QEAA@XZ @ 0x18002A6F8 (--1CPdcTimerActivation@@QEAA@XZ.c)
 *     ??0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z @ 0x18002A8D4 (--0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z.c)
 *     ?Renew@CPdcTimerActivation@@QEAAXXZ @ 0x18009CB9C (-Renew@CPdcTimerActivation@@QEAAXXZ.c)
 * Callees:
 *     ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x18001D370 (-GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ.c)
 */

__int64 __fastcall CVADServer::GetUniqueStreamIdentifier(CVADServer *this)
{
  __int64 v1; // rcx
  __int64 result; // rax
  CAudioStream *v3; // rcx
  __int64 (*v4)(void); // rax

  v1 = *((_QWORD *)this + 24);
  result = 0LL;
  if ( v1 )
  {
    v3 = (CAudioStream *)(v1 + 8);
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 80LL);
    if ( (char *)v4 == (char *)CAudioStream::GetUniqueStreamIdentifier )
      return CAudioStream::GetUniqueStreamIdentifier(v3);
    else
      return v4();
  }
  return result;
}
