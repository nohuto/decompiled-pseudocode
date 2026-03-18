/*
 * XREFs of ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1C012F2E4
 * Callers:
 *     ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x1C012F5D0 (-MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?IsKeyDownSpecified@@YAHEPEBE@Z @ 0x1C012F174 (-IsKeyDownSpecified@@YAHEPEBE@Z.c)
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x1C012F878 (-SendKeyUpDown@@YAXEE@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C012FB70 (ProcessKeyboardInputWorker.c)
 */

__int64 __fastcall MapFlexibleKeys(struct tagKE *a1, char a2, struct DEVICEINFO *a3)
{
  unsigned int v3; // esi
  char v4; // al
  struct tagKE *v5; // r15
  unsigned int v6; // ebx
  __int64 v7; // r9
  int v8; // ecx
  struct tagSCANCODEFLEXIBLEMAP *v9; // r10
  unsigned __int8 v10; // r12
  __int64 v11; // r11
  unsigned int v12; // edi
  char *v13; // r14
  unsigned __int8 v14; // r13
  int v15; // eax
  unsigned int v16; // esi
  unsigned int v17; // r14d
  unsigned int v18; // r13d
  __int64 v19; // rdi
  __int64 v20; // r12
  char v21; // cl
  unsigned __int8 v22; // cl
  __int64 v23; // rax
  unsigned int v24; // r12d
  __int64 v25; // r13
  unsigned __int8 v26; // cl
  __int64 v27; // rax
  __int16 v28; // ax
  char v29; // dl
  __int16 v30; // ax
  __int64 v31; // rdi
  unsigned __int8 *v32; // rbx
  unsigned __int8 *v33; // rbx
  __int64 v34; // rdi
  _WORD v39[2]; // [rsp+38h] [rbp-28h] BYREF
  __int16 v40; // [rsp+3Ch] [rbp-24h]
  int v41; // [rsp+40h] [rbp-20h]
  _DWORD v42[2]; // [rsp+48h] [rbp-18h] BYREF
  _BYTE v43[8]; // [rsp+50h] [rbp-10h] BYREF

  v3 = gdwFlexMapSize;
  v4 = a2;
  v5 = a1;
  v6 = 0;
  v7 = 1LL;
  if ( !gdwFlexMapSize )
    return 1LL;
  v8 = iLastMatchedTarget;
  v9 = gpFlexMap;
  v10 = bLastVKDown;
  v42[0] = iLastMatchedTarget;
  while ( 1 )
  {
    v11 = 16LL * v6;
    if ( *((_BYTE *)v9 + v11 + 1) == v4 )
      break;
LABEL_15:
    if ( ++v6 >= v3 )
      goto LABEL_18;
  }
  if ( *((_BYTE *)v9 + v11) != *(_BYTE *)v5 )
  {
LABEL_14:
    v4 = a2;
    goto LABEL_15;
  }
  if ( *((__int16 *)v5 + 1) >= 0 || v6 != v8 )
  {
    v12 = 0;
    v13 = (char *)&unk_1C016EBC8;
    do
    {
      v14 = *v13;
      if ( *v13 == v10 )
      {
        v10 = 0;
      }
      else
      {
        v15 = IsKeyDownSpecified(*v13, (const unsigned __int8 *)v9 + v11 + 2);
        v7 = 1LL;
        if ( (((unsigned __int8)(1 << (2 * (v14 & 3))) & gafRawKeyState[(unsigned __int64)v14 >> 2]) == 0) == v15 )
          break;
      }
      ++v12;
      ++v13;
    }
    while ( v12 < 0xA );
    bLastVKDown = v10;
    if ( v12 >= 0xA )
      goto LABEL_18;
    v8 = v42[0];
    goto LABEL_14;
  }
  iLastMatchedTarget = -1;
LABEL_18:
  if ( v6 >= v3 )
    return 1LL;
  v16 = 0;
  v17 = 0;
  if ( *((__int16 *)v5 + 1) >= 0 )
  {
    v18 = 0;
    v19 = 16LL * v6;
    v20 = v19;
    do
    {
      v21 = *((_BYTE *)v9 + v20 + 2);
      if ( !v21 )
        break;
      if ( !(unsigned int)IsKeyDownSpecified(v21, (const unsigned __int8 *)v9 + v19 + 10) )
      {
        v23 = v16;
        v16 += v7;
        *((_BYTE *)v42 + v23) = v22;
        SendKeyUpDown(v22, v7);
        v9 = gpFlexMap;
        v7 = 1LL;
      }
      v18 += v7;
      v20 += v7;
    }
    while ( v18 < 6 );
    v24 = 0;
    v25 = 16LL * v6;
    do
    {
      if ( !*((_BYTE *)v9 + 17 * v6 + 10) )
        break;
      if ( !(unsigned int)IsKeyDownSpecified(*((_BYTE *)v9 + v25 + 10), (const unsigned __int8 *)v9 + v19 + 2) )
      {
        v27 = v17;
        v17 += v7;
        v43[v27] = v26;
        SendKeyUpDown(v26, 0);
        v9 = gpFlexMap;
        v7 = 1LL;
      }
      v24 += v7;
      v25 += v7;
    }
    while ( v24 < 6 );
    v5 = a1;
  }
  v28 = 0;
  v41 = 0;
  v40 = 0;
  v29 = *((_BYTE *)v9 + 16 * v6 + 9);
  if ( v29 == -32 )
  {
    v28 = 2;
    goto LABEL_35;
  }
  if ( v29 == -31 )
  {
    v28 = 4;
LABEL_35:
    v40 = v28;
  }
  if ( *((__int16 *)v5 + 1) < 0 )
    v40 = v7 | v28;
  v30 = *((unsigned __int8 *)v9 + 16 * v6 + 8);
  v39[0] = 0;
  v39[1] = v30;
  ProcessKeyboardInputWorker(v39, a3, 0LL, v7);
  if ( *((__int16 *)v5 + 1) >= 0 )
  {
    bLastVKDown = gbVKLastDown;
    iLastMatchedTarget = v6;
  }
  if ( v16 )
  {
    v31 = v16;
    v32 = (unsigned __int8 *)v42;
    do
    {
      SendKeyUpDown(*v32++, 0);
      --v31;
    }
    while ( v31 );
  }
  if ( v17 )
  {
    v33 = v43;
    v34 = v17;
    do
    {
      SendKeyUpDown(*v33++, 1u);
      --v34;
    }
    while ( v34 );
  }
  return 0LL;
}
