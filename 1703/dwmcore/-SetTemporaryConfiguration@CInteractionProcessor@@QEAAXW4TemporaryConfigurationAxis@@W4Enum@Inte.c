/*
 * XREFs of ?SetTemporaryConfiguration@CInteractionProcessor@@QEAAXW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x18018FA84
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18004DA9C (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

char __fastcall CInteractionProcessor::SetTemporaryConfiguration(_BYTE *a1, int a2, int a3, unsigned __int8 a4, int a5)
{
  _BYTE *v5; // rsi
  int v6; // eax
  int v11; // ebx
  _BYTE *v12; // rsi
  int v13; // r10d
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // r9d
  char *v18; // r8
  char v19; // cl
  char v20; // al
  const GUID *v21; // r8
  const GUID *v22; // r9
  int v23; // r10d
  int v24; // r11d
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v29; // [rsp+30h] [rbp-D0h] BYREF
  int v30; // [rsp+34h] [rbp-CCh] BYREF
  int v31; // [rsp+38h] [rbp-C8h] BYREF
  int v32; // [rsp+3Ch] [rbp-C4h] BYREF
  int v33; // [rsp+40h] [rbp-C0h] BYREF
  int v34; // [rsp+44h] [rbp-BCh] BYREF
  int v35; // [rsp+48h] [rbp-B8h] BYREF
  int v36; // [rsp+4Ch] [rbp-B4h] BYREF
  int v37; // [rsp+50h] [rbp-B0h] BYREF
  int v38; // [rsp+54h] [rbp-ACh] BYREF
  _BYTE *v39; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v41; // [rsp+80h] [rbp-80h]
  int v42; // [rsp+88h] [rbp-78h]
  int v43; // [rsp+8Ch] [rbp-74h]
  int *v44; // [rsp+90h] [rbp-70h]
  int v45; // [rsp+98h] [rbp-68h]
  int v46; // [rsp+9Ch] [rbp-64h]
  int *v47; // [rsp+A0h] [rbp-60h]
  int v48; // [rsp+A8h] [rbp-58h]
  int v49; // [rsp+ACh] [rbp-54h]
  int *v50; // [rsp+B0h] [rbp-50h]
  int v51; // [rsp+B8h] [rbp-48h]
  int v52; // [rsp+BCh] [rbp-44h]
  int *v53; // [rsp+C0h] [rbp-40h]
  int v54; // [rsp+C8h] [rbp-38h]
  int v55; // [rsp+CCh] [rbp-34h]
  int *v56; // [rsp+D0h] [rbp-30h]
  int v57; // [rsp+D8h] [rbp-28h]
  int v58; // [rsp+DCh] [rbp-24h]
  int *v59; // [rsp+E0h] [rbp-20h]
  int v60; // [rsp+E8h] [rbp-18h]
  int v61; // [rsp+ECh] [rbp-14h]
  int *v62; // [rsp+F0h] [rbp-10h]
  int v63; // [rsp+F8h] [rbp-8h]
  int v64; // [rsp+FCh] [rbp-4h]
  int *v65; // [rsp+100h] [rbp+0h]
  int v66; // [rsp+108h] [rbp+8h]
  int v67; // [rsp+10Ch] [rbp+Ch]
  int *v68; // [rsp+110h] [rbp+10h]
  int v69; // [rsp+118h] [rbp+18h]
  int v70; // [rsp+11Ch] [rbp+1Ch]
  int *v71; // [rsp+120h] [rbp+20h]
  int v72; // [rsp+128h] [rbp+28h]
  int v73; // [rsp+12Ch] [rbp+2Ch]

  v5 = a1 + 880;
  v6 = -a3;
  v11 = -1;
  v12 = &v5[a3 != 0 ? 0x24 : 0];
  v29 = -1;
  v13 = 0;
  v15 = 3LL;
  if ( a2 )
  {
    v16 = a2 - 1;
    if ( v16 )
    {
      if ( v16 != 1 )
        goto LABEL_8;
      v11 = 2;
      v13 = 48;
    }
    else
    {
      v11 = 1;
      v13 = 12;
    }
  }
  else
  {
    v11 = 0;
    v13 = 3;
  }
  v29 = v11;
LABEL_8:
  v17 = a5 | ~v13;
  if ( v11 != -1 )
  {
    LOBYTE(v6) = v11;
    if ( v12[12 * v11] != a4 || a4 && *(_DWORD *)&v12[12 * v11 + 4] != v17 )
    {
      v12[12 * v11] = a4;
      *(_DWORD *)&v12[12 * v29 + 4] = v17;
      LOBYTE(v6) = v29;
      *(_DWORD *)&v12[12 * v29 + 8] = v13;
      v11 = v29;
      if ( !a3 )
      {
        a1[148] |= 1u;
        a1[308] |= 1u;
      }
    }
  }
  if ( a3 == 1 )
  {
    a1[872] &= ~2u;
    v18 = a1 + 916;
    v19 = a1[872];
    do
    {
      v20 = *v18;
      v18 += 12;
      LOBYTE(v6) = (v19 ^ (v19 | (2 * v20))) & 2;
      v19 ^= v6;
      a1[872] = v19;
      --v15;
    }
    while ( v15 );
  }
  if ( dword_18023D7F0 > 4u )
  {
    LOBYTE(v6) = TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL);
    if ( (_BYTE)v6 )
    {
      v43 = 0;
      v46 = 0;
      v49 = 0;
      v52 = 0;
      v55 = 0;
      v41 = &v39;
      v44 = &v30;
      v47 = &v31;
      v50 = &v29;
      v32 = a4;
      v53 = &v32;
      v39 = a1;
      v42 = 8;
      v30 = a2;
      v45 = 4;
      v31 = a3;
      v48 = 4;
      v51 = 4;
      v54 = 4;
      v25 = (unsigned __int8)v12[12 * v11];
      v58 = 0;
      v61 = 0;
      v64 = 0;
      v67 = 0;
      v33 = v25;
      v56 = &v33;
      v59 = &v34;
      v62 = &v35;
      v65 = &v36;
      v57 = 4;
      v34 = v24;
      v60 = 4;
      v35 = v23;
      v63 = 4;
      v36 = (int)v22;
      v66 = 4;
      v26 = *(_DWORD *)&v12[12 * v11 + 4];
      v70 = 0;
      v37 = v26;
      v68 = &v37;
      v27 = ((unsigned __int8)a1[872] >> 1) & 1;
      v69 = 4;
      v73 = 0;
      v38 = v27;
      v71 = &v38;
      v72 = 4;
      LOBYTE(v6) = TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F88E7, v21, v22, 0xDu, &pData);
    }
  }
  return v6;
}
