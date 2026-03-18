/*
 * XREFs of ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C00397F0
 * Callers:
 *     GreCreateDisplayDC @ 0x1C002C340 (GreCreateDisplayDC.c)
 *     hbmSelectBitmapInternal @ 0x1C00A02A0 (hbmSelectBitmapInternal.c)
 *     GreRestoreDCInternal @ 0x1C00A0C40 (GreRestoreDCInternal.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

void __fastcall DC::vUpdate_VisRect(DC *this, struct REGION *a2)
{
  GdiHandleManager *v3; // r12
  unsigned int v5; // ebx
  __int64 v6; // r15
  unsigned int v7; // edx
  signed int v8; // ecx
  __int64 v9; // r8
  unsigned int v10; // eax
  __int64 v11; // r13
  unsigned int v12; // edx
  signed int v13; // ecx
  __int64 v14; // rax
  DC *v15; // rdx
  int v16; // ecx
  __m128i v17; // xmm1
  int v18; // ecx
  int v19; // eax
  __m128i v20; // xmm0
  GdiHandleManager *v21; // rbp
  unsigned int v22; // eax
  __int64 v23; // rdi
  unsigned int v24; // r10d
  unsigned int v25; // edx
  signed int v26; // ecx
  __int64 v27; // r8
  __int64 v28; // rbx
  unsigned int v29; // eax
  unsigned int v30; // r8d
  unsigned __int64 v31; // rdx
  signed int v32; // ecx
  __int64 v33; // rax
  DC *v34; // rdx
  __m128i v35; // [rsp+20h] [rbp-38h]

  v3 = gpHandleManager;
  v5 = (unsigned __int16)*(_DWORD *)this | (*(_DWORD *)this >> 8) & 0xFF0000;
  if ( v5 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*(_DWORD *)this,
                                  1)
           + 13) == HIWORD(v5) )
        v5 = (unsigned __int16)v5;
    }
    else
    {
      v5 = (unsigned __int16)*(_DWORD *)this;
    }
  }
  v6 = *((_QWORD *)v3 + 2);
  v7 = *(_DWORD *)(v6 + 2056);
  if ( v5 >= v7 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16) )
    goto LABEL_53;
  if ( v5 >= v7 )
  {
    v8 = ((v5 - v7) >> 16) + 1;
    if ( (v5 - v7) >> 16 != -2 )
      goto LABEL_7;
LABEL_53:
    v11 = 0LL;
    goto LABEL_12;
  }
  v8 = 0;
LABEL_7:
  v9 = *(_QWORD *)(v6 + 8LL * v8 + 8);
  v10 = v5;
  if ( v8 )
    v10 = v5 - (v8 << 16) - v7 + 0x10000;
  v11 = 0LL;
  if ( v10 < *(_DWORD *)(v9 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * ((unsigned __int64)v10 >> 8))
                 + 16LL * (unsigned __int8)v10
                 + 8) )
  {
    v11 = *(_QWORD *)v9 + 24LL * v10;
  }
LABEL_12:
  if ( v5 >= 0x10000 )
  {
    if ( *(_DWORD *)v3 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)v3 + 2),
                                  (unsigned __int16)v5,
                                  1)
           + 13) == HIWORD(v5) )
        v5 = (unsigned __int16)v5;
    }
    else
    {
      v5 = (unsigned __int16)v5;
    }
  }
  v12 = *(_DWORD *)(v6 + 2056);
  if ( v5 >= v12 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16) )
    goto LABEL_60;
  if ( v5 >= v12 )
  {
    v13 = ((v5 - v12) >> 16) + 1;
    if ( (v5 - v12) >> 16 == -2 )
      goto LABEL_60;
  }
  else
  {
    v13 = 0;
  }
  v14 = *(_QWORD *)(v6 + 8LL * v13 + 8);
  if ( v13 )
    v5 = v5 - (v13 << 16) - v12 + 0x10000;
  if ( v5 < *(_DWORD *)(v14 + 20) )
  {
    v15 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * ((unsigned __int64)v5 >> 8))
                 + 16LL * (unsigned __int8)v5
                 + 8);
    goto LABEL_20;
  }
LABEL_60:
  v15 = 0LL;
LABEL_20:
  if ( v15 != this )
    v11 = 0LL;
  if ( (*(_BYTE *)(v11 + 15) & 4) != 0 )
  {
    if ( !a2 )
      goto LABEL_62;
    if ( *((_DWORD *)a2 + 21) == 1 )
    {
      v16 = 1;
    }
    else
    {
      v16 = 3;
      if ( *((_DWORD *)a2 + 20) <= 0xA0u )
        v16 = 2;
    }
    *(_DWORD *)(*((_QWORD *)this + 10) + 392LL) = v16;
    if ( *((_DWORD *)a2 + 21) == 1 )
    {
LABEL_62:
      v20 = (__m128i)rclEmpty;
    }
    else
    {
      v18 = *((_DWORD *)this + 362);
      v35 = *(__m128i *)((char *)a2 + 88);
      v17 = v35;
      v35.m128i_i32[2] -= v18;
      v35.m128i_i32[0] = _mm_cvtsi128_si32(v17) - v18;
      v19 = *((_DWORD *)this + 363);
      v35.m128i_i32[1] -= v19;
      v35.m128i_i32[3] -= v19;
      v20 = v35;
    }
    *(__m128i *)(*((_QWORD *)this + 10) + 396LL) = v20;
    v21 = gpHandleManager;
    v22 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)gpHandleManager,
            (unsigned __int16)*(_DWORD *)this | (*(_DWORD *)this >> 8) & 0xFF0000u);
    v23 = *((_QWORD *)v21 + 2);
    v24 = v22;
    v25 = *(_DWORD *)(v23 + 2056);
    if ( v22 < v25 + ((*(unsigned __int16 *)(v23 + 2) + 0xFFFF) << 16) )
    {
      if ( v22 < v25 )
      {
        v26 = 0;
LABEL_32:
        v27 = *(_QWORD *)(v23 + 8LL * v26 + 8);
        if ( v26 )
          v22 = v22 - (v26 << 16) - v25 + 0x10000;
        v28 = 0LL;
        if ( v22 < *(_DWORD *)(v27 + 20)
          && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * ((unsigned __int64)v22 >> 8))
                       + 16LL * (unsigned __int8)v22
                       + 8) )
        {
          v28 = *(_QWORD *)v27 + 24LL * v22;
        }
LABEL_37:
        v29 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v21, v24);
        v30 = *(_DWORD *)(v23 + 2056);
        v31 = v29;
        if ( v29 < v30 + ((*(unsigned __int16 *)(v23 + 2) + 0xFFFF) << 16) )
        {
          if ( v29 >= v30 )
          {
            v32 = ((v29 - v30) >> 16) + 1;
            if ( (v29 - v30) >> 16 == -2 )
              goto LABEL_48;
          }
          else
          {
            v32 = 0;
          }
          v33 = *(_QWORD *)(v23 + 8LL * v32 + 8);
          if ( v32 )
            v31 = (_DWORD)v31 - (v32 << 16) - v30 + 0x10000;
          if ( (unsigned int)v31 < *(_DWORD *)(v33 + 20) )
          {
            v34 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v33 + 24) + 8 * (v31 >> 8)) + 16LL * (unsigned __int8)v31 + 8);
LABEL_44:
            if ( v34 != this )
              v28 = 0LL;
            *(_BYTE *)(v28 + 15) &= ~4u;
            return;
          }
        }
LABEL_48:
        v34 = 0LL;
        goto LABEL_44;
      }
      v26 = ((v22 - v25) >> 16) + 1;
      if ( (v22 - v25) >> 16 != -2 )
        goto LABEL_32;
    }
    v28 = 0LL;
    goto LABEL_37;
  }
}
