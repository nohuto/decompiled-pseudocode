/*
 * XREFs of ?ResolvePendingConnections@CPipeInstance@@QEAAJ_K0W4PIPE_CONNECTION_RESOLUTION_OPTIONS@@@Z @ 0x1400303E4
 * Callers:
 *     ?AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400110C0 (-AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14003F99C (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     ?AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140041410 (-AddPipeToLoopbackConnection@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140045C60 (-AddPipeToLoopbackConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140005A34 (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ?SetHandle@CConnectionInstance@@QEAAJ_K@Z @ 0x14000B4D0 (-SetHandle@CConnectionInstance@@QEAAJ_K@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031DE4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14003BD2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CPipeInstance::ResolvePendingConnections(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 *v4; // rdi
  CConnectionInstance *v9; // rcx
  _QWORD **v10; // rsi
  __int64 *v11; // rbx
  int v12; // eax
  __int64 v13; // rax
  _QWORD *v14; // rax
  bool v15; // zf
  int v17; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (__int64 *)a1[31];
  while ( v4 )
  {
    v9 = (CConnectionInstance *)v4[2];
    v10 = (_QWORD **)(v4 + 1);
    v11 = v4;
    v4 = (__int64 *)v4[1];
    if ( *((_QWORD *)v9 + 1) == a2 )
    {
      v12 = CConnectionInstance::SetHandle(v9, a3);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x119A,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)(unsigned int)v12,
          v17);
      if ( a4 == 1 )
      {
        v13 = *v11;
        if ( v11 == (__int64 *)a1[30] )
          a1[30] = v13;
        else
          **v10 = v13;
        v14 = *v10;
        if ( v11 == (__int64 *)a1[31] )
          a1[31] = v14;
        else
          *(_QWORD *)(*v11 + 8) = v14;
        *v11 = a1[34];
        v15 = a1[32]-- == 1LL;
        a1[34] = v11;
        if ( v15 )
          ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((__int64)(a1 + 30));
      }
    }
  }
  return 0LL;
}
