/*
 * XREFs of DisplayPPMFlags @ 0x1C0001DEC
 * Callers:
 *     ProcLibGlobalInit @ 0x1C0031254 (ProcLibGlobalInit.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0002830 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002C2C (WPP_RECORDER_SF_.c)
 */

void __fastcall DisplayPPMFlags(__int64 a1, unsigned __int8 a2)
{
  PDEVICE_OBJECT v4; // rcx
  const char *v5; // rdi
  void *DeviceExtension; // rcx
  const char *v7; // rax
  void *v8; // rcx
  const char *v9; // rax
  void *v10; // rcx
  const char *v11; // rax
  void *v12; // rcx
  const char *v13; // rax
  void *v14; // rcx
  const char *v15; // rax
  void *v16; // rcx
  const char *v17; // rax
  void *v18; // rcx
  const char *v19; // rax
  void *v20; // rcx
  const char *v21; // rax
  void *v22; // rcx
  const char *v23; // rax
  void *v24; // rcx
  const char *v25; // rax
  void *v26; // rcx
  const char *v27; // rax
  void *v28; // rcx
  const char *v29; // rax
  void *v30; // rcx
  const char *v31; // rax
  void *v32; // rcx
  const char *v33; // rax
  void *v34; // rcx
  const char *v35; // rax
  void *v36; // rcx
  const char *v37; // rax
  void *v38; // rcx
  const char *v39; // rax
  void *v40; // rcx
  const char *v41; // rax
  void *v42; // rcx
  const char *v43; // rax
  void *v44; // rcx
  const char *v45; // rax
  void *v46; // rcx
  const char *v47; // rax
  void *v48; // rcx
  const char *v49; // rax
  void *v50; // rcx
  const char *v51; // rax
  void *v52; // rcx
  const char *v53; // rax
  void *v54; // rcx
  const char *v55; // rax
  void *v56; // rcx
  const char *v57; // rax
  void *v58; // rcx
  const char *v59; // rax
  void *v60; // rcx
  const char *v61; // rax
  void *v62; // rcx

  v4 = WPP_GLOBAL_Control;
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2,
      54,
      (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
    v4 = WPP_GLOBAL_Control;
  }
  v5 = "En";
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    DeviceExtension = v4->DeviceExtension;
    v7 = "En";
    if ( (a1 & 1) == 0 )
      v7 = "Dis";
    WPP_RECORDER_SF_s(
      (_DWORD)DeviceExtension,
      a2,
      2,
      55,
      (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids,
      (__int64)v7);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v8 = v4->DeviceExtension;
    v9 = "En";
    if ( (a1 & 2) == 0 )
      v9 = "Dis";
    WPP_RECORDER_SF_s((_DWORD)v8, a2, 2, 56, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, (__int64)v9);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v10 = v4->DeviceExtension;
    v11 = "En";
    if ( (a1 & 4) == 0 )
      v11 = "Dis";
    WPP_RECORDER_SF_s((_DWORD)v10, a2, 2, 57, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, (__int64)v11);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v12 = v4->DeviceExtension;
    v13 = "En";
    if ( (a1 & 0x100000) == 0 )
      v13 = "Dis";
    WPP_RECORDER_SF_s((_DWORD)v12, a2, 2, 58, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, (__int64)v13);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v14 = v4->DeviceExtension;
    v15 = "En";
    if ( (a1 & 0x200000) == 0 )
      v15 = "Dis";
    WPP_RECORDER_SF_s((_DWORD)v14, a2, 2, 59, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, (__int64)v15);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    WPP_RECORDER_SF_(v4->DeviceExtension, a2, 2, 60, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    WPP_RECORDER_SF_(v4->DeviceExtension, a2, 2, 61, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v16 = v4->DeviceExtension;
    v17 = "En";
    if ( (a1 & 0x10) == 0 )
      v17 = "Dis";
    WPP_RECORDER_SF_s((_DWORD)v16, a2, 2, 62, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, (__int64)v17);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v18 = v4->DeviceExtension;
    v19 = "En";
    if ( (a1 & 0x20) == 0 )
      v19 = "Dis";
    WPP_RECORDER_SF_s((_DWORD)v18, a2, 2, 63, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, (__int64)v19);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v20 = v4->DeviceExtension;
    v21 = "En";
    if ( (a1 & 0x40) == 0 )
      v21 = "Dis";
    WPP_RECORDER_SF_s((_DWORD)v20, a2, 2, 64, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, (__int64)v21);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v22 = v4->DeviceExtension;
    v23 = "En";
    if ( (a1 & 0x7F000) == 0 )
      v23 = "Dis";
    WPP_RECORDER_SF_s((_DWORD)v22, a2, 2, 65, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, (__int64)v23);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v24 = v4->DeviceExtension;
    v25 = "En";
    if ( (a1 & 0x80000000000LL) == 0 )
      v25 = "Dis";
    WPP_RECORDER_SF_s((_DWORD)v24, a2, 2, 66, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, (__int64)v25);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v26 = v4->DeviceExtension;
    v27 = "En";
    if ( (a1 & 0x20000000000LL) == 0 )
      v27 = "Dis";
    WPP_RECORDER_SF_s((_DWORD)v26, a2, 2, 67, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, (__int64)v27);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v28 = v4->DeviceExtension;
    v29 = "En";
    if ( (a1 & 0x40000000000LL) == 0 )
      v29 = "Dis";
    WPP_RECORDER_SF_s((_DWORD)v28, a2, 2, 68, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, (__int64)v29);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v30 = v4->DeviceExtension;
    v31 = "En";
    if ( (a1 & 0xE0000000000LL) == 0 )
      v31 = "Dis";
    WPP_RECORDER_SF_s((_DWORD)v30, a2, 2, 69, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, (__int64)v31);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v32 = v4->DeviceExtension;
    v33 = "En";
    if ( (a1 & 0x1000000) == 0 )
      v33 = "Dis";
    WPP_RECORDER_SF_s((_DWORD)v32, a2, 2, 70, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, (__int64)v33);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v34 = v4->DeviceExtension;
    v35 = "En";
    if ( (a1 & 0x2000000) == 0 )
      v35 = "Dis";
    WPP_RECORDER_SF_s((_DWORD)v34, a2, 2, 71, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, (__int64)v35);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v36 = v4->DeviceExtension;
    v37 = "En";
    if ( (a1 & 0x10000000) == 0 )
      v37 = "Dis";
    WPP_RECORDER_SF_s((_DWORD)v36, a2, 2, 72, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, (__int64)v37);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v38 = v4->DeviceExtension;
    v39 = "En";
    if ( (a1 & 0x20000000) == 0 )
      v39 = "Dis";
    WPP_RECORDER_SF_s((_DWORD)v38, a2, 2, 73, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, (__int64)v39);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v40 = v4->DeviceExtension;
    v41 = "En";
    if ( (a1 & 0x40000000) == 0 )
      v41 = "Dis";
    WPP_RECORDER_SF_s((_DWORD)v40, a2, 2, 74, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, (__int64)v41);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v42 = v4->DeviceExtension;
    v43 = "En";
    if ( (a1 & 0x80000000) == 0 )
      v43 = "Dis";
    WPP_RECORDER_SF_s((_DWORD)v42, a2, 2, 75, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, (__int64)v43);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v44 = v4->DeviceExtension;
    v45 = "En";
    if ( (a1 & 0x8000000) == 0 )
      v45 = "Dis";
    WPP_RECORDER_SF_s((_DWORD)v44, a2, 2, 76, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, (__int64)v45);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v46 = v4->DeviceExtension;
    v47 = "En";
    if ( (a1 & 0x4000000000LL) == 0 )
      v47 = "Dis";
    WPP_RECORDER_SF_s((_DWORD)v46, a2, 2, 77, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, (__int64)v47);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v48 = v4->DeviceExtension;
    v49 = "En";
    if ( (a1 & 0x4000000) == 0 )
      v49 = "Dis";
    WPP_RECORDER_SF_s((_DWORD)v48, a2, 2, 78, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, (__int64)v49);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    WPP_RECORDER_SF_(v4->DeviceExtension, a2, 2, 79, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    WPP_RECORDER_SF_(v4->DeviceExtension, a2, 2, 80, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v50 = v4->DeviceExtension;
    v51 = "En";
    if ( (a1 & 0x100000000LL) == 0 )
      v51 = "Dis";
    WPP_RECORDER_SF_s((_DWORD)v50, a2, 2, 81, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, (__int64)v51);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v52 = v4->DeviceExtension;
    v53 = "En";
    if ( (a1 & 0x200000000LL) == 0 )
      v53 = "Dis";
    WPP_RECORDER_SF_s((_DWORD)v52, a2, 2, 82, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, (__int64)v53);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v54 = v4->DeviceExtension;
    v55 = "En";
    if ( (a1 & 0x300) == 0 )
      v55 = "Dis";
    WPP_RECORDER_SF_s((_DWORD)v54, a2, 2, 83, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, (__int64)v55);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v56 = v4->DeviceExtension;
    v57 = "En";
    if ( (a1 & 0x100000000000LL) == 0 )
      v57 = "Dis";
    WPP_RECORDER_SF_s((_DWORD)v56, a2, 2, 84, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, (__int64)v57);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v58 = v4->DeviceExtension;
    v59 = "En";
    if ( (a1 & 0x400) == 0 )
      v59 = "Dis";
    WPP_RECORDER_SF_s((_DWORD)v58, a2, 2, 85, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, (__int64)v59);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v60 = v4->DeviceExtension;
    v61 = "En";
    if ( (a1 & 0x1000000000LL) == 0 )
      v61 = "Dis";
    WPP_RECORDER_SF_s((_DWORD)v60, a2, 2, 86, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, (__int64)v61);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v62 = v4->DeviceExtension;
    if ( (a1 & 0x10000000000LL) == 0 )
      v5 = "Dis";
    WPP_RECORDER_SF_s((_DWORD)v62, a2, 2, 87, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, (__int64)v5);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
    WPP_RECORDER_SF_(v4->DeviceExtension, a2, 2, 88, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
}
