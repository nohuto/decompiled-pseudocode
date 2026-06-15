/*
 * XREFs of ?GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z @ 0x1800EBABC
 * Callers:
 *     ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI6666@Z @ 0x1800EA648 (-DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GetPacketSizesFromConstraints(
        const struct PacketSizeConstraints *a1,
        unsigned int a2,
        unsigned __int16 a3,
        struct _GUID *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned int *a8,
        unsigned int *a9,
        unsigned int *a10,
        unsigned int *a11)
{
  unsigned int *v11; // r10
  unsigned int v14; // esi
  unsigned int v15; // ebp
  unsigned __int64 v16; // r8
  unsigned int v17; // ecx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r14
  unsigned int v20; // ebx
  unsigned int v21; // eax
  unsigned int v22; // edx
  unsigned int v23; // r9d
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned int v27; // ebx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r11
  unsigned __int64 v33; // rax
  unsigned int v34; // r9d
  signed int v35; // edx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r8
  unsigned int v39; // esi
  unsigned int v40; // r9d
  signed int v41; // edx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // r8
  unsigned int v44; // edi
  unsigned int v45; // eax
  unsigned int v46; // r9d
  unsigned int v47; // r10d
  signed int v48; // edx
  unsigned __int64 v49; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v11 = (unsigned int *)*((_QWORD *)a1 + 1);
  v14 = 1;
  v15 = a3;
  v16 = 5000LL;
  v17 = v15;
  v18 = *v11;
  v19 = a2;
  if ( v18 > 0x1388 )
    v16 = (unsigned int)v18;
  v20 = v11[1] + 1;
  v21 = v15;
  if ( v15 >= v20 )
    v17 = v11[1] + 1;
  if ( v15 <= v20 )
    v21 = v11[1] + 1;
  v22 = v21 % v17;
  while ( 1 )
  {
    v23 = v22;
    if ( !v22 )
      break;
    v22 = v17 % v22;
    v17 = v23;
  }
  v24 = v20 * (unsigned __int64)(v15 / v17);
  if ( v24 > 0xFFFFFFFF )
  {
    v25 = 5199LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x88890008LL);
    return 2290679816LL;
  }
  v27 = (unsigned int)v24 / v15;
  if ( a9 )
    *a9 = (unsigned int)v24 / v15;
  v28 = 0LL;
  if ( v11[3] )
  {
    while ( 1 )
    {
      v29 = *(_QWORD *)&v11[6 * v28 + 4] - *(_QWORD *)&a4->Data1;
      if ( !v29 )
        v29 = *(_QWORD *)&v11[6 * v28 + 6] - *(_QWORD *)a4->Data4;
      if ( !v29 )
        break;
      v28 = (unsigned int)(v28 + 1);
      if ( (unsigned int)v28 >= v11[3] )
        goto LABEL_25;
    }
    v30 = 3 * v28;
    v31 = v11[2 * v30 + 9];
    if ( v16 > v31 )
      v31 = v16;
    v16 = v31;
    if ( v11[2 * v30 + 8] )
      v14 = v11[2 * v30 + 8];
  }
LABEL_25:
  v32 = -1LL;
  v33 = v16 * v19;
  v34 = -1;
  if ( is_mul_ok(v16, v19) )
  {
    if ( v33 )
    {
      v36 = v33 - 1;
      if ( !(v16 * v19) )
        v36 = -1LL;
      v37 = v36 / (10000000 * v15);
      v38 = -1LL;
      if ( v37 + 1 >= v37 )
        v38 = v37 + 1;
      v35 = v37 + 1 < v37 ? 0x80070216 : 0;
      if ( v37 + 1 >= v37 )
      {
        if ( v38 <= 0xFFFFFFFF )
          v34 = v38;
        v35 = v38 > 0xFFFFFFFF ? 0x80070216 : 0;
      }
    }
    else
    {
      v34 = 0;
      v35 = 0;
    }
  }
  else
  {
    v35 = -2147024362;
  }
  if ( v35 < 0 )
  {
    v25 = 5222LL;
    goto LABEL_12;
  }
  if ( v14 <= v34 )
    v14 = v34;
  v39 = v14 - 1 - (v14 - 1) % v27 + v27;
  *a10 = v39;
  v40 = -1;
  if ( is_mul_ok(0x186A0uLL, v19) )
  {
    if ( 100000 * v19 )
    {
      v42 = (100000 * v19 - 1) / (10000000 * v15);
      v43 = -1LL;
      if ( v42 + 1 >= v42 )
        v43 = v42 + 1;
      v41 = v42 + 1 < v42 ? 0x80070216 : 0;
      if ( v42 + 1 >= v42 )
      {
        if ( v43 <= 0xFFFFFFFF )
          v40 = v43;
        v41 = v43 > 0xFFFFFFFF ? 0x80070216 : 0;
      }
    }
    else
    {
      v40 = 0;
      v41 = 0;
    }
  }
  else
  {
    v41 = -2147024362;
  }
  if ( v41 < 0 )
  {
    v25 = 5228LL;
    goto LABEL_12;
  }
  if ( v40 <= v39 )
    v40 = v39;
  v44 = v40 - 1 - (v40 - 1) % v27 + v27;
  *a8 = v44;
  if ( *(_BYTE *)a1 )
  {
    v45 = v11[2];
    v46 = -1;
    if ( v45 )
      v46 = v27 * (v45 / (v27 * v15));
    v47 = -1;
    if ( is_mul_ok(0x1E8480uLL, v19) )
    {
      if ( 2000000 * v19 )
      {
        v49 = (2000000 * v19 - 1) / (10000000 * v15);
        if ( v49 + 1 >= v49 )
          v32 = v49 + 1;
        v48 = v49 + 1 < v49 ? 0x80070216 : 0;
        if ( v49 + 1 >= v49 )
        {
          if ( v32 <= 0xFFFFFFFF )
            v47 = v32;
          v48 = v32 > 0xFFFFFFFF ? 0x80070216 : 0;
        }
      }
      else
      {
        v47 = 0;
        v48 = 0;
      }
    }
    else
    {
      v48 = -2147024362;
    }
    if ( v48 < 0 )
    {
      v25 = 5245LL;
      goto LABEL_12;
    }
    if ( v47 <= v39 )
      v47 = v39;
    if ( v46 >= v47 - 1 - (v47 - 1) % v27 + v27 )
      v46 = v47 - 1 - (v47 - 1) % v27 + v27;
    if ( v46 <= v44 )
      v46 = v44;
  }
  else
  {
    v46 = v40 - 1 - (v40 - 1) % v27 + v27;
  }
  *a11 = v46;
  return 0LL;
}
