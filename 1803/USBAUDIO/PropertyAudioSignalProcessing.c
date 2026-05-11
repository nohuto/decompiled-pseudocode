/*
 * XREFs of PropertyAudioSignalProcessing @ 0x1C001C5F0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C000A240 (memmove.c)
 *     PropertyAudioSignalProcessingPinValidation @ 0x1C001C498 (PropertyAudioSignalProcessingPinValidation.c)
 */

__int64 __fastcall PropertyAudioSignalProcessing(IRP *a1, _DWORD *a2, ULONG *a3)
{
  ULONG Length; // r15d
  PKSFILTER FilterFromIrp; // rsi
  __int64 result; // rax
  __int64 v9; // rbp
  unsigned __int64 v10; // rax
  unsigned int v11; // ecx
  ULONG v12; // eax
  ULONG v13; // ebx

  Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  result = PropertyAudioSignalProcessingPinValidation(a1, a2);
  if ( (int)result >= 0 )
  {
    if ( (a2[5] & 1) != 0 )
    {
      v9 = (__int64)FilterFromIrp->Descriptor->PinDescriptors + 176 * (unsigned int)a2[6];
      v10 = 16LL * *(unsigned int *)(v9 + 160);
      if ( v10 > 0xFFFFFFFF )
        return 3221225860LL;
      v11 = 16 * *(_DWORD *)(v9 + 160);
      v12 = v10 + 8;
      if ( v11 + 8 < v11 )
      {
        return 3221225860LL;
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
            a3[1] = *(_DWORD *)(v9 + 160);
            result = 0LL;
          }
          else
          {
            result = 3221225507LL;
          }
        }
        else
        {
          result = 2147483653LL;
        }
        a1->IoStatus.Information = v13;
      }
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
