/*
 * XREFs of ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C00524A0
 * Callers:
 *     GreRestoreDC @ 0x1C00400D0 (GreRestoreDC.c)
 *     GreCreateDisplayDC @ 0x1C0055870 (GreCreateDisplayDC.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C004E360 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

void __fastcall DC::vUpdate_VisRect(DC *this, struct REGION *a2)
{
  GdiHandleManager *v3; // r15
  unsigned int v5; // eax
  __int64 v6; // r14
  int v7; // ebx
  unsigned int v8; // edx
  unsigned int v9; // ecx
  __int64 v10; // r10
  unsigned int v11; // r8d
  __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // r8d
  unsigned __int64 v16; // rdx
  unsigned int v17; // ecx
  __int64 v18; // r9
  DC *v19; // rdx
  int v20; // ebx
  __m128i v21; // xmm0
  int v22; // ecx
  int v23; // eax
  __m128i v24; // xmm0
  struct _ENTRY *EntryFromObject; // rax
  __m128i v26; // [rsp+20h] [rbp-28h]

  v3 = gpHandleManager;
  v5 = GdiHandleManager::DecodeIndex(
         (GdiHandleEntryDirectory **)gpHandleManager,
         (unsigned __int16)*(_DWORD *)this | (*(_DWORD *)this >> 8) & 0xFF0000u);
  v6 = *((_QWORD *)v3 + 2);
  v7 = 0;
  v8 = *(_DWORD *)(v6 + 2056);
  if ( v5 >= v8 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16) )
  {
    v12 = 0LL;
  }
  else
  {
    if ( v5 >= v8 )
      v9 = ((v5 - v8) >> 16) + 1;
    else
      v9 = 0;
    v10 = *(_QWORD *)(v6 + 8LL * v9 + 8);
    if ( v9 )
      v11 = v5 + ((1 - v9) << 16) - v8;
    else
      v11 = v5;
    v12 = 0LL;
    if ( v11 >= *(_DWORD *)(v10 + 20) )
      v13 = 0LL;
    else
      v13 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8 * ((unsigned __int64)v11 >> 8))
                      + 16LL * (unsigned __int8)v11
                      + 8);
    if ( v13 )
      v12 = *(_QWORD *)v10 + 24LL * v11;
  }
  v14 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v3, v5);
  v15 = *(_DWORD *)(v6 + 2056);
  v16 = v14;
  if ( v14 >= v15 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16) )
    goto LABEL_34;
  if ( v14 >= v15 )
    v17 = ((v14 - v15) >> 16) + 1;
  else
    v17 = 0;
  v18 = *(_QWORD *)(v6 + 8LL * v17 + 8);
  if ( v17 )
    v16 = ((1 - v17) << 16) - v15 + v14;
  if ( (unsigned int)v16 >= *(_DWORD *)(v18 + 20) )
LABEL_34:
    v19 = 0LL;
  else
    v19 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * (v16 >> 8)) + 16LL * (unsigned __int8)v16 + 8);
  if ( v19 != this )
    v12 = 0LL;
  if ( (*(_BYTE *)(v12 + 15) & 4) != 0 )
  {
    if ( !a2
      || (*((_DWORD *)a2 + 21) == 1 ? (v20 = 1) : (LOBYTE(v7) = *((_DWORD *)a2 + 20) > 0xA0u, v20 = v7 + 2),
          *(_DWORD *)(*((_QWORD *)this + 10) + 392LL) = v20,
          *((_DWORD *)a2 + 21) == 1) )
    {
      v24 = (__m128i)rclEmpty;
    }
    else
    {
      v22 = *((_DWORD *)this + 362);
      v26 = *(__m128i *)((char *)a2 + 88);
      v21 = v26;
      v26.m128i_i32[2] -= v22;
      v26.m128i_i32[0] = _mm_cvtsi128_si32(v21) - v22;
      v23 = *((_DWORD *)this + 363);
      v26.m128i_i32[1] -= v23;
      v26.m128i_i32[3] -= v23;
      v24 = v26;
    }
    *(__m128i *)(*((_QWORD *)this + 10) + 396LL) = v24;
    EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, this);
    *((_BYTE *)EntryFromObject + 15) &= ~4u;
  }
}
