/*
 * XREFs of ?ProcessUnclaimedVistBltTokensForNode@CLegacySurfaceManager@@IEAAJPEAVCWindowNode@@K@Z @ 0x180149B58
 * Callers:
 *     ?RegisterForDxUpdates@CLegacySurfaceManager@@QEAAJPEAVCWindowNode@@K@Z @ 0x180149C34 (-RegisterForDxUpdates@CLegacySurfaceManager@@QEAAJPEAVCWindowNode@@K@Z.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@VUnclaimedToken@CLegacySurfaceManager@@$0A@@@QEAAJI@Z @ 0x180024360 (-RemoveAt@-$DynArray@VUnclaimedToken@CLegacySurfaceManager@@$0A@@@QEAAJI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z @ 0x1800D0400 (-ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z.c)
 */

__int64 __fastcall CLegacySurfaceManager::ProcessUnclaimedVistBltTokensForNode(
        CLegacySurfaceManager *this,
        struct CWindowNode *a2,
        int a3)
{
  unsigned int v3; // edi
  unsigned int i; // ebx
  _QWORD *v8; // xmm0_8
  union _ULARGE_INTEGER v9; // rdx
  int v10; // eax
  bool v12; // [rsp+60h] [rbp+8h] BYREF
  bool v13; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  for ( i = 0; i < *((_DWORD *)this + 32); ++i )
  {
    v8 = (_QWORD *)_mm_srli_si128(*(__m128i *)(*((_QWORD *)this + 13) + 16LL * i), 8).m128i_u64[0];
    if ( *(_DWORD *)v8 == 4 )
    {
      v9 = (union _ULARGE_INTEGER)v8[2];
      if ( v9.HighPart == a3 )
      {
        v12 = 0;
        v13 = 0;
        CWindowNode::ProcessVistaBltToken(a2, v9, &v13, &v12);
        if ( v12 )
        {
          v10 = DynArray<CLegacySurfaceManager::UnclaimedToken,0>::RemoveAt((__int64 *)this + 13, i);
          v3 = v10;
          if ( v10 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1EFu);
            return v3;
          }
          WPF::ProcessHeapImpl::Free(v8);
          --i;
        }
      }
    }
  }
  return v3;
}
