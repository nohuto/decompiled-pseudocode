/*
 * XREFs of sub_1800D9FA0 @ 0x1800D9FA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x180050E20 (RtlExitUserThread.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     RtlSetProcessDebugInformation @ 0x1800D9A60 (RtlSetProcessDebugInformation.c)
 */

void __fastcall __noreturn sub_1800D9FA0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned int v5; // eax
  unsigned int v6; // ebx

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 144);
    if ( v3 )
      *(_QWORD *)(a1 + 144) = v3 - v2;
    v4 = *(_QWORD *)(a1 + 104);
    if ( v4 )
      *(_QWORD *)(a1 + 104) = v4 - v2;
  }
  v5 = RtlSetProcessDebugInformation(NtCurrentTeb()->ClientId.UniqueProcess, *(_DWORD *)(a1 + 64), a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  v6 = v5;
  ZwUnmapViewOfSection();
  RtlExitUserThread(v6);
}
