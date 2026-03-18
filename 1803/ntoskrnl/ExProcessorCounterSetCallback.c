/*
 * XREFs of ExProcessorCounterSetCallback @ 0x14052B910
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140036ED0 (KeQueryActiveProcessorCountEx.c)
 *     RtlStringCbPrintfW @ 0x140061AF0 (RtlStringCbPrintfW.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x14007ED10 (KeFindFirstSetRightGroupAffinity.c)
 *     KeQueryNodeActiveAffinity @ 0x14007ED60 (KeQueryNodeActiveAffinity.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     swscanf_s @ 0x14018EAF0 (swscanf_s.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExpQueryProcessorInformationCounters @ 0x14052C0C4 (ExpQueryProcessorInformationCounters.c)
 *     PcwAddInstance @ 0x14053AAE0 (PcwAddInstance.c)
 */

int __fastcall ExProcessorCounterSetCallback(int a1, __int64 *a2)
{
  int v2; // edi
  bool v4; // r13
  bool v5; // r14
  bool v6; // r15
  bool v7; // dl
  int v8; // ecx
  __int64 v9; // rax
  struct _PCW_BUFFER *v10; // r12
  ULONG ActiveProcessorCount; // eax
  unsigned int v12; // ecx
  unsigned __int64 v13; // rbx
  unsigned int v14; // r8d
  unsigned __int64 v15; // r9
  unsigned __int64 Mask; // r13
  unsigned int v17; // r8d
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r10
  __int64 FirstSetRightGroupAffinity; // rbx
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // r13
  int result; // eax
  __int64 v25; // rsi
  __int64 *v26; // rdx
  const UNICODE_STRING *v27; // rdx
  NTSTATUS v28; // eax
  PPCW_DATA Data; // [rsp+28h] [rbp-E0h]
  bool v30; // [rsp+38h] [rbp-D0h]
  __int16 v31; // [rsp+39h] [rbp-CFh]
  USHORT Count[2]; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v33; // [rsp+40h] [rbp-C8h] BYREF
  int v34; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v35; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v36; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v37; // [rsp+58h] [rbp-B0h]
  PPCW_BUFFER Buffer; // [rsp+60h] [rbp-A8h]
  struct _PCW_DATA v39; // [rsp+68h] [rbp-A0h] BYREF
  struct _PCW_DATA v40; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+98h] [rbp-70h] BYREF
  struct _PCW_DATA v43; // [rsp+A8h] [rbp-60h] BYREF
  struct _PCW_DATA v44; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v45[24]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v46[24]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v47; // [rsp+248h] [rbp+140h] BYREF
  __int64 v48; // [rsp+250h] [rbp+148h]
  __int64 v49; // [rsp+258h] [rbp+150h]
  __int64 v50; // [rsp+260h] [rbp+158h]
  int v51; // [rsp+268h] [rbp+160h]
  __int64 v52; // [rsp+270h] [rbp+168h]
  __int64 v53; // [rsp+278h] [rbp+170h]
  int v54; // [rsp+280h] [rbp+178h]
  int v55; // [rsp+284h] [rbp+17Ch]
  int v56; // [rsp+288h] [rbp+180h]
  __int64 v57; // [rsp+290h] [rbp+188h]
  __int64 v58; // [rsp+298h] [rbp+190h]
  __int64 v59; // [rsp+2A0h] [rbp+198h]
  __int64 v60; // [rsp+2A8h] [rbp+1A0h]
  __int64 v61; // [rsp+2B0h] [rbp+1A8h]
  __int64 v62; // [rsp+2B8h] [rbp+1B0h]
  __int64 v63; // [rsp+2C0h] [rbp+1B8h]
  int v64; // [rsp+2CCh] [rbp+1C4h]
  int v65; // [rsp+2D0h] [rbp+1C8h]
  unsigned int v66; // [rsp+2D8h] [rbp+1D0h]
  unsigned int v67; // [rsp+2DCh] [rbp+1D4h]
  __int64 v68; // [rsp+2E0h] [rbp+1D8h]
  __int64 v69; // [rsp+2E8h] [rbp+1E0h]
  __int64 v70; // [rsp+2F0h] [rbp+1E8h]
  __int64 v71; // [rsp+2F8h] [rbp+1F0h]
  int v72; // [rsp+300h] [rbp+1F8h]
  int v73; // [rsp+304h] [rbp+1FCh]
  wchar_t pszDest[16]; // [rsp+308h] [rbp+200h] BYREF

  v2 = 0;
  v4 = 0;
  v31 = 0;
  v5 = 0;
  v30 = 0;
  v6 = 0;
  v34 = 0;
  v7 = 0;
  v33 = 0;
  v8 = a1 - 2;
  if ( v8 )
  {
    if ( v8 != 1 )
      return 0;
    v9 = *a2;
    v10 = (struct _PCW_BUFFER *)a2[3];
    Buffer = v10;
    v4 = (v9 & 0x100E0FF05LL) != 0;
    v5 = (v9 & 0xC00F0000) != 0;
    HIBYTE(v31) = v4;
    LOBYTE(v31) = v5;
    v6 = (v9 & 0x3F000000) != 0;
    v30 = v6;
    v7 = swscanf_s(*(const wchar_t **)(a2[1] + 8), L"%u,%u", &v33, &v34) == 2;
  }
  else
  {
    v10 = (struct _PCW_BUFFER *)a2[3];
    Buffer = v10;
  }
  if ( v7 )
  {
    v25 = *((unsigned int *)a2 + 4);
    if ( (unsigned int)v25 >= (unsigned int)KeNumberProcessors_0 )
      return -1073741275;
    v26 = &v47;
    LOBYTE(v26) = v4;
    ExpQueryProcessorInformationCounters(KiProcessorBlock[v25], (_DWORD)v26, v5, v6, (__int64)&v47);
    v27 = (const UNICODE_STRING *)a2[1];
    v40.Data = &v47;
    v40.Size = 192;
    v28 = PcwAddInstance(v10, v27, v25, 1u, &v40);
    if ( v28 < 0 )
      return v28;
    return v2;
  }
  memset(v46, 0, sizeof(v46));
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  LOWORD(v12) = 0;
  v13 = 0LL;
  v33 = 0;
  v14 = ActiveProcessorCount;
  LODWORD(v35) = ActiveProcessorCount;
  v40.Data = 0LL;
  v15 = 0LL;
  v39.Data = 0LL;
  if ( !KeNumberNodes )
  {
LABEL_20:
    if ( v14 > 1 )
    {
      v46[0] /= (unsigned __int64)v14;
      v46[1] /= (unsigned __int64)v14;
      v46[2] /= (unsigned __int64)v14;
      v46[3] /= (unsigned __int64)v14;
      v46[6] /= (unsigned __int64)v14;
      v46[5] /= (unsigned __int64)v14;
      v46[9] /= (unsigned __int64)v14;
      v46[10] /= (unsigned __int64)v14;
      v46[11] /= (unsigned __int64)v14;
      v46[15] /= (unsigned __int64)v14;
      HIDWORD(v46[16]) /= v14;
      LODWORD(v46[17]) /= v14;
    }
    if ( v6 )
    {
      LODWORD(v46[18]) = v15 / v14;
      HIDWORD(v46[18]) = v13 / v14;
      v46[19] /= (unsigned __int64)v14;
      v46[20] /= (unsigned __int64)v14;
    }
    if ( v5 )
      LODWORD(v46[23]) /= v14;
    RtlStringCbPrintfW(pszDest, 0x1AuLL, L"_Total", v15);
    RtlInitUnicodeString(&DestinationString, pszDest);
    v39.Data = v46;
    v39.Size = 192;
    return PcwAddInstance(v10, &DestinationString, KeMaximumProcessors + (unsigned __int16)KeNumberNodes, 1u, &v39);
  }
  while ( 1 )
  {
    KeQueryNodeActiveAffinity(v12, &Affinity, Count);
    Mask = Affinity.Mask;
    if ( Affinity.Mask )
      break;
LABEL_18:
    v12 = v33 + 1;
    v33 = v12;
    if ( v12 >= (unsigned __int16)KeNumberNodes )
    {
      v14 = v35;
      v15 = (unsigned __int64)v39.Data;
      goto LABEL_20;
    }
  }
  memset(v45, 0, sizeof(v45));
  v17 = Count[0];
  v18 = 0LL;
  v36 = 0LL;
  v19 = 0LL;
  v37 = 0LL;
  v34 = 0;
  if ( !Count[0] )
  {
LABEL_11:
    if ( Count[0] > 1u )
    {
      v45[0] /= (unsigned __int64)Count[0];
      v45[1] /= (unsigned __int64)Count[0];
      v45[2] /= (unsigned __int64)Count[0];
      v45[3] /= (unsigned __int64)Count[0];
      v45[6] /= (unsigned __int64)Count[0];
      v45[5] /= (unsigned __int64)Count[0];
      v45[9] /= (unsigned __int64)Count[0];
      v45[10] /= (unsigned __int64)Count[0];
      v45[11] /= (unsigned __int64)Count[0];
      v45[15] /= (unsigned __int64)Count[0];
      HIDWORD(v45[16]) /= v17;
      LODWORD(v45[17]) /= v17;
    }
    v6 = v30;
    if ( v30 )
    {
      LODWORD(v45[18]) = v19 / Count[0];
      HIDWORD(v45[18]) = v18 / Count[0];
      v45[19] /= (unsigned __int64)Count[0];
      v45[20] /= (unsigned __int64)Count[0];
    }
    v5 = v31;
    if ( (_BYTE)v31 )
      LODWORD(v45[23]) /= v17;
    RtlStringCbPrintfW(pszDest, 0x1AuLL, L"%u,_Total", v33);
    RtlInitUnicodeString(&DestinationString, pszDest);
    v10 = Buffer;
    v44.Data = v45;
    v44.Size = 192;
    result = PcwAddInstance(Buffer, &DestinationString, v33 + KeMaximumProcessors, 1u, &v44);
    if ( result < 0 )
      return result;
    goto LABEL_18;
  }
  while ( 1 )
  {
    FirstSetRightGroupAffinity = (unsigned int)KeFindFirstSetRightGroupAffinity((__int64)&Affinity);
    v21 = KiProcessorBlock[FirstSetRightGroupAffinity];
    v22 = ~*(_QWORD *)(v21 + 200);
    v23 = v22 & Mask;
    LOBYTE(v22) = HIBYTE(v31);
    Affinity.Mask = v23;
    ExpQueryProcessorInformationCounters(v21, v22, v5, v6, (__int64)&v47);
    LODWORD(Data) = v34;
    RtlStringCbPrintfW(pszDest, 0x1AuLL, L"%u,%u", v33, Data);
    RtlInitUnicodeString(&DestinationString, pszDest);
    v43.Size = 192;
    v43.Data = &v47;
    result = PcwAddInstance(v10, &DestinationString, FirstSetRightGroupAffinity, 1u, &v43);
    if ( result < 0 )
      return result;
    v45[13] += v61;
    v46[0] += v47;
    v46[1] += v48;
    v46[2] += v49;
    v46[3] += v50;
    LODWORD(v46[4]) += v51;
    v46[6] += v53;
    HIDWORD(v46[7]) += v55;
    LODWORD(v46[8]) += v56;
    v45[11] += v59;
    v45[14] += v62;
    v45[21] += v70;
    v45[22] += v71;
    v45[15] += v63;
    HIDWORD(v45[16]) += v64;
    LODWORD(v45[17]) += v65;
    v37 += v66;
    v36 += v67;
    v45[19] += v68;
    v45[20] += v69;
    LODWORD(v45[23]) += v72;
    v45[0] += v47;
    v45[1] += v48;
    v45[2] += v49;
    v45[3] += v50;
    LODWORD(v45[4]) += v51;
    v45[6] += v53;
    HIDWORD(v45[7]) += v55;
    LODWORD(v45[8]) += v56;
    v45[5] += v52;
    LODWORD(v45[7]) += v54;
    v45[9] += v57;
    v45[12] += v60;
    v45[10] += v58;
    HIDWORD(v45[23]) |= v73;
    v46[5] += v52;
    LODWORD(v46[7]) += v54;
    HIDWORD(v46[16]) += v64;
    HIDWORD(v46[23]) |= v73;
    v46[9] += v57;
    v46[12] += v60;
    v46[10] += v58;
    v46[22] += v71;
    v13 = (unsigned __int64)v40.Data + v67;
    v46[19] += v68;
    v46[13] += v61;
    v46[11] += v59;
    v46[14] += v62;
    v46[21] += v70;
    v46[15] += v63;
    LODWORD(v46[17]) += v65;
    v39.Data = (char *)v39.Data + v66;
    v46[20] += v69;
    LODWORD(v46[23]) += v72;
    v17 = Count[0];
    v5 = v31;
    v6 = v30;
    v10 = Buffer;
    Mask = Affinity.Mask;
    v40.Data = (const void *)v13;
    if ( ++v34 >= (unsigned int)Count[0] )
    {
      v18 = v36;
      v19 = v37;
      goto LABEL_11;
    }
  }
}
