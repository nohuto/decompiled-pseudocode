/*
 * XREFs of ?ndisIfInitGetCompartmentList@@YAJXZ @ 0x1C00237EC
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C00231C0 (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     ?ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0023A44 (-ndisIfCreateCompartmentBlock@@YAJIPEAU_GUID@@PEAU_NDIS_NSI_COMPARTMENT_RW@@PEAPEAU_NDIS_IF_COMP.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 */

__int64 ndisIfInitGetCompartmentList(void)
{
  void *v0; // rdi
  int v1; // ebx
  unsigned int v2; // ecx
  unsigned int v3; // edx
  __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned int v6; // r14d
  unsigned int v7; // ecx
  __int64 v8; // r13
  __int64 v9; // rsi
  unsigned __int8 v10; // al
  unsigned __int16 v11; // dx
  int v12; // eax
  __int128 v14; // xmm0
  __int64 v15; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v16; // [rsp+30h] [rbp-D8h]
  _QWORD v17[10]; // [rsp+38h] [rbp-D0h] BYREF
  struct _NDIS_IF_COMPARTMENT_BLOCK *v18; // [rsp+88h] [rbp-80h] BYREF
  char *PoolWithTag; // [rsp+90h] [rbp-78h]
  _QWORD v20[14]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v21[206]; // [rsp+108h] [rbp+0h] BYREF

  v0 = 0LL;
  v18 = 0LL;
  LODWORD(v15) = 1;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_(35LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids);
  memset(v20, 0, sizeof(v20));
  LODWORD(v20[1]) = 0;
  v20[2] = &NPI_MS_NDIS_MODULEID;
  LODWORD(v20[8]) = 1640;
  LODWORD(v20[3]) = 7;
  v20[4] = 0x100000000LL;
  v20[5] = 0LL;
  LODWORD(v20[6]) = 4;
  v20[7] = 0LL;
  LODWORD(v20[13]) = 0;
  v1 = NsiEnumerateObjectsAllParametersEx(v20);
  if ( v1 >= 0 )
  {
    v2 = v20[13];
    if ( LODWORD(v20[13]) )
    {
      while ( 1 )
      {
        if ( v0 )
        {
          ExFreePoolWithTag(v0, 0);
          v2 = v20[13];
        }
        v3 = (4 * v2 + 7) & 0xFFFFFFF8;
        v0 = 0LL;
        if ( 4 * (unsigned __int64)v2 > 0xFFFFFFFF || v3 + 1640 * v2 < v3 )
        {
          v1 = -1073741670;
          goto LABEL_22;
        }
        v4 = v3;
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v3 + 1640LL * v2, 0x6669444Eu);
        v0 = PoolWithTag;
        if ( !PoolWithTag )
          break;
        memset(PoolWithTag, 0, v4 + 1640LL * LODWORD(v20[13]));
        v20[5] = PoolWithTag;
        v20[7] = &PoolWithTag[v4];
        LODWORD(v20[6]) = 4;
        LODWORD(v20[8]) = 1640;
        v1 = NsiEnumerateObjectsAllParametersEx(v20);
        if ( v1 != 261 )
          goto LABEL_11;
        v2 = v20[13];
      }
      v1 = -1073741670;
LABEL_11:
      if ( v1 >= 0 )
      {
        v5 = v20[7];
        v6 = 0;
        v7 = v20[13];
        v8 = v20[5];
        v16 = v20[7];
        if ( LODWORD(v20[13]) )
        {
          do
          {
            v9 = 1640LL * v6 + v5;
            if ( *(_BYTE *)v9 == 0xAD )
            {
              v10 = *(_BYTE *)(v9 + 1);
              if ( v10 )
              {
                v11 = *(_WORD *)(v9 + 2);
                if ( v11 >= 0x448u )
                {
                  if ( v10 < 3u || v11 < 0x664u )
                  {
                    *(_DWORD *)v9 = 107479981;
                    memset((void *)(v9 + 1096), 0, 0x204uLL);
                    *(_DWORD *)(v9 + 1616) = 0;
                    *(_DWORD *)(v9 + 1612) = 1;
                    if ( *(_DWORD *)(v8 + 4LL * v6) == 1 )
                    {
                      *(_WORD *)(v9 + 1096) = 38;
                      *(_OWORD *)(v9 + 1098) = *(_OWORD *)L"Default Compartment";
                      *(_OWORD *)(v9 + 1114) = *(_OWORD *)L"Compartment";
                      *(_DWORD *)(v9 + 1130) = *(_DWORD *)L"ent";
                      *(_WORD *)(v9 + 1134) = aDefaultCompart[18];
                      v14 = *(_OWORD *)(v9 + 1080);
                      *(_DWORD *)(v9 + 1616) |= 4u;
                      *(_OWORD *)(v9 + 1620) = v14;
                    }
                    memset(v17, 0, 0x48uLL);
                    LODWORD(v17[3]) = 7;
                    v17[0] = 0LL;
                    v17[2] = &NPI_MS_NDIS_MODULEID;
                    LODWORD(v17[1]) = 0;
                    LODWORD(v17[8]) = 1640;
                    v17[4] = 0LL;
                    v17[5] = v8 + 4LL * v6;
                    LODWORD(v17[6]) = 4;
                    v17[7] = v9;
                    NsiSetAllParametersEx(v17);
                  }
                  v12 = ndisIfCreateCompartmentBlock(
                          *(_DWORD *)(v8 + 4LL * v6),
                          0LL,
                          (struct _NDIS_NSI_COMPARTMENT_RW *)v9,
                          &v18);
                  v7 = v20[13];
                  v1 = v12;
                }
                v5 = v16;
              }
            }
            ++v6;
          }
          while ( v6 < v7 );
          v0 = PoolWithTag;
        }
      }
    }
    else
    {
      memset(v17, 0, 0x48uLL);
      v17[0] = 0LL;
      v17[5] = &v15;
      LODWORD(v17[1]) = 0;
      v17[2] = &NPI_MS_NDIS_MODULEID;
      LODWORD(v17[3]) = 7;
      v17[4] = 0x100000002LL;
      LODWORD(v17[6]) = 4;
      memset(v21, 0, 0x668uLL);
      LOWORD(v21[137]) = 38;
      *(_DWORD *)((char *)&v21[141] + 2) = *(_DWORD *)L"ent";
      *(_OWORD *)&v21[135] = xmmword_1C0087468;
      HIWORD(v21[141]) = aDefaultCompart[18];
      v17[7] = v21;
      LODWORD(v21[0]) = 107479981;
      *(_OWORD *)((char *)&v21[137] + 2) = *(_OWORD *)L"Default Compartment";
      HIDWORD(v21[201]) = 1;
      *(_OWORD *)((char *)&v21[139] + 2) = *(_OWORD *)L"Compartment";
      LODWORD(v21[202]) = 4;
      LODWORD(v17[8]) = 1640;
      v1 = NsiSetAllParametersEx(v17);
      if ( v1 >= 0 )
        goto LABEL_24;
    }
LABEL_22:
    if ( v0 )
      ExFreePoolWithTag(v0, 0);
  }
LABEL_24:
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_d(36LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, (unsigned int)v1);
  return (unsigned int)v1;
}
