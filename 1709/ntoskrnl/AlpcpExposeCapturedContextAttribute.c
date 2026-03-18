/*
 * XREFs of AlpcpExposeCapturedContextAttribute @ 0x140570190
 * Callers:
 *     AlpcpReceiveMessage @ 0x14049E3C0 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404A2660 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     AlpcpGetMessageAttributeOffset @ 0x1405701E8 (AlpcpGetMessageAttributeOffset.c)
 *     AlpcpGetMessageAttributeOffset32 @ 0x140582EF4 (AlpcpGetMessageAttributeOffset32.c)
 */

void __fastcall AlpcpExposeCapturedContextAttribute(int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 MessageAttributeOffset; // rax
  __int64 v5; // r9
  _DWORD *v6; // r10
  int v7; // r11d
  __int64 MessageAttributeOffset32; // rax
  _DWORD *v9; // rax

  if ( a4 )
  {
    *(_DWORD *)(a4 + 4) = 0;
    if ( (a3 & 0x20000000) != 0 )
    {
      if ( a1 < 0 )
      {
        MessageAttributeOffset32 = AlpcpGetMessageAttributeOffset32(a3, 0x20000000LL);
        v9 = (_DWORD *)(v5 + MessageAttributeOffset32);
        *v9 = *v6;
        v9[1] = v6[2];
        v9[2] = v6[4];
        v9[3] = v6[5];
        v9[4] = v6[6];
      }
      else
      {
        MessageAttributeOffset = AlpcpGetMessageAttributeOffset(a3, 0x20000000LL);
        *(_OWORD *)(MessageAttributeOffset + v5) = *(_OWORD *)v6;
        *(_OWORD *)(MessageAttributeOffset + v5 + 16) = *((_OWORD *)v6 + 1);
      }
      if ( *(_QWORD *)v6 )
        *(_DWORD *)(v5 + 4) |= v7;
    }
  }
}
