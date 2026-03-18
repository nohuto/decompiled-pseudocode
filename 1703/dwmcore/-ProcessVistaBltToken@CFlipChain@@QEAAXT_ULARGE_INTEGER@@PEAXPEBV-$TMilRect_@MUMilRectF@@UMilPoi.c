/*
 * XREFs of ?ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B1304
 * Callers:
 *     ?ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z @ 0x1800D0400 (-ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z.c)
 *     ?ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE@@@Z @ 0x18012AB4C (-ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTI.c)
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x18012AD28 (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
 * Callees:
 *     ??0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z @ 0x1800B0CC0 (--0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z.c)
 *     ?WriteSharedDataToDwm@CFlipChain@@AEAAJXZ @ 0x1800B1154 (-WriteSharedDataToDwm@CFlipChain@@AEAAJXZ.c)
 *     ?MarkBufferComplete@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4BufferState@1@@Z @ 0x1800B1244 (-MarkBufferComplete@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 */

__int64 __fastcall CFlipChain::ProcessVistaBltToken(struct CFlipChain *a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v8; // zf
  __int64 result; // rax
  __int64 v10; // rcx
  CFlipChain *v11; // [rsp+40h] [rbp+8h] BYREF

  CFlipChain::CSyncSharedDataGuard::CSyncSharedDataGuard((CFlipChain::CSyncSharedDataGuard *)&v11, a1);
  v8 = *((_DWORD *)a1 + 40) == 0;
  result = *((_QWORD *)a1 + 4);
  v10 = *(_QWORD *)(result + 392);
  *((_QWORD *)a1 + 34) = v10;
  if ( !v8 )
    result = CFlipChain::MarkBufferComplete((__int64)a1, a2, a3, a4, v10 != 0 ? 2 : 4);
  *((_QWORD *)a1 + 34) = 0LL;
  if ( v11 )
    return CFlipChain::WriteSharedDataToDwm(v11);
  return result;
}
