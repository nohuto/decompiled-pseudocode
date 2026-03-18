/*
 * XREFs of ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x1C0016638
 * Callers:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0015ADC (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 * Callees:
 *     <none>
 */

int __fastcall CMouseProcessor::MouseInputDataEx::ComputeRawMouseProcessingOptions(__int64 a1)
{
  int v1; // r9d
  int v3; // r10d
  int v4; // r8d
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // edx
  int v12; // ecx
  int v13; // ebx
  int result; // eax

  v1 = *(_DWORD *)(a1 + 56);
  v3 = *(_DWORD *)(a1 + 72);
  v4 = (v3 == 0 ? 0x20 : 0) | 2;
  if ( (v1 & 0x1000) == 0 )
    v4 = *(_DWORD *)(a1 + 72) == 0 ? 0x20 : 0;
  v5 = v4 | 8;
  if ( (v1 & 0x80u) == 0 )
    v5 = v4;
  v6 = v5 | 1;
  if ( (v1 & 0x20) == 0 )
    v6 = v5;
  v7 = v6 | 0x40;
  if ( (v1 & 0x800) == 0 )
    v7 = v6;
  v8 = v7 | 0x100;
  if ( (v1 & 0x4000) == 0 )
    v8 = v7;
  v9 = v8 | 0x200;
  if ( (v1 & 0x8000) == 0 )
    v9 = v8;
  v10 = v9 | 4;
  if ( (*(_BYTE *)(a1 + 2) & 8) == 0 )
    v10 = v9;
  v11 = v10 | 0x800;
  if ( (v1 & 0x400) == 0 )
    v11 = v10;
  v12 = v11 | 0x80;
  if ( (v1 & 0x10) == 0 )
    v12 = v11;
  v13 = v12 | 0x400;
  if ( (v1 & 0x10000) == 0 )
    v13 = v12;
  if ( v3
    || (*(_DWORD *)(a1 + 60) & 4) != 0
    || (unsigned int)IsEditionPostRawMouseInputMessageSupported() == -1073741637 )
  {
    v13 |= 0x10u;
  }
  result = v13 | 0x1000;
  if ( *(_DWORD *)(a1 + 72) != 4 )
    return v13;
  return result;
}
