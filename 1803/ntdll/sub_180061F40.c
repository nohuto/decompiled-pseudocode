/*
 * XREFs of sub_180061F40 @ 0x180061F40
 * Callers:
 *     sub_180060B10 @ 0x180060B10 (sub_180060B10.c)
 *     sub_180061ED0 @ 0x180061ED0 (sub_180061ED0.c)
 *     RtlWalkHeap @ 0x1800EBE30 (RtlWalkHeap.c)
 *     sub_1800FD510 @ 0x1800FD510 (sub_1800FD510.c)
 * Callees:
 *     sub_180061F8C @ 0x180061F8C (sub_180061F8C.c)
 *     sub_1800ED51C @ 0x1800ED51C (sub_1800ED51C.c)
 */

__int64 __fastcall sub_180061F40(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 *v5; // rcx
  char *v6; // rdx

  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    return sub_1800ED51C();
  v3 = 0LL;
  if ( (dword_180159760 & 2) != 0 && *(_QWORD *)a2 && (*(_BYTE *)(a2 + 18) & 1) != 0 )
    *(_QWORD *)a2 -= *(_QWORD *)(*(_QWORD *)a2 - 16LL);
  result = sub_180061F8C();
  if ( (dword_180159760 & 2) != 0 && (_DWORD)result != -2147483622 && (*(_BYTE *)(a2 + 18) & 1) != 0 )
  {
    v5 = *(__int64 **)a2;
    if ( *(_QWORD *)a2 )
    {
      v3 = *v5;
      v6 = (char *)v5 + *v5;
    }
    else
    {
      v6 = 0LL;
    }
    *(_QWORD *)(a2 + 8) -= v3;
    *(_QWORD *)a2 = v6;
  }
  return result;
}
