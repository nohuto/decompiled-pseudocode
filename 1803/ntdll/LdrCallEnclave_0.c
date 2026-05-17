/*
 * XREFs of LdrCallEnclave_0 @ 0x1800CA210
 * Callers:
 *     RtlEnclaveCallDispatch @ 0x18009E900 (RtlEnclaveCallDispatch.c)
 *     LdrCallEnclave @ 0x1800C9690 (LdrCallEnclave.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     sub_18001EE04 @ 0x18001EE04 (sub_18001EE04.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_18009E970 @ 0x18009E970 (sub_18009E970.c)
 *     sub_1800C9DEC @ 0x1800C9DEC (sub_1800C9DEC.c)
 */

__int64 __fastcall LdrCallEnclave_0(__int64 (__fastcall *a1)(_QWORD), __int64 a2, _QWORD *a3)
{
  __int64 *v5; // rax
  unsigned __int64 v6; // r14
  unsigned int v7; // ebx

  v5 = sub_18001EE04((unsigned __int64)a1, 0);
  v6 = (unsigned __int64)v5;
  v7 = 0;
  if ( v5 )
  {
    RtlLeaveCriticalSection((__int64)(v5 + 2));
    sub_1800C9DEC(v6);
    return (unsigned int)sub_18009E970();
  }
  else
  {
    *a3 = a1(*a3);
  }
  return v7;
}
