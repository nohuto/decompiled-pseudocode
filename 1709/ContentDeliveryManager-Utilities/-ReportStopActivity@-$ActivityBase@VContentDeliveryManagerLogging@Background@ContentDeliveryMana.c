/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18005ADD8
 * Callers:
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18005A504 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x1800229D8 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        _QWORD *a1,
        int a2)
{
  int *v4; // rbx
  int v5; // eax
  int *v6; // rbx
  const struct _TlgProvider_t *v7; // rax
  const struct _TlgProvider_t *v8; // r11
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
  const struct _TlgProvider_t *v26; // rbx
  __int64 v27; // r8
  const unsigned __int16 *v28; // r9
  __int64 v29; // rax
  __int64 v30; // rcx
  const WCHAR *v31; // r10
  __int64 v32; // rcx
  int v34; // [rsp+30h] [rbp-D0h] BYREF
  int v35; // [rsp+34h] [rbp-CCh] BYREF
  int v36; // [rsp+38h] [rbp-C8h] BYREF
  int v37; // [rsp+3Ch] [rbp-C4h] BYREF
  int v38; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h]
  const unsigned __int16 *v42; // [rsp+80h] [rbp-80h]
  int v43; // [rsp+88h] [rbp-78h]
  int v44; // [rsp+8Ch] [rbp-74h]
  int *v45; // [rsp+90h] [rbp-70h]
  __int64 v46; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v47; // [rsp+A0h] [rbp-60h]
  int v48; // [rsp+A8h] [rbp-58h]
  int v49; // [rsp+ACh] [rbp-54h]
  int *v50; // [rsp+B0h] [rbp-50h]
  __int64 v51; // [rsp+B8h] [rbp-48h]
  const WCHAR *v52; // [rsp+C0h] [rbp-40h]
  int v53; // [rsp+C8h] [rbp-38h]
  int v54; // [rsp+CCh] [rbp-34h]
  int *v55; // [rsp+D0h] [rbp-30h]
  __int64 v56; // [rsp+D8h] [rbp-28h]
  const unsigned __int16 *v57; // [rsp+E0h] [rbp-20h]
  int v58; // [rsp+E8h] [rbp-18h]
  int v59; // [rsp+ECh] [rbp-14h]
  int *v60; // [rsp+F0h] [rbp-10h]
  __int64 v61; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v62; // [rsp+100h] [rbp+0h]
  int v63; // [rsp+108h] [rbp+8h]
  int v64; // [rsp+10Ch] [rbp+Ch]
  const WCHAR *v65; // [rsp+110h] [rbp+10h]
  int v66; // [rsp+118h] [rbp+18h]
  int v67; // [rsp+11Ch] [rbp+1Ch]
  int *v68; // [rsp+120h] [rbp+20h]
  __int64 v69; // [rsp+128h] [rbp+28h]
  const unsigned __int16 *v70; // [rsp+130h] [rbp+30h]
  int v71; // [rsp+138h] [rbp+38h]
  int v72; // [rsp+13Ch] [rbp+3Ch]
  const WCHAR *v73; // [rsp+140h] [rbp+40h]
  int v74; // [rsp+148h] [rbp+48h]
  int v75; // [rsp+14Ch] [rbp+4Ch]
  EVENT_DATA_DESCRIPTOR v76; // [rsp+150h] [rbp+50h] BYREF
  int *v77; // [rsp+170h] [rbp+70h]
  __int64 v78; // [rsp+178h] [rbp+78h]
  int *v79; // [rsp+180h] [rbp+80h]
  __int64 v80; // [rsp+188h] [rbp+88h]
  const unsigned __int16 *v81; // [rsp+190h] [rbp+90h]
  int v82; // [rsp+198h] [rbp+98h]
  int v83; // [rsp+19Ch] [rbp+9Ch]
  const WCHAR *v84; // [rsp+1A0h] [rbp+A0h]
  int v85; // [rsp+1A8h] [rbp+A8h]
  int v86; // [rsp+1ACh] [rbp+ACh]

  if ( a2 < 0 )
  {
    v4 = (int *)a1[6];
    v5 = v4[19];
    if ( v5 < 0 && v5 == v4[21] )
      v6 = v4 + 20;
    else
      v6 = 0LL;
    v7 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    if ( v6 )
    {
      v8 = v7;
      if ( *(_DWORD *)v7 > 5u
        && (*((_QWORD *)v7 + 2) & 0x200000000000LL) != 0
        && (*((_QWORD *)v7 + 3) & 0x200000000000LL) == *((_QWORD *)v7 + 3) )
      {
        v9 = &word_1800E10E4;
        v10 = (const unsigned __int16 *)*((_QWORD *)v6 + 6);
        v36 = v6[1];
        v40 = &v36;
        LODWORD(v11) = 0;
        v41 = 4LL;
        v12 = &word_1800E10E4;
        if ( v10 )
        {
          v12 = v10;
          v11 = -1LL;
          do
            ++v11;
          while ( *((_BYTE *)v10 + v11) );
        }
        v13 = (const unsigned __int16 *)*((_QWORD *)v6 + 15);
        v43 = v11 + 1;
        v45 = v6 + 14;
        LODWORD(v11) = 0;
        v42 = v12;
        v14 = &word_1800E10E4;
        v44 = 0;
        v46 = 4LL;
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
        v47 = v14;
        v48 = v11 + 1;
        v17 = &Src;
        v37 = *v6;
        v50 = &v37;
        LODWORD(v11) = 0;
        v49 = 0;
        v51 = 4LL;
        if ( v15 )
        {
          v17 = v15;
          v11 = -1LL;
          do
            ++v11;
          while ( v15[v11] );
        }
        v18 = (const unsigned __int16 *)*((_QWORD *)v6 + 8);
        v53 = 2 * v11 + 2;
        v38 = v6[6];
        v55 = &v38;
        LODWORD(v11) = 0;
        v52 = v17;
        v19 = &word_1800E10E4;
        v54 = 0;
        v56 = 4LL;
        if ( v18 )
        {
          v19 = v18;
          v11 = -1LL;
          do
            ++v11;
          while ( *((_BYTE *)v18 + v11) );
        }
        v20 = (const unsigned __int16 *)*((_QWORD *)v6 + 10);
        v58 = v11 + 1;
        v34 = v6[18];
        v60 = &v34;
        LODWORD(v11) = 0;
        v57 = v19;
        v21 = &word_1800E10E4;
        v59 = 0;
        v61 = 4LL;
        if ( v20 )
        {
          v21 = v20;
          v11 = -1LL;
          do
            ++v11;
          while ( *((_BYTE *)v20 + v11) );
        }
        v22 = (const WCHAR *)*((_QWORD *)v6 + 11);
        v63 = v11 + 1;
        LODWORD(v11) = 0;
        v62 = v21;
        v23 = &Src;
        v64 = 0;
        if ( v22 )
        {
          v23 = v22;
          v11 = -1LL;
          do
            ++v11;
          while ( v22[v11] );
        }
        v24 = (const unsigned __int16 *)*((_QWORD *)v6 + 13);
        v66 = 2 * v11 + 2;
        v35 = v6[24];
        v68 = &v35;
        LODWORD(v11) = 0;
        v65 = v23;
        v67 = 0;
        v69 = 4LL;
        if ( v24 )
        {
          v9 = v24;
          v11 = -1LL;
          do
            ++v11;
          while ( *((_BYTE *)v24 + v11) );
        }
        v25 = (const WCHAR *)*((_QWORD *)v6 + 14);
        v71 = v11 + 1;
        LODWORD(v11) = 0;
        v70 = v9;
        v72 = 0;
        if ( v25 )
        {
          v16 = v25;
          v11 = -1LL;
          do
            ++v11;
          while ( v25[v11] );
        }
        v73 = v16;
        v74 = 2 * v11 + 2;
        v75 = 0;
        TlgWrite(v8, &unk_18013D804, (LPCGUID)(a1[6] + 8LL), 0LL, 0x10u, &pData);
      }
    }
    else
    {
      v26 = v7;
      if ( *(_DWORD *)v7 > 5u
        && (*((_QWORD *)v7 + 2) & 0x200000000000LL) != 0
        && (*((_QWORD *)v7 + 3) & 0x200000000000LL) == *((_QWORD *)v7 + 3) )
      {
        v35 = a2;
        v77 = &v35;
        v78 = 4LL;
        LODWORD(v29) = GetCurrentThreadId();
        v27 = a1[6];
        v28 = &word_1800E10E4;
        v34 = v29;
        v80 = 4LL;
        v79 = &v34;
        LODWORD(v29) = 0;
        v30 = *(_QWORD *)(v27 + 48);
        if ( v30 )
        {
          v28 = *(const unsigned __int16 **)(v27 + 48);
          v29 = -1LL;
          do
            ++v29;
          while ( *(_BYTE *)(v30 + v29) );
        }
        v81 = v28;
        v82 = v29 + 1;
        v31 = &Src;
        v83 = 0;
        LODWORD(v29) = 0;
        v32 = *(_QWORD *)(v27 + 56);
        if ( v32 )
        {
          v31 = *(const WCHAR **)(v27 + 56);
          v29 = -1LL;
          do
            ++v29;
          while ( *(_WORD *)(v32 + 2 * v29) );
        }
        v84 = v31;
        v85 = 2 * v29 + 2;
        v86 = 0;
        TlgWrite(v26, &unk_18013EA0C, (LPCGUID)(v27 + 8), 0LL, 6u, &v76);
      }
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
}
