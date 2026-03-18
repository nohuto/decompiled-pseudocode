/*
 * XREFs of rimProcessMouseInput @ 0x1C0099B70
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C009990C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     rimStackAttachAndProcessInput @ 0x1C0099CF0 (rimStackAttachAndProcessInput.c)
 */

NTSTATUS __fastcall rimProcessMouseInput(__int64 a1, __int64 a2)
{
  int v2; // r9d
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  NTSTATUS result; // eax

  v2 = a2 + 256;
  if ( *(int *)(a2 + 256) >= 0 )
  {
    v5 = *(_QWORD *)(a2 + 264);
    if ( v5 - 24 <= 0xD8 )
    {
      v6 = (unsigned int)(v5 / 0x18) - 1;
      *(_OWORD *)(a2 + 708) = *(_OWORD *)(a2 + 24 * v6 + 468);
      *(_QWORD *)(a2 + 724) = *(_QWORD *)(a2 + 24 * v6 + 484);
    }
  }
  if ( !*(_QWORD *)(a1 + 768) && !*(_DWORD *)(a1 + 976) )
    return rimStackAttachAndProcessInput(a1, a2, (int)a2 + 468, v2, 0);
  result = *(_DWORD *)(a2 + 184);
  if ( (result & 0x1000) == 0 || (result & 0x20000) == 0 || (result & 0x200000) != 0 )
    return rimStackAttachAndProcessInput(a1, a2, (int)a2 + 468, v2, 0);
  if ( (result & 0x80000) == 0 )
  {
    *(_DWORD *)(a2 + 184) = result | 0x80000;
    result = ZwSetEvent(*(HANDLE *)(a1 + 520), 0LL);
  }
  *(_BYTE *)(a1 + 712) = 1;
  return result;
}
