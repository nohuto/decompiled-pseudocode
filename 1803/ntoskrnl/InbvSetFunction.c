/*
 * XREFs of InbvSetFunction @ 0x14017C310
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140164C40 (BgkNotifyDisplayOwnershipChange.c)
 *     InbvDriverInitialize @ 0x1408BA654 (InbvDriverInitialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall InbvSetFunction(int a1)
{
  __int64 result; // rax
  void (__fastcall *v3)(_QWORD); // rax
  __int64 (__fastcall **v4)(); // rcx

  result = (unsigned int)dword_1403CDD20;
  if ( (unsigned int)(dword_1403CDD20 - 3) <= 1 )
  {
    if ( qword_1403CDD28 )
    {
      v3 = *(void (__fastcall **)(_QWORD))(qword_1403CDD28 + 136);
      if ( v3 )
        v3(0LL);
    }
    v4 = off_140397E50;
    result = 4 - (unsigned int)(a1 != 4);
    dword_1403CDD20 = 4 - (a1 != 4);
    if ( a1 != 4 )
      v4 = off_140397F10;
    qword_1403CDD28 = (__int64)v4;
  }
  return result;
}
