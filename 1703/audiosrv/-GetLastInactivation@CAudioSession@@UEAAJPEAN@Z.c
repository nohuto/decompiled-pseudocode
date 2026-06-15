/*
 * XREFs of ?GetLastInactivation@CAudioSession@@UEAAJPEAN@Z @ 0x18008C490
 * Callers:
 *     <none>
 * Callees:
 *     ??4COleDateTime@ATL@@QEAAAEAV01@AEBU_FILETIME@@@Z @ 0x180089EB4 (--4COleDateTime@ATL@@QEAAAEAV01@AEBU_FILETIME@@@Z.c)
 */

__int64 __fastcall CAudioSession::GetLastInactivation(CAudioSession *this, double *a2)
{
  __int64 result; // rax
  double v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  v5 = 0;
  v4 = 0.0;
  ATL::COleDateTime::operator=(&v4, (FILETIME *)((char *)this + 492));
  result = 0LL;
  *a2 = v4;
  return result;
}
