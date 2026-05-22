/*
 * XREFs of ?SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z @ 0x18006AA80
 * Callers:
 *     ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z @ 0x18004F364 (-InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z.c)
 *     ?ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18006A8A0 (-ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 */

__int64 __fastcall MouseProcessor::SynthesizeMouseInput(struct InputInfo *a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // eax
  __int64 v4; // rdx
  int v5; // eax
  int v6; // eax
  __int64 v8; // [rsp+20h] [rbp-30h] BYREF
  int v9; // [rsp+28h] [rbp-28h]
  __int64 v10; // [rsp+30h] [rbp-20h]
  __int16 v11; // [rsp+38h] [rbp-18h]
  __int16 v12; // [rsp+3Ah] [rbp-16h]
  __int16 v13; // [rsp+3Ch] [rbp-14h]
  int v14; // [rsp+40h] [rbp-10h]
  int v15; // [rsp+44h] [rbp-Ch]
  __int64 v16; // [rsp+60h] [rbp+10h] BYREF

  v2 = 0;
  memset_0(&v8, 0, 0x28uLL);
  v8 = *((unsigned int *)a1 + 1);
  v9 = *((_DWORD *)a1 + 2);
  v10 = *((_QWORD *)a1 + 2);
  v11 = *((_WORD *)a1 + 261);
  v12 = *((_WORD *)a1 + 262);
  v13 = *((_WORD *)a1 + 263);
  v14 = *((_DWORD *)a1 + 133);
  v15 = *((_DWORD *)a1 + 134);
  v3 = (*((_BYTE *)a1 + 1730) != 0 ? 27 : 11) | 0x20;
  if ( !*((_BYTE *)a1 + 1728) )
    v3 = *((_BYTE *)a1 + 1730) != 0 ? 27 : 11;
  v4 = v3;
  LODWORD(v4) = v3 | 0x80;
  if ( !*((_BYTE *)a1 + 1733) )
    v4 = v3;
  v16 = 0LL;
  v5 = *((_DWORD *)a1 + 124);
  if ( v5 )
  {
    LODWORD(v16) = 2;
    HIDWORD(v16) = v5;
  }
  else
  {
    v6 = v16;
    if ( *((_DWORD *)a1 + 115) )
      v6 = 1;
    LODWORD(v16) = v6;
  }
  if ( !(unsigned int)MITSynthesizeMouseInput(&v8, v4, &v16) )
    return (unsigned int)-2147024809;
  return v2;
}
