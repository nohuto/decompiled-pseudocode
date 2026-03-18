/*
 * XREFs of EtwpTraceOpticalIo @ 0x140254EE0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     EtwpGetScsiPassThroughCdb @ 0x14025410C (EtwpGetScsiPassThroughCdb.c)
 */

ULONG_PTR *__fastcall EtwpTraceOpticalIo(int a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r11
  __int64 v5; // rbx
  ULONG_PTR *result; // rax
  __int64 v9; // rax
  int v10; // eax
  __int16 v11; // r9
  int *v12; // rax
  char v13; // r10
  __int16 v14; // dx
  int v15; // ecx
  __int64 v16; // rax
  int v17; // ecx
  int v18; // eax
  __int16 v19; // r14
  int v20; // edx
  __int64 v21; // rax
  int v22; // eax
  int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // edx
  int v27; // r10d
  __int64 *v28; // r9
  int v29; // [rsp+30h] [rbp-39h] BYREF
  int v30; // [rsp+34h] [rbp-35h]
  int v31; // [rsp+38h] [rbp-31h]
  int v32; // [rsp+3Ch] [rbp-2Dh]
  ULONG_PTR *v33; // [rsp+40h] [rbp-29h]
  __int64 v34; // [rsp+48h] [rbp-21h]
  __int64 v35; // [rsp+50h] [rbp-19h]
  __int64 v36; // [rsp+58h] [rbp-11h]
  int v37; // [rsp+60h] [rbp-9h]
  int v38; // [rsp+68h] [rbp-1h] BYREF
  int v39; // [rsp+6Ch] [rbp+3h]
  __int64 v40; // [rsp+70h] [rbp+7h]
  __int64 v41; // [rsp+78h] [rbp+Fh]
  int v42; // [rsp+80h] [rbp+17h]
  int *v43; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v44; // [rsp+90h] [rbp+27h]

  v4 = *(_QWORD *)(a3 + 184);
  v5 = a4;
  LOBYTE(a4) = *(_BYTE *)v4;
  result = (ULONG_PTR *)(unsigned int)(a4 - 3);
  if ( (unsigned __int8)(*(_BYTE *)v4 - 3) <= 1u )
  {
    v31 = *(_DWORD *)(a3 + 56);
    v29 = a2;
    v35 = a3;
    v19 = ((_BYTE)a4 != 3) + 311;
    v20 = *(_DWORD *)(a3 + 16);
    v30 = v20;
    v33 = *(ULONG_PTR **)(v4 + 24);
    v21 = *(_QWORD *)(a3 + 152);
    v36 = v5;
    v32 = 0;
    if ( v21 )
      v22 = *(_DWORD *)(v21 + 1600);
    else
      v22 = -1;
    v37 = v22;
    if ( (a1 & 0xFFFF0000) == 0x56530000 )
    {
      v32 = 1;
    }
    else
    {
      v23 = a1 & 0xFFFFFF;
      if ( v23 == 5460546 || v23 == 5467492 )
        v32 = 2;
    }
    if ( (v20 & 8) != 0 )
    {
      v24 = *(_QWORD *)(a3 + 24);
      if ( v24 )
      {
        v25 = *(_QWORD *)(v24 + 192);
        if ( v25 )
          goto LABEL_38;
        v25 = *(_QWORD *)(*(_QWORD *)(v24 + 184) + 48LL);
LABEL_37:
        if ( v25 )
          goto LABEL_38;
      }
    }
    else
    {
      v25 = *(_QWORD *)(a3 + 192);
      if ( v25 )
      {
LABEL_38:
        v34 = *(_QWORD *)(v25 + 24);
LABEL_40:
        v44 = 52LL;
        v11 = v19;
        goto LABEL_41;
      }
      v26 = *(unsigned __int8 *)(a3 + 67);
      v27 = *(char *)(a3 + 66);
      if ( v26 <= v27 )
      {
        v28 = (__int64 *)(v4 + 48);
        while ( 1 )
        {
          v25 = *v28;
          if ( *v28 )
            goto LABEL_38;
          LOBYTE(v26) = v26 + 1;
          v28 += 9;
          if ( (unsigned __int8)v26 > v27 )
            goto LABEL_37;
        }
      }
    }
    v34 = 0LL;
    goto LABEL_40;
  }
  if ( (_BYTE)a4 == 9 )
  {
    v39 = *(_DWORD *)(a3 + 16);
    v9 = *(_QWORD *)(a3 + 152);
LABEL_4:
    v41 = a3;
    v40 = v5;
    v38 = a2;
    if ( v9 )
      v10 = *(_DWORD *)(v9 + 1600);
    else
      v10 = -1;
    v42 = v10;
    v11 = 313;
    v12 = &v38;
    v44 = 28LL;
    goto LABEL_42;
  }
  if ( (_BYTE)a4 == 14 )
  {
    result = EtwpGetScsiPassThroughCdb((IRP *)a3);
    if ( result )
    {
      v13 = *(_BYTE *)result;
      result = (ULONG_PTR *)((*((unsigned __int8 *)result + 5) | (unsigned __int64)((*((unsigned __int8 *)result + 4) | ((*((unsigned __int8 *)result + 3) | (*((unsigned __int8 *)result + 2) << 8)) << 8)) << 8)) << 11);
      if ( ((v13 - 40) & 0x7F) != 0 )
      {
        if ( ((v13 - 42) & 0x7F) != 0 )
        {
          if ( v13 != 53 )
            return result;
          v39 = *(_DWORD *)(a3 + 16);
          v9 = *(_QWORD *)(a3 + 152);
          goto LABEL_4;
        }
        v14 = 312;
      }
      else
      {
        v14 = 311;
      }
      v15 = *(_DWORD *)(a3 + 16);
      v33 = result;
      v16 = *(_QWORD *)(a3 + 152);
      v30 = v15;
      v17 = *(_DWORD *)(a3 + 56);
      v29 = a2;
      v35 = a3;
      v31 = v17;
      v36 = v5;
      v32 = 0;
      v34 = 0LL;
      if ( v16 )
        v18 = *(_DWORD *)(v16 + 1600);
      else
        v18 = -1;
      v37 = v18;
      v11 = v14;
      v44 = 28LL;
LABEL_41:
      v12 = &v29;
LABEL_42:
      v43 = v12;
      return (ULONG_PTR *)EtwTraceKernelEvent((int)&v43, 1, 0x80000001, v11, 4200451);
    }
  }
  return result;
}
