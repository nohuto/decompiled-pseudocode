/*
 * XREFs of UsbhEtwLogPortInformation @ 0x1C001E080
 * Callers:
 *     UsbhEtwRundown @ 0x1C0008014 (UsbhEtwRundown.c)
 *     UsbhGetExtendedHubInformation @ 0x1C001AA20 (UsbhGetExtendedHubInformation.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C0005320 (UsbhEtwWrite.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhEtwLogPortInformation(__int64 a1)
{
  _DWORD *v2; // rax
  int v3; // r10d
  _DWORD *v4; // r15
  unsigned __int16 v5; // di
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // eax
  int v22; // ecx
  __int64 v23; // [rsp+50h] [rbp-B8h]
  int v24; // [rsp+70h] [rbp-98h] BYREF
  int v25; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v26[6]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v27[2]; // [rsp+98h] [rbp-70h] BYREF
  int v28; // [rsp+9Ah] [rbp-6Eh]
  int v29; // [rsp+9Eh] [rbp-6Ah]
  int v30; // [rsp+A8h] [rbp-60h] BYREF
  __int16 v31; // [rsp+ACh] [rbp-5Ch]
  __int16 v32; // [rsp+AEh] [rbp-5Ah]
  __int16 v33; // [rsp+B0h] [rbp-58h]
  __int16 v34; // [rsp+B2h] [rbp-56h]
  int v35; // [rsp+B8h] [rbp-50h] BYREF
  __int16 v36; // [rsp+BCh] [rbp-4Ch]
  __int16 v37; // [rsp+BEh] [rbp-4Ah]
  __int16 v38; // [rsp+C0h] [rbp-48h]
  __int16 v39; // [rsp+C2h] [rbp-46h]
  int v40; // [rsp+C8h] [rbp-40h] BYREF
  __int16 v41; // [rsp+CCh] [rbp-3Ch]
  __int16 v42; // [rsp+CEh] [rbp-3Ah]
  __int16 v43; // [rsp+D0h] [rbp-38h]
  __int16 v44; // [rsp+D2h] [rbp-36h]
  _WORD v45[2]; // [rsp+D8h] [rbp-30h] BYREF
  int v46; // [rsp+DCh] [rbp-2Ch]
  int v47; // [rsp+E0h] [rbp-28h]
  int v53; // [rsp+F8h] [rbp-10h]
  _WORD v54[2]; // [rsp+100h] [rbp-8h] BYREF
  int v55; // [rsp+104h] [rbp-4h]
  int v56; // [rsp+108h] [rbp+0h]
  int v62; // [rsp+120h] [rbp+18h]
  _WORD v63[2]; // [rsp+128h] [rbp+20h] BYREF
  int v64; // [rsp+12Ch] [rbp+24h]
  int v65; // [rsp+130h] [rbp+28h]
  int v71; // [rsp+148h] [rbp+40h]

  if ( dword_1C0069650 )
  {
    v2 = FdoExt(a1);
    v3 = 1;
    v4 = v2;
    v5 = 1;
    v6 = *((_QWORD *)v2 + 377);
    while ( 1 )
    {
      if ( !a1 )
        UsbhTrapFatal_Dbg(0LL, 0LL);
      v7 = *(_QWORD *)(a1 + 64);
      if ( !v7 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *(_DWORD *)v7 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v7);
      if ( v5 > *(unsigned __int8 *)(v7 + 2938) )
        break;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v8 = *(_QWORD *)(v7 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
        *(_DWORD *)v8 = 1413771367;
        *(_QWORD *)(v8 + 16) = v5;
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 24) = 0LL;
      }
      if ( v5 )
      {
        v9 = *(_QWORD *)(a1 + 64);
        if ( !v9 )
          UsbhTrapFatal_Dbg(a1, 0LL);
        if ( *(_DWORD *)v9 != 541218120 )
          UsbhTrapFatal_Dbg(a1, v9);
        if ( v5 <= *(unsigned __int8 *)(v9 + 2938) )
        {
          v10 = *(_QWORD *)(v9 + 3056);
          if ( v10 )
            Log(a1, 8, 1735410750, v5, v10 + 2928LL * (v5 - 1));
        }
      }
      v24 = v5;
      if ( dword_1C0069650 )
      {
        v11 = *(_QWORD *)(a1 + 64);
        if ( !v11 )
          UsbhTrapFatal_Dbg(a1, 0LL);
        if ( *(_DWORD *)v11 != 541218120 )
          UsbhTrapFatal_Dbg(a1, v11);
        v12 = 0;
        v30 = *(_DWORD *)(v11 + 5192);
        v31 = *(_WORD *)(v11 + 5196);
        v13 = *(_DWORD *)(v11 + 5200);
        v32 = v13;
        v26[2] = v13;
        v33 = *(_WORD *)(v11 + 5228);
        v34 = *(_WORD *)(v11 + 5230);
        v45[0] = *(_WORD *)(v11 + 2548);
        LOWORD(v13) = *(_WORD *)(v11 + 2550);
        v46 = 0;
        v45[1] = v13;
        v47 = *(unsigned __int16 *)(v11 + 5208);
        if ( *(_WORD *)(v11 + 5208) )
          v12 = v3;
        v46 = v12;
        if ( *(unsigned __int16 *)(v11 + 5210) )
          v46 = ++v12;
        if ( *(unsigned __int16 *)(v11 + 5212) )
          v46 = ++v12;
        if ( *(unsigned __int16 *)(v11 + 5214) )
          v46 = ++v12;
        if ( *(unsigned __int16 *)(v11 + 5216) )
          v46 = ++v12;
        if ( *(unsigned __int16 *)(v11 + 5218) )
          v46 = v12 + 1;
        LODWORD(v23) = 4;
        v53 = *(_DWORD *)(v11 + 2536);
        UsbhEtwWrite(
          &USBHUB_ETW_EVENT_HUB_PORT_ATTRIBUTES,
          0LL,
          (unsigned __int64)&v30,
          12LL,
          v45,
          36LL,
          &v24,
          4LL,
          v6 + 4LL * v5,
          v23,
          0LL);
        v3 = 1;
      }
      v14 = *((_QWORD *)v4 + 378);
      if ( v14 )
      {
        if ( (*(_DWORD *)(v6 + 4LL * v5) & 0x20) != 0 )
        {
          v25 = v5;
          v27[0] = *(_BYTE *)(28LL * v5 + v14);
          v27[1] = *(_BYTE *)(28LL * v5 + *((_QWORD *)v4 + 378) + 1);
          v28 = *(_DWORD *)(28LL * v5 + *((_QWORD *)v4 + 378) + 4);
          v29 = *(_DWORD *)(28LL * v5 + *((_QWORD *)v4 + 378) + 8);
          if ( dword_1C0069650 )
          {
            v15 = *(_QWORD *)(a1 + 64);
            if ( !v15 )
              UsbhTrapFatal_Dbg(a1, 0LL);
            if ( *(_DWORD *)v15 != 541218120 )
              UsbhTrapFatal_Dbg(a1, v15);
            v16 = 0;
            v35 = *(_DWORD *)(v15 + 5192);
            v36 = *(_WORD *)(v15 + 5196);
            v17 = *(_DWORD *)(v15 + 5200);
            v37 = v17;
            v26[3] = v17;
            v38 = *(_WORD *)(v15 + 5228);
            v39 = *(_WORD *)(v15 + 5230);
            v54[0] = *(_WORD *)(v15 + 2548);
            LOWORD(v17) = *(_WORD *)(v15 + 2550);
            v55 = 0;
            v54[1] = v17;
            v56 = *(unsigned __int16 *)(v15 + 5208);
            if ( *(_WORD *)(v15 + 5208) )
              v16 = v3;
            v55 = v16;
            if ( *(unsigned __int16 *)(v15 + 5210) )
              v55 = ++v16;
            if ( *(unsigned __int16 *)(v15 + 5212) )
              v55 = ++v16;
            if ( *(unsigned __int16 *)(v15 + 5214) )
              v55 = ++v16;
            if ( *(unsigned __int16 *)(v15 + 5216) )
              v55 = ++v16;
            if ( *(unsigned __int16 *)(v15 + 5218) )
              v55 = v16 + 1;
            LODWORD(v23) = 10;
            v62 = *(_DWORD *)(v15 + 2536);
            UsbhEtwWrite(
              &USBHUB_ETW_EVENT_HUB_PORT_ACPI_UPC_VALUE,
              0LL,
              (unsigned __int64)&v35,
              12LL,
              v54,
              36LL,
              &v25,
              4LL,
              v27,
              v23,
              0LL);
          }
        }
        if ( (*(_DWORD *)(v6 + 4LL * v5) & 0x40) != 0 )
        {
          v18 = *((_QWORD *)v4 + 378) + 12LL;
          v26[0] = v5;
          v19 = 28LL * v5 + v18;
          if ( dword_1C0069650 )
          {
            v20 = *(_QWORD *)(a1 + 64);
            if ( !v20 )
              UsbhTrapFatal_Dbg(a1, 0LL);
            if ( *(_DWORD *)v20 != 541218120 )
              UsbhTrapFatal_Dbg(a1, v20);
            v40 = *(_DWORD *)(v20 + 5192);
            v41 = *(_WORD *)(v20 + 5196);
            v21 = *(_DWORD *)(v20 + 5200);
            v42 = v21;
            v26[4] = v21;
            v43 = *(_WORD *)(v20 + 5228);
            v44 = *(_WORD *)(v20 + 5230);
            v63[0] = *(_WORD *)(v20 + 2548);
            v63[1] = *(_WORD *)(v20 + 2550);
            v64 = 0;
            v65 = *(unsigned __int16 *)(v20 + 5208);
            v22 = *(_WORD *)(v20 + 5208) != 0;
            v64 = v22;
            if ( *(unsigned __int16 *)(v20 + 5210) )
              v64 = ++v22;
            if ( *(unsigned __int16 *)(v20 + 5212) )
              v64 = ++v22;
            if ( *(unsigned __int16 *)(v20 + 5214) )
              v64 = ++v22;
            if ( *(unsigned __int16 *)(v20 + 5216) )
              v64 = ++v22;
            if ( *(unsigned __int16 *)(v20 + 5218) )
              v64 = v22 + 1;
            LODWORD(v23) = 16;
            v71 = *(_DWORD *)(v20 + 2536);
            UsbhEtwWrite(
              &USBHUB_ETW_EVENT_HUB_PORT_ACPI_PLD_VALUE,
              0LL,
              (unsigned __int64)&v40,
              12LL,
              v63,
              36LL,
              v26,
              4LL,
              v19,
              v23,
              0LL);
          }
        }
      }
      ++v5;
      v3 = 1;
    }
  }
}
