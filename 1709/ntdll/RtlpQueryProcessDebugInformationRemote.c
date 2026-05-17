/*
 * XREFs of RtlpQueryProcessDebugInformationRemote @ 0x1800D9100
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x18000A700 (RtlExitUserThread.c)
 *     RtlQueryProcessDebugInformation @ 0x180016D80 (RtlQueryProcessDebugInformation.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 */

void __fastcall __noreturn RtlpQueryProcessDebugInformationRemote(__int64 a1)
{
  signed int ProcessDebugInformation; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int *v6; // rcx
  unsigned int v7; // r8d
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  ProcessDebugInformation = RtlQueryProcessDebugInformation(
                              (_QWORD *)NtCurrentTeb()->ClientId.UniqueProcess,
                              *(_DWORD *)(a1 + 64),
                              a1);
  if ( ProcessDebugInformation >= 0 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    if ( v3 )
    {
      v4 = *(_QWORD *)(a1 + 96);
      if ( v4 )
        *(_QWORD *)(a1 + 96) = v3 + v4;
      v5 = *(_QWORD *)(a1 + 104);
      if ( v5 )
        *(_QWORD *)(a1 + 104) = v3 + v5;
      v6 = *(unsigned int **)(a1 + 112);
      if ( v6 )
      {
        v7 = 0;
        for ( *(_QWORD *)(a1 + 112) = (char *)v6 + v3; v7 < *v6; ++v7 )
        {
          v8 = 22LL * v7;
          v9 = *(_QWORD *)&v6[v8 + 20];
          if ( v9 )
            *(_QWORD *)&v6[v8 + 20] = v3 + v9;
          v10 = *(_QWORD *)&v6[v8 + 22];
          if ( v10 )
            *(_QWORD *)&v6[v8 + 22] = v3 + v10;
        }
      }
      v11 = *(_QWORD *)(a1 + 120);
      if ( v11 )
        *(_QWORD *)(a1 + 120) = v3 + v11;
      v12 = *(_QWORD *)(a1 + 144);
      if ( v12 )
        *(_QWORD *)(a1 + 144) = v3 + v12;
    }
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  NtUnmapViewOfSection();
  RtlExitUserThread(ProcessDebugInformation);
}
