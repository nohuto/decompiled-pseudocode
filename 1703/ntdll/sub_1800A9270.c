/*
 * XREFs of sub_1800A9270 @ 0x1800A9270
 * Callers:
 *     RtlRaiseException @ 0x180030AC0 (RtlRaiseException.c)
 *     RtlUnwindEx @ 0x180033870 (RtlUnwindEx.c)
 *     RtlRestoreContext @ 0x180086E50 (RtlRestoreContext.c)
 * Callees:
 *     ZwContinue @ 0x1800A5B60 (ZwContinue.c)
 */

NTSTATUS __fastcall sub_1800A9270(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // r8d
  NTSTATUS result; // eax
  volatile __int32 *v5; // rbx
  __int32 v6; // r8d
  _QWORD _FFFFFFFFFFFFFF68[161]; // [rsp-98h] [rbp-500h] BYREF
  __int16 vars8; // [rsp+470h] [rbp+8h]
  int vars10; // [rsp+478h] [rbp+10h]
  __int64 vars18; // [rsp+480h] [rbp+18h]
  __int16 vars20; // [rsp+488h] [rbp+20h]

  if ( a2 )
  {
    if ( *(_DWORD *)a2 == -2147483607 && *(_DWORD *)(a2 + 24) )
    {
      qmemcpy(_FFFFFFFFFFFFFF68, (const void *)a1, 0x4D0uLL);
      _FFFFFFFFFFFFFF68[157] = _FFFFFFFFFFFFFF68[19];
      _FFFFFFFFFFFFFF68[154] = _FFFFFFFFFFFFFF68[31];
      return sub_1800A9590(a2);
    }
    if ( *(_DWORD *)a2 == -2147483610 )
    {
      v2 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)(a1 + 144) = *(_QWORD *)(v2 + 8);
      *(_QWORD *)(a1 + 152) = *(_QWORD *)(v2 + 16);
      *(_QWORD *)(a1 + 160) = *(_QWORD *)(v2 + 24);
      *(_QWORD *)(a1 + 168) = *(_QWORD *)(v2 + 32);
      *(_QWORD *)(a1 + 176) = *(_QWORD *)(v2 + 40);
      *(_QWORD *)(a1 + 216) = *(_QWORD *)(v2 + 48);
      *(_QWORD *)(a1 + 224) = *(_QWORD *)(v2 + 56);
      *(_QWORD *)(a1 + 232) = *(_QWORD *)(v2 + 64);
      *(_QWORD *)(a1 + 240) = *(_QWORD *)(v2 + 72);
      *(_QWORD *)(a1 + 248) = *(_QWORD *)(v2 + 80);
      v3 = *(_DWORD *)(v2 + 88);
      *(_DWORD *)(a1 + 52) = v3;
      *(_DWORD *)(a1 + 280) = v3;
      *(_WORD *)(a1 + 256) = *(_WORD *)(v2 + 92);
      *(_OWORD *)(a1 + 512) = *(_OWORD *)(v2 + 96);
      *(_OWORD *)(a1 + 528) = *(_OWORD *)(v2 + 112);
      *(_OWORD *)(a1 + 544) = *(_OWORD *)(v2 + 128);
      *(_OWORD *)(a1 + 560) = *(_OWORD *)(v2 + 144);
      *(_OWORD *)(a1 + 576) = *(_OWORD *)(v2 + 160);
      *(_OWORD *)(a1 + 592) = *(_OWORD *)(v2 + 176);
      *(_OWORD *)(a1 + 608) = *(_OWORD *)(v2 + 192);
      *(_OWORD *)(a1 + 624) = *(_OWORD *)(v2 + 208);
      *(_OWORD *)(a1 + 640) = *(_OWORD *)(v2 + 224);
      *(_OWORD *)(a1 + 656) = *(_OWORD *)(v2 + 240);
    }
  }
  if ( (LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] & 0x1000) == 0
    && (*(_DWORD *)(a1 + 48) & 0xFFFFFFBF) == 0x10000F )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x100040) == 0x100040 )
    {
      v5 = (volatile __int32 *)(*(int *)(a1 + 1248) + a1 + 720);
      v6 = _InterlockedExchange(v5 + 6, *(_DWORD *)(a1 + 52));
      _xrstor((void *)v5, MEMORY[0x7FFE03E0] & 0xFFFFFFFFFFFFFFFCuLL);
      *((_DWORD *)v5 + 6) = v6;
    }
    _fxrstor((void *)(a1 + 256));
    _mm_setcsr(*(_DWORD *)(a1 + 52));
    vars20 = *(_WORD *)(a1 + 66);
    vars18 = *(_QWORD *)(a1 + 152);
    vars10 = *(_DWORD *)(a1 + 68);
    vars8 = *(_WORD *)(a1 + 56);
    _FFFFFFFFFFFFFF68[160] = *(_QWORD *)(a1 + 248);
    __asm { iretq }
  }
  result = ZwContinue((PCONTEXT)a1, 0);
  if ( result == -1073740278 )
    __fastfail(0x30u);
  return result;
}
