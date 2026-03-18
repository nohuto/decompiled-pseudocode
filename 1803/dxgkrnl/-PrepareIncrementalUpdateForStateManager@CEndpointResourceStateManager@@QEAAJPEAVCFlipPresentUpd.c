/*
 * XREFs of ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C00514FC
 * Callers:
 *     ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_K_NPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C0050264 (-CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_K_NPEAVCFlipPropertySet@@PEAPEAVCFlipPresent.c)
 * Callees:
 *     ?GetSerializedUpdate@CResourceStateUpdateSerializer@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C00513A0 (-GetSerializedUpdate@CResourceStateUpdateSerializer@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?IncreaseAddedBufferSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x1C0051428 (-IncreaseAddedBufferSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     ?IncreaseAddedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x1C0051470 (-IncreaseAddedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     ?IncreaseUpdatedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x1C00514B8 (-IncreaseUpdatedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     ?AddUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1C0051F50 (-AddUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     ?Allocate@CResourceStateUpdateSerializer@@QEAAJK@Z @ 0x1C00526BC (-Allocate@CResourceStateUpdateSerializer@@QEAAJK@Z.c)
 */

__int64 __fastcall CEndpointResourceStateManager::PrepareIncrementalUpdateForStateManager(
        CEndpointResourceStateManager *this,
        struct CFlipPresentUpdate *a2)
{
  CEndpointResourceStateManager *v2; // rdi
  signed int v4; // ebx
  int v5; // r8d
  __int64 v6; // rsi
  signed int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // eax
  _QWORD *v10; // r15
  _QWORD *v11; // rdi
  int v12; // eax
  CEndpointResourceStateManager *v13; // r8
  _DWORD *v14; // r9
  _DWORD *v15; // r11
  char v16; // al
  CEndpointResourceStateManager *v17; // r10
  _DWORD *v18; // rcx
  __int64 v19; // rax
  _DWORD *v20; // rdx
  _QWORD *v21; // rdi
  _DWORD *v22; // r13
  _DWORD *v23; // rsi
  _DWORD *v24; // r14
  _QWORD *v25; // r12
  _DWORD *v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // r8
  CPoolBufferResource *v29; // rdx
  __int64 v30; // rax
  _DWORD *v31; // rdx
  PVOID P; // [rsp+20h] [rbp-50h] BYREF
  int v34; // [rsp+28h] [rbp-48h]
  __int128 v35; // [rsp+30h] [rbp-40h]
  __int128 v36; // [rsp+40h] [rbp-30h]
  _DWORD *v37; // [rsp+50h] [rbp-20h]
  __int64 v38; // [rsp+58h] [rbp-18h]
  __int64 v39; // [rsp+60h] [rbp-10h]
  int v40; // [rsp+68h] [rbp-8h]
  struct CFlipPresentUpdate *v41; // [rsp+A8h] [rbp+38h]

