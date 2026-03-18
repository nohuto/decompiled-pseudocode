/*
 * XREFs of CreateCompatiblePublicDC @ 0x1C013C380
 * Callers:
 *     xxxClientExtTextOutW @ 0x1C013BDEC (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C013C0B8 (xxxClientGetTextExtentPointW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0202510 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C02028F0 (xxxClientPSMTextOut.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C001AC58 (GreExtGetObjectW.c)
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0023138 (GreCreateCompatibleBitmapInternal.c)
 *     GreSelectFont @ 0x1C007E920 (GreSelectFont.c)
 *     GreGetLayout @ 0x1C007EAB0 (GreGetLayout.c)
 *     GreSetTextAlign @ 0x1C0080E00 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C0080F98 (GreGetTextAlign.c)
 *     NtGdiGetDCObject @ 0x1C00E25B0 (NtGdiGetDCObject.c)
 *     GetDPIServerInfo @ 0x1C0108F94 (GetDPIServerInfo.c)
 */

HDC __fastcall CreateCompatiblePublicDC(HDC a1, __int64 *a2)
{
  HDC result; // rax
  __int64 CompatibleDC; // rax
  HDC v6; // rdi
  HBRUSH DCObject; // rax
  int v8; // r15d
  int v9; // r14d
  __int64 CompatibleBitmapInternal; // rax
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 DPIServerInfo; // rax
  __int64 v17; // rbx
  int TextAlign; // eax
  char v19[4]; // [rsp+60h] [rbp-38h] BYREF
  unsigned int v20; // [rsp+64h] [rbp-34h]
  unsigned int v21; // [rsp+68h] [rbp-30h]

  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) )
    return a1;
  CompatibleDC = GreCreateCompatibleDC(a1);
  v6 = (HDC)CompatibleDC;
  if ( !CompatibleDC )
    return 0LL;
  if ( !(unsigned int)GreSetDCOwnerEx(CompatibleDC, 2147483650LL, 0LL, 1LL)
    || (DCObject = (HBRUSH)NtGdiGetDCObject((__int64)a1, 327680), !(unsigned int)GreExtGetObjectW(DCObject, 32LL, v19)) )
  {
    GreDeleteDC(v6);
    return 0LL;
  }
  v8 = v21;
  v9 = v20;
  CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a1, v20, v21, 0, 0LL, 0LL);
  v11 = CompatibleBitmapInternal;
  if ( !CompatibleBitmapInternal || !(unsigned int)GreSetBitmapOwner(CompatibleBitmapInternal, 2147483650LL) )
  {
    GreDeleteDC(v6);
    if ( v11 )
      GreDeleteObject(v11);
    return 0LL;
  }
  GreSelectBitmap(v6, v11);
  DPIServerInfo = GetDPIServerInfo(v13, v12, v14, v15);
  v17 = GreSelectFont((__int64)a1, *(_QWORD *)(DPIServerInfo + 24));
  GreSelectFont((__int64)a1, v17);
  GreSelectFont((__int64)v6, v17);
  TextAlign = GreGetTextAlign(a1);
  GreSetTextAlign(v6, TextAlign);
  if ( (GreGetLayout(a1) & 1) != 0 )
    GreSetLayout(v6, (unsigned int)(v9 - 1), 1LL);
  NtGdiBitBltInternal(v6, 0, 0, v9, v8, a1, 0, 0, 13369376, 0, 0);
  result = v6;
  *a2 = v11;
  return result;
}
