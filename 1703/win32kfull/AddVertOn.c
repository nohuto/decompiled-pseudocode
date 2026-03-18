/*
 * XREFs of AddVertOn @ 0x1C02CDE60
 * Callers:
 *     CheckVertTopology @ 0x1C02CDF84 (CheckVertTopology.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     fsc_BeginElement @ 0x1C02CD440 (fsc_BeginElement.c)
 */

__int64 __fastcall AddVertOn(char a1)
{
  __int64 result; // rax
  __int64 (__fastcall *v2)(_QWORD, _QWORD); // [rsp+58h] [rbp+10h] BYREF
  __int64 v3; // [rsp+60h] [rbp+18h] BYREF

  result = fsc_BeginElement(a1, 2, 2, 0, 0LL, 0LL, &v3, &v2);
  if ( !(_DWORD)result )
    return v2((unsigned int)(dword_1C0338B18 >> 6), (unsigned int)((dword_1C0338B1C + 31) >> 6));
  return result;
}
