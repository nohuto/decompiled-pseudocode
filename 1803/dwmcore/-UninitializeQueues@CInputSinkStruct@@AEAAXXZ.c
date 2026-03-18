/*
 * XREFs of ?UninitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x1800CD3FC
 * Callers:
 *     ??$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z @ 0x1800CD318 (--$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z.c)
 *     ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x1800CD474 (-ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInputSinkStruct::UninitializeQueues(CInputSinkStruct *this)
{
  CInputSinkStruct *v1; // rax

  v1 = (CInputSinkStruct *)((char *)this + 64);
  while ( this != v1 )
  {
    *((_QWORD *)this + 1) = 0LL;
    this = (CInputSinkStruct *)((char *)this + 16);
  }
}
