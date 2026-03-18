/*
 * XREFs of DbgkpLkmdSnapGlobals @ 0x1401E1F2C
 * Callers:
 *     DbgkCaptureLiveDump @ 0x140681C24 (DbgkCaptureLiveDump.c)
 * Callees:
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     KeQueryActiveProcessorCountEx @ 0x140089140 (KeQueryActiveProcessorCountEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     KeEnumerateProcessorDpcs @ 0x140201278 (KeEnumerateProcessorDpcs.c)
 */

__int64 __fastcall DbgkpLkmdSnapGlobals(__int64 a1)
{
  ULONG ActiveProcessorCount; // ebp
  __int64 result; // rax
  ULONG v4; // ebx
  _QWORD *v5; // rdi
  __int64 Prcb; // rax
  __int64 v7; // rdx
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  result = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD, _QWORD, _QWORD))(a1 + 5184))(
             a1 + 5120,
             KiProcessorBlock,
             8 * ActiveProcessorCount,
             0LL,
             0LL,
             0LL);
  v4 = 0;
  if ( ActiveProcessorCount )
  {
    v5 = (_QWORD *)a1;
    do
    {
      Prcb = KeGetPrcb(v4);
      if ( (*(int (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, __int64 *))(a1 + 5184))(
             a1 + 5120,
             Prcb,
             32448LL,
             2LL,
             0LL,
             &v8) >= 0 )
      {
        *(_QWORD *)(v8 + 8) = 0LL;
        *v5 = v8;
      }
      result = KeEnumerateProcessorDpcs(v4++, v7, a1);
      ++v5;
    }
    while ( v4 < ActiveProcessorCount );
  }
  return result;
}
