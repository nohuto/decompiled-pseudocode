/*
 * XREFs of ndisDoDirectOidRequest @ 0x1C0043980
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C0009A50 (ndisQuerySetMiniportEx.c)
 *     ndisMDirectOidRequest @ 0x1C0044600 (ndisMDirectOidRequest.c)
 *     NdisFDirectOidRequest @ 0x1C0058920 (NdisFDirectOidRequest.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C0004F50 (ndisDereferenceRef.c)
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ndisReferenceRefEx @ 0x1C001E3C8 (ndisReferenceRefEx.c)
 *     WPP_SF_qqqq @ 0x1C0042F94 (WPP_SF_qqqq.c)
 *     ndisMDoDirectOidRequest @ 0x1C0044710 (ndisMDoDirectOidRequest.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisDoDirectOidRequest(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // r14
  KIRQL v9; // r15
  _QWORD *v10; // rbx
  unsigned int v11; // ebx
  int v12; // esi
  bool v13; // al
  unsigned int Parameter; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v16; // [rsp+38h] [rbp-38h]
  __int64 v17; // [rsp+48h] [rbp-28h]
  int v18; // [rsp+B8h] [rbp+48h] BYREF

  v4 = 0LL;
  v18 = 0;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqqq(0x3Bu, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2, a3, a4);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  *(_QWORD *)(a2 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a2 + 1856) = 2298289;
  if ( a3 )
    v10 = *(_QWORD **)(a3 + 848);
  else
    v10 = *(_QWORD **)(a2 + 2664);
  if ( !a4 )
  {
    v12 = v18;
    goto LABEL_23;
  }
  if ( ndisReferenceRefEx(a4 + 40, 0x12u, &v18) )
  {
    if ( *(_QWORD *)(a4[2] + 296LL) )
    {
      v10 = a4;
    }
    else if ( a4[106] )
    {
      v10 = (_QWORD *)a4[106];
    }
    ndisDereferenceRef(a4 + 40);
  }
  else if ( v18 != 1 )
  {
    v11 = -1073741823;
    if ( v18 == 2 )
      v11 = -1073741670;
    *(_QWORD *)(a2 + 520) = 0LL;
    *(_DWORD *)(a2 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v9);
LABEL_39:
    if ( v11 == 259 )
      goto LABEL_42;
    goto LABEL_40;
  }
  while ( 1 )
  {
    v12 = 0;
    v18 = 0;
LABEL_23:
    if ( *(_BYTE *)v10 != 5 )
      break;
    v4 = v10;
    v13 = ndisReferenceRefEx(v10 + 40, 0x10u, &v18);
    v12 = v18;
    if ( v13 || v18 != 1 )
      break;
    v10 = (_QWORD *)v10[106];
    v4 = 0LL;
  }
  *(_QWORD *)(a2 + 520) = 0LL;
  *(_DWORD *)(a2 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v9);
  if ( v12 )
  {
    v11 = -1073741823;
    if ( v12 == 2 )
      v11 = -1073741670;
    goto LABEL_42;
  }
  if ( (!v4 || *(_QWORD *)(v4[2] + 296LL)) && *(_QWORD *)(*(_QWORD *)(a2 + 3784) + 248LL) )
  {
    if ( v4 )
    {
      v16 = v4;
      v17 = a1;
      v11 = -1073741670;
      if ( KeExpandKernelStackAndCalloutEx(ndisFDoDirectOidRequestInternal, &Parameter, 0x4CCCuLL, 0, 0LL) >= 0 )
        v11 = Parameter;
    }
    else if ( ndisReferenceMiniport(a2) )
    {
      v11 = ndisMDoDirectOidRequest(a2, a1, 0LL);
      ndisDereferenceMiniport(a2, 0x49u);
    }
    else
    {
      v11 = -1073741823;
    }
    goto LABEL_39;
  }
  v11 = -1073741637;
LABEL_40:
  if ( v4 )
    ndisDereferenceRef(v4 + 40);
LABEL_42:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqd(60LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2, v11);
  return v11;
}
