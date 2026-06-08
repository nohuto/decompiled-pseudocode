/*
 * XREFs of DisplayPPMFlags @ 0x1C0004EA8
 * Callers:
 *     ProcLibGlobalInit @ 0x1C002D3E4 (ProcLibGlobalInit.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000122C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_s @ 0x1C0002614 (WPP_RECORDER_SF_s.c)
 */

void __fastcall DisplayPPMFlags(__int64 a1, unsigned __int8 a2)
{
  PDEVICE_OBJECT v4; // rcx
  const char *v5; // rdi
  __int64 DeviceExtension; // rcx
  const char *v7; // rax
  __int64 v8; // rcx
  const char *v9; // rax
  __int64 v10; // rcx
  const char *v11; // rax
  __int64 v12; // rcx
  const char *v13; // rax
  __int64 v14; // rcx
  const char *v15; // rax
  __int64 v16; // rcx
  const char *v17; // rax
  __int64 v18; // rcx
  const char *v19; // rax
  __int64 v20; // rcx
  const char *v21; // rax
  __int64 v22; // rcx
  const char *v23; // rax
  __int64 v24; // rcx
  const char *v25; // rax
  __int64 v26; // rcx
  const char *v27; // rax
  __int64 v28; // rcx
  const char *v29; // rax
  __int64 v30; // rcx
  const char *v31; // rax
  __int64 v32; // rcx
  const char *v33; // rax
  __int64 v34; // rcx
  const char *v35; // rax
  __int64 v36; // rcx
  const char *v37; // rax
  __int64 v38; // rcx
  const char *v39; // rax
  __int64 v40; // rcx
  const char *v41; // rax
  __int64 v42; // rcx
  const char *v43; // rax
  __int64 v44; // rcx
  const char *v45; // rax
  __int64 v46; // rcx
  const char *v47; // rax
  __int64 v48; // rcx
  const char *v49; // rax
  __int64 v50; // rcx
  const char *v51; // rax
  __int64 v52; // rcx
  const char *v53; // rax
  __int64 v54; // rcx
  const char *v55; // rax
  __int64 v56; // rcx
  const char *v57; // rax
  __int64 v58; // rcx
  const char *v59; // rax
  __int64 v60; // rcx
  const char *v61; // rax
  __int64 v62; // rcx

  v4 = WPP_GLOBAL_Control;
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x36u,
      (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
    v4 = WPP_GLOBAL_Control;
  }
  v5 = "Dis";
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    DeviceExtension = (__int64)v4->DeviceExtension;
    v7 = "Dis";
    if ( (a1 & 1) != 0 )
      v7 = "En";
    WPP_RECORDER_SF_s(DeviceExtension, a2, 2u, 0x37u, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, v7);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v8 = (__int64)v4->DeviceExtension;
    v9 = "Dis";
    if ( (a1 & 2) != 0 )
      v9 = "En";
    WPP_RECORDER_SF_s(v8, a2, 2u, 0x38u, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, v9);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v10 = (__int64)v4->DeviceExtension;
    v11 = "Dis";
    if ( (a1 & 4) != 0 )
      v11 = "En";
    WPP_RECORDER_SF_s(v10, a2, 2u, 0x39u, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, v11);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v12 = (__int64)v4->DeviceExtension;
    v13 = "Dis";
    if ( (a1 & 0x100000) != 0 )
      v13 = "En";
    WPP_RECORDER_SF_s(v12, a2, 2u, 0x3Au, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, v13);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v14 = (__int64)v4->DeviceExtension;
    v15 = "Dis";
    if ( (a1 & 0x200000) != 0 )
      v15 = "En";
    WPP_RECORDER_SF_s(v14, a2, 2u, 0x3Bu, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, v15);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    WPP_RECORDER_SF_(
      (__int64)v4->DeviceExtension,
      a2,
      2u,
      0x3Cu,
      (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    WPP_RECORDER_SF_(
      (__int64)v4->DeviceExtension,
      a2,
      2u,
      0x3Du,
      (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v16 = (__int64)v4->DeviceExtension;
    v17 = "Dis";
    if ( (a1 & 0x10) != 0 )
      v17 = "En";
    WPP_RECORDER_SF_s(v16, a2, 2u, 0x3Eu, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, v17);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v18 = (__int64)v4->DeviceExtension;
    v19 = "Dis";
    if ( (a1 & 0x20) != 0 )
      v19 = "En";
    WPP_RECORDER_SF_s(v18, a2, 2u, 0x3Fu, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, v19);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v20 = (__int64)v4->DeviceExtension;
    v21 = "Dis";
    if ( (a1 & 0x40) != 0 )
      v21 = "En";
    WPP_RECORDER_SF_s(v20, a2, 2u, 0x40u, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, v21);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v22 = (__int64)v4->DeviceExtension;
    v23 = "Dis";
    if ( (a1 & 0x7F000) != 0 )
      v23 = "En";
    WPP_RECORDER_SF_s(v22, a2, 2u, 0x41u, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, v23);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v24 = (__int64)v4->DeviceExtension;
    v25 = "Dis";
    if ( (a1 & 0x80000000000LL) != 0 )
      v25 = "En";
    WPP_RECORDER_SF_s(v24, a2, 2u, 0x42u, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, v25);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v26 = (__int64)v4->DeviceExtension;
    v27 = "Dis";
    if ( (a1 & 0x20000000000LL) != 0 )
      v27 = "En";
    WPP_RECORDER_SF_s(v26, a2, 2u, 0x43u, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, v27);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v28 = (__int64)v4->DeviceExtension;
    v29 = "Dis";
    if ( (a1 & 0x40000000000LL) != 0 )
      v29 = "En";
    WPP_RECORDER_SF_s(v28, a2, 2u, 0x44u, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, v29);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v30 = (__int64)v4->DeviceExtension;
    v31 = "Dis";
    if ( (a1 & 0xE0000000000LL) != 0 )
      v31 = "En";
    WPP_RECORDER_SF_s(v30, a2, 2u, 0x45u, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, v31);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v32 = (__int64)v4->DeviceExtension;
    v33 = "Dis";
    if ( (a1 & 0x1000000) != 0 )
      v33 = "En";
    WPP_RECORDER_SF_s(v32, a2, 2u, 0x46u, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, v33);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v34 = (__int64)v4->DeviceExtension;
    v35 = "Dis";
    if ( (a1 & 0x2000000) != 0 )
      v35 = "En";
    WPP_RECORDER_SF_s(v34, a2, 2u, 0x47u, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, v35);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v36 = (__int64)v4->DeviceExtension;
    v37 = "Dis";
    if ( (a1 & 0x10000000) != 0 )
      v37 = "En";
    WPP_RECORDER_SF_s(v36, a2, 2u, 0x48u, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, v37);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v38 = (__int64)v4->DeviceExtension;
    v39 = "Dis";
    if ( (a1 & 0x20000000) != 0 )
      v39 = "En";
    WPP_RECORDER_SF_s(v38, a2, 2u, 0x49u, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, v39);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v40 = (__int64)v4->DeviceExtension;
    v41 = "Dis";
    if ( (a1 & 0x40000000) != 0 )
      v41 = "En";
    WPP_RECORDER_SF_s(v40, a2, 2u, 0x4Au, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, v41);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v42 = (__int64)v4->DeviceExtension;
    v43 = "Dis";
    if ( (a1 & 0x80000000) != 0 )
      v43 = "En";
    WPP_RECORDER_SF_s(v42, a2, 2u, 0x4Bu, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, v43);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v44 = (__int64)v4->DeviceExtension;
    v45 = "Dis";
    if ( (a1 & 0x8000000) != 0 )
      v45 = "En";
    WPP_RECORDER_SF_s(v44, a2, 2u, 0x4Cu, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, v45);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v46 = (__int64)v4->DeviceExtension;
    v47 = "Dis";
    if ( (a1 & 0x4000000000LL) != 0 )
      v47 = "En";
    WPP_RECORDER_SF_s(v46, a2, 2u, 0x4Du, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, v47);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v48 = (__int64)v4->DeviceExtension;
    v49 = "Dis";
    if ( (a1 & 0x4000000) != 0 )
      v49 = "En";
    WPP_RECORDER_SF_s(v48, a2, 2u, 0x4Eu, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, v49);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    WPP_RECORDER_SF_(
      (__int64)v4->DeviceExtension,
      a2,
      2u,
      0x4Fu,
      (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    WPP_RECORDER_SF_(
      (__int64)v4->DeviceExtension,
      a2,
      2u,
      0x50u,
      (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v50 = (__int64)v4->DeviceExtension;
    v51 = "Dis";
    if ( (a1 & 0x100000000LL) != 0 )
      v51 = "En";
    WPP_RECORDER_SF_s(v50, a2, 2u, 0x51u, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, v51);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v52 = (__int64)v4->DeviceExtension;
    v53 = "Dis";
    if ( (a1 & 0x200000000LL) != 0 )
      v53 = "En";
    WPP_RECORDER_SF_s(v52, a2, 2u, 0x52u, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, v53);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v54 = (__int64)v4->DeviceExtension;
    v55 = "Dis";
    if ( (a1 & 0x300) != 0 )
      v55 = "En";
    WPP_RECORDER_SF_s(v54, a2, 2u, 0x53u, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, v55);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v56 = (__int64)v4->DeviceExtension;
    v57 = "Dis";
    if ( (a1 & 0x100000000000LL) != 0 )
      v57 = "En";
    WPP_RECORDER_SF_s(v56, a2, 2u, 0x54u, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, v57);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v58 = (__int64)v4->DeviceExtension;
    v59 = "Dis";
    if ( (a1 & 0x400) != 0 )
      v59 = "En";
    WPP_RECORDER_SF_s(v58, a2, 2u, 0x55u, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, v59);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v60 = (__int64)v4->DeviceExtension;
    v61 = "Dis";
    if ( (a1 & 0x1000000000LL) != 0 )
      v61 = "En";
    WPP_RECORDER_SF_s(v60, a2, 2u, 0x56u, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, v61);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
  {
    v62 = (__int64)v4->DeviceExtension;
    if ( (a1 & 0x10000000000LL) != 0 )
      v5 = "En";
    WPP_RECORDER_SF_s(v62, a2, 2u, 0x57u, (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids, v5);
    v4 = WPP_GLOBAL_Control;
  }
  if ( a2 < 5u || LOWORD(v4->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)v4->DeviceExtension,
      a2,
      2u,
      0x58u,
      (__int64)&WPP_65ab40ece50d35b7805a0f1bd1478956_Traceguids);
}
