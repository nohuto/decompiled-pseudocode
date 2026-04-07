/*
 * XREFs of ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x18003A200
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z @ 0x180039F90 (-EnsureImages@CTopLevelWindow@@SAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x1800389A0 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     ?SetSizingMargins@CTopLevelWindow@@CAXPEAUWindowFrame@1@0IU_MARGINS@@@Z @ 0x18003AA10 (-SetSizingMargins@CTopLevelWindow@@CAXPEAUWindowFrame@1@0IU_MARGINS@@@Z.c)
 *     ?GetThemePercentage@@YAJPEAXHHHPEAM@Z @ 0x18003AA74 (-GetThemePercentage@@YAJPEAXHHHPEAM@Z.c)
 *     ?GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z @ 0x18003AABC (-GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z.c)
 *     ?CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z @ 0x18003ADC0 (-CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18003B1B4 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180045628 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180045688 (_Init_thread_header.c)
 */

__int64 __fastcall CTopLevelWindow::GetNCAreaHelper(
        void *a1,
        const int *a2,
        int *a3,
        struct CTopLevelWindow::WindowFrame *a4,
        struct CTopLevelWindow::WindowFrame *a5)
{
  _QWORD *ThreadLocalStoragePointer; // rax
  void *v6; // rsi
  int ThemeMargins; // eax
  unsigned int v11; // ebx
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  __int64 v15; // rdx
  HRESULT v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // r12d
  int v19; // ecx
  int v20; // edx
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // edx
  struct CBitmapSource *v25; // rax
  CBaseObject **v26; // r12
  int v27; // r8d
  int *v28; // rdx
  _QWORD *v29; // rcx
  int v30; // edx
  __int64 v32; // rsi
  __int64 i; // rbx
  CBaseObject *v34; // rcx
  unsigned int iPropId; // [rsp+20h] [rbp-E0h]
  unsigned int cxLeftWidth; // [rsp+40h] [rbp-C0h]
  int v37; // [rsp+40h] [rbp-C0h]
  struct CBitmapSource *v38; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+50h] [rbp-B0h]
  struct _MARGINS v40; // [rsp+60h] [rbp-A0h]
  struct _MARGINS v41; // [rsp+70h] [rbp-90h]
  struct _MARGINS v42; // [rsp+80h] [rbp-80h]
  struct _MARGINS v43; // [rsp+90h] [rbp-70h]
  void *v44; // [rsp+A0h] [rbp-60h]
  struct _MARGINS v45; // [rsp+B0h] [rbp-50h] BYREF
  struct _MARGINS v46; // [rsp+C0h] [rbp-40h] BYREF
  struct _MARGINS v47; // [rsp+D0h] [rbp-30h] BYREF
  struct _MARGINS v48; // [rsp+E0h] [rbp-20h] BYREF
  struct _MARGINS v49; // [rsp+F0h] [rbp-10h] BYREF
  struct _MARGINS v50; // [rsp+100h] [rbp+0h] BYREF
  struct _MARGINS v51; // [rsp+110h] [rbp+10h] BYREF
  struct _MARGINS v52; // [rsp+120h] [rbp+20h] BYREF
  struct _MARGINS v53; // [rsp+130h] [rbp+30h] BYREF
  struct _MARGINS v54; // [rsp+140h] [rbp+40h] BYREF
  struct _MARGINS v55; // [rsp+150h] [rbp+50h] BYREF
  struct _MARGINS v56; // [rsp+160h] [rbp+60h] BYREF
  struct _MARGINS v57; // [rsp+170h] [rbp+70h] BYREF
  MARGINS pMargins; // [rsp+180h] [rbp+80h] BYREF
  struct _MARGINS v59; // [rsp+190h] [rbp+90h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = a1;
  v44 = a1;
  if ( dword_1800C1A78 > *(_DWORD *)(ThreadLocalStoragePointer[tls_index] + 4LL) )
  {
    Init_thread_header(&dword_1800C1A78);
    if ( dword_1800C1A78 == -1 )
    {
      dword_1800C19D4 = -2147023728;
      Init_thread_footer(&dword_1800C1A78);
    }
  }
  ThemeMargins = GetThemeMargins(v6, 0LL, a2[1], 0, 3602, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 960;
LABEL_62:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C19D4, 1u, ThemeMargins, iPropId);
    return v11;
  }
  cxLeftWidth = pMargins.cxLeftWidth;
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v6, a2[3], 2u, &pMargins, (struct tagRECT **)&v38);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 972;
    goto LABEL_62;
  }
  v12 = pMargins.cxLeftWidth;
  *((_QWORD *)a4 + 193) = v38;
  *((_QWORD *)a5 + 193) = v39;
  v13 = a2[4];
  *(_QWORD *)&v42.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v12);
  *(_QWORD *)&v40.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v12);
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v6, v13, 2u, &pMargins, (struct tagRECT **)&v38);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 981;
    goto LABEL_62;
  }
  v14 = pMargins.cxLeftWidth;
  *((_QWORD *)a4 + 195) = v38;
  *((_QWORD *)a5 + 195) = v39;
  v15 = *((unsigned int *)a2 + 1);
  *(_QWORD *)&v41.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v14);
  *(_QWORD *)&v43.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v14);
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(v6, v15, cxLeftWidth, 0LL, 1, 2, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 999;
    goto LABEL_62;
  }
  ThemeMargins = GetThemePercentage(v6, a2[1], *a3, 2430, (float *)a4 + 466);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1002;
    goto LABEL_62;
  }
  ThemeMargins = GetThemePercentage(v6, a2[1], a3[1], 2430, (float *)a5 + 466);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1003;
    goto LABEL_62;
  }
  ThemeMargins = GetThemePercentage(v6, a2[1], *a3, 2432, (float *)a4 + 470);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1006;
    goto LABEL_62;
  }
  ThemeMargins = GetThemePercentage(v6, a2[1], a3[1], 2432, (float *)a5 + 470);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1007;
    goto LABEL_62;
  }
  v16 = GetThemeMargins(v6, 0LL, a2[1], 0, 3601, 0LL, &pMargins);
  v11 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C19D4, 1u, v16, 0x3F1u);
    return v11;
  }
  v45 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 1u, &v45);
  v17 = *((unsigned int *)a2 + 6);
  *(_QWORD *)&v42.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  *(_QWORD *)&v41.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(v6, v17, cxLeftWidth, 5LL, 6, 7, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1026;
    goto LABEL_62;
  }
  ThemeMargins = GetThemeMargins(v6, 0LL, a2[6], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1028;
    goto LABEL_62;
  }
  v46 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 6u, &v46);
  *(_QWORD *)&v40.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  *(_QWORD *)&v43.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  v47 = v42;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0, &v47);
  v48 = v41;
  CTopLevelWindow::SetSizingMargins(a4, a5, 2u, &v48);
  v49 = v40;
  CTopLevelWindow::SetSizingMargins(a4, a5, 5u, &v49);
  v50 = v43;
  CTopLevelWindow::SetSizingMargins(a4, a5, 7u, &v50);
  ThemeMargins = GetThemeMargins(v6, 0LL, a2[10], 0, 3602, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1042;
    goto LABEL_62;
  }
  v18 = pMargins.cxLeftWidth;
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v6, a2[12], 2u, &pMargins, (struct tagRECT **)&v38);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1048;
    goto LABEL_62;
  }
  v19 = pMargins.cxLeftWidth;
  *((_QWORD *)a4 + 211) = v38;
  *((_QWORD *)a5 + 211) = v39;
  v20 = a2[13];
  *(_QWORD *)&v42.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v19);
  *(_QWORD *)&v40.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v19);
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v6, v20, 2u, &pMargins, (struct tagRECT **)&v38);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1057;
    goto LABEL_62;
  }
  v21 = pMargins.cxLeftWidth;
  *((_QWORD *)a4 + 213) = v38;
  *((_QWORD *)a5 + 213) = v39;
  v22 = *((unsigned int *)a2 + 10);
  *(_QWORD *)&v41.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v21);
  *(_QWORD *)&v43.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v21);
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(v6, v22, v18, 9LL, 10, 11, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1075;
    goto LABEL_62;
  }
  ThemeMargins = GetThemeMargins(v6, 0LL, a2[10], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1077;
    goto LABEL_62;
  }
  v51 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xAu, &v51);
  v23 = *((unsigned int *)a2 + 15);
  *(_QWORD *)&v42.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  *(_QWORD *)&v41.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(v6, v23, v18, 14LL, 15, 16, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1094;
    goto LABEL_62;
  }
  ThemeMargins = GetThemeMargins(v6, 0LL, a2[15], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1096;
    goto LABEL_62;
  }
  v52 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xFu, &v52);
  v24 = a2[17];
  *(_QWORD *)&v40.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  *(_QWORD *)&v43.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  ThemeMargins = CTopLevelWindow::CreateBitmapFromAtlas(v6, v24, &v59, &v38);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1104;
    goto LABEL_62;
  }
  v25 = v38;
  *((_QWORD *)a4 + 221) = v38;
  *((_QWORD *)a5 + 221) = v25;
  _InterlockedAdd((volatile signed __int32 *)v25 + 2, 1u);
  v53 = v59;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0x11u, &v53);
  v54 = v42;
  CTopLevelWindow::SetSizingMargins(a4, a5, 9u, &v54);
  v55 = v41;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xBu, &v55);
  v56 = v40;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xEu, &v56);
  v57 = v43;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0x10u, &v57);
  v26 = (CBaseObject **)((char *)a5 + 1784);
  v27 = 18;
  v28 = (int *)(a2 + 18);
  *(_QWORD *)&v42.cxLeftWidth = a4 - a5;
  v29 = (_QWORD *)((char *)a5 + 1784);
  v37 = 18;
  *(_QWORD *)&v40.cxLeftWidth = a2 + 18;
  *(_QWORD *)&v41.cxLeftWidth = (char *)a5 + 1784;
  while ( 1 )
  {
    v30 = *v28;
    if ( v30 )
      break;
LABEL_26:
    ++v27;
    v28 = (int *)(*(_QWORD *)&v40.cxLeftWidth + 4LL);
    v37 = v27;
    v29 += 2;
    *(_QWORD *)&v40.cxLeftWidth += 4LL;
    *(_QWORD *)&v41.cxLeftWidth = v29;
    if ( v27 > 21 )
      goto LABEL_27;
  }
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v6, v30, 2u, &pMargins, (struct tagRECT **)&v38);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 && (_WORD)ThemeMargins != 1168 )
  {
    iPropId = 1123;
    goto LABEL_62;
  }
  if ( (_WORD)ThemeMargins != 1168 )
  {
    v29 = *(_QWORD **)&v41.cxLeftWidth;
    v27 = v37;
    *(_QWORD *)(*(_QWORD *)&v42.cxLeftWidth + *(_QWORD *)&v41.cxLeftWidth) = v38;
    *v29 = v39;
    goto LABEL_26;
  }
LABEL_27:
  if ( (_WORD)v11 == 1168 )
  {
    v32 = *(_QWORD *)&v42.cxLeftWidth;
    for ( i = 18LL; i <= 21; ++i )
    {
      if ( a2[i] )
      {
        v34 = *(CBaseObject **)((char *)v26 + v32);
        if ( v34 )
        {
          CBaseObject::Release(v34);
          *(CBaseObject **)((char *)v26 + v32) = 0LL;
        }
        if ( *v26 )
        {
          CBaseObject::Release(*v26);
          *v26 = 0LL;
        }
      }
      v26 += 2;
    }
    v6 = v44;
  }
  ThemeMargins = CTopLevelWindow::CreateNCButtons(v6, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1152;
    goto LABEL_62;
  }
  return v11;
}
