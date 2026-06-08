/*
 * XREFs of DisplayPPMFlags @ 0x1C0004EE4
 * Callers:
 *     ProcLibGlobalInit @ 0x1C00303D4 (ProcLibGlobalInit.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000127C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_s @ 0x1C00026B8 (WPP_RECORDER_SF_s.c)
 */

PDEVICE_OBJECT __fastcall DisplayPPMFlags(__int64 a1, unsigned __int8 a2)
{
  const char *v4; // rdi
  const char *v5; // rax
  const char *v6; // rax
  const char *v7; // rax
  const char *v8; // rax
  const char *v9; // rax
  const char *v10; // rax
  const char *v11; // rax
  const char *v12; // rax
  const char *v13; // rax
  const char *v14; // rax
  const char *v15; // rax
  const char *v16; // rax
  const char *v17; // rax
  const char *v18; // rax
  const char *v19; // rax
  const char *v20; // rax
  const char *v21; // rax
  const char *v22; // rax
  const char *v23; // rax
  const char *v24; // rax
  const char *v25; // rax
  const char *v26; // rax
  const char *v27; // rax
  const char *v28; // rax
  const char *v29; // rax
  const char *v30; // rax
  const char *v31; // rax
  const char *v32; // rax
  PDEVICE_OBJECT result; // rax

  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x37u,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids);
  v4 = "Dis";
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v5 = "Dis";
    if ( (a1 & 1) != 0 )
      v5 = "En";
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x38u,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v5);
  }
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v6 = "Dis";
    if ( (a1 & 2) != 0 )
      v6 = "En";
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x39u,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v6);
  }
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v7 = "Dis";
    if ( (a1 & 4) != 0 )
      v7 = "En";
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x3Au,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v7);
  }
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v8 = "Dis";
    if ( (a1 & 0x100000) != 0 )
      v8 = "En";
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x3Bu,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v8);
  }
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v9 = "Dis";
    if ( (a1 & 0x200000) != 0 )
      v9 = "En";
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x3Cu,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v9);
  }
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x3Du,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids);
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x3Eu,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids);
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v10 = "Dis";
    if ( (a1 & 0x10) != 0 )
      v10 = "En";
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x3Fu,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v10);
  }
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v11 = "Dis";
    if ( (a1 & 0x20) != 0 )
      v11 = "En";
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x40u,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v11);
  }
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v12 = "Dis";
    if ( (a1 & 0x40) != 0 )
      v12 = "En";
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x41u,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v12);
  }
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v13 = "Dis";
    if ( (a1 & 0x7F000) != 0 )
      v13 = "En";
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x42u,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v13);
  }
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v14 = "Dis";
    if ( (a1 & 0x80000000000LL) != 0 )
      v14 = "En";
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x43u,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v14);
  }
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v15 = "Dis";
    if ( (a1 & 0x20000000000LL) != 0 )
      v15 = "En";
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x44u,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v15);
  }
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v16 = "Dis";
    if ( (a1 & 0x40000000000LL) != 0 )
      v16 = "En";
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x45u,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v16);
  }
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v17 = "Dis";
    if ( (a1 & 0xE0000000000LL) != 0 )
      v17 = "En";
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x46u,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v17);
  }
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v18 = "Dis";
    if ( (a1 & 0x1000000) != 0 )
      v18 = "En";
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x47u,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v18);
  }
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v19 = "Dis";
    if ( (a1 & 0x2000000) != 0 )
      v19 = "En";
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x48u,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v19);
  }
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v20 = "Dis";
    if ( (a1 & 0x10000000) != 0 )
      v20 = "En";
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x49u,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v20);
  }
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v21 = "Dis";
    if ( (a1 & 0x20000000) != 0 )
      v21 = "En";
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x4Au,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v21);
  }
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v22 = "Dis";
    if ( (a1 & 0x40000000) != 0 )
      v22 = "En";
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x4Bu,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v22);
  }
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v23 = "Dis";
    if ( (a1 & 0x80000000) != 0 )
      v23 = "En";
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x4Cu,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v23);
  }
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v24 = "Dis";
    if ( (a1 & 0x8000000) != 0 )
      v24 = "En";
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x4Du,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v24);
  }
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v25 = "Dis";
    if ( (a1 & 0x4000000000LL) != 0 )
      v25 = "En";
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x4Eu,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v25);
  }
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v26 = "Dis";
    if ( (a1 & 0x4000000) != 0 )
      v26 = "En";
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x4Fu,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v26);
  }
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x50u,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids);
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x51u,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids);
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v27 = "Dis";
    if ( (a1 & 0x100000000LL) != 0 )
      v27 = "En";
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x52u,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v27);
  }
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v28 = "Dis";
    if ( (a1 & 0x200000000LL) != 0 )
      v28 = "En";
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x53u,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v28);
  }
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v29 = "Dis";
    if ( (a1 & 0x300) != 0 )
      v29 = "En";
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x54u,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v29);
  }
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v30 = "Dis";
    if ( (a1 & 0x100000000000LL) != 0 )
      v30 = "En";
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x55u,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v30);
  }
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v31 = "Dis";
    if ( (a1 & 0x400) != 0 )
      v31 = "En";
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x56u,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v31);
  }
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v32 = "Dis";
    if ( (a1 & 0x1000000000LL) != 0 )
      v32 = "En";
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x57u,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v32);
  }
  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    if ( (a1 & 0x10000000000LL) != 0 )
      v4 = "En";
    WPP_RECORDER_SF_s(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      2u,
      0x58u,
      (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids,
      v4);
  }
  if ( a2 < 5u )
    return (PDEVICE_OBJECT)WPP_RECORDER_SF_(
                             (__int64)WPP_GLOBAL_Control->DeviceExtension,
                             a2,
                             2u,
                             0x59u,
                             (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids);
  result = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return (PDEVICE_OBJECT)WPP_RECORDER_SF_(
                             (__int64)WPP_GLOBAL_Control->DeviceExtension,
                             a2,
                             2u,
                             0x59u,
                             (__int64)&WPP_afa61faa5231333152e47bef050a90e4_Traceguids);
  return result;
}