  v41 = a2;
  v2 = *(CEndpointResourceStateManager **)this;
  P = 0LL;
  v34 = 0;
  v35 = 0LL;
  v36 = 0LL;
  v4 = 0;
  v37 = 0LL;
  v38 = 0LL;
  v5 = 0;
  v39 = 0LL;
  v40 = 0;
  do
  {
    if ( v2 == this )
      break;
    v6 = (__int64)v2 + 24;
    if ( !v2 )
      v6 = 32LL;
    if ( (*(_BYTE *)v6 & 1) != 0 )
    {
      v7 = CResourceStateUpdateSerializer::IncreaseAddedBufferSize((CResourceStateUpdateSerializer *)&P, 0x10u, 0);
      v5 = HIDWORD(v38);
      v4 = v7;
    }
    if ( v4 >= 0 && (*(_BYTE *)v6 & 2) != 0 )
    {
      v8 = v5;
      v9 = v5 + 16;
      v5 = -1;
      if ( v9 >= v8 )
        v5 = v9;
      v4 = v9 < v8 ? 0xC0000095 : 0;
      HIDWORD(v38) = v5;
    }
    v2 = *(CEndpointResourceStateManager **)v2;
  }
  while ( v4 >= 0 );
  v10 = (_QWORD *)((char *)this + 16);
  v11 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v4 >= 0 )
  {
    do
    {
      if ( v11 == v10 )
        break;
      if ( (*(_BYTE *)(((unsigned __int64)(v11 - 1) & -(__int64)(v11 != 0LL)) + 0x20) & 1) != 0 )
        v4 = CResourceStateUpdateSerializer::IncreaseAddedContentSize((CResourceStateUpdateSerializer *)&P, 0x10u, 0);
      if ( v4 >= 0 )
      {
        if ( (*(_BYTE *)(((unsigned __int64)(v11 - 1) & -(__int64)(v11 != 0LL)) + 0x38) & 1) != 0 )
          v4 = CResourceStateUpdateSerializer::IncreaseUpdatedContentSize(
                 (CResourceStateUpdateSerializer *)&P,
                 (__int64)a2,
                 0);
        if ( v4 >= 0 && (*(_BYTE *)(((unsigned __int64)(v11 - 1) & -(__int64)(v11 != 0LL)) + 0x20) & 2) != 0 )
        {
          a2 = (struct CFlipPresentUpdate *)HIDWORD(v39);
          v12 = -1;
          if ( (unsigned int)(HIDWORD(v39) + 16) >= HIDWORD(v39) )
            v12 = HIDWORD(v39) + 16;
          v4 = (unsigned int)(HIDWORD(v39) + 16) < HIDWORD(v39) ? 0xC0000095 : 0;
          HIDWORD(v39) = v12;
        }
      }
      v11 = (_QWORD *)*v11;
    }
    while ( v4 >= 0 );
    if ( v4 >= 0 )
    {
      v4 = CResourceStateUpdateSerializer::Allocate((CResourceStateUpdateSerializer *)&P, 0x62754346u);
      if ( v4 >= 0 )
      {
        v13 = *(CEndpointResourceStateManager **)this;
        if ( *(CEndpointResourceStateManager **)this != this )
        {
          v14 = (_DWORD *)*((_QWORD *)&v35 + 1);
          v15 = (_DWORD *)v35;
          do
          {
            v16 = *((_BYTE *)v13 + 24);
            v17 = *(CEndpointResourceStateManager **)v13;
            if ( (v16 & 1) != 0 )
            {
              *v15 = 2;
              v18 = v15;
              v19 = *((_QWORD *)v13 + 2);
              v15 += 4;
              *((_QWORD *)v18 + 1) = v19;
              ++*(_DWORD *)(v19 + 24);
              *((_BYTE *)v13 + 24) |= 4u;
              v16 = *((_BYTE *)v13 + 24);
            }
            if ( (v16 & 2) != 0 )
            {
              *v14 = 0;
              v20 = v14;
              v14 += 4;
              *((_QWORD *)v20 + 1) = *(_QWORD *)(*((_QWORD *)v13 + 2) + 40LL);
              *((_BYTE *)v13 + 24) |= 8u;
            }
            v13 = v17;
          }
          while ( v17 != this );
          *((_QWORD *)&v35 + 1) = v14;
          *(_QWORD *)&v35 = v15;
        }
        v21 = (_QWORD *)*v10;
        if ( (_QWORD *)*v10 != v10 )
        {
          v22 = v37;
          v23 = (_DWORD *)*((_QWORD *)&v36 + 1);
          v24 = (_DWORD *)v36;
          do
          {
            v25 = (_QWORD *)*v21;
            if ( (v21[3] & 1) != 0 )
            {
              *v24 = 3;
              v26 = v24;
              v27 = v21[2];
              v24 += 4;
              *((_QWORD *)v26 + 1) = v27;
              ++*(_DWORD *)(v27 + 24);
              *((_BYTE *)v21 + 24) |= 4u;
            }
            if ( (v21[6] & 1) != 0 )
            {
              *v22 = 4;
              v28 = v22;
              v22 += 8;
              v29 = (CPoolBufferResource *)v21[5];
              v28[1] = *(_QWORD *)(v21[2] + 40LL);
              v30 = v21[4];
              v28[3] = v30;
              if ( v30 )
                ++*(_DWORD *)(v30 + 8);
              v28[2] = v29;
              if ( v29 )
              {
                ++*((_DWORD *)v29 + 6);
                CPoolBufferResource::AddUsageReference(v29);
              }
              *((_BYTE *)v21 + 48) |= 2u;
            }
            if ( (v21[3] & 2) != 0 )
            {
              *v23 = 1;
              v31 = v23;
              v23 += 4;
              *((_QWORD *)v31 + 1) = *(_QWORD *)(v21[2] + 40LL);
              *((_BYTE *)v21 + 24) |= 8u;
            }
            v21 = v25;
          }
          while ( v25 != v10 );
          *((_QWORD *)&v36 + 1) = v23;
          *(_QWORD *)&v36 = v24;
          v37 = v22;
        }
        CResourceStateUpdateSerializer::GetSerializedUpdate((CResourceStateUpdateSerializer *)&P, v41);
      }
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v4;
}
