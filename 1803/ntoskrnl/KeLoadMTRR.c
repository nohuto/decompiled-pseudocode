/*
 * XREFs of KeLoadMTRR @ 0x140477C20
 * Callers:
 *     KiLoadMTRRTarget @ 0x14047CDA0 (KiLoadMTRRTarget.c)
 * Callees:
 *     KeFlushCurrentTbImmediately @ 0x14016A1A0 (KeFlushCurrentTbImmediately.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KiLockStepExecution @ 0x140477DF8 (KiLockStepExecution.c)
 *     KiWriteFixedMtrr @ 0x140477E3C (KiWriteFixedMtrr.c)
 *     KiReadFixedMtrr @ 0x140477F4C (KiReadFixedMtrr.c)
 *     KiCompareVarMtrr @ 0x14047805C (KiCompareVarMtrr.c)
 */

__int64 __fastcall KeLoadMTRR(__int64 a1)
{
  __int16 v2; // di
  bool v3; // di
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned int v9; // r15d
  __int64 v10; // r9
  unsigned int v11; // r11d
  _QWORD *v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  PVOID v15; // r8
  _QWORD *v17; // rcx
  _BYTE v18[96]; // [rsp+20h] [rbp-98h] BYREF
  int v19; // [rsp+B0h] [rbp-8h]

  if ( byte_1403ADB90 )
  {
    v2 = v19;
    _disable();
    v3 = (v2 & 0x200) != 0;
    ((void (*)(void))KiLockStepExecution)();
    v4 = __readcr0();
    __writecr0(v4 & 0xFFFFFFFF9FFFFFFFuLL | 0x40000000);
    __wbinvd();
    v5 = __readcr4();
    if ( (v5 & 0x80) != 0 )
      __writecr4(v5 & 0xFFFFFFFFFFFFFF7FuLL);
    else
      KeFlushCurrentTbImmediately();
    v6 = KiMtrrInfo & 0xFFFFFFFFFFFFF7FFuLL;
    v7 = (KiMtrrInfo & 0xFFFFFFFFFFFFF7FFuLL) >> 32;
    __writemsr(0x2FFu, KiMtrrInfo & 0xFFFFFFFFFFFFF7FFuLL);
    if ( !(unsigned __int8)KiCompareVarMtrr(767LL, v7) )
      KeMtrrComparisonFailed = 1;
    v9 = 0;
    if ( (_BYTE)qword_1403ADB88 )
    {
      v10 = 0LL;
      v11 = 513;
      do
      {
        v12 = qword_1403ADB98;
        v13 = 2 * v10;
        __writemsr(v11 - 1, *((_QWORD *)qword_1403ADB98 + v13));
        v8 = HIDWORD(v12[v13 + 1]);
        __writemsr(v11, v12[v13 + 1]);
        v10 = ++v9;
        v11 += 2;
      }
      while ( v9 < (unsigned __int64)(unsigned __int8)qword_1403ADB88 );
    }
    if ( qword_1403ADBA0 )
    {
      KiReadFixedMtrr(v18, v8);
      v15 = qword_1403ADBA0;
      if ( !KeGetCurrentPrcb()->Number )
      {
        v14 = 0LL;
        v15 = (PVOID)((_BYTE *)qword_1403ADBA0 - v18);
        v17 = v18;
        while ( *(_QWORD *)((char *)v17 + (_QWORD)v15) == *v17 )
        {
          v14 = (unsigned int)(v14 + 1);
          ++v17;
          if ( (unsigned int)v14 >= 0xB )
            goto LABEL_11;
        }
        KeMtrrComparisonFailed = 1;
      }
LABEL_11:
      KiWriteFixedMtrr(qword_1403ADBA0, v14, v15);
    }
    __writemsr(0x2FFu, v6 | 0x800);
    __wbinvd();
    KeFlushCurrentTbImmediately();
    __writecr0(v4);
    if ( (v5 & 0x80) != 0 )
      __writecr4(v5);
    KiLockStepExecution(a1);
    if ( v3 )
      _enable();
  }
  return 0LL;
}
