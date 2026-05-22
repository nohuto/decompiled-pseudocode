/*
 * XREFs of ?SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z @ 0x18006C8E0
 * Callers:
 *     ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KKMM@Z @ 0x1800580E0 (-InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KKMM@Z.c)
 *     ?ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18006C5D0 (-ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     memset @ 0x1800CAA5E (memset.c)
 */

__int64 __fastcall MouseProcessor::SynthesizeMouseInput(struct InputInfo *a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // eax
  __int64 v4; // rdx
  int v5; // eax
  int v6; // eax
  _QWORD v8[6]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v9; // [rsp+60h] [rbp+10h] BYREF

  v2 = 0;
  memset(v8, 0, 0x28uLL);
  v8[0] = *((unsigned int *)a1 + 1);
  LODWORD(v8[1]) = *((_DWORD *)a1 + 2);
  v8[2] = *((_QWORD *)a1 + 2);
  LODWORD(v8[3]) = *(_DWORD *)((char *)a1 + 698);
  WORD2(v8[3]) = *((_WORD *)a1 + 351);
  v8[4] = *(_QWORD *)((char *)a1 + 708);
  v3 = (*((_BYTE *)a1 + 2770) != 0 ? 27 : 11) | 0x20;
  if ( !*((_BYTE *)a1 + 2768) )
    v3 = *((_BYTE *)a1 + 2770) != 0 ? 27 : 11;
  v4 = v3;
  LODWORD(v4) = v3 | 0x80;
  if ( !*((_BYTE *)a1 + 2773) )
    v4 = v3;
  v9 = 0LL;
  v5 = *((_DWORD *)a1 + 168);
  if ( v5 )
  {
    LODWORD(v9) = 2;
    HIDWORD(v9) = v5;
  }
  else
  {
    v6 = v9;
    if ( *((_DWORD *)a1 + 158) )
      v6 = 1;
    LODWORD(v9) = v6;
  }
  if ( !(unsigned int)MITSynthesizeMouseInput(v8, v4, &v9) )
    return (unsigned int)-2147024809;
  return v2;
}
