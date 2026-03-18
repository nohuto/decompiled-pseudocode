/*
 * XREFs of IrqLibpGetVectorInput @ 0x1C0056E40
 * Callers:
 *     <none>
 * Callees:
 *     IrqLibAcquireArbiterLock @ 0x1C0056D90 (IrqLibAcquireArbiterLock.c)
 *     IcGetInputState @ 0x1C0058B0C (IcGetInputState.c)
 *     ProcessorIdtEntryToGsiv @ 0x1C008E574 (ProcessorIdtEntryToGsiv.c)
 */

__int64 __fastcall IrqLibpGetVectorInput(unsigned int a1, __int64 a2, _DWORD *a3, _DWORD *a4, _OWORD *a5)
{
  __int64 v10; // r8
  int InputState; // ebx
  int v12; // r10d
  __int128 v13; // xmm0
  _OWORD *v14; // rax
  _BYTE v15[28]; // [rsp+20h] [rbp-D8h] BYREF
  int v16; // [rsp+3Ch] [rbp-BCh]
  __int128 v17; // [rsp+58h] [rbp-A0h]
  unsigned int v18; // [rsp+100h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  IrqLibAcquireArbiterLock(0);
  InputState = ProcessorIdtEntryToGsiv(a1, a2, v10, &v18);
  if ( InputState >= 0 )
  {
    if ( v18 < 0xFFF00000 )
    {
      InputState = IcGetInputState(v18, v15);
      if ( InputState >= 0 )
      {
        InputState = 0;
        v13 = v17;
        *a4 = v16;
        v14 = a5;
        *a3 = v12;
        *v14 = v13;
      }
    }
    else
    {
      InputState = -1073741811;
    }
  }
  KeSetEvent((PRKEVENT)Object, 0, 0);
  return (unsigned int)InputState;
}
