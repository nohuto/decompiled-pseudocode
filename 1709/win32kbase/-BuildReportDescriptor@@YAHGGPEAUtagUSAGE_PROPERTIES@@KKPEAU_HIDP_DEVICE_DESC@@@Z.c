/*
 * XREFs of ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C010AD28
 * Callers:
 *     RIMIDE_InitializeDeviceInjection @ 0x1C010B444 (RIMIDE_InitializeDeviceInjection.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C010B548 (RIMIDE_InitializePointerDeviceInjection.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     rimHidP_GetCollectionDescription @ 0x1C0107B34 (rimHidP_GetCollectionDescription.c)
 *     ?BuildDeviceHeader@@YAHPEAEKPEAKGG@Z @ 0x1C010A97C (-BuildDeviceHeader@@YAHPEAEKPEAKGG@Z.c)
 *     ?BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z @ 0x1C010A9F0 (-BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z.c)
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
  unsigned int v9; // r13d
  __int128 v10; // xmm1
  bool v11; // zf
  int v12; // edx
  int v13; // eax
  unsigned int v14; // r14d
  unsigned __int8 *v15; // rbx
  unsigned int v16; // eax
  unsigned int v17; // r12d
  struct tagUSAGE_PROPERTIES *v18; // r14
  __int128 v19; // xmm1
  unsigned int v20; // r14d
  unsigned int v21; // eax
  unsigned int v22; // edx
  int v23; // r12d
  unsigned int v24; // r14d
  unsigned int v25; // edi
  unsigned int v26; // eax
  unsigned int v27; // r14d
  char v28; // si
  __int128 v29; // xmm1
  unsigned int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v37; // [rsp+30h] [rbp-51h]
  unsigned int v38; // [rsp+48h] [rbp-39h] BYREF
  unsigned int v39; // [rsp+4Ch] [rbp-35h] BYREF
  int v40; // [rsp+50h] [rbp-31h] BYREF
  unsigned int v41; // [rsp+54h] [rbp-2Dh]
  _OWORD v42[2]; // [rsp+58h] [rbp-29h] BYREF
  __int128 v43; // [rsp+78h] [rbp-9h] BYREF
  __int128 v44; // [rsp+88h] [rbp+7h]
  char v45; // [rsp+E0h] [rbp+5Fh]
  unsigned int v48; // [rsp+F8h] [rbp+77h]

  v45 = a2;
  v5 = a3;
  v38 = 0;
  v39 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 1;
  v40 = 1;
  v10 = *((_OWORD *)a3 + 1);
  v42[0] = *(_OWORD *)a3;
  v42[1] = v10;
  v11 = a5 == 0;
  if ( a5 )
    goto LABEL_7;
  if ( a1 != 13 || (unsigned __int16)(a2 - 4) > 1u )
  {
    v11 = 1;
LABEL_7:
    if ( !v11 )
      v9 = a5;
    if ( 35 * (unsigned __int64)(a4 * v9) > 0xFFFFFFFF )
      return 0LL;
    v12 = 35 * a4 * v9;
    v13 = v9 + 13;
    goto LABEL_11;
  }
  if ( 35 * (unsigned __int64)a4 > 0xFFFFFFFF )
    return 0LL;
  v12 = 35 * a4;
  v13 = 23;
LABEL_11:
  v14 = v13 + v12;
  v48 = v13 + v12;
  if ( !(v13 + v12) )
    return 0LL;
  v15 = (unsigned __int8 *)Win32AllocPoolZInit(v14, 2020635477LL);
  if ( v15 )
  {
    BuildDeviceHeader(v15, v14, &v38, a1, v45);
    v16 = a4;
    v17 = 0;
    if ( a4 )
    {
      v18 = v5;
      do
      {
        if ( *(_WORD *)v18 == 1 )
        {
          v19 = *((_OWORD *)v18 + 1);
          v43 = *(_OWORD *)v18;
          v44 = v19;
          v7 = BuildMainItem(v15, v48, &v38, &v43, (__int64)v42, v37, &v40, &v39);
          if ( !v7 )
            goto LABEL_38;
          v8 += v39;
          v16 = a4;
        }
        ++v17;
        v18 = (struct tagUSAGE_PROPERTIES *)((char *)v18 + 32);
      }
      while ( v17 < v16 );
      if ( v7 )
      {
        v20 = v38;
        v21 = v9 - 1;
        v22 = v38;
        v23 = 0;
        v41 = v38;
        v15[v38] = -64;
        v24 = v20 + 1;
        v38 = v24;
        if ( v9 != 1 )
        {
          while ( 1 )
          {
            if ( !v7 )
            {
LABEL_28:
              v5 = a3;
              v38 = v24;
              goto LABEL_29;
            }
            if ( v22 <= gulCollectionOffset )
              goto LABEL_26;
            v25 = v22 - gulCollectionOffset + 1;
            if ( v48 - v24 <= v25 )
              break;
            memmove(&v15[v24], &v15[gulCollectionOffset], v25);
            v22 = v41;
            v21 = v9 - 1;
            v24 += v25;
            v7 = 1;
LABEL_27:
            if ( ++v23 >= v21 )
              goto LABEL_28;
          }
          v21 = v9 - 1;
LABEL_26:
          v7 = 0;
          goto LABEL_27;
        }
LABEL_29:
        v26 = a4;
        v27 = 0;
        v28 = v9 * v8;
        do
        {
          if ( !*(_WORD *)v5 )
          {
            v29 = *((_OWORD *)v5 + 1);
            v43 = *(_OWORD *)v5;
            v44 = v29;
            v7 = BuildMainItem(v15, v48, &v38, &v43, (__int64)v42, v37, &v40, &v39);
            if ( !v7 )
              goto LABEL_38;
            v28 += v39;
            v26 = a4;
          }
          ++v27;
          v5 = (struct tagUSAGE_PROPERTIES *)((char *)v5 + 32);
        }
        while ( v27 < v26 );
        if ( v7 )
        {
          v30 = v38;
          if ( (v28 & 7) != 0 )
          {
            v15[v38] = 117;
            v31 = v30 + 1;
            v15[v31] = 8 - (v28 & 7);
            v32 = (unsigned int)(v31 + 1);
            v15[v32] = -107;
            v33 = (unsigned int)(v32 + 1);
            v15[v33] = 1;
            v34 = (unsigned int)(v33 + 1);
            v15[v34] = -127;
            v35 = (unsigned int)(v34 + 1);
            v15[v35] = 3;
            v30 = v35 + 1;
          }
          v15[v30] = -64;
          v7 = (int)rimHidP_GetCollectionDescription((__int64)v15, v30 + 1) >= 0;
        }
      }
    }
LABEL_38:
    Win32FreePool((__int64)v15);
  }
  return v7;
}
