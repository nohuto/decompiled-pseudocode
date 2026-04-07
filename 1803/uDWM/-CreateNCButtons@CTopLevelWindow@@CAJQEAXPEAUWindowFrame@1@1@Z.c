/*
 * XREFs of ?CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z @ 0x18004127C
 * Callers:
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180040658 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 * Callees:
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x18003BF48 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::CreateNCButtons(
        void *const a1,
        struct CTopLevelWindow::WindowFrame *a2,
        struct CTopLevelWindow::WindowFrame *a3)
{
  struct CBitmapSource ****v3; // rsi
  unsigned int v4; // ebx
  struct CTopLevelWindow::WindowFrame *v6; // rcx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  unsigned int v19; // r14d
  struct CBitmapSource ***v20; // rdi
  int v21; // eax
  HRESULT ThemeMargins; // eax
  __int64 v23; // r8
  MARGINS *v24; // rdx
  MARGINS pMargins; // [rsp+40h] [rbp-C0h] BYREF
  struct _MARGINS v27; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+60h] [rbp-A0h]
  char *v29; // [rsp+68h] [rbp-98h] BYREF
  int v30; // [rsp+70h] [rbp-90h]
  char *v31; // [rsp+78h] [rbp-88h]
  int v32; // [rsp+80h] [rbp-80h]
  char *v33; // [rsp+88h] [rbp-78h]
  int v34; // [rsp+90h] [rbp-70h]
  char *v35; // [rsp+98h] [rbp-68h]
  int v36; // [rsp+A0h] [rbp-60h]
  char *v37; // [rsp+A8h] [rbp-58h]
  int v38; // [rsp+B0h] [rbp-50h]
  char *v39; // [rsp+B8h] [rbp-48h]
  int v40; // [rsp+C0h] [rbp-40h]
  char *v41; // [rsp+C8h] [rbp-38h]
  int v42; // [rsp+D0h] [rbp-30h]
  char *v43; // [rsp+D8h] [rbp-28h]
  int v44; // [rsp+E0h] [rbp-20h]
  char *v45; // [rsp+E8h] [rbp-18h]
  int v46; // [rsp+F0h] [rbp-10h]
  char *v47; // [rsp+F8h] [rbp-8h]
  int v48; // [rsp+100h] [rbp+0h]
  char *v49; // [rsp+108h] [rbp+8h]
  int v50; // [rsp+110h] [rbp+10h]
  char *v51; // [rsp+118h] [rbp+18h]

  v3 = (struct CBitmapSource ****)&v29;
  v4 = 0;
  v6 = *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 32);
  v7 = -1;
  if ( a2 != v6 )
    v7 = 3;
  v28 = v7;
  v29 = (char *)a2 + 8;
  v8 = -1;
  if ( a2 != v6 )
    v8 = 5;
  v30 = v8;
  v31 = (char *)a2 + 40;
  v9 = -1;
  if ( a2 != v6 )
    v9 = 4;
  v32 = v9;
  v33 = (char *)a3 + 8;
  v10 = -1;
  if ( a2 != v6 )
    v10 = 6;
  v34 = v10;
  v35 = (char *)a3 + 40;
  v11 = -1;
  if ( a2 != v6 )
    v11 = 88;
  v36 = v11;
  v37 = (char *)a2 + 72;
  v12 = -1;
  if ( a2 != v6 )
    v12 = 90;
  v38 = v12;
  v39 = (char *)a2 + 104;
  v13 = -1;
  if ( a2 != v6 )
    v13 = 89;
  v40 = v13;
  v41 = (char *)a3 + 72;
  v14 = -1;
  if ( a2 != v6 )
    v14 = 91;
  v42 = v14;
  v43 = (char *)a3 + 104;
  v15 = -1;
  if ( a2 != v6 )
    v15 = 7;
  v44 = v15;
  v45 = (char *)a2 + 136;
  v16 = -1;
  if ( a2 != v6 )
    v16 = 8;
  v46 = v16;
  v47 = (char *)a3 + 136;
  v17 = 36;
  if ( a2 != v6 )
    v17 = 9;
  v48 = v17;
  v49 = (char *)a2 + 168;
  v18 = 37;
  if ( a2 != v6 )
    v18 = 10;
  v19 = 0;
  v50 = v18;
  v51 = (char *)a3 + 168;
  while ( 1 )
  {
    if ( *((_DWORD *)v3 - 2) == -1 )
      goto LABEL_31;
    v20 = *v3;
    v21 = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(a1, *((_DWORD *)v3 - 2), 4u, &v27, *v3);
    v4 = v21;
    if ( v21 < 0 )
      break;
    ThemeMargins = GetThemeMargins(a1, 0LL, *((_DWORD *)v3 - 2), 0, 3602, 0LL, &pMargins);
    v23 = 0LL;
    v4 = ThemeMargins;
    if ( ThemeMargins < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ThemeMargins, 0x3C4u);
      return v4;
    }
    if ( *((_DWORD *)v20 + 6) )
    {
      do
      {
        v24 = (MARGINS *)(*v20)[v23];
        v23 = (unsigned int)(v23 + 1);
        v24[4] = pMargins;
      }
      while ( (unsigned int)v23 < *((_DWORD *)v20 + 6) );
    }
LABEL_31:
    ++v19;
    v3 += 2;
    if ( v19 >= 0xC )
      return v4;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x3C3u);
  return v4;
}
