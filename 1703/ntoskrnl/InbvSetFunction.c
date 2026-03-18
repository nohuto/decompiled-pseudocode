/*
 * XREFs of InbvSetFunction @ 0x14015DFD0
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140140280 (BgkNotifyDisplayOwnershipChange.c)
 *     InbvDriverInitialize @ 0x140818F1C (InbvDriverInitialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall InbvSetFunction(int a1)
{
  __int64 result; // rax
  void (__fastcall *v3)(_QWORD); // rax
  __int64 (__fastcall **v4)(); // rcx

  result = (unsigned int)dword_14036E460;
  if ( (unsigned int)(dword_14036E460 - 3) <= 1 )
  {
    if ( qword_14036E468 )
    {
      v3 = *(void (__fastcall **)(_QWORD))(qword_14036E468 + 136);
      if ( v3 )
        v3(0LL);
    }
    result = 4LL;
    if ( a1 == 4 )
    {
      v4 = off_14033C810;
    }
    else
    {
      result = 3LL;
      v4 = off_14033C8D0;
    }
    qword_14036E468 = (__int64)v4;
    dword_14036E460 = result;
  }
  return result;
}
