/*
 * XREFs of ??4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z @ 0x1C011A95C
 * Callers:
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C011C7A4 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00480FC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CPointerQFrame::operator=(__int64 a1, __int64 a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // eax
  int v7; // ecx

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  CInputDest::operator=(a1 + 16, a2 + 16);
  v4 = *(_DWORD *)(a1 + 220);
  *(_DWORD *)(a1 + 216) = *(_DWORD *)(a2 + 216);
  *(_DWORD *)(a1 + 220) ^= (*(_DWORD *)(a2 + 220) ^ v4) & 1;
  v5 = *(_DWORD *)(a1 + 220) ^ ((unsigned __int8)*(_DWORD *)(a1 + 220) ^ (unsigned __int8)*(_DWORD *)(a2 + 220)) & 2;
  *(_DWORD *)(a1 + 220) = v5;
  v6 = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)*(_DWORD *)(a2 + 220)) & 4;
  *(_DWORD *)(a1 + 220) = v6;
  v7 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)*(_DWORD *)(a2 + 220)) & 8;
  *(_DWORD *)(a1 + 220) = v7;
  *(_DWORD *)(a1 + 220) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)*(_DWORD *)(a2 + 220)) & 0x10;
  *(_DWORD *)(a1 + 224) = *(_DWORD *)(a2 + 224);
  *(_DWORD *)(a1 + 228) = *(_DWORD *)(a2 + 228);
  *(_QWORD *)(a1 + 232) = *(_QWORD *)(a2 + 232);
  return a1;
}
