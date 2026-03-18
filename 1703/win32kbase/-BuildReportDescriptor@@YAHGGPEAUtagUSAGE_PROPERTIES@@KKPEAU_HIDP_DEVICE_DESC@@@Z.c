/*
 * XREFs of ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C010BD74
 * Callers:
 *     RIMIDE_InitializeDeviceInjection @ 0x1C010C490 (RIMIDE_InitializeDeviceInjection.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C010C594 (RIMIDE_InitializePointerDeviceInjection.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     rimHidP_GetCollectionDescription @ 0x1C0106E48 (rimHidP_GetCollectionDescription.c)
 *     ?BuildDeviceHeader@@YAHPEAEKPEAKGG@Z @ 0x1C010B9BC (-BuildDeviceHeader@@YAHPEAEKPEAKGG@Z.c)
 *     ?BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z @ 0x1C010BA3C (-BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z.c)
 */

__int64 __fastcall BuildReportDescriptor(
        unsigned __int16 a1,
        __int16 a2,
        struct tagUSAGE_PROPERTIES *a3,
        unsigned int a4,
        unsigned int a5)
{
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  struct tagUSAGE_PROPERTIES *v8; // r12
  unsigned int v9; // r15d
  unsigned int v10; // edi
  char v11; // si
  bool v12; // zf
  unsigned __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // r14d
  unsigned __int8 *v16; // rbx
  unsigned int v17; // eax
  unsigned int v18; // r13d
  struct tagUSAGE_PROPERTIES *v19; // r14
  __int128 v20; // xmm1
  unsigned int v21; // r14d
  unsigned int v22; // eax
  unsigned int v23; // ecx
  int v24; // r13d
  unsigned int v25; // r14d
  __int64 v26; // r15
  unsigned int v27; // edi
  unsigned int v28; // eax
  unsigned int v29; // r14d
  char v30; // si
  __int128 v31; // xmm1
  unsigned int v32; // edx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v39; // [rsp+30h] [rbp-61h]
  unsigned int v40; // [rsp+48h] [rbp-49h] BYREF
  unsigned int v41; // [rsp+4Ch] [rbp-45h] BYREF
  unsigned int v42; // [rsp+50h] [rbp-41h]
  int v43; // [rsp+54h] [rbp-3Dh]
  int v44; // [rsp+58h] [rbp-39h] BYREF
  unsigned int v45; // [rsp+5Ch] [rbp-35h]
  __int128 v46; // [rsp+68h] [rbp-29h] BYREF
  __int128 v47; // [rsp+78h] [rbp-19h]
  _OWORD v48[5]; // [rsp+88h] [rbp-9h] BYREF
  char v49; // [rsp+F0h] [rbp+5Fh]
  unsigned int v52; // [rsp+108h] [rbp+77h]

  v49 = a2;
  v5 = *(_OWORD *)a3;
  v6 = *((_OWORD *)a3 + 1);
  v40 = 0;
  v8 = a3;
  v41 = 0;
  v9 = 1;
  v44 = 1;
  v10 = 0;
  v11 = 0;
  v48[0] = v5;
  v48[1] = v6;
  v12 = a5 == 0;
  if ( a5 )
    goto LABEL_7;
  if ( a1 != 13 || (unsigned __int16)(a2 - 4) > 1u )
  {
    v12 = 1;
LABEL_7:
    if ( !v12 )
      v9 = a5;
    v43 = v9;
    v13 = 35LL * a4 * v9;
    if ( v13 > 0xFFFFFFFF )
      return 0LL;
    v14 = v9 + 1;
    goto LABEL_11;
  }
  v13 = 35LL * a4;
  if ( v13 > 0xFFFFFFFF )
    return 0LL;
  v43 = 1;
  v14 = 11;
LABEL_11:
  v15 = v14 + v13 + 12;
  v52 = v15;
  if ( !v15 )
    return 0LL;
  v16 = (unsigned __int8 *)Win32AllocPoolZInit(v15, 2020635477LL);
  if ( v16 )
  {
    BuildDeviceHeader(v16, v15, &v40, a1, v49);
    v17 = a4;
    v18 = 0;
    if ( a4 )
    {
      v19 = v8;
      do
      {
        if ( *(_WORD *)v19 == 1 )
        {
          v20 = *((_OWORD *)v19 + 1);
          v46 = *(_OWORD *)v19;
          v47 = v20;
          v10 = BuildMainItem(v16, v52, &v40, &v46, (__int64)v48, v39, &v44, &v41);
          if ( !v10 )
            goto LABEL_39;
          v11 += v41;
          v17 = a4;
        }
        ++v18;
        v19 = (struct tagUSAGE_PROPERTIES *)((char *)v19 + 32);
      }
      while ( v18 < v17 );
      if ( v10 )
      {
        v21 = v40;
        v22 = v9 - 1;
        v23 = v40;
        v42 = v9 - 1;
        v45 = v40;
        v24 = 0;
        v16[v40] = -64;
        v25 = v21 + 1;
        v40 = v25;
        if ( v9 != 1 )
        {
          v26 = gulCollectionOffset;
          while ( 1 )
          {
            if ( !v10 )
            {
LABEL_29:
              LOBYTE(v9) = v43;
              v8 = a3;
              v40 = v25;
              goto LABEL_30;
            }
            if ( v23 <= (unsigned int)v26 )
              goto LABEL_27;
            v27 = v23 - v26 + 1;
            if ( v52 - v25 <= v27 )
              break;
            memmove(&v16[v25], &v16[v26], v27);
            v23 = v45;
            v25 += v27;
            v22 = v42;
            v10 = 1;
LABEL_28:
            if ( ++v24 >= v22 )
              goto LABEL_29;
          }
          v22 = v42;
LABEL_27:
          v10 = 0;
          goto LABEL_28;
        }
LABEL_30:
        v28 = a4;
        v29 = 0;
        v30 = v9 * v11;
        do
        {
          if ( !*(_WORD *)v8 )
          {
            v31 = *((_OWORD *)v8 + 1);
            v46 = *(_OWORD *)v8;
            v47 = v31;
            v10 = BuildMainItem(v16, v52, &v40, &v46, (__int64)v48, v39, &v44, &v41);
            if ( !v10 )
              goto LABEL_39;
            v30 += v41;
            v28 = a4;
          }
          ++v29;
          v8 = (struct tagUSAGE_PROPERTIES *)((char *)v8 + 32);
        }
        while ( v29 < v28 );
        if ( v10 )
        {
          v32 = v40;
          if ( (v30 & 7) != 0 )
          {
            v16[v40] = 117;
            v33 = v32 + 1;
            v16[v33] = 8 - (v30 & 7);
            v34 = (unsigned int)(v33 + 1);
            v16[v34] = -107;
            v35 = (unsigned int)(v34 + 1);
            v16[v35] = 1;
            v36 = (unsigned int)(v35 + 1);
            v16[v36] = -127;
            v37 = (unsigned int)(v36 + 1);
            v16[v37] = 3;
            v32 = v37 + 1;
          }
          v16[v32] = -64;
          v10 = (int)rimHidP_GetCollectionDescription((__int64)v16, v32 + 1) >= 0;
        }
      }
    }
LABEL_39:
    Win32FreePool((__int64)v16);
  }
  return v10;
}
