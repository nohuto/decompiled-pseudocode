/*
 * XREFs of ?Create@MPCProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180052A60
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VMPCProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180053A9C (--$MakeAndInitialize@VMPCProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Detail.c)
 */

__int64 __fastcall MPCProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  struct InputProcessorCreateParams *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  *a2 = 0LL;
  return Microsoft::WRL::Details::MakeAndInitialize<MPCProcessor,IInputProcessor,InputProcessorCreateParams * &>(
           a2,
           &v3);
}
