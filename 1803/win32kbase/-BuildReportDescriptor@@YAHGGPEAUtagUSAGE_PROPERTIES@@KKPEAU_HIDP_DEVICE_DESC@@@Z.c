/*
 * XREFs of ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C00F5778
 * Callers:
 *     RIMIDE_InitializeDeviceInjection @ 0x1C00F5EA4 (RIMIDE_InitializeDeviceInjection.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C00F5FE0 (RIMIDE_InitializePointerDeviceInjection.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     rimHidP_GetCollectionDescription @ 0x1C00F0D4C (rimHidP_GetCollectionDescription.c)
 *     ?BuildDeviceHeader@@YAHPEAEKPEAKGG@Z @ 0x1C00F53CC (-BuildDeviceHeader@@YAHPEAEKPEAKGG@Z.c)
 *     ?BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z @ 0x1C00F5440 (-BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z.c)
 */

__int64 __fastcall BuildReportDescriptor(
        unsigned __int16 a1,
        __int16 a2,
        struct tagUSAGE_PROPERTIES *a3,
        unsigned int a4,
        unsigned int a5)
{
  struct tagUSAGE_PROPERTIES *v5; // r15
  unsigned int v7; // edi
  char v8; // si
  __int128 v9; // xmm1
  int v10; // edx
  unsigned int v11; // r13d
  int v12; // eax
  unsigned int v13; // r14d
  unsigned __int8 *v14; // rbx
  unsigned int v15; // eax
  unsigned int v16; // r12d
  struct tagUSAGE_PROPERTIES *v17; // r14
  __int128 v18; // xmm1
  unsigned int v19; // edx
  unsigned int v20; // eax
  int v21; // r12d
  unsigned int v22; // r14d
  unsigned int v23; // edi
  unsigned int v24; // eax
  unsigned int v25; // r14d
  char v26; // si
  __int128 v27; // xmm1
  unsigned int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned int v32; // edx
  __int64 v34; // [rsp+30h] [rbp-51h]
  unsigned int v35; // [rsp+48h] [rbp-39h] BYREF
  unsigned int v36; // [rsp+4Ch] [rbp-35h] BYREF
  int v37; // [rsp+50h] [rbp-31h] BYREF
  unsigned int v38; // [rsp+54h] [rbp-2Dh]
  _OWORD v39[2]; // [rsp+58h] [rbp-29h] BYREF
  __int128 v40; // [rsp+78h] [rbp-9h] BYREF
  __int128 v41; // [rsp+88h] [rbp+7h]
  char v42; // [rsp+E0h] [rbp+5Fh]
  unsigned int v45; // [rsp+F8h] [rbp+77h]

  v42 = a2;
  v5 = a3;
  v35 = 0;
  v36 = 0;
  v7 = 0;
  v8 = 0;
  v37 = 1;
  v9 = *((_OWORD *)a3 + 1);
  v39[0] = *(_OWORD *)a3;
  v39[1] = v9;
  if ( a5 || a1 != 13 || (unsigned __int16)(a2 - 4) > 1u )
  {
    v11 = 1;
    if ( a5 )
      v11 = a5;
    if ( 35 * (unsigned __int64)(a4 * v11) > 0xFFFFFFFF )
      return 0LL;
    v10 = 35 * a4 * v11;
    v12 = v11 + 13;
  }
  else
  {
    if ( 35 * (unsigned __int64)a4 > 0xFFFFFFFF )
      return 0LL;
    v10 = 35 * a4;
    v11 = 1;
    v12 = 23;
  }
  v13 = v12 + v10;
  v45 = v12 + v10;
  if ( !(v12 + v10) )
    return 0LL;
  v14 = (unsigned __int8 *)Win32AllocPoolZInit(v13, 0x78707355u);
  if ( v14 )
  {
    BuildDeviceHeader(v14, v13, &v35, a1, v42);
    v15 = a4;
    v16 = 0;
    if ( a4 )
    {
      v17 = v5;
      do
      {
        if ( *(_WORD *)v17 == 1 )
        {
          v18 = *((_OWORD *)v17 + 1);
          v40 = *(_OWORD *)v17;
          v41 = v18;
          v7 = BuildMainItem(v14, v45, &v35, &v40, (__int64)v39, v34, &v37, &v36);
          if ( !v7 )
            goto LABEL_38;
          v8 += v36;
          v15 = a4;
        }
        ++v16;
        v17 = (struct tagUSAGE_PROPERTIES *)((char *)v17 + 32);
      }
      while ( v16 < v15 );
      if ( v7 )
      {
        v19 = v35;
        v20 = v11 - 1;
        v38 = v35;
        v21 = 0;
        v14[v35] = -64;
        v22 = v19 + 1;
        v35 = v19 + 1;
        if ( v11 != 1 )
        {
          while ( 1 )
          {
            if ( !v7 )
            {
LABEL_27:
              v5 = a3;
              v35 = v22;
              goto LABEL_28;
            }
            if ( v19 <= gulCollectionOffset )
              goto LABEL_25;
            v23 = v19 - gulCollectionOffset + 1;
            if ( v45 - v22 <= v23 )
              break;
            memmove(&v14[v22], &v14[gulCollectionOffset], v23);
            v19 = v38;
            v20 = v11 - 1;
            v22 += v23;
            v7 = 1;
LABEL_26:
            if ( ++v21 >= v20 )
              goto LABEL_27;
          }
          v20 = v11 - 1;
LABEL_25:
          v7 = 0;
          goto LABEL_26;
        }
LABEL_28:
        v24 = a4;
        v25 = 0;
        v26 = v11 * v8;
        do
        {
          if ( !*(_WORD *)v5 )
          {
            v27 = *((_OWORD *)v5 + 1);
            v40 = *(_OWORD *)v5;
            v41 = v27;
            v7 = BuildMainItem(v14, v45, &v35, &v40, (__int64)v39, v34, &v37, &v36);
            if ( !v7 )
              goto LABEL_38;
            v26 += v36;
            v24 = a4;
          }
          ++v25;
          v5 = (struct tagUSAGE_PROPERTIES *)((char *)v5 + 32);
        }
        while ( v25 < v24 );
        if ( v7 )
        {
          if ( (v26 & 7) != 0 )
          {
            v28 = v35;
            v14[v35] = 117;
            v14[v28 + 1] = 8 - (v26 & 7);
            v29 = v28 + 2;
            v14[v29] = -107;
            v30 = (unsigned int)(v29 + 1);
            v14[v30] = 1;
            v31 = (unsigned int)(v30 + 1);
            v14[v31] = -127;
            LODWORD(v31) = v31 + 1;
            v14[(unsigned int)v31] = 3;
            v32 = v31 + 1;
          }
          else
          {
            v32 = v35;
          }
          v14[v32] = -64;
          v7 = (int)rimHidP_GetCollectionDescription((__int64)v14, v32 + 1) >= 0;
        }
      }
    }
LABEL_38:
    Win32FreePool((__int64)v14);
  }
  return v7;
}
