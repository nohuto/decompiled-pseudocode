/*
 * XREFs of RIMIDEInjectHIDReportFromPointerInfo @ 0x1C010999C
 * Callers:
 *     NtUserInjectPointerInput @ 0x1C00E9450 (NtUserInjectPointerInput.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     RIMIDEFillContactUsageValues @ 0x1C010931C (RIMIDEFillContactUsageValues.c)
 *     RIMIDEGetTimeStampDelta @ 0x1C01094E4 (RIMIDEGetTimeStampDelta.c)
 *     RIMIDEInjectDeviceInput @ 0x1C0109710 (RIMIDEInjectDeviceInput.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C010B03C (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 */

__int64 __fastcall RIMIDEInjectHIDReportFromPointerInfo(char *a1, unsigned int *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r14
  int v6; // edi
  _DWORD *v7; // rsi
  unsigned int v8; // r13d
  unsigned int v9; // r15d
  unsigned __int64 v10; // rcx
  __int64 v11; // r14
  unsigned int v12; // r8d
  unsigned int v13; // r12d
  __int64 v14; // rcx
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int64 v23; // rax
  unsigned int v24; // r8d
  struct tagINPUT_INJECTION_VALUE *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int *v28; // rdx
  __int64 v29; // r15
  char *v30; // r12
  __int64 v31; // rcx
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  int v40; // eax
  __int64 v41; // rcx
  struct tagINPUT_INJECTION_VALUE *v43; // [rsp+28h] [rbp-99h] BYREF
  __int128 v44; // [rsp+38h] [rbp-89h] BYREF
  __int128 v45; // [rsp+48h] [rbp-79h]
  __int128 v46; // [rsp+58h] [rbp-69h]
  __int128 v47; // [rsp+68h] [rbp-59h]
  __int128 v48; // [rsp+78h] [rbp-49h]
  __int128 v49; // [rsp+88h] [rbp-39h]
  __int128 v50; // [rsp+98h] [rbp-29h]
  __int128 v51; // [rsp+A8h] [rbp-19h]
  __int128 v52; // [rsp+B8h] [rbp-9h]
  __int64 v53; // [rsp+C8h] [rbp+7h]
  unsigned int *v55; // [rsp+130h] [rbp+6Fh] BYREF
  unsigned int v56; // [rsp+138h] [rbp+77h]
  unsigned int v57; // [rsp+140h] [rbp+7Fh] BYREF

  v56 = a3;
  v55 = a2;
  v3 = 0;
  v4 = a3;
  v43 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  if ( (unsigned int)BuildValueDeviceUsages(*a2, &v43, &v57) )
  {
    v9 = v57;
    v10 = v4 * v57;
    v11 = 0xFFFFFFFFLL;
    if ( v10 <= 0xFFFFFFFF )
      v11 = (unsigned int)v10;
    LOBYTE(v6) = v10 > 0xFFFFFFFF;
    if ( v10 <= 0xFFFFFFFF )
    {
      if ( *a2 == 2 )
        v9 = v57 - 2;
      v7 = Win32AllocPoolZInit(12 * v11, 1785620818LL);
      if ( !v7 )
        v6 = 1;
      if ( !v6 )
      {
        v12 = v56;
        v13 = 0;
        if ( v56 )
        {
          while ( !v6 )
          {
            v14 = 38LL * v13;
            v15 = *(_OWORD *)&v55[v14 + 4];
            v44 = *(_OWORD *)&v55[v14];
            v16 = *(_OWORD *)&v55[v14 + 8];
            v45 = v15;
            v17 = *(_OWORD *)&v55[v14 + 12];
            v46 = v16;
            v18 = *(_OWORD *)&v55[v14 + 16];
            v47 = v17;
            v19 = *(_OWORD *)&v55[v14 + 20];
            v48 = v18;
            v20 = *(_OWORD *)&v55[v14 + 24];
            v49 = v19;
            v21 = *(_OWORD *)&v55[v14 + 28];
            v50 = v20;
            v22 = *(_OWORD *)&v55[v14 + 32];
            v23 = *(_QWORD *)&v55[v14 + 36];
            v51 = v21;
            v52 = v22;
            v53 = v23;
            if ( (unsigned int)RIMIDEFillContactUsageValues(v43, v9, (int *)&v44) )
            {
              v24 = 0;
              if ( v9 )
              {
                v25 = v43;
                do
                {
                  if ( v8 >= (unsigned int)v11 )
                    break;
                  ++v24;
                  v26 = v8++;
                  v27 = 3 * v26;
                  *(_QWORD *)&v7[v27] = *(_QWORD *)v25;
                  v7[v27 + 2] = *((_DWORD *)v25 + 2);
                  LOWORD(v7[v27 + 2]) = v13 + 1;
                  *((_DWORD *)v25 + 1) = 0;
                  v25 = (struct tagINPUT_INJECTION_VALUE *)((char *)v25 + 12);
                }
                while ( v24 < v9 );
              }
            }
            else
            {
              v6 = 1;
            }
            v12 = v56;
            if ( ++v13 >= v56 )
            {
              if ( v6 )
                break;
              goto LABEL_20;
            }
          }
        }
        else
        {
LABEL_20:
          v28 = v55;
          if ( *v55 == 2 )
          {
            v29 = v8 + 1;
            if ( (unsigned int)v29 > (unsigned int)v11 )
            {
              v6 = 1;
              goto LABEL_29;
            }
            v30 = a1;
            v31 = 3LL * v8;
            v7[v31 + 1] = v12;
            v7[v31] = 5505037;
            LOWORD(v7[v31 + 2]) = 0;
            v32 = *(_OWORD *)(v28 + 6);
            v44 = *(_OWORD *)(v28 + 2);
            v33 = *(_OWORD *)(v28 + 10);
            v45 = v32;
            v34 = *(_OWORD *)(v28 + 14);
            v46 = v33;
            v35 = *(_OWORD *)(v28 + 18);
            v47 = v34;
            v36 = *(_OWORD *)(v28 + 22);
            v48 = v35;
            v37 = *(_OWORD *)(v28 + 26);
            v49 = v36;
            v38 = *(_OWORD *)(v28 + 30);
            v50 = v37;
            v39 = *(_OWORD *)(v28 + 34);
            v51 = v38;
            v52 = v39;
            if ( !(unsigned int)RIMIDEGetTimeStampDelta(a1, (__int64)&v44, (unsigned int *)&v55) )
            {
              v6 = 1;
              goto LABEL_29;
            }
            v40 = (int)v55;
            v41 = 3 * v29;
            v7[v41] = 5636109;
            LODWORD(v11) = v8 + 2;
            v7[v41 + 1] = v40;
            LOWORD(v7[v41 + 2]) = 0;
          }
          else
          {
            v30 = a1;
          }
          if ( (int)RIMIDEInjectDeviceInput(v30, (__int64)v7, v11) < 0 )
            v6 = 1;
        }
      }
    }
  }
LABEL_29:
  if ( v43 )
    Win32FreePool((__int64)v43);
  if ( v7 )
    Win32FreePool((__int64)v7);
  LOBYTE(v3) = v6 == 0;
  return v3;
}
