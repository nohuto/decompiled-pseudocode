/*
 * XREFs of rimProcessHidInput @ 0x1C010BC90
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00A45FC (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     rimProcessInput @ 0x1C00A4A80 (rimProcessInput.c)
 *     ApiSetProcessHidRawInput @ 0x1C013CA40 (ApiSetProcessHidRawInput.c)
 */

NTSTATUS __fastcall rimProcessHidInput(__int64 a1, __m128i *a2)
{
  NTSTATUS result; // eax

  if ( (*(_QWORD *)(a1 + 768) || *(_DWORD *)(a1 + 976))
    && (result = a2[11].m128i_i32[2], (result & 0x1000) != 0)
    && (result & 0x20000) != 0
    && (result & 0x200000) == 0 )
  {
    if ( (result & 0x80000) == 0 )
    {
      a2[11].m128i_i32[2] = result | 0x80000;
      result = ZwSetEvent(*(HANDLE *)(a1 + 520), 0LL);
    }
    *(_BYTE *)(a1 + 712) = 1;
  }
  else
  {
    rimProcessInput(a1, (__int64)a2, *(const void **)(a2[28].m128i_i64[1] + 24), a2 + 16, 0);
    return ApiSetProcessHidRawInput(a2);
  }
  return result;
}
