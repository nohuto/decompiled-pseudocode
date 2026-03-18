/*
 * XREFs of HUBDSM_GettingLanguageIdStringDescriptor @ 0x1C001B8C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009C18 (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x1C0023A80 (HUBDTX_GetDescriptor.c)
 */

__int64 __fastcall HUBDSM_GettingLanguageIdStringDescriptor(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx
  int Descriptor; // eax
  __int64 v5; // [rsp+28h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(void **)(v1 + 2024);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x64334855u);
  *(_QWORD *)(v1 + 2024) = 0LL;
  Descriptor = HUBDTX_GetDescriptor(v1, (int)v1 + 1732, 255, 3, 0, 0);
  if ( Descriptor < 0 )
  {
    LODWORD(v5) = Descriptor;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x2Bu,
      (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
      v5);
    HUBSM_AddEvent(v1 + 504, 4004);
  }
  return 1000LL;
}
