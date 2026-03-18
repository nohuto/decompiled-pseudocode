/*
 * XREFs of Bulk_Stage_Acquire @ 0x1C0030108
 * Callers:
 *     Bulk_RetrieveNextStage @ 0x1C002FCB0 (Bulk_RetrieveNextStage.c)
 * Callees:
 *     StageQueue_Acquire @ 0x1C0021EE8 (StageQueue_Acquire.c)
 *     Bulk_Stage_Initialize @ 0x1C0030938 (Bulk_Stage_Initialize.c)
 */

unsigned __int8 *__fastcall Bulk_Stage_Acquire(__int64 a1)
{
  unsigned __int8 *v1; // rax
  __int64 v2; // r11
  unsigned __int8 *v3; // rbx

  v1 = StageQueue_Acquire((unsigned __int8 *)(a1 + 128));
  v3 = v1;
  if ( v1 )
    Bulk_Stage_Initialize(v2, v1);
  return v3;
}
