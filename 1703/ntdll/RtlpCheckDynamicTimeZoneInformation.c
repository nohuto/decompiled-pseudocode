/*
 * XREFs of RtlpCheckDynamicTimeZoneInformation @ 0x180054970
 * Callers:
 *     <none>
 * Callees:
 *     sub_180054B00 @ 0x180054B00 (sub_180054B00.c)
 *     sub_180054BB0 @ 0x180054BB0 (sub_180054BB0.c)
 *     sub_180055F94 @ 0x180055F94 (sub_180055F94.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memcmp @ 0x180099A70 (memcmp.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

char __fastcall RtlpCheckDynamicTimeZoneInformation(_OWORD *Buf2, unsigned __int16 a2)
{
  char v4; // di
  __int128 v5; // xmm1
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  char *v22; // rbx
  __int64 v23; // rax
  __int128 v24; // xmm1
  HANDLE Handle; // [rsp+20h] [rbp-108h] BYREF
  _BYTE v26[56]; // [rsp+28h] [rbp-100h] BYREF
  __int128 Buf1; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v28; // [rsp+70h] [rbp-B8h]
  __int128 v29; // [rsp+80h] [rbp-A8h]
  __int128 v30; // [rsp+90h] [rbp-98h]
  __int128 v31; // [rsp+A0h] [rbp-88h]
  __int128 v32; // [rsp+B0h] [rbp-78h]
  __int128 v33; // [rsp+C0h] [rbp-68h]
  __int128 v34; // [rsp+D0h] [rbp-58h]
  __int128 v35; // [rsp+E0h] [rbp-48h]
  __int128 v36; // [rsp+F0h] [rbp-38h]
  __int64 v37; // [rsp+100h] [rbp-28h]
  int v38; // [rsp+108h] [rbp-20h]

  v4 = 0;
  if ( (int)sub_180054BB0((char *)Buf2 + 172, &Handle) >= 0 )
  {
    if ( (int)sub_180055F94(v26, Handle, a2) >= 0 )
    {
      v5 = Buf2[1];
      Buf1 = *Buf2;
      v6 = *((_QWORD *)Buf2 + 20);
      v7 = Buf2[2];
      v28 = v5;
      v8 = Buf2[3];
      v29 = v7;
      v9 = Buf2[4];
      v30 = v8;
      v10 = Buf2[5];
      v31 = v9;
      v11 = Buf2[6];
      v32 = v10;
      v12 = Buf2[8];
      v33 = v11;
      v34 = Buf2[7];
      v13 = Buf2[9];
      v35 = v12;
      v36 = v13;
      v37 = v6;
      v38 = *((_DWORD *)Buf2 + 42);
      sub_180054B00(&Buf1, v26);
      if ( memcmp(&Buf1, Buf2, 0xACuLL) )
      {
        v4 = 1;
        v15 = v28;
        *Buf2 = Buf1;
        v16 = v29;
        Buf2[1] = v15;
        v17 = v30;
        Buf2[2] = v16;
        v18 = v31;
        Buf2[3] = v17;
        v19 = v32;
        Buf2[4] = v18;
        v20 = v33;
        Buf2[5] = v19;
        v21 = v34;
        Buf2[6] = v20;
        v22 = (char *)(Buf2 + 8);
        *((_OWORD *)v22 - 1) = v21;
        v23 = v37;
        v24 = v36;
        *(_OWORD *)v22 = v35;
        *((_OWORD *)v22 + 1) = v24;
        *((_QWORD *)v22 + 4) = v23;
        *((_DWORD *)v22 + 10) = v38;
      }
    }
    ZwClose(Handle);
  }
  return v4;
}
