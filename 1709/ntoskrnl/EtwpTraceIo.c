/*
 * XREFs of EtwpTraceIo @ 0x14027D2B0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     IoGetActivityIdIrp @ 0x1401034A0 (IoGetActivityIdIrp.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     EtwpDiskProvTraceDisk @ 0x14027BB3C (EtwpDiskProvTraceDisk.c)
 */

char __fastcall EtwpTraceIo(int a1, int a2, __int64 a3)
{
  char *v4; // r8
  LONG *v5; // rsi
  char v6; // al
  __int16 v7; // di
  int v8; // eax
  _DWORD *v9; // rax
  int v10; // edx
  __int64 v11; // rax
  int v12; // eax
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // edx
  int v17; // r9d
  __int64 *v18; // r8
  __int64 v19; // rax
  GUID *v20; // r9
  __int128 v22; // [rsp+38h] [rbp-29h] BYREF
  _DWORD v23[3]; // [rsp+48h] [rbp-19h] BYREF
  int v24; // [rsp+54h] [rbp-Dh]
  __int64 v25; // [rsp+58h] [rbp-9h]
  __int64 v26; // [rsp+60h] [rbp-1h]
  __int64 v27; // [rsp+68h] [rbp+7h]
  __int64 v28; // [rsp+70h] [rbp+Fh]
  int v29; // [rsp+78h] [rbp+17h]
  _DWORD v30[2]; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v31; // [rsp+88h] [rbp+27h]
  __int64 v32; // [rsp+90h] [rbp+2Fh]
  int v33; // [rsp+98h] [rbp+37h]
  _DWORD *v34; // [rsp+A0h] [rbp+3Fh] BYREF
  int v35; // [rsp+A8h] [rbp+47h]
  int v36; // [rsp+ACh] [rbp+4Bh]

  v4 = *(char **)(a3 + 184);
  v5 = *(LONG **)(a3 + 152);
  v6 = *v4;
  if ( *v4 != 9 )
  {
    v23[0] = a2;
    v10 = *(_DWORD *)(a3 + 16);
    v23[2] = *(_DWORD *)(a3 + 56);
    v23[1] = v10;
    v7 = (v6 != 3) + 266;
    v27 = a3;
    v25 = *((_QWORD *)v4 + 3);
    v11 = *((_QWORD *)v4 + 1);
    v24 = 0;
    v28 = v11;
    if ( v5 )
      v12 = v5[400];
    else
      v12 = -1;
    v29 = v12;
    if ( (a1 & 0xFFFF0000) == 0x56530000 )
    {
      v24 = 1;
    }
    else
    {
      v13 = a1 & 0xFFFFFF;
      if ( v13 == 5467492 || v13 == 5460546 )
        v24 = 2;
    }
    if ( (v10 & 8) != 0 )
    {
      v14 = *(_QWORD *)(a3 + 24);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 192);
        if ( v15 )
          goto LABEL_24;
        v15 = *(_QWORD *)(*(_QWORD *)(v14 + 184) + 48LL);
LABEL_23:
        if ( v15 )
          goto LABEL_24;
      }
    }
    else
    {
      v15 = *(_QWORD *)(a3 + 192);
      if ( v15 )
      {
LABEL_24:
        v26 = *(_QWORD *)(v15 + 24);
LABEL_26:
        v9 = v23;
        v35 = 52;
        goto LABEL_27;
      }
      v16 = *(unsigned __int8 *)(a3 + 67);
      v17 = *(char *)(a3 + 66);
      if ( v16 <= v17 )
      {
        v18 = (__int64 *)(v4 + 48);
        while ( 1 )
        {
          v15 = *v18;
          if ( *v18 )
            goto LABEL_24;
          LOBYTE(v16) = v16 + 1;
          v18 += 9;
          if ( (unsigned __int8)v16 > v17 )
            goto LABEL_23;
        }
      }
    }
    v26 = 0LL;
    goto LABEL_26;
  }
  v7 = 270;
  v30[1] = *(_DWORD *)(a3 + 16);
  v30[0] = a2;
  v31 = *((_QWORD *)v4 + 1);
  v32 = a3;
  if ( v5 )
    v8 = v5[400];
  else
    v8 = -1;
  v33 = v8;
  v9 = v30;
  v35 = 28;
LABEL_27:
  v36 = 0;
  v34 = v9;
  EtwTraceKernelEvent((__int64)&v34, 1u, 0x100u, v7, 0x401803u);
  v19 = EtwpHostSiloState + 4464;
  if ( EtwpHostSiloState != -4464 )
  {
    LODWORD(v19) = *(_DWORD *)v19;
    if ( (v19 & 0x100) != 0 )
    {
      v22 = 0uLL;
      if ( (unsigned int)IoGetActivityIdIrp(a3, &v22) )
        v20 = 0LL;
      else
        v20 = (GUID *)&v22;
      LOBYTE(v19) = EtwpDiskProvTraceDisk(v7, (__int64)&v34, v5, v20);
    }
  }
  return v19;
}
