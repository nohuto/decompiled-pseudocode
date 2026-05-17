/*
 * XREFs of sub_180017A78 @ 0x180017A78
 * Callers:
 *     TpAllocIoCompletion @ 0x180010340 (TpAllocIoCompletion.c)
 *     sub_1800115C8 @ 0x1800115C8 (sub_1800115C8.c)
 *     sub_1800123F4 @ 0x1800123F4 (sub_1800123F4.c)
 *     sub_1800134A4 @ 0x1800134A4 (sub_1800134A4.c)
 *     TpAllocWait @ 0x180013DF0 (TpAllocWait.c)
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 *     sub_1800179EC @ 0x1800179EC (sub_1800179EC.c)
 *     sub_18007F460 @ 0x18007F460 (sub_18007F460.c)
 *     TpAllocJobNotification @ 0x180081010 (TpAllocJobNotification.c)
 *     sub_180105E24 @ 0x180105E24 (sub_180105E24.c)
 * Callees:
 *     sub_180105430 @ 0x180105430 (sub_180105430.c)
 */

__int64 __fastcall sub_180017A78(__int64 a1, _DWORD *a2, BYTE *a3)
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
  v7 = dword_18015BFF0;
  v8 = dword_18015BFF0;
  Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
  if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
  {
    sub_180105430(a1);
    v7 = dword_18015BFF0;
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
