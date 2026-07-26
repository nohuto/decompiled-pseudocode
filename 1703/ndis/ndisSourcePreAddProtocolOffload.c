/*
 * XREFs of ndisSourcePreAddProtocolOffload @ 0x1C00D7A54
 * Callers:
 *     ndisOidPreAddPMProtocolOffload @ 0x1C00D50A0 (ndisOidPreAddPMProtocolOffload.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 *     ndisComparePMProtocolOffloads @ 0x1C00D48E4 (ndisComparePMProtocolOffloads.c)
 *     ndisCreatePMProtocolOffloadEntry @ 0x1C00D4A60 (ndisCreatePMProtocolOffloadEntry.c)
 *     ndisIsPMProtocolOffloadSupported @ 0x1C00D4CB0 (ndisIsPMProtocolOffloadSupported.c)
 */

__int64 __fastcall ndisSourcePreAddProtocolOffload(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  unsigned int v8; // ebx
  int *v9; // r15
  __int64 v10; // rdx
  _QWORD *v11; // rdi
  _DWORD *PMProtocolOffloadEntry; // rcx

  v8 = 0;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qq(0x5Cu, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, a1, a3);
  v9 = *(int **)(a3 + 40);
  *a4 = 1;
  if ( a1 )
    v10 = *(_QWORD *)(a1 + 16);
  else
    v10 = *(_QWORD *)(a2 + 32);
  if ( ndisIsPMProtocolOffloadSupported(v9[3], v10) )
  {
    if ( a1 )
      v11 = *(_QWORD **)(a1 + 512);
    else
      v11 = *(_QWORD **)(a2 + 872);
    if ( !v11 )
      goto LABEL_16;
    do
    {
      if ( ndisComparePMProtocolOffloads((__int64)(v11 + 6), (__int64)v9) )
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
LABEL_16:
      PMProtocolOffloadEntry = ndisCreatePMProtocolOffloadEntry(v9, *(_DWORD *)(a3 + 8));
      if ( PMProtocolOffloadEntry )
      {
        *((_QWORD *)PMProtocolOffloadEntry + 3) = *(_QWORD *)(a3 + 104);
        *(_QWORD *)(a3 + 160) = PMProtocolOffloadEntry;
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
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qdD(0x5Du, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, a1, (unsigned __int8)*a4, v8);
  return v8;
}
