/*
 * XREFs of xxxSetWindowNCMetrics @ 0x1C0083240
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C004CB14 (xxxUpdatePerUserSystemParameters.c)
 *     UserOnGreTextReady @ 0x1C00BF790 (UserOnGreTextReady.c)
 *     xxxInitWindowStation @ 0x1C00DC7B8 (xxxInitWindowStation.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01B8680 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C0045E70 (-SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     xxxSetNCFonts @ 0x1C0081880 (xxxSetNCFonts.c)
 *     ?GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z @ 0x1C0083490 (-GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z.c)
 *     CreateBitmapStrip @ 0x1C0083E70 (CreateBitmapStrip.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSetWindowNCMetrics(
        struct _UNICODE_STRING *a1,
        struct tagNONCLIENTMETRICSW *a2,
        __int64 a3,
        int a4)
{
  unsigned int v4; // ebx
  int *v6; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // esi
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // ecx
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rcx
  __int64 SessionDpiMetrics; // rax
  int v26; // edx
  __int64 v27; // r8
  int v28; // ecx
  int v29; // edx
  int v30; // eax
  int v31; // edx
  int v32; // r8d
  int v34; // [rsp+20h] [rbp-E0h] BYREF
  int TWIPSMetricById; // [rsp+24h] [rbp-DCh]
  int v36; // [rsp+28h] [rbp-D8h]
  int v37; // [rsp+2Ch] [rbp-D4h]
  int v38; // [rsp+30h] [rbp-D0h]
  int v39; // [rsp+34h] [rbp-CCh]
  int v40; // [rsp+94h] [rbp-6Ch]
  int v41; // [rsp+98h] [rbp-68h]
  int v42; // [rsp+F8h] [rbp-8h]
  int v43; // [rsp+FCh] [rbp-4h]
  int v44; // [rsp+214h] [rbp+114h]

  v4 = 0;
  v6 = (int *)a2;
  if ( !(_DWORD)a3 )
  {
LABEL_32:
    LOBYTE(v4) = (unsigned int)CreateBitmapStrip(a1, a2, a3) != 0;
    return v4;
  }
  if ( (unsigned int)xxxSetNCFonts(a1, (__int64)a2) )
  {
    if ( !v6 )
    {
      v34 = 504;
      if ( a4 >= 0 )
        TWIPSMetricById = a4;
      else
        TWIPSMetricById = GetTWIPSMetricById(a1, 0x88u, -15);
      v36 = GetTWIPSMetricById(a1, 0x98u, -240);
      v37 = GetTWIPSMetricById(a1, 0x99u, -240);
      v38 = GetTWIPSMetricById(a1, 0x89u, -270);
      v39 = GetTWIPSMetricById(a1, 0x8Au, -270);
      v40 = GetTWIPSMetricById(a1, 0x8Cu, -195);
      v41 = GetTWIPSMetricById(a1, 0x8Du, -195);
      v42 = GetTWIPSMetricById(a1, 0x8Fu, -270);
      v43 = GetTWIPSMetricById(a1, 0x90u, -270);
      v44 = GetTWIPSMetricById(a1, 0x9Eu, 0);
      v6 = &v34;
    }
    v10 = 8;
    v11 = 1;
    if ( v6[1] > 1 )
      v11 = v6[1];
    v12 = 50;
    if ( v11 < 50 )
      v12 = v11;
    v13 = 0;
    v6[1] = v12;
    if ( v6[125] > 0 )
      v13 = v6[125];
    v14 = 100;
    if ( v13 < 100 )
      v14 = v13;
    v15 = 8;
    v6[125] = v14;
    if ( v6[2] > 8 )
      v15 = v6[2];
    v16 = v6[3];
    v6[2] = v15;
    v17 = 8;
    if ( v16 > 8 )
      v17 = v16;
    v18 = v6[4];
    v6[3] = v17;
    v19 = 8LL;
    if ( v18 > 8 )
      v19 = (unsigned int)v18;
    v6[4] = v19;
    v21 = *(_DWORD *)(GetSessionDpiServerInfo(v19, v8, v9) + 20);
    v23 = v6[5];
    v24 = (unsigned int)(v21 + 2);
    if ( v23 <= (int)v24 )
      v23 = *(_DWORD *)(GetSessionDpiServerInfo(v24, v20, v22) + 20) + 2;
    v6[5] = v23;
    SessionDpiMetrics = GetSessionDpiMetrics(v24, v20, v22);
    v26 = 8;
    v27 = SessionDpiMetrics;
    if ( v6[29] > 8 )
      v26 = v6[29];
    v28 = v6[30];
    v6[29] = v26;
    v29 = *(_DWORD *)(SessionDpiMetrics + 44);
    v30 = v6[54];
    v31 = v29 + 2;
    if ( v28 > v31 )
      v31 = v28;
    v6[30] = v31;
    if ( v30 > 8 )
      v10 = v30;
    v6[54] = v10;
    v32 = *(_DWORD *)(v27 + 20) + 2 + *(_DWORD *)(v27 + 12);
    if ( v6[55] > v32 )
      v32 = v6[55];
    v6[55] = v32;
    SetNCMetrics((struct tagNONCLIENTMETRICSW *)v6);
    goto LABEL_32;
  }
  return 0LL;
}
