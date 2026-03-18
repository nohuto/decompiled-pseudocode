/*
 * XREFs of RIMApplyTransforms @ 0x1C0105998
 * Callers:
 *     rimTransformGeometry @ 0x1C01129FC (rimTransformGeometry.c)
 * Callees:
 *     EtwTracePointerDeviceTransformationStart @ 0x1C00E0F70 (EtwTracePointerDeviceTransformationStart.c)
 *     EtwTracePointerDeviceTransformationStop @ 0x1C00E0FA0 (EtwTracePointerDeviceTransformationStop.c)
 *     RIMApplyDisplayOrientationToExtendedProps @ 0x1C0105840 (RIMApplyDisplayOrientationToExtendedProps.c)
 *     RIMSetContactBoundary @ 0x1C01061B0 (RIMSetContactBoundary.c)
 *     RIMTransformCoordinates @ 0x1C01062D0 (RIMTransformCoordinates.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1C0106780 (RIMTransformPhysicalPointToScreen.c)
 *     RIMTransformPointerDevicePointToPhysical @ 0x1C01067F4 (RIMTransformPointerDevicePointToPhysical.c)
 *     ApiSetTransformForInputMagnification @ 0x1C013D414 (ApiSetTransformForInputMagnification.c)
 */

__int64 __fastcall RIMApplyTransforms(__int64 a1, __int64 a2, unsigned int *a3, int a4, _DWORD *a5)
{
  int v8; // r13d
  int v9; // r14d
  int v10; // eax
  bool v11; // zf
  _DWORD *v12; // r15
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // ecx
  unsigned int v18; // ecx
  int v20; // [rsp+60h] [rbp+8h] BYREF

  v8 = a2;
  v9 = 0;
  EtwTracePointerDeviceTransformationStart(*a3, a2, (__int64)a3);
  v10 = *(_DWORD *)(a1 + 276);
  if ( (v10 & 0x20) == 0 || (v10 & 0x8000) != 0 )
  {
    RIMTransformCoordinates(a1, v8, (_DWORD)a3 + 4, a4, (__int64)&v20);
    v11 = (*(_DWORD *)(a1 + 276) & 0x800) == 0;
    v12 = a5;
    *a5 = v20;
    if ( v11 )
    {
      *(_QWORD *)(a3 + 3) = *(_QWORD *)(a3 + 1);
    }
    else
    {
      RIMTransformCoordinates(a1, v8, (_DWORD)a3 + 12, a4, (__int64)&v20);
      *v12 = v20;
    }
    if ( (unsigned int)(*(_DWORD *)(a1 + 24) - 1) <= 4 )
      RIMApplyDisplayOrientationToExtendedProps(*(_DWORD *)(a1 + 224), a3 + 14);
  }
  RIMTransformPointerDevicePointToPhysical(a1, *(_QWORD *)(a3 + 1), a3 + 30);
  v13 = *(_DWORD *)(a1 + 276);
  if ( (v13 & 0x20) == 0 || (v13 & 0x8000) != 0 )
  {
    v9 = RIMTransformPhysicalPointToScreen(a1, a3 + 30, a3 + 28);
    if ( v9 < 0 )
      goto LABEL_18;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 160);
    a3[1] += v14;
    a3[2] += HIDWORD(v14);
    *((_QWORD *)a3 + 14) = *(_QWORD *)(a3 + 1);
    ApiSetTransformForInputMagnification(a1, a3 + 30);
    *(_QWORD *)(a3 + 3) = *(_QWORD *)(a3 + 1);
  }
  if ( a3[5] )
  {
    if ( ((*(_DWORD *)(a1 + 224) - 2) & 0xFFFFFFFD) == 0 )
    {
      v17 = *(_DWORD *)(a1 + 276);
      if ( (v17 & 0x20) == 0 || (v17 & 0x8000) != 0 )
      {
        v18 = a3[6];
        a3[6] = a3[7];
        a3[7] = v18;
      }
    }
    RIMSetContactBoundary(a1, (_DWORD)a3 + 184, *(_QWORD *)(a3 + 3), a3[6], a3[7]);
    *(_OWORD *)(a3 + 42) = *(_OWORD *)(a3 + 46);
  }
LABEL_18:
  EtwTracePointerDeviceTransformationStop(*a3, v15, v16);
  return (unsigned int)v9;
}
