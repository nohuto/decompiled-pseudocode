/*
 * XREFs of RtlReleaseRelativeName @ 0x180055120
 * Callers:
 *     sub_1800382D4 @ 0x1800382D4 (sub_1800382D4.c)
 *     sub_1800546DC @ 0x1800546DC (sub_1800546DC.c)
 *     sub_180054E40 @ 0x180054E40 (sub_180054E40.c)
 *     sub_180055830 @ 0x180055830 (sub_180055830.c)
 *     sub_1800E18A4 @ 0x1800E18A4 (sub_1800E18A4.c)
 *     sub_1800E2994 @ 0x1800E2994 (sub_1800E2994.c)
 *     sub_1800ED3D0 @ 0x1800ED3D0 (sub_1800ED3D0.c)
 *     sub_18010C428 @ 0x18010C428 (sub_18010C428.c)
 *     sub_18010D1BC @ 0x18010D1BC (sub_18010D1BC.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

__int64 __fastcall RtlReleaseRelativeName(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      ZwClose(*(_QWORD *)(v1 + 8));
      result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
    }
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
