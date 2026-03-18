/*
 * XREFs of MiLogTrimWs @ 0x14007F7C0
 * Callers:
 *     MiTrimWorkingSet @ 0x14007F5E8 (MiTrimWorkingSet.c)
 * Callees:
 *     MiFillLogProcessInfo @ 0x14007F868 (MiFillLogProcessInfo.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1401F8C50 (_TlgCreateSz.c)
 *     _TlgWriteEx @ 0x14020CB14 (_TlgWriteEx.c)
 */

void __fastcall MiLogTrimWs(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  const struct _TlgProvider_t *v9; // r11
  int v10; // edx
  _QWORD *v11; // r9
  char v12; // al
  ULONG64 v13; // r8
  ULONG v14; // r9d
  TraceLoggingHProvider v15; // r11
  const GUID *v16; // [rsp+20h] [rbp-E0h]
  const GUID *v17; // [rsp+28h] [rbp-D8h]
  char v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+44h] [rbp-BCh] BYREF
  int v20; // [rsp+48h] [rbp-B8h] BYREF
  int v21; // [rsp+4Ch] [rbp-B4h] BYREF
  LPCSTR psz; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  __int64 v27; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  char *v29; // [rsp+A0h] [rbp-60h]
  int v30; // [rsp+A8h] [rbp-58h]
  int v31; // [rsp+ACh] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-50h] BYREF
  int *v33; // [rsp+C0h] [rbp-40h]
  int v34; // [rsp+C8h] [rbp-38h]
  int v35; // [rsp+CCh] [rbp-34h]
  __int64 *v36; // [rsp+D0h] [rbp-30h]
  int v37; // [rsp+D8h] [rbp-28h]
  int v38; // [rsp+DCh] [rbp-24h]
  __int64 *v39; // [rsp+E0h] [rbp-20h]
  int v40; // [rsp+E8h] [rbp-18h]
  int v41; // [rsp+ECh] [rbp-14h]
  __int64 *v42; // [rsp+F0h] [rbp-10h]
  int v43; // [rsp+F8h] [rbp-8h]
  int v44; // [rsp+FCh] [rbp-4h]
  __int64 *v45; // [rsp+100h] [rbp+0h]
  int v46; // [rsp+108h] [rbp+8h]
  int v47; // [rsp+10Ch] [rbp+Ch]
  __int64 *v48; // [rsp+110h] [rbp+10h]
  int v49; // [rsp+118h] [rbp+18h]
  int v50; // [rsp+11Ch] [rbp+1Ch]
  int *v51; // [rsp+120h] [rbp+20h]
  int v52; // [rsp+128h] [rbp+28h]
  int v53; // [rsp+12Ch] [rbp+2Ch]
  int *v54; // [rsp+130h] [rbp+30h]
  int v55; // [rsp+138h] [rbp+38h]
  int v56; // [rsp+13Ch] [rbp+3Ch]

  if ( qword_14036CFD8 )
  {
    MiFillLogProcessInfo(a1, &v19, &psz);
    if ( v9->LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(v9, 1uLL) )
      {
        v12 = *(_BYTE *)(a1 + 192);
        v31 = 0;
        v18 = v12 & 7;
        v25 = v11[720];
        v26 = v11[768];
        v27 = v11[782];
        v21 = a5;
        v30 = v10;
        v29 = &v18;
        v23 = a2;
        v24 = a3;
        v20 = a4;
        TlgCreateSz(&pDesc, psz);
        v35 = 0;
        v38 = 0;
        v41 = 0;
        v44 = 0;
        v47 = 0;
        v50 = 0;
        v53 = 0;
        v56 = 0;
        v36 = &v23;
        v39 = &v24;
        v42 = &v25;
        v45 = &v26;
        v48 = &v27;
        v51 = &v20;
        v33 = &v19;
        v54 = &v21;
        v34 = 4;
        v37 = 8;
        v40 = 8;
        v43 = 8;
        v46 = 8;
        v49 = 8;
        v52 = 4;
        v55 = 4;
        TlgWriteEx(v15, &unk_1402AC7D4, v13, v14, v16, v17, 0xCu, &pData);
      }
    }
  }
}
