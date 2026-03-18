/*
 * XREFs of rimProcessKeyboardInput @ 0x1C010BD30
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00A45FC (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     rimStackAttachAndProcessInput @ 0x1C00A49F0 (rimStackAttachAndProcessInput.c)
 *     RIMTransferKeyboardInjectionDeviceDataFifoToDataBuffer @ 0x1C010A844 (RIMTransferKeyboardInjectionDeviceDataFifoToDataBuffer.c)
 */

void __fastcall rimProcessKeyboardInput(__int64 a1, __int64 a2)
{
  int v4; // eax

  if ( (*(_QWORD *)(a1 + 768) || *(_DWORD *)(a1 + 976))
    && (v4 = *(_DWORD *)(a2 + 184), (v4 & 0x1000) != 0)
    && (v4 & 0x20000) != 0
    && (v4 & 0x200000) == 0 )
  {
    if ( (v4 & 0x80000) == 0 )
    {
      *(_DWORD *)(a2 + 184) = v4 | 0x80000;
      ZwSetEvent(*(HANDLE *)(a1 + 520), 0LL);
    }
    *(_BYTE *)(a1 + 712) = 1;
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 184) & 0x1000) != 0 )
      RIMTransferKeyboardInjectionDeviceDataFifoToDataBuffer(4096LL, a2);
    rimStackAttachAndProcessInput(a1, a2, a2 + 492, a2 + 256, 0);
  }
}
