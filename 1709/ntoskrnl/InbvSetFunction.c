/*
 * XREFs of InbvSetFunction @ 0x14013EB00
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14013EC50 (BgkNotifyDisplayOwnershipChange.c)
 *     InbvDriverInitialize @ 0x140832D94 (InbvDriverInitialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall InbvSetFunction(int a1)
{
  __int64 result; // rax
  void (__fastcall *v3)(_QWORD); // rax
  __int64 (__fastcall **v4)(); // rcx

  result = (unsigned int)dword_140389EF0;
  if ( (unsigned int)(dword_140389EF0 - 3) <= 1 )
  {
    if ( qword_140389EF8 )
    {
      v3 = *(void (__fastcall **)(_QWORD))(qword_140389EF8 + 136);
      if ( v3 )
        v3(0LL);
    }
    result = 4LL;
    if ( a1 == 4 )
    {
      v4 = off_140355040;
    }
    else
    {
      result = 3LL;
      v4 = off_140355100;
    }
    qword_140389EF8 = (__int64)v4;
    dword_140389EF0 = result;
  }
  return result;
}
