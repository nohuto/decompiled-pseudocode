/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800BB718
 * Callers:
 *     ?Stop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800BAA84 (-Stop@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1StartMenuReposition@StartMenuExperienceTelemetry@@QEAA@XZ @ 0x1800BBB10 (--1StartMenuReposition@StartMenuExperienceTelemetry@@QEAA@XZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?StopActivity@StartMenuReposition@StartMenuExperienceTelemetry@@MEAAXXZ @ 0x1800BB1C0 (-StopActivity@StartMenuReposition@StartMenuExperienceTelemetry@@MEAAXXZ.c)
 *     ?Provider@StartMenuExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800BB664 (-Provider@StartMenuExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall wil::ActivityBase<StartMenuExperienceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        StartMenuExperienceTelemetry::StartMenuReposition *this,
        int a2)
{
  int *v4; // rbx
  int v5; // eax
  int *v6; // rbx
  const struct _TlgProvider_t *v7; // rax
  const struct _TlgProvider_t *v8; // r11
  const wchar_t *v9; // r9
  const wchar_t *v10; // rcx
  __int64 v11; // rax
  const wchar_t *v12; // r8
  const wchar_t *v13; // rcx
  const wchar_t *v14; // r8
  const WCHAR *v15; // rcx
  const WCHAR *v16; // r10
  const WCHAR *v17; // r8
  const wchar_t *v18; // rcx
  const wchar_t *v19; // r8
  const wchar_t *v20; // rcx
  const wchar_t *v21; // r8
  const WCHAR *v22; // rcx
  const WCHAR *v23; // r8
  const wchar_t *v24; // rcx
  const WCHAR *v25; // rcx
  const struct _TlgProvider_t *v26; // rbx
  __int64 v27; // r8
  const wchar_t *v28; // r9
  __int64 v29; // rax
  __int64 v30; // rcx
  const WCHAR *v31; // r10
  __int64 v32; // rcx
  int v33; // [rsp+30h] [rbp-D0h] BYREF
  int v34; // [rsp+34h] [rbp-CCh] BYREF
  int v35; // [rsp+38h] [rbp-C8h] BYREF
  int v36; // [rsp+3Ch] [rbp-C4h] BYREF
  int v37; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  const wchar_t *v41; // [rsp+80h] [rbp-80h]
  int v42; // [rsp+88h] [rbp-78h]
  int v43; // [rsp+8Ch] [rbp-74h]
  int *v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  const wchar_t *v46; // [rsp+A0h] [rbp-60h]
  int v47; // [rsp+A8h] [rbp-58h]
  int v48; // [rsp+ACh] [rbp-54h]
  int *v49; // [rsp+B0h] [rbp-50h]
  __int64 v50; // [rsp+B8h] [rbp-48h]
  const WCHAR *v51; // [rsp+C0h] [rbp-40h]
  int v52; // [rsp+C8h] [rbp-38h]
  int v53; // [rsp+CCh] [rbp-34h]
  int *v54; // [rsp+D0h] [rbp-30h]
  __int64 v55; // [rsp+D8h] [rbp-28h]
  const wchar_t *v56; // [rsp+E0h] [rbp-20h]
  int v57; // [rsp+E8h] [rbp-18h]
  int v58; // [rsp+ECh] [rbp-14h]
  int *v59; // [rsp+F0h] [rbp-10h]
  __int64 v60; // [rsp+F8h] [rbp-8h]
  const wchar_t *v61; // [rsp+100h] [rbp+0h]
  int v62; // [rsp+108h] [rbp+8h]
  int v63; // [rsp+10Ch] [rbp+Ch]
  const WCHAR *v64; // [rsp+110h] [rbp+10h]
  int v65; // [rsp+118h] [rbp+18h]
  int v66; // [rsp+11Ch] [rbp+1Ch]
  int *v67; // [rsp+120h] [rbp+20h]
  __int64 v68; // [rsp+128h] [rbp+28h]
  const wchar_t *v69; // [rsp+130h] [rbp+30h]
  int v70; // [rsp+138h] [rbp+38h]
  int v71; // [rsp+13Ch] [rbp+3Ch]
  const WCHAR *v72; // [rsp+140h] [rbp+40h]
  int v73; // [rsp+148h] [rbp+48h]
  int v74; // [rsp+14Ch] [rbp+4Ch]
  EVENT_DATA_DESCRIPTOR v75; // [rsp+150h] [rbp+50h] BYREF
  int *v76; // [rsp+170h] [rbp+70h]
  __int64 v77; // [rsp+178h] [rbp+78h]
  int *v78; // [rsp+180h] [rbp+80h]
  __int64 v79; // [rsp+188h] [rbp+88h]
  const wchar_t *v80; // [rsp+190h] [rbp+90h]
  int v81; // [rsp+198h] [rbp+98h]
  int v82; // [rsp+19Ch] [rbp+9Ch]
  const WCHAR *v83; // [rsp+1A0h] [rbp+A0h]
  int v84; // [rsp+1A8h] [rbp+A8h]
  int v85; // [rsp+1ACh] [rbp+ACh]

  if ( a2 < 0 )
  {
    v4 = (int *)*((_QWORD *)this + 6);
    v5 = v4[19];
    if ( v5 < 0 && v5 == v4[21] )
      v6 = v4 + 20;
    else
      v6 = 0LL;
    v7 = StartMenuExperienceLogging::Provider();
    if ( v6 )
    {
      v8 = v7;
      if ( *(_DWORD *)v7 > 5u
        && (*((_QWORD *)v7 + 2) & 0x200000000000LL) != 0
        && (*((_QWORD *)v7 + 3) & 0x200000000000LL) == *((_QWORD *)v7 + 3) )
      {
        v9 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
        v10 = (const wchar_t *)*((_QWORD *)v6 + 6);
        v35 = v6[1];
        v39 = &v35;
        LODWORD(v11) = 0;
        v40 = 4LL;
        v12 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
        if ( v10 )
        {
          v12 = v10;
          v11 = -1LL;
          do
            ++v11;
          while ( *((_BYTE *)v10 + v11) );
        }
        v13 = (const wchar_t *)*((_QWORD *)v6 + 15);
        v42 = v11 + 1;
        v44 = v6 + 14;
        LODWORD(v11) = 0;
        v41 = v12;
        v14 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
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
        v16 = &word_18021F3A8;
        v46 = v14;
        v47 = v11 + 1;
        v17 = &word_18021F3A8;
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
        v18 = (const wchar_t *)*((_QWORD *)v6 + 8);
        v52 = 2 * v11 + 2;
        v37 = v6[6];
        v54 = &v37;
        LODWORD(v11) = 0;
        v51 = v17;
        v19 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
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
        v20 = (const wchar_t *)*((_QWORD *)v6 + 10);
        v57 = v11 + 1;
        v33 = v6[18];
        v59 = &v33;
        LODWORD(v11) = 0;
        v56 = v19;
        v21 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
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
        v23 = &word_18021F3A8;
        v63 = 0;
        if ( v22 )
        {
          v23 = v22;
          v11 = -1LL;
          do
            ++v11;
          while ( v22[v11] );
        }
        v24 = (const wchar_t *)*((_QWORD *)v6 + 13);
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
        TlgWrite(v8, &unk_1802653D8, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x10u, &pData);
      }
    }
    else
    {
      v26 = v7;
      if ( *(_DWORD *)v7 > 5u
        && (*((_QWORD *)v7 + 2) & 0x200000000000LL) != 0
        && (*((_QWORD *)v7 + 3) & 0x200000000000LL) == *((_QWORD *)v7 + 3) )
      {
        v34 = a2;
        v76 = &v34;
        v77 = 4LL;
        LODWORD(v29) = GetCurrentThreadId();
        v27 = *((_QWORD *)this + 6);
        v28 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
        v33 = v29;
        v79 = 4LL;
        v78 = &v33;
        LODWORD(v29) = 0;
        v30 = *(_QWORD *)(v27 + 48);
        if ( v30 )
        {
          v28 = *(const wchar_t **)(v27 + 48);
          v29 = -1LL;
          do
            ++v29;
          while ( *(_BYTE *)(v30 + v29) );
        }
        v80 = v28;
        v81 = v29 + 1;
        v31 = &word_18021F3A8;
        v82 = 0;
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
        v83 = v31;
        v84 = 2 * v29 + 2;
        v85 = 0;
        TlgWrite(v26, &unk_1802654DF, (LPCGUID)(v27 + 8), 0LL, 6u, &v75);
      }
    }
  }
  StartMenuExperienceTelemetry::StartMenuReposition::StopActivity(this);
}
