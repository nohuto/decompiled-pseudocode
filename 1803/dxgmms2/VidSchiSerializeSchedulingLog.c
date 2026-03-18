/*
 * XREFs of VidSchiSerializeSchedulingLog @ 0x1C00BEF5C
 * Callers:
 *     VidSchiCreateNodeSchedulingLog @ 0x1C00BEDF4 (VidSchiCreateNodeSchedulingLog.c)
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0002EB0 (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiSchedulerNodeToDriverNode @ 0x1C002CAE4 (VidSchiSchedulerNodeToDriverNode.c)
 *     McTemplateK0pqqxxxxqb @ 0x1C003217C (McTemplateK0pqqxxxxqb.c)
 *     ?GetCpuVa@VIDMM_SCH_LOG@@QEAAPEAXXZ @ 0x1C0035870 (-GetCpuVa@VIDMM_SCH_LOG@@QEAAPEAXXZ.c)
 */

int __fastcall VidSchiSerializeSchedulingLog(__int64 a1)
{
  __int64 v1; // r15
  int v3; // r12d
  unsigned int v4; // edx
  int v5; // r13d
  VIDMM_SCH_LOG *v6; // r8
  _DWORD *CpuVa; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // ebx
  _DWORD *v11; // r14
  unsigned int v12; // edi
  int v13; // esi
  __int64 v15; // [rsp+20h] [rbp-68h]
  __int64 v16; // [rsp+28h] [rbp-60h]
  __int64 v17; // [rsp+50h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 24);
  v3 = VidSchiSchedulerNodeToDriverEngine(v1, *(unsigned __int16 *)(a1 + 4));
  v5 = VidSchiSchedulerNodeToDriverNode(v1, v4);
  CpuVa = VIDMM_SCH_LOG::GetCpuVa(v6);
  v10 = 0;
  v11 = CpuVa;
  v12 = CpuVa[2];
  if ( CpuVa[1] || (v12 = *CpuVa) != 0 )
  {
    do
    {
      v13 = 1536;
      LODWORD(CpuVa) = v12 - v10;
      if ( v12 - v10 < 0x600 )
        v13 = v12 - v10;
      if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      {
        LODWORD(v17) = 32 * v13;
        LODWORD(v16) = v3;
        LODWORD(v15) = v5;
        LODWORD(CpuVa) = McTemplateK0pqqxxxxqb(
                           (__int64)&v11[8 * v10 + 8],
                           v8,
                           v9,
                           *(_QWORD *)(v1 + 16),
                           v15,
                           v16,
                           *(_QWORD *)(a1 + 6192),
                           *(_QWORD *)(a1 + 6208),
                           *(_QWORD *)(a1 + 6200),
                           *(_QWORD *)(a1 + 6216),
                           v17,
                           &v11[8 * v10 + 8]);
      }
      v10 += v13;
    }
    while ( v10 < v12 );
  }
  return (int)CpuVa;
}
