/*
 * XREFs of Isoch_Stage_Acquire @ 0x1C002A3B4
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x1C0029D28 (Isoch_RetrieveNextStage.c)
 * Callees:
 *     StageQueue_Acquire @ 0x1C0021EE8 (StageQueue_Acquire.c)
 *     Isoch_Stage_Initialize @ 0x1C002ADF4 (Isoch_Stage_Initialize.c)
 */

unsigned __int8 *__fastcall Isoch_Stage_Acquire(__int64 a1)
{
  unsigned __int8 *v1; // rax
  __int64 v2; // r11
  unsigned __int8 *v3; // rbx

  v1 = StageQueue_Acquire((unsigned __int8 *)(a1 + 128));
  v3 = v1;
  if ( v1 )
    Isoch_Stage_Initialize(v2, v1);
  return v3;
}
