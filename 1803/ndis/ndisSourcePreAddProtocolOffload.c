/*
 * XREFs of ndisSourcePreAddProtocolOffload @ 0x1C00B3D1C
 * Callers:
 *     ndisOidPreAddPMProtocolOffload @ 0x1C00B3BB0 (ndisOidPreAddPMProtocolOffload.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 *     ndisCreatePMProtocolOffloadEntry @ 0x1C00B3F34 (ndisCreatePMProtocolOffloadEntry.c)
 *     ndisIsPMProtocolOffloadSupported @ 0x1C00B3FB8 (ndisIsPMProtocolOffloadSupported.c)
 *     ndisComparePMProtocolOffloads @ 0x1C00B3FE4 (ndisComparePMProtocolOffloads.c)
 */

__int64 __fastcall ndisSourcePreAddProtocolOffload(__int64 a1, __int64 a2, _QWORD *a3, _BYTE *a4)
{
  unsigned int v8; // ebx
  unsigned int *v9; // r15
  __int64 v10; // rdx
  _QWORD *v11; // rdi
  __int64 PMProtocolOffloadEntry; // rcx

  v8 = 0;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0x5Cu, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, a1, a3);
  v9 = (unsigned int *)a3[5];
  *a4 = 1;
  if ( a1 )
    v10 = *(_QWORD *)(a1 + 16);
  else
    v10 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int8)ndisIsPMProtocolOffloadSupported(v9[3], v10) )
  {
    if ( a1 )
      v11 = *(_QWORD **)(a1 + 512);
    else
      v11 = *(_QWORD **)(a2 + 872);
    if ( !v11 )
      goto LABEL_9;
    do
    {
      if ( (unsigned __int8)ndisComparePMProtocolOffloads(v11 + 6, v9) )
        break;
      v11 = (_QWORD *)*v11;
    }
    while ( v11 );
    if ( v11 )
    {
      v8 = -1073676267;
    }
    else
    {
LABEL_9:
      PMProtocolOffloadEntry = ndisCreatePMProtocolOffloadEntry(v9);
      if ( PMProtocolOffloadEntry )
      {
        *(_QWORD *)(PMProtocolOffloadEntry + 24) = a3[13];
        a3[20] = PMProtocolOffloadEntry;
        *a4 = 0;
      }
      else
      {
        v8 = -1073741670;
      }
    }
  }
  else
  {
    v8 = -1073741637;
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qdD(0x5Du, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, a1, (unsigned __int8)*a4, v8);
  return v8;
}
