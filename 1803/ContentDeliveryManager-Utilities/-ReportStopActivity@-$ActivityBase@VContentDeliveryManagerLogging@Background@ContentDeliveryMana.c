/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180062718
 * Callers:
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180061E44 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x180025AC8 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        _QWORD *a1,
        int a2)
{
  int *v4; // rbx
  int v5; // eax
  int *v6; // rbx
  const struct _TlgProvider_t *v7; // rax
  const struct _TlgProvider_t *v8; // rsi
  const unsigned __int16 *v9; // r9
  const unsigned __int16 *v10; // rcx
  __int64 v11; // rax
  const unsigned __int16 *v12; // r8
  const unsigned __int16 *v13; // rcx
  const unsigned __int16 *v14; // r8
  const WCHAR *v15; // rcx
  const WCHAR *v16; // r10
  const WCHAR *v17; // r8
  const unsigned __int16 *v18; // rcx
  const unsigned __int16 *v19; // r8
  const unsigned __int16 *v20; // rcx
  const unsigned __int16 *v21; // r8
  const WCHAR *v22; // rcx
  const WCHAR *v23; // r8
  const unsigned __int16 *v24; // rcx
  const WCHAR *v25; // rcx
  __int64 v26; // r8
  const unsigned __int16 *v27; // r9
  __int64 v28; // rax
  __int64 v29; // rcx
  const WCHAR *v30; // r10
  __int64 v31; // rcx
  int v33; // [rsp+38h] [rbp-D0h] BYREF
  int v34; // [rsp+3Ch] [rbp-CCh] BYREF
  int v35; // [rsp+40h] [rbp-C8h] BYREF
  int v36; // [rsp+44h] [rbp-C4h] BYREF
  int v37; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  int *v39; // [rsp+78h] [rbp-90h]
  __int64 v40; // [rsp+80h] [rbp-88h]
  const unsigned __int16 *v41; // [rsp+88h] [rbp-80h]
  int v42; // [rsp+90h] [rbp-78h]
  int v43; // [rsp+94h] [rbp-74h]
  int *v44; // [rsp+98h] [rbp-70h]
  __int64 v45; // [rsp+A0h] [rbp-68h]
  const unsigned __int16 *v46; // [rsp+A8h] [rbp-60h]
  int v47; // [rsp+B0h] [rbp-58h]
  int v48; // [rsp+B4h] [rbp-54h]
  int *v49; // [rsp+B8h] [rbp-50h]
  __int64 v50; // [rsp+C0h] [rbp-48h]
  const WCHAR *v51; // [rsp+C8h] [rbp-40h]
  int v52; // [rsp+D0h] [rbp-38h]
  int v53; // [rsp+D4h] [rbp-34h]
  int *v54; // [rsp+D8h] [rbp-30h]
  __int64 v55; // [rsp+E0h] [rbp-28h]
  const unsigned __int16 *v56; // [rsp+E8h] [rbp-20h]
  int v57; // [rsp+F0h] [rbp-18h]
  int v58; // [rsp+F4h] [rbp-14h]
  int *v59; // [rsp+F8h] [rbp-10h]
  __int64 v60; // [rsp+100h] [rbp-8h]
  const unsigned __int16 *v61; // [rsp+108h] [rbp+0h]
  int v62; // [rsp+110h] [rbp+8h]
  int v63; // [rsp+114h] [rbp+Ch]
  const WCHAR *v64; // [rsp+118h] [rbp+10h]
  int v65; // [rsp+120h] [rbp+18h]
  int v66; // [rsp+124h] [rbp+1Ch]
  int *v67; // [rsp+128h] [rbp+20h]
  __int64 v68; // [rsp+130h] [rbp+28h]
  const unsigned __int16 *v69; // [rsp+138h] [rbp+30h]
  int v70; // [rsp+140h] [rbp+38h]
  int v71; // [rsp+144h] [rbp+3Ch]
  const WCHAR *v72; // [rsp+148h] [rbp+40h]
  int v73; // [rsp+150h] [rbp+48h]
  int v74; // [rsp+154h] [rbp+4Ch]
  EVENT_DATA_DESCRIPTOR v75; // [rsp+158h] [rbp+50h] BYREF
  int *v76; // [rsp+178h] [rbp+70h]
  __int64 v77; // [rsp+180h] [rbp+78h]
  int *v78; // [rsp+188h] [rbp+80h]
  __int64 v79; // [rsp+190h] [rbp+88h]
  const unsigned __int16 *v80; // [rsp+198h] [rbp+90h]
  int v81; // [rsp+1A0h] [rbp+98h]
  int v82; // [rsp+1A4h] [rbp+9Ch]
  const WCHAR *v83; // [rsp+1A8h] [rbp+A0h]
  int v84; // [rsp+1B0h] [rbp+A8h]
  int v85; // [rsp+1B4h] [rbp+ACh]

  if ( a2 < 0 )
  {
    v4 = (int *)a1[6];
    v5 = v4[19];
    if ( v5 < 0 && v5 == v4[21] )
      v6 = v4 + 20;
    else
      v6 = 0LL;
    v7 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    v8 = v7;
    if ( v6 )
    {
      if ( *(_DWORD *)v7 > 5u
        && (*((_QWORD *)v7 + 2) & 0x200000000000LL) != 0
        && (*((_QWORD *)v7 + 3) & 0x200000000000LL) == *((_QWORD *)v7 + 3) )
      {
        v9 = &word_1800F144C;
        v10 = (const unsigned __int16 *)*((_QWORD *)v6 + 6);
        v35 = v6[1];
        v39 = &v35;
        LODWORD(v11) = 0;
        v40 = 4LL;
        v12 = &word_1800F144C;
        if ( v10 )
        {
          v12 = v10;
          v11 = -1LL;
          do
            ++v11;
          while ( *((_BYTE *)v10 + v11) );
        }
        v13 = (const unsigned __int16 *)*((_QWORD *)v6 + 15);
        v42 = v11 + 1;
        v44 = v6 + 14;
        LODWORD(v11) = 0;
        v41 = v12;
        v14 = &word_1800F144C;
        v43 = 0;
        v45 = 4LL;
        if ( v13 )
        {
          v14 = v13;
          v11 = -1LL;
          do
            ++v11;
          while ( *((_BYTE *)v13 + v11) );
        }
        v15 = (const WCHAR *)*((_QWORD *)v6 + 2);
        v16 = &Src;
        v46 = v14;
        v47 = v11 + 1;
        v17 = &Src;
        v36 = *v6;
        v49 = &v36;
        LODWORD(v11) = 0;
        v48 = 0;
        v50 = 4LL;
        if ( v15 )
        {
          v17 = v15;
          v11 = -1LL;
          do
            ++v11;
          while ( v15[v11] );
        }
        v18 = (const unsigned __int16 *)*((_QWORD *)v6 + 8);
        v52 = 2 * v11 + 2;
        v37 = v6[6];
        v54 = &v37;
        LODWORD(v11) = 0;
        v51 = v17;
        v19 = &word_1800F144C;
        v53 = 0;
        v55 = 4LL;
        if ( v18 )
        {
          v19 = v18;
          v11 = -1LL;
          do
            ++v11;
          while ( *((_BYTE *)v18 + v11) );
        }
        v20 = (const unsigned __int16 *)*((_QWORD *)v6 + 10);
        v57 = v11 + 1;
        v33 = v6[18];
        v59 = &v33;
        LODWORD(v11) = 0;
        v56 = v19;
        v21 = &word_1800F144C;
        v58 = 0;
        v60 = 4LL;
        if ( v20 )
        {
          v21 = v20;
          v11 = -1LL;
          do
            ++v11;
          while ( *((_BYTE *)v20 + v11) );
        }
        v22 = (const WCHAR *)*((_QWORD *)v6 + 11);
        v62 = v11 + 1;
        LODWORD(v11) = 0;
        v61 = v21;
        v23 = &Src;
        v63 = 0;
        if ( v22 )
        {
          v23 = v22;
          v11 = -1LL;
          do
            ++v11;
          while ( v22[v11] );
        }
        v24 = (const unsigned __int16 *)*((_QWORD *)v6 + 13);
        v65 = 2 * v11 + 2;
        v34 = v6[24];
        v67 = &v34;
        LODWORD(v11) = 0;
        v64 = v23;
        v66 = 0;
        v68 = 4LL;
        if ( v24 )
        {
          v9 = v24;
          v11 = -1LL;
          do
            ++v11;
          while ( *((_BYTE *)v24 + v11) );
        }
        v25 = (const WCHAR *)*((_QWORD *)v6 + 14);
        v70 = v11 + 1;
        LODWORD(v11) = 0;
        v69 = v9;
        v71 = 0;
        if ( v25 )
        {
          v16 = v25;
          v11 = -1LL;
          do
            ++v11;
          while ( v25[v11] );
        }
        v72 = v16;
        v73 = 2 * v11 + 2;
        v74 = 0;
        TlgWrite(v8, &unk_1801557BC, (LPCGUID)(a1[6] + 8LL), 0LL, 0x10u, &pData);
      }
    }
    else if ( *(_DWORD *)v7 > 5u
           && (*((_QWORD *)v7 + 2) & 0x200000000000LL) != 0
           && (*((_QWORD *)v7 + 3) & 0x200000000000LL) == *((_QWORD *)v7 + 3) )
    {
      v34 = a2;
      v76 = &v34;
      v77 = 4LL;
      LODWORD(v28) = GetCurrentThreadId();
      v26 = a1[6];
      v27 = &word_1800F144C;
      v33 = v28;
      v79 = 4LL;
      v78 = &v33;
      LODWORD(v28) = 0;
      v29 = *(_QWORD *)(v26 + 48);
      if ( v29 )
      {
        v27 = *(const unsigned __int16 **)(v26 + 48);
        v28 = -1LL;
        do
          ++v28;
        while ( *(_BYTE *)(v29 + v28) );
      }
      v80 = v27;
      v81 = v28 + 1;
      v30 = &Src;
      v82 = 0;
      LODWORD(v28) = 0;
      v31 = *(_QWORD *)(v26 + 56);
      if ( v31 )
      {
        v30 = *(const WCHAR **)(v26 + 56);
        v28 = -1LL;
        do
          ++v28;
        while ( *(_WORD *)(v31 + 2 * v28) );
      }
      v83 = v30;
      v84 = 2 * v28 + 2;
      v85 = 0;
      TlgWrite(v8, &unk_180155B95, (LPCGUID)(v26 + 8), 0LL, 6u, &v75);
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
}
