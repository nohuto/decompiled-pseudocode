/*
 * XREFs of RIMSetContactBoundary @ 0x1C0107FBC
 * Callers:
 *     RIMAddSimulatedPointerDeviceData @ 0x1C0105A80 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMApplyTransforms @ 0x1C01073A8 (RIMApplyTransforms.c)
 * Callees:
 *     RIMTransformPhysicalPointToScreen @ 0x1C0108634 (RIMTransformPhysicalPointToScreen.c)
 *     RIMTransformPointerDevicePointToPhysical @ 0x1C01087CC (RIMTransformPointerDevicePointToPhysical.c)
 */

__int64 __fastcall RIMSetContactBoundary(__int64 a1, _DWORD *a2, unsigned __int64 a3, unsigned int a4, unsigned int a5)
{
  int v5; // edi
  int v9; // eax
  unsigned __int64 v10; // r8
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // r8d
  _QWORD v17[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v18; // [rsp+50h] [rbp+20h] BYREF
  unsigned __int64 v19; // [rsp+60h] [rbp+30h] BYREF

  v19 = a3;
  v5 = 0;
  LODWORD(v18) = a3 - (a4 >> 1);
  v9 = a3 + (a4 >> 1);
  v10 = HIDWORD(a3);
  LODWORD(v17[0]) = v9;
  HIDWORD(v18) = v10 - (a5 >> 1);
  HIDWORD(v17[0]) = v10 + (a5 >> 1);
  v11 = *(_DWORD *)(a1 + 260);
  if ( (v11 & 0x20) == 0 || (v11 & 0x10000) != 0 )
  {
    RIMTransformPointerDevicePointToPhysical(a1, v18, &v19);
    v5 = RIMTransformPhysicalPointToScreen(a1, &v19, &v18);
    if ( v5 < 0 )
      return (unsigned int)v5;
    RIMTransformPointerDevicePointToPhysical(a1, v17[0], &v19);
    v5 = RIMTransformPhysicalPointToScreen(a1, &v19, v17);
    goto LABEL_7;
  }
  if ( (int)IsApplyMagInputTransformSupported() >= 0 )
  {
    ApplyMagInputTransform(&v18, v17);
LABEL_7:
    if ( v5 < 0 )
      return (unsigned int)v5;
  }
  v12 = v18;
  v13 = v17[0];
  v14 = HIDWORD(v18);
  v15 = HIDWORD(v17[0]);
  *a2 = v18;
  a2[2] = v13;
  a2[1] = v14;
  a2[3] = v15;
  if ( v12 == v13 && a4 )
    a2[2] = v12 + 1;
  if ( v14 == v15 && a5 )
    a2[3] = v14 + 1;
  return (unsigned int)v5;
}
