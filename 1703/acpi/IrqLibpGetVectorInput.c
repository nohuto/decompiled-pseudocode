/*
 * XREFs of IrqLibpGetVectorInput @ 0x1C00059E0
 * Callers:
 *     <none>
 * Callees:
 *     IcGetInputState @ 0x1C0005AA4 (IcGetInputState.c)
 *     IrqLibAcquireArbiterLock @ 0x1C0005C3C (IrqLibAcquireArbiterLock.c)
 *     ProcessorIdtEntryToGsiv @ 0x1C0084B78 (ProcessorIdtEntryToGsiv.c)
 */

__int64 __fastcall IrqLibpGetVectorInput(unsigned int a1, __int64 a2, _DWORD *a3, _DWORD *a4, _OWORD *a5)
{
  __int64 v9; // r8
  int InputState; // ebx
  int v11; // r9d
  __int128 v12; // xmm0
  _OWORD *v13; // rax
  _BYTE v15[28]; // [rsp+20h] [rbp-D8h] BYREF
  int v16; // [rsp+3Ch] [rbp-BCh]
  __int128 v17; // [rsp+58h] [rbp-A0h]
  unsigned int v18; // [rsp+100h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  IrqLibAcquireArbiterLock(0LL);
  InputState = ProcessorIdtEntryToGsiv(a1, a2, v9, &v18);
  if ( InputState >= 0 )
  {
    if ( v18 >= 0xFFF00000 )
    {
      InputState = -1073741811;
    }
    else
    {
      InputState = IcGetInputState(v18, v15);
      if ( InputState >= 0 )
      {
        InputState = 0;
        v12 = v17;
        *a4 = v16;
        v13 = a5;
        *a3 = v11;
        *v13 = v12;
      }
    }
  }
  KeSetEvent(Object, 0, 0);
  return (unsigned int)InputState;
}
