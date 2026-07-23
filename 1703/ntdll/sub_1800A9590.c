/*
 * XREFs of sub_1800A9590 @ 0x1800A9590
 * Callers:
 *     sub_1800A9270 @ 0x1800A9270 (sub_1800A9270.c)
 * Callees:
 *     ZwContinue @ 0x1800A5B60 (ZwContinue.c)
 *     nullsub_3 @ 0x1800A9740 (nullsub_3.c)
 */

// positive sp value has been detected, the output may be wrong!
NTSTATUS __fastcall sub_1800A9590(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23)
{
  volatile __int32 *v24; // rbx
  __int32 v25; // r8d
  __int64 v26; // [rsp-48h] [rbp-48h] BYREF
  __int16 v27; // [rsp-40h] [rbp-40h]
  int v28; // [rsp-38h] [rbp-38h]
  __int64 v29; // [rsp-30h] [rbp-30h]
  __int16 v30; // [rsp-28h] [rbp-28h]
  int v31; // [rsp-18h] [rbp-18h]
  unsigned __int32 v32; // [rsp-14h] [rbp-14h]
  __int16 v33; // [rsp-10h] [rbp-10h]
  __int16 v34; // [rsp-6h] [rbp-6h]
  int v35; // [rsp-4h] [rbp-4h]

  a22 = (*(__int64 (**)(void))(a1 + 32))();
  if ( (LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] & 0x1000) != 0 )
  {
    nullsub_3(&a22);
  }
  else if ( (v31 & 0xFFFFFFBF) == 0x10000F )
  {
    if ( (v31 & 0x100040) == 0x100040 )
    {
      v24 = (volatile __int32 *)((char *)&STACK[0x288] + SLODWORD(STACK[0x498]));
      v25 = _InterlockedExchange(v24 + 6, v32);
      _xrstor((void *)v24, MEMORY[0x7FFE03E0] & 0xFFFFFFFFFFFFFFFCuLL);
      *((_DWORD *)v24 + 6) = v25;
    }
    _fxrstor(&a23);
    _mm_setcsr(v32);
    v30 = v34;
    v29 = a10;
    v28 = v35;
    v27 = v33;
    v26 = a22;
    __asm { iretq }
  }
  return ZwContinue((PCONTEXT)&v26, 0);
}
