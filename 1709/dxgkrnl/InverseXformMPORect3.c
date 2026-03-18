/*
 * XREFs of InverseXformMPORect3 @ 0x1C01D03D8
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D07FC (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall InverseXformMPORect3(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  unsigned __int64 result; // rax
  int v5; // r10d
  int v6; // r9d
  int v7; // r12d
  int v8; // r14d
  int v9; // r13d
  int v10; // r15d
  int v11; // ebp
  int v12; // ebx
  int v13; // edi
  int v14; // esi
  int v15; // r8d
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  _UNKNOWN *retaddr; // [rsp+20h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  if ( (*a2 & 2) != 0 )
    v5 = a2[7] - a3[2];
  else
    v5 = *a3 - a2[5];
  if ( (*a2 & 1) != 0 )
    v6 = a2[8] - a3[3];
  else
    v6 = a3[1] - a2[6];
  v7 = a2[1];
  v8 = a2[3] - v7;
  v9 = a2[2];
  v10 = a2[4] - v9;
  v11 = a2[7] - a2[5];
  v12 = a2[8] - a2[6];
  v13 = a3[2] - *a3;
  v14 = a3[3] - a3[1];
  if ( v11 > 0 && v12 > 0 )
  {
    switch ( a2[13] )
    {
      case 1:
        v15 = v7 + v5 * v8 / v11;
        v19 = v6 * v10;
        break;
      case 2:
        v15 = v7 + v6 * v8 / v12;
        v16 = v10 * (v11 - v13 - v5);
LABEL_14:
        v17 = v16 / v11 + v9;
        a1[2] = v15 + v8 * v14 / v12;
        v18 = v10 * v13 / v11;
LABEL_19:
        result = (unsigned int)(v17 + v18);
        *a1 = v15;
        a1[3] = result;
        a1[1] = v17;
        return result;
      case 3:
        v15 = v7 + v8 * (v11 - v13 - v5) / v11;
        v19 = v10 * (v12 - v14 - v6);
        break;
      case 4:
        v15 = v7 + v8 * (v12 - v14 - v6) / v12;
        v16 = v5 * v10;
        goto LABEL_14;
      default:
        return result;
    }
    v17 = v19 / v12 + v9;
    a1[2] = v15 + v8 * v13 / v11;
    v18 = v10 * v14 / v12;
    goto LABEL_19;
  }
  *(_OWORD *)a1 = *(_OWORD *)(a2 + 1);
  return result;
}
