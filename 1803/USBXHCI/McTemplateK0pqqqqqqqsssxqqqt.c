/*
 * XREFs of McTemplateK0pqqqqqqqsssxqqqt @ 0x1C0036C64
 * Callers:
 *     Etw_ControllerCreate @ 0x1C0035ED8 (Etw_ControllerCreate.c)
 *     Etw_ControllerDelete @ 0x1C0035FD8 (Etw_ControllerDelete.c)
 *     Etw_ControllerFirmareVersionUpdate @ 0x1C00360D8 (Etw_ControllerFirmareVersionUpdate.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C000D034 (McGenEventWriteKM.c)
 */

NTSTATUS McTemplateK0pqqqqqqqsssxqqqt(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  const char *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  const char *v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  const char *v11; // rax
  __int64 v12; // rcx
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-D0h] BYREF
  va_list v15; // [rsp+40h] [rbp-C0h]
  __int64 v16; // [rsp+48h] [rbp-B8h]
  va_list v17; // [rsp+50h] [rbp-B0h]
  __int64 v18; // [rsp+58h] [rbp-A8h]
  va_list v19; // [rsp+60h] [rbp-A0h]
  __int64 v20; // [rsp+68h] [rbp-98h]
  va_list v21; // [rsp+70h] [rbp-90h]
  __int64 v22; // [rsp+78h] [rbp-88h]
  va_list v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+88h] [rbp-78h]
  va_list v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  va_list v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+A8h] [rbp-58h]
  va_list v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  const char *v31; // [rsp+C0h] [rbp-40h]
  int v32; // [rsp+C8h] [rbp-38h]
  int v33; // [rsp+CCh] [rbp-34h]
  const char *v34; // [rsp+D0h] [rbp-30h]
  int v35; // [rsp+D8h] [rbp-28h]
  int v36; // [rsp+DCh] [rbp-24h]
  const char *v37; // [rsp+E0h] [rbp-20h]
  int v38; // [rsp+E8h] [rbp-18h]
  int v39; // [rsp+ECh] [rbp-14h]
  va_list v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  va_list v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  va_list v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  va_list v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  va_list v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]
  __int64 v50; // [rsp+178h] [rbp+78h] BYREF
  va_list va; // [rsp+178h] [rbp+78h]
  __int64 v52; // [rsp+180h] [rbp+80h] BYREF
  va_list va1; // [rsp+180h] [rbp+80h]
  __int64 v54; // [rsp+188h] [rbp+88h] BYREF
  va_list va2; // [rsp+188h] [rbp+88h]
  __int64 v56; // [rsp+190h] [rbp+90h] BYREF
  va_list va3; // [rsp+190h] [rbp+90h]
  __int64 v58; // [rsp+198h] [rbp+98h] BYREF
  va_list va4; // [rsp+198h] [rbp+98h]
  __int64 v60; // [rsp+1A0h] [rbp+A0h] BYREF
  va_list va5; // [rsp+1A0h] [rbp+A0h]
  __int64 v62; // [rsp+1A8h] [rbp+A8h] BYREF
  va_list va6; // [rsp+1A8h] [rbp+A8h]
  __int64 v64; // [rsp+1B0h] [rbp+B0h] BYREF
  va_list va7; // [rsp+1B0h] [rbp+B0h]
  const char *v66; // [rsp+1B8h] [rbp+B8h]
  const char *v67; // [rsp+1C0h] [rbp+C0h]
  const char *v68; // [rsp+1C8h] [rbp+C8h]
  __int64 v69; // [rsp+1D0h] [rbp+D0h] BYREF
  va_list va8; // [rsp+1D0h] [rbp+D0h]
  __int64 v71; // [rsp+1D8h] [rbp+D8h] BYREF
  va_list va9; // [rsp+1D8h] [rbp+D8h]
  __int64 v73; // [rsp+1E0h] [rbp+E0h] BYREF
  va_list va10; // [rsp+1E0h] [rbp+E0h]
  __int64 v75; // [rsp+1E8h] [rbp+E8h] BYREF
  va_list va11; // [rsp+1E8h] [rbp+E8h]
  va_list va12; // [rsp+1F0h] [rbp+F0h] BYREF

  va_start(va12, a3);
  va_start(va11, a3);
  va_start(va10, a3);
  va_start(va9, a3);
  va_start(va8, a3);
  va_start(va7, a3);
  va_start(va6, a3);
  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v50 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v52 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v54 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v56 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v58 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v60 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v62 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v64 = va_arg(va8, _QWORD);
  v66 = va_arg(va8, const char *);
  v67 = va_arg(va8, const char *);
  v68 = va_arg(va8, const char *);
  va_copy(va9, va8);
  v69 = va_arg(va9, _QWORD);
  va_copy(va10, va9);
  v71 = va_arg(va10, _QWORD);
  va_copy(va11, va10);
  v73 = va_arg(va11, _QWORD);
  va_copy(va12, va11);
  v75 = va_arg(va12, _QWORD);
  v16 = 8LL;
  va_copy(v15, va);
  v18 = 4LL;
  va_copy(v17, va1);
  v4 = v66;
  va_copy(v19, va2);
  v20 = 4LL;
  va_copy(v21, va3);
  v5 = -1LL;
  v22 = 4LL;
  va_copy(v23, va4);
  va_copy(v25, va5);
  va_copy(v27, va6);
  va_copy(v29, va7);
  v24 = 4LL;
  v26 = 4LL;
  v28 = 4LL;
  v30 = 4LL;
  if ( v66 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( v66[v6] );
    v7 = v6 + 1;
  }
  else
  {
    v7 = 5;
  }
  v32 = v7;
  v33 = 0;
  if ( !v66 )
    v4 = "NULL";
  v31 = v4;
  v8 = v67;
  if ( v67 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v67[v9] );
    v10 = v9 + 1;
  }
  else
  {
    v10 = 5;
  }
  v35 = v10;
  v11 = v68;
  if ( !v67 )
    v8 = "NULL";
  v36 = 0;
  v34 = v8;
  if ( v68 )
  {
    do
      ++v5;
    while ( v68[v5] );
    v12 = (unsigned int)(v5 + 1);
  }
  else
  {
    v12 = 5LL;
  }
  v38 = v12;
  v39 = 0;
  if ( !v68 )
    v11 = "NULL";
  v41 = 8LL;
  v37 = v11;
  v43 = 4LL;
  va_copy(v40, va8);
  va_copy(v42, va9);
  va_copy(v44, va10);
  va_copy(v46, va11);
  va_copy(v48, va12);
  v45 = 4LL;
  v47 = 4LL;
  v49 = 4LL;
  return McGenEventWriteKM(v12, a2, 0LL, 0x11u, &v14);
}
