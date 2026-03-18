/*
 * XREFs of EtwpTraceIo @ 0x1400247C0
 * Callers:
 *     <none>
 * Callees:
 *     IoGetActivityIdIrp @ 0x14000BAA0 (IoGetActivityIdIrp.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     EtwpDiskProvTraceDisk @ 0x140253D84 (EtwpDiskProvTraceDisk.c)
 */

__int64 __fastcall EtwpTraceIo(int a1, int a2, __int64 a3)
{
  char *v4; // r8
  __int64 v5; // rsi
  char v6; // al
  int v7; // edx
  unsigned __int16 v8; // di
  __int64 v9; // rax
  int v10; // eax
  int v11; // ecx
  __int64 v12; // rcx
  _DWORD *v13; // rax
  __int64 result; // rax
  int v15; // edx
  int v16; // r9d
  __int64 *v17; // r8
  __int64 v18; // rax
  int v19; // eax
  __int128 *v20; // r9
  __int128 v21; // [rsp+38h] [rbp-29h] BYREF
  _DWORD v22[3]; // [rsp+48h] [rbp-19h] BYREF
  int v23; // [rsp+54h] [rbp-Dh]
  __int64 v24; // [rsp+58h] [rbp-9h]
  __int64 v25; // [rsp+60h] [rbp-1h]
  __int64 v26; // [rsp+68h] [rbp+7h]
  __int64 v27; // [rsp+70h] [rbp+Fh]
  int v28; // [rsp+78h] [rbp+17h]
  _DWORD v29[2]; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v30; // [rsp+88h] [rbp+27h]
  __int64 v31; // [rsp+90h] [rbp+2Fh]
  int v32; // [rsp+98h] [rbp+37h]
  _DWORD *v33; // [rsp+A0h] [rbp+3Fh] BYREF
  int v34; // [rsp+A8h] [rbp+47h]
  int v35; // [rsp+ACh] [rbp+4Bh]

  v4 = *(char **)(a3 + 184);
  v5 = *(_QWORD *)(a3 + 152);
  v6 = *v4;
  if ( *v4 != 9 )
  {
    v22[0] = a2;
    v7 = *(_DWORD *)(a3 + 16);
    v22[2] = *(_DWORD *)(a3 + 56);
    v22[1] = v7;
    v8 = (v6 != 3) + 266;
    v26 = a3;
    v24 = *((_QWORD *)v4 + 3);
    v9 = *((_QWORD *)v4 + 1);
    v23 = 0;
    v27 = v9;
    if ( v5 )
      v10 = *(_DWORD *)(v5 + 1600);
    else
      v10 = -1;
    v28 = v10;
    if ( (a1 & 0xFFFF0000) == 0x56530000 )
    {
      v23 = 1;
    }
    else
    {
      v11 = a1 & 0xFFFFFF;
      if ( v11 == 5460546 || v11 == 5467492 )
        v23 = 2;
    }
    if ( (v7 & 8) != 0 )
    {
      v18 = *(_QWORD *)(a3 + 24);
      if ( v18 )
      {
        v12 = *(_QWORD *)(v18 + 192);
        if ( v12 )
          goto LABEL_9;
        v12 = *(_QWORD *)(*(_QWORD *)(v18 + 184) + 48LL);
LABEL_17:
        if ( v12 )
          goto LABEL_9;
      }
    }
    else
    {
      v12 = *(_QWORD *)(a3 + 192);
      if ( v12 )
      {
LABEL_9:
        v25 = *(_QWORD *)(v12 + 24);
LABEL_10:
        v13 = v22;
        v34 = 52;
        goto LABEL_11;
      }
      v15 = *(unsigned __int8 *)(a3 + 67);
      v16 = *(char *)(a3 + 66);
      if ( v15 <= v16 )
      {
        v17 = (__int64 *)(v4 + 48);
        while ( 1 )
        {
          v12 = *v17;
          if ( *v17 )
            goto LABEL_9;
          LOBYTE(v15) = v15 + 1;
          v17 += 9;
          if ( (unsigned __int8)v15 > v16 )
            goto LABEL_17;
        }
      }
    }
    v25 = 0LL;
    goto LABEL_10;
  }
  v8 = 270;
  v29[1] = *(_DWORD *)(a3 + 16);
  v29[0] = a2;
  v30 = *((_QWORD *)v4 + 1);
  v31 = a3;
  if ( v5 )
    v19 = *(_DWORD *)(v5 + 1600);
  else
    v19 = -1;
  v32 = v19;
  v13 = v29;
  v34 = 28;
LABEL_11:
  v35 = 0;
  v33 = v13;
  result = EtwTraceKernelEvent((unsigned int)&v33, 1, 256, v8, 4200451);
  if ( (dword_140345000 & 0x100) != 0 )
  {
    v21 = 0uLL;
    if ( (unsigned int)IoGetActivityIdIrp(a3, &v21) )
      v20 = 0LL;
    else
      v20 = &v21;
    return EtwpDiskProvTraceDisk(v8, &v33, v5, v20);
  }
  return result;
}
