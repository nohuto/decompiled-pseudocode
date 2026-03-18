/*
 * XREFs of ??0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C004EB0C
 * Callers:
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C004E07C (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0002358 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0_unnamed_type__Policy_@VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C0012C2C (--0_unnamed_type__Policy_@VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 */

VIDMM_PROCESS_ADAPTER_INFO *__fastcall VIDMM_PROCESS_ADAPTER_INFO::VIDMM_PROCESS_ADAPTER_INFO(
        VIDMM_PROCESS_ADAPTER_INFO *this)
{
  VIDMM_PROCESS_ADAPTER_INFO *result; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  `vector constructor iterator'(
    (char *)this + 56,
    264LL,
    1LL,
    (void (__fastcall *)(char *))VIDMM_PROCESS_BUDGET_STATE::VIDMM_PROCESS_BUDGET_STATE);
  *((_DWORD *)this + 80) = 0;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 86) = 54;
  *((_DWORD *)this + 90) = 2;
  *((_DWORD *)this + 91) = 2;
  *((_QWORD *)this + 44) = 0LL;
  VIDMM_PROCESS_ADAPTER_INFO::_unnamed_type__Policy_::_unnamed_type__Policy_((VIDMM_PROCESS_ADAPTER_INFO *)((char *)this + 432));
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 49) = (char *)this + 384;
  *((_QWORD *)this + 48) = (char *)this + 384;
  result = this;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  return result;
}
