/*
 * XREFs of sub_180024854 @ 0x180024854
 * Callers:
 *     sub_1800247C8 @ 0x1800247C8 (sub_1800247C8.c)
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 *     TpAllocJobNotification @ 0x1800565C0 (TpAllocJobNotification.c)
 *     sub_180056B80 @ 0x180056B80 (sub_180056B80.c)
 *     TpAllocIoCompletion @ 0x180057380 (TpAllocIoCompletion.c)
 *     sub_180057618 @ 0x180057618 (sub_180057618.c)
 *     sub_180058424 @ 0x180058424 (sub_180058424.c)
 *     TpAllocWait @ 0x180058B10 (TpAllocWait.c)
 *     sub_1800591B8 @ 0x1800591B8 (sub_1800591B8.c)
 *     sub_180108CB4 @ 0x180108CB4 (sub_180108CB4.c)
 * Callees:
 *     sub_180108210 @ 0x180108210 (sub_180108210.c)
 */

__int64 __fastcall sub_180024854(__int64 a1, _DWORD *a2, BYTE *a3)
{
  BYTE Number; // bp
  unsigned int v7; // r9d
  unsigned int v8; // edi
  WORD Group; // r15
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 result; // rax

  Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
  v7 = dword_18015D044;
  v8 = dword_18015D044;
  Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
  if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
  {
    sub_180108210();
    v7 = dword_18015D044;
  }
  v10 = 0;
  if ( v7 )
  {
    v11 = *(_QWORD *)(a1 + 48);
    while ( 1 )
    {
      if ( *(_WORD *)(v11 + 16LL * v10 + 8) == Group )
      {
        v12 = *(_QWORD *)(v11 + 16LL * v10);
        if ( _bittest64(&v12, Number) )
          break;
      }
      if ( ++v10 >= v7 )
        goto LABEL_8;
    }
    v8 = v10;
  }
LABEL_8:
  result = v8 < v7 ? v8 : 0;
  *a2 = result;
  if ( a3 )
    *a3 = Number;
  return result;
}
