/*
 * XREFs of KdpGetContext @ 0x140797180
 * Callers:
 *     KdpGetContextEx @ 0x140201908 (KdpGetContextEx.c)
 *     KdpSendWaitContinue @ 0x140797EA0 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpCopyContext @ 0x140799624 (KdpCopyContext.c)
 *     KdpInitializeExtendedContext @ 0x140799770 (KdpInitializeExtendedContext.c)
 */

__int64 __fastcall KdpGetContext(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int16 v5; // cx
  __int64 v8; // rdx
  unsigned int v9; // r15d
  int v10; // eax
  unsigned int v11; // r14d

  result = 1280LL;
  v5 = *(_WORD *)(a1 + 6);
  if ( v5 >= 0x500u )
    goto LABEL_12;
  result = v5;
  v8 = KiProcessorBlock[v5];
  if ( !v8 )
    goto LABEL_12;
  if ( v5 != (unsigned __int16)KeGetPcr()->Prcb.Number )
    a3 = *(_QWORD *)(v8 + 25280);
  v9 = *(_DWORD *)(a3 + 48);
  v10 = 1256;
  if ( (v9 & 0x100040) == 0x100040 )
    v10 = MEMORY[0xFFFFF780000003E8] + 800;
  v11 = v10 + 15;
  result = *(unsigned __int16 *)(a2 + 2);
  if ( v11 <= (unsigned int)result )
  {
    KdpInitializeExtendedContext(*(_QWORD *)(a2 + 8), v9);
    result = KdpCopyContext(*(_QWORD *)(a2 + 8), v9, a3);
    if ( (v9 & 0x100040) == 0x100040 )
    {
      *(_WORD *)a2 = v11;
    }
    else
    {
      result = 1232LL;
      *(_WORD *)a2 = 1232;
    }
    *(_DWORD *)(a1 + 8) = 0;
  }
  else
  {
LABEL_12:
    *(_DWORD *)(a1 + 8) = -1073741823;
  }
  return result;
}
