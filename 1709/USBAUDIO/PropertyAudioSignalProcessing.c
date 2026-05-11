/*
 * XREFs of PropertyAudioSignalProcessing @ 0x1C0018240
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0008100 (memmove.c)
 *     PropertyAudioSignalProcessingPinValidation @ 0x1C00180EC (PropertyAudioSignalProcessingPinValidation.c)
 */

__int64 __fastcall PropertyAudioSignalProcessing(IRP *a1, _DWORD *a2, ULONG *a3)
{
  ULONG Length; // ebp
  PKSFILTER FilterFromIrp; // r15
  int v8; // r9d
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  unsigned int v11; // ecx
  ULONG v12; // eax
  ULONG v13; // ebx

  Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  v8 = PropertyAudioSignalProcessingPinValidation(a1, a2);
  if ( v8 >= 0 )
  {
    if ( (a2[5] & 1) != 0 )
    {
      v9 = (__int64)FilterFromIrp->Descriptor->PinDescriptors + 176 * (unsigned int)a2[6];
      v10 = 16LL * *(unsigned int *)(v9 + 160);
      if ( v10 > 0xFFFFFFFF )
        return (unsigned int)-1073741436;
      v11 = 16 * *(_DWORD *)(v9 + 160);
      v12 = v10 + 8;
      if ( v11 + 8 < v11 )
      {
        return (unsigned int)-1073741436;
      }
      else
      {
        v13 = v12;
        if ( Length )
        {
          if ( Length >= v12 )
          {
            memmove(a3 + 2, *(const void **)(v9 + 168), v11);
            *a3 = v13;
            v8 = 0;
            a3[1] = *(_DWORD *)(v9 + 160);
          }
          else
          {
            v8 = -1073741789;
          }
        }
        else
        {
          v8 = -2147483643;
        }
        a1->IoStatus.Information = v13;
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v8;
}
